#pragma once

#include "MapSite.h"
#include "Room.h"

class Maze {
public:
	Maze();
	
	void AddRoom(Room*);
	Room* RoomNo(int) const;

private:
	int _lastIndex;
	Room* _map[500];
};
