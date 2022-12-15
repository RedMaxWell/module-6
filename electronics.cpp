#include "electronics.hpp"

BasicElectronic::BasicElectronic(unsigned int batteryLife, unsigned int memory) : _batteryLife(batteryLife), _memory(memory)
{
}

void BasicElectronic::ShowSpec()
{
	std::cout << "Basic device Battery life: " << _batteryLife << "mah." << std::endl;
	std::cout << "Basic device Memory: " << _memory << "GB" << std::endl;
}


Smartphone::Smartphone(unsigned int batteryLife, unsigned int memory, const char* name) : BasicElectronic(batteryLife, memory), _name(name)
{
}

void Smartphone::ShowSpec()
{
	std::cout << _name << " Specifications:" << std::endl;
	std::cout << "Battery life: " << _batteryLife << "mah." << std::endl;
	std::cout << "Memory: " << _memory << "GB" << std::endl;
}

Earphones::Earphones(unsigned int batteryLife, unsigned int memory, const char* name, bool wireless) : BasicElectronic(batteryLife, memory), _name(name), _wireless(wireless)
{
}

void Earphones::ShowSpec()
{
	std::cout << _name << " Specifications:" << std::endl;
	if (_batteryLife)
	{
		std::cout << "Battery life: " << _batteryLife << "mah." << std::endl;
	}
	
	if (_memory)
	{
		std::cout << "Memory: " << _memory << "GB" << std::endl;
	}
	
	if (_wireless)
	{
		std::cout << "Wireless: YES" << std::endl;
	}
	else
	{
		std::cout << "Wireless: NO" << std::endl;
	}
}























