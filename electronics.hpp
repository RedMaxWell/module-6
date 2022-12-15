#pragma once

#include "device.hpp"

#include <iostream>
#include <string>

class BasicElectronic : virtual public IDevice
{
	public:
		BasicElectronic(unsigned int batteryLife, unsigned int memory);
		virtual ~BasicElectronic() = default;
		
		void ShowSpec();
	protected:
		unsigned int _batteryLife;
		unsigned int _memory;
};

class Smartphone : public BasicElectronic
{
	public:
		Smartphone(unsigned int batteryLife, unsigned int memory, const char* name);
		~Smartphone() = default;
		
		void ShowSpec();
	private:
		std::string _name;
};

class Earphones : public BasicElectronic
{
	public:
		Earphones(unsigned int batteryLife, unsigned int memory, const char* name, bool wireless);
		~Earphones() = default;
		
		void ShowSpec();
	private:
		std::string _name;
		bool _wireless;
};


























