#include <iostream>
using namespace std;

int main() {
    int arr[5][6];

    // Input the elements of the 5x6 array
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }

    int row_start = 0;
    int row_end = 4;
    int col_start = 0;
    int col_end = 5;

    cout << "Spiral Order:" << endl;

    while (row_start <= row_end && col_start <= col_end) {
        // Print the top row
        for (int col = col_start; col <= col_end; col++) {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // Print the right column
        for (int row = row_start; row <= row_end; row++) {
            cout << arr[row][col_end] << " ";
        }
        col_end--;

        // Print the bottom row
        if (row_start <= row_end) {
            for (int col = col_end; col >= col_start; col--) {
                cout << arr[row_end][col] << " ";
            }
            row_end--;
        }

        // Print the left column
        if (col_start <= col_end) {
            for (int row = row_end; row >= row_start; row--) {
                cout << arr[row][col_start] << " ";
            }
            col_start++;
        }
        cout << endl;
    }

     // Ensure the output ends with a newline
    return 0;
}
