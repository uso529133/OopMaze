
#include <iostream>
#include "Maze.h"
using namespace std;

int main(void) {
	Maze* aMaze = new Maze;
	Room* r1 = new Room(1);
	Room* r2 = new Room(2);
	Door* theDoor = new Door(r1, r2);
	
	aMaze->AddRoom(r1);
	aMaze->AddRoom(r2);
	
	r1->SetSide(East, new Door);
	r2->SetSide(West, new Door);
	
	return 0;
}
