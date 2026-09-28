#include <iostream>
using namespace std;

int main() {
    
    int arr[8] = {-10,12,0,7,5,-13,0,2};
    
    int positive = 0;
    int negative = 0;
    int zero = 0;

    for (int i = 0; i < 8; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }  

    cout << positive<<endl;
    cout << negative<<endl;
    cout << zero;

    return 0; 
}