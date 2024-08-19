#include <iostream>
using namespace std;
#include <cstdlib>

void upperTraingularMatrix(int n[][100], int len)
{
	int ans[((len*(len+1))/2)];
	int counter = 0;
	for(int i = 0; i < len; i++)
	{
		for(int j = i; j < len; j++)
		{
			ans[counter++] = n[i][j];
		}
	}
	cout << "\nUpper Triangular Matrix: ";
	for(int i = 0; i < ((len*(len+1))/2); i++)
	{
		cout << ans[i] << "  ";
	}
}

void lowerTriangularMatrix(int n[][100], int len)
{
	int ans[((len*(len+1))/2)];
	int counter = 0;
	for(int i = 0; i < len; i++)
	{
		for(int j = 0; j < i + 1; j++)
		{
			ans[counter++] = n[i][j];
		}
	}
	cout << "\nLower Triangular Matrix: ";
	for(int i = 0; i < ((len*(len+1))/2); i++)
	{
		cout << ans[i] << "  ";
	}
}

void diagonalMatrix(int n[][100], int len)
{
	int ans[len];
	for(int i = 0; i < len; i++)
		ans[i] = n[i][i];
	cout << "\nDiagonal Matrix: ";
	for(int i = 0; i < len; i++)
	{
		cout << ans[i] << "  ";
	}
}

void triDiagonalMatrix(int n[][100], int len)
{
	int ans[3 * len - 2];
	int counter = 0;
	for(int i = 0; i < len; i++)
		for(int j = i - 1; j < i + 2; j++)
		{
			if(j < 0)
				j = 0;
			ans[counter++] = n[i][j];
		}
	cout << "\nTri-Diagonal Matrix: ";
	for(int i = 0; i < 3 * len - 2; i++)
	{
		cout << ans[i] << "  ";
	}
}

void rowMajor(int n[][100], int len)
{
	int ans[len * len];
	int counter = 0;
	for(int i = 0; i < len; i++)
	{
		for(int j = 0; j < len; j++)
		{
			ans[counter++] = n[i][j];
		}
	}
	cout << "\nRow Major Matrix: ";
	for(int i = 0; i < len * len; i++)
	{
		cout << ans[i] << "  ";
	}
}

void columnMajor(int n[][100], int len)
{
	int ans[len * len];
	int counter = 0;
	for(int i = 0; i < len; i++)
	{
		for(int j = 0; j < len; j++)
		{
			ans[counter++] = n[j][i];
		}
	}
	cout << "\nRow Major Matrix: ";
	for(int i = 0; i < len * len; i++)
	{
		cout << ans[i] << "  ";
	}
}

int main()
{
	int n;
	cout << "Enter the size of the 2D Array: ";
	cin >> n;
	int matrix[n][100];
	for(int i = 0; i < n; i++)
		for (int  j = 0; j < n; j++)
			matrix[i][j] = 1 + rand() % 10;

	for(int i = 0; i < n; i++)
	{
		for (int  j = 0; j < n; j++)
			cout << matrix[i][j] << "  ";
		cout << endl;
	}
	upperTraingularMatrix(matrix, n);
	lowerTriangularMatrix(matrix, n);
	diagonalMatrix(matrix, n);
	triDiagonalMatrix(matrix, n);
	rowMajor(matrix, n);
	columnMajor(matrix, n);
	return 0;
}
