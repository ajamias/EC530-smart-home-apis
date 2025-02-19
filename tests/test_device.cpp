#include "device.hpp"
#include <iostream>
#include <assert.h>

int main(int argc, char **argv)
{
	Device iot = Device(CAMERA);

	assert(iot.streamData() == nullptr);
	assert(iot.activate() == nullptr);
	assert(iot.deactivate() == nullptr);
	assert(iot.connect() == &iot);
	//assert(iot.connect() == nullptr);
	//assert(iot.streamData == &iot);

	//assert(iot.disconnect() == &iot);
	assert(iot.disconnect() == nullptr);

	//assert(iot.activate() == &iot);
	assert(iot.activate() == nullptr);

	//assert(iot.deactivate() == &iot);
	assert(iot.deactivate() == nullptr);

	std::cout << argv[0] << " passed\n";

	return 0;
}
