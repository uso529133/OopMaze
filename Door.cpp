
#include "Door.h"

Door::Door(Room* room1, Room* room2) {
	_room1 = room1;
	_room2 = room2;
	
	_isOpen = false;
}


void Door::Enter() {
	return;
}


Room* Door::OtherSideFrom(Room* room) {
	if (_room1 == room) return _room2;
	return _room1;
}

