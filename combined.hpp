#pragma once

#include "device.hpp"
#include "electronics.hpp"
#include "appliances.hpp"

#include <string>


class Laptop final : public BasicElectronic, BasicAppliance
{
	private:
		std::string _name;
	public:
		Laptop(unsigned int batteryLife, unsigned int memory, unsigned int weight, unsigned int price, const char* name);
		~Laptop() = default;
		
		void ShowSpec() override;
};
