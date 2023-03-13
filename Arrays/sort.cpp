#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int arr[n] = {5,56,89,-10,52,1,6,-12,-89,93};
    
    // int maxA = 100000;
    // int maxB = int maxC = maxA;

    // int minA = -10000;
    // int minB = minA;


    // for(int i=0; i<n-1; i++){

    //     if(arr[i] > arr[i+1]){
    //         int temp = arr[i];
    //         arr[i] = arr[i+1];
    //         arr[i+1]= temp;
    //         i = i-1;          
    //     }
    // }

    for(int i=0; i<n-1; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                i = -1;
            }
        }








    // time complexity O(n^2)
    // for(int i = 0; i<n-1; i++){
    //     for(int j = i+1; j<n; j++){
    //         if(arr[j] > arr[i]){
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         } 
    //     }
 
    // }


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }




    return 0;
}