#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if(a % b == 0)
		return b;
	else if (b % a == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main(){
	int a, b;
	cout << "Enter two number: ";
	cin >> a >> b;
	cout << "GCD: " << gcd(a, b);
	return 0;
}
