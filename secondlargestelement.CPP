#include <iostream>
using namespace std;

int main() {
    int arr[5] = {8, 6, 7, 9, 2};

    int max = arr[0];
    int second = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        }
        else if (arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }

    cout << "Second largest = " << second << endl;
    return 0;
}