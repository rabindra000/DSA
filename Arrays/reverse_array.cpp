#include<iostream>
using namespace std;

int main(){
    int n=100;
    int arr[n]={1,2,3,4,5};

    for(int i=0, j=n-1;i<n/2;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i=0; i<n; i++){
        if(arr[i] == NULL ){
            
        }
        else{
        cout<<arr[i]<<" ";
        }
    }

    return 0;
}