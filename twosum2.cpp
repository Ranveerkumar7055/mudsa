#include <iostream>
using namespace std;

int main() {
    int arr[8] = {0, 1, 1, 0, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = n - 1;

    while (left < right) {
        // Fix: Check bounds (left < right) FIRST before accessing arr[left]
        while (left < right && arr[left] == 0) {
            left++;
        }
        // Fix: Check bounds (left < right) FIRST before accessing arr[right]
        while (left < right && arr[right] == 1) {
            right--;
        }
        
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    
    return 0;
}
