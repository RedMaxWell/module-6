#pragma once

#include "device.hpp"

#include <iostream>
#include <string>

class BasicAppliance : virtual public IDevice
{
	protected:
		unsigned int _weight;
		unsigned int _price;
	
	public:
		BasicAppliance(unsigned int weight, unsigned int price);
		virtual ~BasicAppliance() = default;
		
		void ShowSpec() override;
};


class WashingMachine : public BasicAppliance
{
	private:
		std::string _name;
		unsigned int _rpm;
		
	public:
		WashingMachine(unsigned int weight, unsigned int price, const char* name, unsigned int rpm);
		~WashingMachine() = default;
		
		void ShowSpec() override;
};

class Microwave : public BasicAppliance

{
	private:
		std::string _name;
		unsigned int _power;
		
	public:
		Microwave(unsigned int weight, unsigned int price, const char* name, unsigned int power);
		~Microwave() = default;
		
		void ShowSpec() override;
};

class CoffeeMachine : public BasicAppliance
{
	private:
		std::string _name;
	public:
		CoffeeMachine(unsigned int weight, unsigned int price, const char* name);
		~CoffeeMachine() = default;
		
		void ShowSpec() override;
};
