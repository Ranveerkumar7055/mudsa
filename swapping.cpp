#include <iostream>
using namespace std;

int main() {
    int arr[6] = {23,4,3,8,10,20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0;
    int r = n - 1;

    while (l <= r) {
        swap(arr[l], arr[r]); 
        l++;
        r--;
    }

    cout << "Reversed array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}