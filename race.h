#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
	private:
		static const int NUM_HORSES = 5;
		static const int TRACK_LENGTH = 15;
		Horse horses[NUM_HORSES];

	public:
		Race();
		void start();
}

#endif
