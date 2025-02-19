#include "room.hpp"
#include "device.hpp"
#include <iostream>
#include <assert.h>

int main(int argc, char **argv)
{
	Room my_room = Room(0, BEDROOM);

	assert(my_room.changeName("") == nullptr);
	assert(my_room.changeName("Master Bedroom") == &my_room);
	//assert(my_room.changeName("Master Bedroom") == nullptr);

	Device baby_camera = Device(CAMERA);
	assert(my_room.addDevice(&baby_camera) == &my_room);
	//assert(my_room.addDevice(&baby_camera) == nullptr);

	//assert(my_room.removeDevice(nullptr) == nullptr);
	//assert(my_room.removeDevice(&baby_camera) == &my_room);
	assert(my_room.removeDevice(&baby_camera) == nullptr);

	std::cout << argv[0] << " passed\n";

	return 0;
}
