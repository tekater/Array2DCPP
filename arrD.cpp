#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    const int row = 4;
    const int col = 3;
    int arr[row][col] = {
      //length
        {1,2,3}, //s
        {1,2,3}, //i
        {1,2,3}, //z
        {1,2,3}  //e
    };
    int min = 10;
    int max = 0;
    int sum = 0;
    //Найти max и min в двумерном массиве.Ср.арифм, сумму чисел.
    for (int i = 0; i < row; i++) // ROW
    {
        for (int j = 0; j < col; j++) // COL
        {
            
            arr[i][j] = 1 + rand() % 9;
            cout << arr[i][j] << " ";
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
            sum = sum + arr[i][j];
        }
        cout << endl;
    }
    cout << "Min: " << min << "\n";
    cout << "Max: " << max << "\n";
    cout << "Sum: " << sum << "\n";
    cout << "Medium: " << sum / (row * col) << "\n";
    /*
    * const int row = 5;
    const int col = 4;
    int sum = 0, avg = 0;
    int arr[row][col] = {};
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++) {
            arr[i][j] = 1+rand() % 25;
            cout << arr[i][j] << " ";
        }
    int max = arr[0][0], min = arr[0][0];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > max) max = arr[i][j];
            if(arr[i][j] < min) min = arr[i][j];
            sum += arr[i][j]
    */
}
