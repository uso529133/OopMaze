
Maze::Maze() {
	_lastIndex = 0;
}

void Maze::AddRoom(Room* room) {
	_map[_lastIndex++] = room;
}

Room* RoomNo(int roomNo) {
	return _map[roomNo];
}
