main: electronics.o appliances.o combined.o main.o
	g++ -g -Wall -o main electronics.o appliances.o combined.o main.o
	
electronics.o: electronics.cpp
	g++ -c -g electronics.cpp
	
appliances.o: appliances.cpp
	g++ -c -g appliances.cpp
	
combined.o: combined.cpp
	g++ -c -g combined.cpp

main.o: main.cpp
	g++ -c -g main.cpp
