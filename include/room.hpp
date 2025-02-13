#ifndef ROOM_H
#define ROOM_H

#include "device.hpp"
#include <stdint.h>
#include <string>
#include <set>

class Device;

enum room_type {
	BEDROOM,
	KITCHEN,
	BATHROOM,
	LIVINGROOM,
	HALLWAY,
	ATTIC,
	BASEMENT,
	GARAGE
};

class Room {
public:
	Room(int floor_level, enum room_type type);
	~Room();

	Room *changeName(const std::string new_name);
	Room *addDevice(const Device *const device);
	Room *removeDevice(const Device *const device);
	static Room *findRoom(const uint64_t uuid);

private:
	const uint64_t uuid;
	std::string name;
	int floor_level;
	enum room_type type;
	std::set<Device *> devices;
};

#endif /* ROOM_H */
