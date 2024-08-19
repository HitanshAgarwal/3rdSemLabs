#include <iostream>
using namespace std;

class Sparse{
	public:
		int row;
		int column;
		int value;
};

int main()
{
	int n;
	cout << "Enter length of matrix: ";
	cin >> n;
	int matrix[n][n];
	Sparse arr[n * n] = {0};
	
	cout << "Enter elements of matrix: ";
	for(int i = 0; i < n; i++)
		for (int  j = 0; j < n; j++)
			cin >> matrix[i][j];

	for(int i = 0; i < n; i++)
	{
		for (int  j = 0; j < n; j++)
			cout << matrix[i][j] << "  ";
		cout << endl;
	}
	
	int counter = 1;
	int values = 0;
	arr[0].row = n;
	arr[0].column = n;
	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] != 0)
			{
				values++;
				arr[counter].value = matrix[i][j];
				arr[counter].column = j;
				arr[counter++].row = i;
			}
		}
	}
	
	arr[0].value = values;
	cout << "Row\tColumn\tValue" << endl;
	for(int i = 0; i < n * n; i++)
	{
		cout << arr[i].row << "\t" << arr[i].column << "\t" << arr[i].value << endl;
	}
	return 0;
}
