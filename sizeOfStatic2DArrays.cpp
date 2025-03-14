#include<iostream>
using namespace std;

int main() {
    int arr[4][3] = {  // 3 rows, 4 columns
        {1, 2, 3},
        {5, 6, 7},
        {9, 10, 11}, 
        {12, 13, 14}
    };

    cout << "Total size in bytes: " << sizeof(arr) << endl;
    cout << "Size of one row: " << sizeof(arr[0]) << endl;
    cout << "Size of one element: " << sizeof(arr[0][0]) << endl;

    int numRows = sizeof(arr) / sizeof(arr[0]);
    int numCols = sizeof(arr[0]) / sizeof(arr[0][0]);

    cout << "Number of rows: " << numRows << endl;
    cout << "Number of columns: " << numCols << endl;

    return 0;
}