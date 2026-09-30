#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse {
	private:
		int position;
		int index;
		int trackLength;

	public:
		Horse();
		void advance();
		void printLane();
		bool isWinner();
		void init(int index, int trackLength);
}


#endif
