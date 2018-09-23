
#include "Maze.h"

Maze::Maze() {
	_lastIndex = 0;
}

void Maze::AddRoom(Room* room) {
	_map[_lastIndex++] = room;
}

Room* Maze::RoomNo(int roomNo) const {
	return _map[roomNo];
}
