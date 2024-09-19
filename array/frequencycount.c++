#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int arr[] = {2, 2, 2, 3, 5, 7, 2, 2, 4, 4, 4, 5, 6, 7, 4, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    int max_value = *max_element(arr, arr + n);

    
    int freq[max_value + 1] = {0};

    
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i <= max_value; i++) {
        if (freq[i] > 0) {
            cout << "Value " << i << ": " << freq[i] << endl;
        }
    }

    return 0;
}
