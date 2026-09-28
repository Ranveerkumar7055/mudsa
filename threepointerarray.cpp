//Dutch flag algorithm
#include<iostream>
using namespace std;
int main(){
    int arr[7]={0,2,1,1,2,0,1};
    int l=0;
    int m=0;
    int h=6;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }
    cout<<"Sorted array is: ";
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}