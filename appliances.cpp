#include "appliances.hpp"

#include <iostream>

BasicAppliance::BasicAppliance(unsigned int weight, unsigned int price) : _weight(weight), _price(price)
{
}

void BasicAppliance::ShowSpec()
{
	std::cout << "Basic appliance specifications:" << std::endl;
	std::cout << "Weight: " << _weight << "kg." << std::endl;
	std::cout << "Price: " << _price << " money" << std::endl;
}

WashingMachine::WashingMachine(unsigned int weight, unsigned int price, const char* name, unsigned int rpm) : BasicAppliance(weight, price), _name(name), _rpm(rpm)
{
}

void WashingMachine::ShowSpec()
{
	std::cout << _name << " specifications:" << std::endl;
	std::cout << "Weight: " << _weight << "kg." << std::endl;
	std::cout << "Price: " << _price << " money" << std::endl;
	std::cout << _rpm << "RPM" << std::endl;
}



Microwave::Microwave(unsigned int weight, unsigned int price, const char*  name, unsigned int power) : BasicAppliance(weight, price), _name(name), _power(power)
{
}

void Microwave::ShowSpec()
{
	std::cout << _name << " specifications:" << std::endl;
	std::cout << "Weight: " << _weight << "kg." << std::endl;
	std::cout << "Price: " << _price << " money" << std::endl;
	std::cout << "Power: " << _power << " Watt" << std::endl;
}


CoffeeMachine::CoffeeMachine(unsigned int weight, unsigned int price, const char* name) : BasicAppliance(weight, price), _name(name)
{
}

void CoffeeMachine::ShowSpec()
{
	std::cout << _name << " specifications:" << std::endl;
	std::cout << "Weight: " << _weight << "kg." << std::endl;
	std::cout << "Price: " << _price << " money" << std::endl;
}
















