#ifndef DEVICE_H
#define DEVICE_H

#include <stdint.h>

enum device_type {
	CAMERA,
	THERMOSTAT,
	MICROPHONE,
	ALARM
};

class Device {
public:
	Device(enum device_type type);
	~Device();

	Device *setDeviceType(enum device_type type);
	Device *connect();
	Device *disconnect();
	Device *activate();
	Device *deactivate();
	Device *streamData();
	static Device *findDevice(const uint64_t uuid);

private:
	const uint64_t uuid;
	const device_type type;
	bool is_active;
	bool is_connected;
};

#endif /* DEVICE_H */
