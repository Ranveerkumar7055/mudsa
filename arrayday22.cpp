#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10,12,8,7,5,13};
    int target=7;
    for (int i = 0; i < 6; i++) {
        if (arr[i] == target) {
            cout << "Target found at index: " << i << endl;
            
    }
    }  

    return 0; 
};