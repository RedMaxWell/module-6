#include "device.hpp"
#include "electronics.hpp"
#include "appliances.hpp"
#include "combined.hpp"

#include <iostream>

void showGoods()
{
	std::cout << "***********************************" << std::endl;
	std::cout << "*\t1 & 2 - smartphones\n*\t3 & 4 - earphones\n*\t5 & 6 - Washing machines" << std::endl;
	std::cout << "*\t7 - microwave\n*\t8 - Coffee machine\n*\t9 & 10 - Laptops" << std::endl; 
	std::cout << "***********************************" << std::endl;
}

int main()
{
	const int storeVolume = 10;

	std::cout << "\t\tWellcome to electronic shop!" << std::endl << std::endl;
	
	//let's make a database for our supplies
	IDevice ** interface = new IDevice*[storeVolume];
	
	
	for (int i = 0; i < storeVolume; ++i)
	{
		interface[i] = nullptr;
	}
	
	interface[0] = new Smartphone(10'000, 128, "New Smartphone");
	interface[1] = new Smartphone(5'000, 4, "Old Smartphone");
	interface[2] = new Earphones(3000, 24, "Super Earphones", true);
	interface[3] = new Earphones(0, 0, "Old Crappy Earphones", false);
	interface[4] = new WashingMachine(50, 2000, "Mega fast Washing machine", 1200);
	interface[5] = new WashingMachine(35, 1000, "Slow, but cheap Washing machine", 800);
	interface[6] = new Microwave(10, 1500, "\"Cook em All!\" Microwave", 2000);
	interface[7] = new CoffeeMachine(5, 750, "Good Morning Office Coffee Machine");
	interface[8] = new Laptop(20000, 1024, 1845, 6000, "New And Fast Laptop");
	interface[9] = new Laptop(12000, 256, 2300, 3000, "Old And Reliable Laptop");


	while (true)
	{
		
		std::cout << "enter number from 1 to " << storeVolume << " to see the available goods: " << std::endl;
		std::cout << "enter 0 to see all goods" << std::endl;
		std::cout << "enter any negative number to exit the shop" << std::endl << std::endl;
		std::cout << "Your choice: ";
		
		int choice = 0;
		std::cin >> choice;
		choice -= 1;
		
		if ((choice >= 0) && (choice <= storeVolume - 1))
		{
			std::cout << "-------------------" << std::endl;
			interface[choice]->ShowSpec();
			std::cout << "-------------------" << std::endl << std::endl;
		}
		else if (choice >= storeVolume)
		{
			std::cout << "There is only " << storeVolume << " positions. Try again" << std::endl << std::endl;
		}
		else if (choice == (-1))
		{
			showGoods();
		}
		else
		{
			break;
		}
	}
	
	

	for (int i = 0; i < storeVolume; ++i)
	{
		if (interface[i])
		{
		delete interface[i];
		}
	}
	
	delete[] interface;
 










	




















	return 0;
}
