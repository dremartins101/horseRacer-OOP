#include <iostream>
#include "race.h"

Race::Race(int length){
	trackLength = length;
	for (int i = 0; i < NUM_HORSES; i++){
		horses[i].init(i, length);
	}
}


void Race::runRace(){
	bool keepGoing = true;
	
	while (keepGoing){
		for (int i = 0; i < NUM_HORSES; i++){
			horses[i].advance();
		}
		for (int i = 0; i < NUM_HORSES; i++){
			horses[i].printLane();
		}
		int winCount = 0;
		for (int i = 0; i < NUM_HORSES; i++){
			if (horses[i].isWinner()){
				winCount++;
			}
		} 
		if (winCount >= 1){
			keepGoing = false;
		}

		if (keepGoing){
			std::cout << "Press enter for another turn." << std::endl;
			std::cin.get();
		}
	}
}

