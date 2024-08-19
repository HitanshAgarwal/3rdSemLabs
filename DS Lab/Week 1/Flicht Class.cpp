#include <iostream>
using namespace std;

class Flight {
private:
    int flight_number;
    char destination;
    float distance;
    float fuel=13.2;

private:
	void calculate_fuel(){
		if(distance<=1000)
		fuel=500;
		else if(distance<=2000)
		fuel=1100;
		else(distance>2000)
		fuel=2200;
		
	}
};

