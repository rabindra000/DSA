#include <iostream>
using namespace std;

int main(){ 
    int n=6;
    int arr[n]={1,2,3,4,9,7};
    int d=-2;   

    int temp[n];

    for(int i=0; i<n; i++){
        // For Clockwise Rotation
        if(d>0){
            temp[((i+d)%n)] = arr[i];   
        }

        // For anti clockwise rotation  (here d is multiplied by n-1 bcz 1 anti clockise wise rotation 
        // is equal to n-1 clockwise rotation )
        if (d<0){
            temp[(i+(d*-(n-1)))%n] = arr[i];
        }
        
    }

    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }

    
        
    return 0;
}