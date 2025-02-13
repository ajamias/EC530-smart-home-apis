#ifndef HOUSE_H
#define HOUSE_H

#include "user.hpp"
#include "room.hpp"
#include <stdint.h>
#include <string>
#include <set>

class User;
class Room;

class House {
public:
	House(std::string address);
	~House();

	House *addFloor();
	House *removeFloor();
	House *addHouseOwner(User *owner);
	House *removeHouseOwner(User *owner);
	House *addResident(User *resident);
	House *removeResident(User *resident);
	House *addRoom(Room *room);
	House *removeRoom(Room *room);

	static House *findHouse(const uint64_t uuid);
	static House *findHouse(const std::string address);

private:
	const uint64_t uuid;
	const std::string address;
	uint16_t floors;
	std::set<User *> owners;
	std::set<User *> residents;
	std::set<Room *> rooms;
};

#endif /* HOUSE_H */
