#include "house.hpp"
#include "room.hpp"
#include <iostream>
#include <assert.h>

int main(int argc, char **argv)
{
	House my_house = House("8 Mary St");

	assert(my_house.addFloor() == &my_house);

	//assert(my_house.removeFloor() == &my_house);
	assert(my_house.removeFloor() == nullptr);

	User me = User();
	//assert(my_house.removeHouseOwner(&me) == nullptr);
	assert(my_house.addHouseOwner(&me) == &my_house);
	//assert(my_house.addHouseOwner(&me) == nullptr);
	//assert(my_house.removeHouseOwner(&me) == &my_house);
	assert(my_house.removeHouseOwner(&me) == nullptr);
	
	//assert(my_house.removeResident(&me) == nullptr);
	assert(my_house.addResident(&me) == &my_house);
	//assert(my_house.addResident(&me) == nullptr);
	//assert(my_house.removeResident(&me) == &my_house);
	assert(my_house.removeResident(&me) == nullptr);

	Room my_room = Room(1, BEDROOM);
	//assert(my_house.removeRoom(&my_room) == nullptr);
	assert(my_house.addRoom(&my_room) == &my_house);
	//assert(my_house.addRoom(&my_room) == nullptr);
	//assert(my_house.removeRoom(&my_room) == &my_house);
	assert(my_house.removeRoom(&my_room) == nullptr);

	std::cout << argv[0] << " passed\n";

	return 0;
}
