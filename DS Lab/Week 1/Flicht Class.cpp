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
public:
	void information_entry(){
		cin >> flight_number;
		cin >> destination;
		cin >> distance;
		calculate_fuel();
	}
	void display_info(){
		cout << "Flight Number: " << flight_number << "\nDestination: " << destination << "\nDistance: " << distance << "\nFuel: " << fuel;
	}
};

int main(){
	flight f;
	f.information_entry();
	f.display_info();
}
