
#include "Room.h"

Room::Room(int RoomNo) : _roomNumber(RoomNo), _sides{} { }

void Room::Enter() {
	return;
}

MapSite* Room::GetSide(Direction direction) const {
	return _sides[direction];
}

void Room::SetSide(Direction direction, MapSite* mapSite) {
	_sides[direction] = mapSite;
}
