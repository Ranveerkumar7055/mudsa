#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,0,1,0,1};
    int i=0;
    int j=4;
    while(i<j){
        if(arr[i]==0) i++;
        else if(arr[j]==1) j--;
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

cout<<"Sorted array is: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}