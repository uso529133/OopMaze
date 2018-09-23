#pragma once

#include "Common.h"
#include "string.h"
#include "MapSite.h"
#include "Wall.h"

class Room : public MapSite {
public:
	Room(int RoomNo);
	
	MapSite* GetSide(Direction) const;
	void SetSide(Direction, MapSite*);
	
	virtual void Enter();
	
private:
	MapSite* _sides[4];
	int _roomNumber;
};
