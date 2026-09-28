#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,9};
    for(int &i:arr){
        cout<<i<<endl;
    }
     return 0;
}