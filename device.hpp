#pragma once

#include <string>
class IDevice
{
	public:
		virtual void ShowSpec() = 0;
		virtual ~IDevice() = default;
};
