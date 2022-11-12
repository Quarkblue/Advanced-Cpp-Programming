#include<fstream>
#include "Bitmap.h"
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"

using namespace fractal;
using namespace std;

namespace fractal {

	Bitmap::Bitmap(int width, int height) : m_width(width), m_height(height), m_pPixel(new uint8_t[width * height * 3]{}) {
		
	}

	bool Bitmap::write(string filename) {
		BitmapFileHeader fileheader;
		BitmapInfoHeader infoheader;
			
		fileheader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) + (m_width * m_height * 3);
		fileheader.dataOffset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);
		
		infoheader.width = m_width;
		infoheader.height = m_height;
		
		ofstream file;
		
		file.open(filename, ios::out | ios::binary);
		
		if (!file) {
			return false;
		}

		file.write((char*)&fileheader, sizeof(fileheader));
		file.write((char*)&infoheader, sizeof(infoheader));
		file.write((char*)m_pPixel.get(), m_width * m_height * 3);

		file.close();

		if (!file) {
			return false;
		}

		return true;
	}
	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {
		
	}
	
	Bitmap:: ~Bitmap() {
		
	}

}
