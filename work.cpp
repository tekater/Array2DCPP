#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");
	//srand(time(NULL));
    const int row = 3;
    const int col = 4;
    int arr[row][col] = {
          {3,5,6,7}, 
          {12,1,1,1}, 
          {0,7,12,1}
    };
    int one = 0;
    int two = 0;
    int three = 0;
    int One = 0;
    int Two = 0;
    int Three = 0;
    int Four = 0;
    int max = 0;
    for (int i = 0; i < row; i++) // ROW
    {
        for (int j = 0; j < col; j++) // COL
        {
            //arr[i][j] = 1 + rand() % 9; // с этим тоже работает
            cout << arr[i][j] << "\t\b";
            if (i == 0) {
                one += arr[i][j];
            }

            if (i == 1) {
                two += arr[i][j];
            }

            if (i == 2) {
                three += arr[i][j];
            }

            if (j == 0) {
                One += arr[i][j];
            }

            if (j == 1) {
                Two += arr[i][j];
            }

            if (j == 2) {
                Three += arr[i][j];
            }
            if (j == 3) {
                Four += arr[i][j];
            }
        }
        if (i == 0) {
            cout << "\t\b\b\b\b\b| " << one << "\n";
        }
        if (i == 1) {
            cout << "\t\b\b\b\b\b| " << two << "\n";
        }
        if (i == 2) {
            cout << "\t\b\b\b\b\b| " << three << "\n";
        }
    }
    max = one + two + three + One + Two + Three + Four;
    cout << "===============================\n";
    cout << One << "\t\b" << Two << "\t\b" << Three << "\t\b" << Four << "\t\b\b\b\b\b|" << max;
}
