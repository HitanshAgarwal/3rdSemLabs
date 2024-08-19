#include <iostream>
using namespace std;


int fibo(int n){
	if (n == 1 || n == 0)
		return n;
	else
		return fibo(n - 1) + fibo(n - 2);
}

int main(){
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << "Fibonacci Series: " << fibo(n);
	return 0;
}
