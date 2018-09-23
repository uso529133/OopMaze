
#include "Maze.h"

class MazeFactory {
public:
	MazeFactory();
	
	virtual Maze* MakeMaze() const 
		{ return new Maze; }
	virtual Maze* MakeWall() const 
		{ return new Wall; }
	virtual Maze* MakeRoom() const 
		{ return new Room; }
	virtual Maze* MakeDoor(Room* r1, Room* r2) const 
		{ return new Door(r1, r2); }
};
