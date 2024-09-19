#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;

bool issafe(int **arr, int x, int y, int n) {
    if(x < n && y < n && arr[x][y] == 1) {
        return true;
    }
    return false;
}

bool ratinmaze(int** arr, int x, int y, int n, int** solnarr) {
    if(x == n-1 && y == n-1) {
        solnarr[x][y] = 1;
        return true;
    }
    if(issafe(arr, x, y, n)) {
        solnarr[x][y] = 1;
        if(ratinmaze(arr, x+1, y, n, solnarr)) {
            return true;
        }
        if(ratinmaze(arr, x, y+1, n, solnarr)) {  // Corrected this line
            return true;
        }
        solnarr[x][y] = 0; // backtrack
        return false;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int** arr = new int*[n];
    for(int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int** solnarr = new int*[n];
    for(int i = 0; i < n; i++) {
        solnarr[i] = new int[n];
        for(int j = 0; j < n; j++) {
            solnarr[i][j] = 0;
        }
    }
    if(ratinmaze(arr, 0, 0, n, solnarr)) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << solnarr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
