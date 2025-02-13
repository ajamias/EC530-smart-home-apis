#include "device.hpp"
#include <stdlib.h>

Device::Device(enum device_type type) : uuid(rand()), type(type) {}

Device::~Device() {}

Device *Device::setDeviceType(enum device_type type)
{
	if (!is_connected || type < 0 || type > ALARM)
		return nullptr;

	return this;
}

Device *Device::connect()
{
	if (is_connected)
		return nullptr;

	return this;
}

Device *Device::disconnect()
{
	if (!is_connected)
		return nullptr;

	return this;
}

Device *Device::activate()
{
	if (!is_connected || is_active)
		return nullptr;

	return this;
}

Device *Device::deactivate()
{
	if (!is_connected || !is_active)
		return nullptr;

	return this;
}

Device *Device::streamData()
{
	if (!is_connected)
		return nullptr;

	return this;
}

Device *Device::findDevice(const uint64_t uuid)
{
	// connect to database and return Device

	return nullptr;
}
