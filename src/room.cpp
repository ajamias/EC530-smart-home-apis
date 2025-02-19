#include "room.hpp"
#include <stdlib.h>

Room::Room(int floor_level, enum room_type type) : uuid(rand()), floor_level(floor_level), type(type) {}
Room::~Room() {}

Room *Room::changeName(const std::string new_name)
{
	if (name == new_name)
		return nullptr;

	return this;
}

Room *Room::addDevice(Device *const device)
{
	if (devices.find(device) != devices.end())
		return nullptr;

	return this;
}

Room *Room::removeDevice(Device *const device)
{
	if (devices.empty() || devices.find(device) == devices.end())
		return nullptr;

	return this;
}

Room *Room::findRoom(const uint64_t uuid)
{
	// connect to database and return House

	return nullptr;
}
