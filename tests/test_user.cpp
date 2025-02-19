#include "user.hpp"
#include "house.hpp"
#include <iostream>
#include <assert.h>

int main(int argc, char **argv)
{
	User me = User();

	assert(me.updateFirstName("") == nullptr);
	assert(me.updateFirstName("John") == &me);
	//assert(me.updateFirstName("John") == nullptr);

	assert(me.updateLastName("") == nullptr);
	assert(me.updateLastName("Smith") == &me);
	//assert(me.updateLastName("Smith") == nullptr);

	assert(me.updateUsername("") == nullptr);
	assert(me.updateUsername("jsmith") == &me);
	//assert(me.updateUsername("jsmith") == nullptr);
	
	assert(me.updateEmail("") == nullptr);
	assert(me.updateEmail("jsmith@gmail.com") == &me);
	//assert(me.updateEmail("jsmith@gmail.com") == nullptr);

	assert(me.updatePhoneNumber("") == nullptr);
	assert(me.updatePhoneNumber("(123) 456-7890") == &me);
	//assert(me.updatePhoneNumber("(123) 456-7890") == nullptr);
	
	House my_house = House("8 Mary St");
	assert(me.addHousesOwned(nullptr) == nullptr);
	assert(me.addHousesOwned(&my_house) == &me);
	//assert(me.addHousesOwned(&my_house) == nullptr);

	assert(me.removeHousesOwned(nullptr) == nullptr);
	//assert(me.removeHousesOwned(&my_house) == &me);
	//assert(me.removeHousesOwned(&my_house) == nullptr);

	assert(me.addHousesResided(nullptr) == nullptr);
	assert(me.addHousesResided(&my_house) == &me);
	//assert(me.addHousesResided(&my_house) == nullptr);

	assert(me.removeHousesResided(nullptr) == nullptr);
	//assert(me.removeHousesResided(&my_house) == &me);
	//assert(me.removeHousesResided(&my_house) == nullptr);

	std::cout << argv[0] << " passed\n";

	return 0;
}
