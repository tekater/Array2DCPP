#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	const int row = 5;
	const int col = 10;
	int arr1[row][col];
	int arr2[5][5];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr1[i][j] = rand() % 51;
			cout << arr1[i][j] << "\t\b";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr2[i][j] = arr1[i][j] + arr1[i][j+1];
			cout << arr2[i][j] << "\t\b";
			j++;
		}
		cout << endl;
	}
}
