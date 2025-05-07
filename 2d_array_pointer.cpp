#include <iostream>
using namespace std;

int main() {
    int row;
    cin >> row;

    int col;
    cin >> col;

    // Dynamic memory allocation
    int** arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[row];
    }

    // Taking input
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing the array
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //releasing memory 
    for(int i=0;i<row;i++){
        delete[] arr[i];
    }

    delete[] arr;
    return 0;

}