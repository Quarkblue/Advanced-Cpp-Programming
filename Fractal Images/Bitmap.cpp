#include "Bitmap.h"
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"

using namespace fractal;

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
		

		return false;
	}
	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {
		
	}
	
	Bitmap:: ~Bitmap() {
		
	}

}
