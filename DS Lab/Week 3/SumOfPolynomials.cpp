#include <iostream>
using namespace std;

class Polynomial{
	public:
		int coeff;
		int exp;
};

void getpoly(Polynomial p[], int n){
	for (int i = 0; i < n; i++){
		cout << "Enter the coefficient and the exponent of the polynomial: ";
		cin >> p[i].coeff >> p[i].exp;
	}
}

void showpoly(Polynomial p[], int n){
	for(int i = 0; i < n; i++)
	{
		cout << "Coefficient: " << p[i].coeff << "Exponent: " << p[i].exp << endl;
	}
}

int main(){
	int n, n3 = 0;
	cout << "Enter number of terms: ";
	cin >> n;
	Polynomial p1[n], p2[n], p3[n + n];
	cout << "Enter the first polynomial: ";
	getpoly(p1, n);
	cout << "Enter the second polynomial: ";
	getpoly(p2, n);
	for (int i = 0, j = 0; i < n || j < n;)
	{
		if(j >= n || p1[i].exp > p2[j].exp)
		{
			p3[n3].coeff = p1[i].coeff;
			p3[n3++].exp = p1[i++].exp;
		}
		else if(i >= n || p1[i].exp < p2[j].exp)
		{
			p3[n3].coeff = p2[j].coeff;
			p3[n3++].exp = p2[j++].exp;
		}
		else
		{
			p3[n3].coeff = p1[i].coeff + p2[j++].coeff;
			p3[n3++].exp = p1[i++].exp;
		}
	}
	cout << "First Polynomial: " << endl;
	showpoly(p1, n);
	cout << "Second Polynomial: " << endl;
	showpoly(p2, n);
	cout << "Sum of Polynomials: " << endl;
	showpoly(p3, n3);
	
	return 0;
}
