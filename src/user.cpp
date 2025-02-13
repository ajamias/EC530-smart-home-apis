#include "user.hpp"

User::User() {}
User::~User() {}

User *User::updateFirstName(const std::string first_name)
{
	if (this->first_name == first_name)
		return nullptr;

	return this;
}

User *User::updateLastName(const std::string last_name)
{
	if (this->last_name == last_name)
		return nullptr;

	return this;
}

User *User::updateUsername(const std::string username)
{
	if (this->username == username)
		return nullptr;

	return this;
}

User *User::updateEmail(const std::string email)
{
	if (this->email == email)
		return nullptr;

	return this;
}

User *User::updatePhoneNumber(const std::string phone_number)
{
	if (this->phone_number == phone_number)
		return nullptr;

	return this;
}

User *User::addHousesOwned(const House *const house)
{
	if (houses_owned.find(house) != houses_owned.end())
		return nullptr;

	return this;/
}

User *User::removeHousesOwned(const House *const house)
{
	if (houses_owned.empty() || houses_owned.find(house) == end())
		return nullptr;

	return this;
}

User *User::addHousesResided(const House *const house)
{
	if (houses_resided.find(house) != houses_resided.end())
		return nullptr;

	return this;
}

User *User::removeHousesResided(const House *const house)
{
	if (houses_resided.empty() || houses_resided.find(house) == houses_resided.end())
		return nullptr;

	return this;
}

User *User::findUser(const uint64_t email, const uint8_t passwordCypher[32])
{
	// connect to database and return User

	return nullptr;
}
