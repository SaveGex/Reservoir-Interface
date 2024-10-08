#include "Reservoir.h"
#include <cstring> // Äëÿ strcpy_s è strlen



Reservoir::Reservoir(const char* name, uint16_t length, uint16_t width, uint16_t maxDeep, uint8_t type) : length(length), width(width), maxDeep(maxDeep), type(type) {
	name = new char[sizeof(name)];
}


Reservoir::Reservoir() : Reservoir(nullptr, 0, 0, 0, 0) {}


Reservoir::Reservoir(const Reservoir& obj) : length(obj.length), width(obj.width), maxDeep(obj.maxDeep), type(type) {

	if (this == &obj) {
		return;
	}
	name = new char[sizeof(obj.name)];
	strcpy_s(this->name, sizeof(obj.name), obj.name);
}


Reservoir::~Reservoir() {
	delete[] name;
}


void Reservoir::setter_name(const char* name) {
    if (name) {
        int size = strlen(name) + 1;
		
		this->name = new char[size];
        strcpy_s(this->name, size, name);
    }
}


void Reservoir::setter_maxDeep(int maxDeep)
{
	this->maxDeep = maxDeep;
}

void Reservoir::setter_width(int width)
{
	this->width = width;
}

void Reservoir::setter_length(int length)
{
	this->length = length;
}

void Reservoir::setter_type(std::string type)
{
	short SEA = 1;
	short POOL = 2;
	short POND = 3;

	if (type == "Sea") {
		this->type = SEA;
	}
	else if (type == "Pool") {
		this->type = POOL;
	}
	else if (type == "Pond") {
		this->type = POND;
	}
}

std::string Reservoir::getter_name()
{
	return std::string(name);
}

bool Reservoir::notEmpty()
{
	if (name != nullptr && width != 0 && length != 0 && maxDeep != 0 && type != 0) {
		return true;
	}
	return false;
}




bool Reservoir::operator==(const Reservoir& obj) {
	if (this == &obj) {
		return true;
	}
	if (this->type != obj.type) {
		return false;
	}
	//if the objects are equal among to each other
	if (this->surfaceArea() == obj.surfaceArea()) {
		return true;
	}
	else {
		return false;
	}

}

bool Reservoir::operator>(const Reservoir& obj) {
	if (this->surfaceArea() > obj.surfaceArea()) {
		return true;
	}
	else {
		return false;
	}

}


bool Reservoir::operator<(const Reservoir& obj) {
	if (this->surfaceArea() < obj.surfaceArea()) {
		return true;
	}
	else {
		return false;
	}
}


int Reservoir::approximateVolume() const {
	return width * length * maxDeep;
}


int Reservoir::surfaceArea() const {
	return width * length;
}