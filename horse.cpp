#include <iostream>
#include <cstdlib>
#include "horse.h"
#include <ctime>



Horse::Horse(){
	Horse::position = 0;
	Horse::index = 0;
	Horse::trackLength = 15;
}

void Horse::init(int index, int trackLength){
	Horse::position = 0;
	Horse::index = index;
	Horse::trackLength = trackLength;
} 

void Horse::advance(){
	srand(TIME(null));
	int coinFlip = rand() % 2;
	Horse::position  += coinFlip;
} // end advance

void Horse::printLane(){
	for(int i = 0; i < trackLength; i++){
	if (i == position){
		std::cout << index;
	} else {
		std::cout << ".";
	}

	}
	std::cout << "\n" << std::endl;
}

bool Horse::isWinner(){
	if (position == trackLength - 1){
		return true;
	} // end if
	else {
	return false;
	} // end else	
}
