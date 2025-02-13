#include "house.hpp"
#include <stdlib.h>

House::House(std::string address) : uuid(rand()), address(address) {}
House::~House() {}

House *House::addFloor()
{
	return this;
}

House *House::removeFloor()
{
	if (floors == 1)
		return nullptr;

	return this;
}

House *House::addHouseOwner(User *owner)
{
	if (owners.find(owner) != owners.end())
		return nullptr;

	return this;
}

House *House::removeHouseOwner(User *owner)
{
	if (owners.empty() || owners.find(owner) == owners.end())
		return nullptr;

	return this;
}

House *House::addResident(User *resident)
{
	if (residents.find(resident) != residents.end())
		return nullptr;

	return this;
}

House *House::removeResident(User *resident)
{
	if (residents.empty() || residents.find(resident) == residents.end())
		return nullptr;

	return this;
}

House *House::addRoom(Room *room)
{
	if (rooms.find(room) != rooms.end())
		return nullptr;

	return this;
}

House *House::removeRoom(Room *room)
{
	if (rooms.empty() || rooms.find(room) == rooms.end())
		return nullptr;

	return this;
}

House *House::findHouse(const uint64_t uuid)
{
	// connect to database and return House

	return nullptr;
}
