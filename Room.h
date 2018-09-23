#pragma once

#include "Common.h"
#include "MapSite.h"

class Room : public MapSite {
public:
	Room(int RoomNo);
	
	MapSite* GetSite(Direction) const;
	void SetSide(Direction, MapSite*);
	
	virtual void Enter();
	
private:
	MapSite* _sides[4];
	int _roomNumber;
};
