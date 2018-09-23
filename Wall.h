#pragma once

#include "Common.h"
#include "MapSite.

class Wall : public MapSite {
public:
	Wall(Room* = 0, Room* = 0);
	
	virtual void Enter();
	Room* OtherSideFrom(Room*);
	
private:
	Room* _room1;
	Room* _room2;
	bool _isOpen;
};
