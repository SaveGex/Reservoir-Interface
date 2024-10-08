#pragma once
#include <string.h>
#include <cstdint>
#include <string>

class Reservoir {
private:
	short type;
	uint16_t length;
	uint16_t width;
	uint16_t maxDeep;
	char* name;
public:
	Reservoir(const char* name, uint16_t length, uint16_t width, uint16_t maxDeep, uint8_t type);
	Reservoir();
	Reservoir(const Reservoir& obj);
	~Reservoir();
	void setter_name(const char* name);
	void setter_maxDeep(int maxDeep);
	void setter_width(int width);
	void setter_length(int length);
	void setter_type(std::string type);
	std::string getter_name();
	bool notEmpty();
	bool operator==(const Reservoir& obj);
	bool operator>(const Reservoir& obj);
	bool operator<(const Reservoir& obj);
	int approximateVolume() const;
	int surfaceArea() const;
};

