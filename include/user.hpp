#ifndef USER_H
#define USER_H

#include "house.hpp"
#include <stdint.h>
#include <string>
#include <set>

class House;

class User {
public:
	User();
	~User();

	User *updateFirstName(const std::string first_name);
	User *updateLastName(const std::string last_name);
	User *updateUsername(const std::string username);
	User *updateEmail(const std::string email);
	User *updatePhoneNumber(const std::string phone_number);
	User *addHousesOwned(const House *const house);
	User *removeHousesOwned(const House *const house);
	User *addHousesResided(const House *const house);
	User *removeHousesResided(const House *const house);

	static User *findUser(const std::string email, const uint8_t passwordCypher[32]);

private:
	const uint64_t uuid;
	std::string first_name;
	std::string last_name;
	std::string username;
	std::string email;
	std::string phone_number;
	std::set<House *> houses_owned;
	std::set<House *> houses_resided;
};

#endif /* USER_H */
