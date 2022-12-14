// Learn Advanced C++ Programming
// Multiple Inheritance

#include<iostream>

using namespace std;


class MusicalInstrument {
public:
	virtual void play() { cout << "Playing instrument" << endl; }
	virtual void reset() { cout << "Resetting the instrument" << endl; }
	virtual ~MusicalInstrument() {};
};

class Machine {
public:
	virtual void start() { cout << "Starting the machine" << endl; }
	virtual void reset() { cout << "Resetting the machine" << endl; }
	virtual ~Machine() {};
};

class Synthesizer : public Machine, public MusicalInstrument {
public:
	virtual ~Synthesizer() {};
};


int main() {
	Synthesizer* pSynth = new Synthesizer();

	pSynth->play();
	pSynth->start();
	pSynth->MusicalInstrument::reset();
	
	delete pSynth;

	return 0;
}