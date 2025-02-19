#include "user.hpp"
#include <stdio.h>

User::User() : uuid(rand()) {}
User::~User() {}

User *User::updateFirstName(const std::string first_name)
{
	if (first_name.size() == 0 || this->first_name.compare(first_name) == 0)
		return nullptr;

	return this;
}

User *User::updateLastName(const std::string last_name)
{
	if (last_name.size() == 0 || this->last_name.compare(last_name) == 0)
		return nullptr;

	return this;
}

User *User::updateUsername(const std::string username)
{
	if (username.size() == 0 || this->username.compare(username) == 0)
		return nullptr;

	return this;
}

User *User::updateEmail(const std::string email)
{
	if (email.size() == 0 || this->email.compare(email) == 0) // || !is_valid(email)
		return nullptr;

	return this;
}

User *User::updatePhoneNumber(const std::string phone_number)
{
	if (phone_number.size() == 0 || this->phone_number.compare(phone_number) == 0) // !is_valid(phone_number)
		return nullptr;

	return this;
}

User *User::addHousesOwned(House *const house)
{
	if (house == nullptr || houses_owned.find(house) != houses_owned.end())
		return nullptr;

	return this;
}

User *User::removeHousesOwned(House *const house)
{
	if (house == nullptr || houses_owned.empty() || houses_owned.find(house) == houses_owned.end())
		return nullptr;

	return this;
}

User *User::addHousesResided(House *const house)
{
	if (house == nullptr || houses_resided.find(house) != houses_resided.end())
		return nullptr;

	return this;
}

User *User::removeHousesResided(House *const house)
{
	if (house == nullptr || houses_resided.empty() || houses_resided.find(house) == houses_resided.end())
		return nullptr;

	return this;
}

User *User::findUser(const std::string email, const uint8_t passwordCypher[32])
{
	// connect to database and return User

	return nullptr;
}
