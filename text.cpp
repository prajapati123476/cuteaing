#include <iostream>
using namespace std;
int main() {
    
    int size;
    cout << "Input Size: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter element: "<< endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                int swap;
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = arr[i];
            }
        }
    }

     for (int i = 0; i < size; i++) {
        // if (arr[i] != -1) {
            cout << arr[i] << " ";
        // }
    }

    cout << "2nd largest: " << arr[size - 3] << endl;

    // for (int i = 0; i < size; i++) {
    //     for (int j = i + 1; j < size; j++) {
    //         if (arr[i] == arr[j] && arr[i] != -1 && arr[j] != -1) {
    //             arr[j] = -1;
    //         }
    //     }
    // }

    // for (int i = 0; i < size; i++) {
    //     if (arr[i] != -1) {
    //         cout << arr[i] << " ";
    //     }
    // }
    return 0;
}