#include <iostream>
using namespace std;

class Time {
	public:
		int hrs;
		int min;
		int sec;
		Time()
		{
			hrs = 0;
			min = 0;
			sec = 0;
		}
		
		void Add(int h, int m, int s){
			if((sec + s) / 60 > 0)
			{
				min += ((sec + s) / 60);
				sec = ((sec + s) % 60);
			}
			if((min + m) / 60 > 0)
			{
				hrs += ((min + m) / 60);
				min = ((min + m) % 60);
			}
			if(hrs > 23)
				hrs = hrs - 23;
		}
		
		Time Difference(Time n, Time m){
			if(n.sec - m.sec < 0)
			{
				n.min--;
				n.sec += 60;
				sec = n.sec - m.sec;
			}
			else
				sec = n.sec - m.sec;
			
			if(n.min - m.min < 0)
			{
				n.hrs--;
				n.min += 60;
				min = n.min - m.min; 
			}
			else
			{
				min = n.min - m.min;
			}
			hrs = n.hrs - m.hrs;
		}
		
		void read(){
			cout << "Enter time in hours: ";
			cin >> hrs;
			if(hrs > 24)
			{
				cout << "Wrong Input!";
				abort();
			}
			cout << "Enter time in minutes: ";
			cin >> min;
			if(min < 59)
			{
				cout << "Wrong Input!";
				abort();
			}
			cout << "Enter time in seconds: ";
			cin >> sec;
			if(sec > 59)
			{
				cout << "Wrong Input!";
				abort();
			}
		}
		
		void display(){
			cout << "Time: " << hrs << " : " << min << " : " << sec;
		}
};

int main(){
	Time t;
	t.read();
	t.display();
	return 0;
}
