#include "combined.hpp"

#include <iostream>

Laptop::Laptop(unsigned int batteryLife, unsigned int memory, unsigned int weight, unsigned int price, const char* name) : BasicElectronic(batteryLife, memory), BasicAppliance(weight, price), _name(name)
{
}

void Laptop::ShowSpec()
{
	std::cout << _name << " Specifications:" << std::endl;
	std::cout << "Battery life: " << _batteryLife << "mah." << std::endl;
	std::cout << "Memory: " << _memory << "GB" << std::endl;
	std::cout << "Weight: " << _weight << "gr." << std::endl;
	std::cout << "Price: " << _price << " money" << std::endl;
}
