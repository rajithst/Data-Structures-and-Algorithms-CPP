//
//  arrays_and_functions.cpp
//  dsa_cpp
//
//  Created by Rajith Thennakoon on 2021/11/13.
//

#include <iostream>
using namespace std;

void printArray(int *arr,int size){
    cout << "from the printArray function" << endl;
    arr[0] = 100;
    
    for (int n = 0; n<size; n++) {
        cout << arr[n] << endl;
    }
}

int main(){
    
    int arr[] = {1,2,3,4};
    //get memory size of array and devide by memory size of int
    int size = sizeof(arr)/sizeof(int);
    cout << size << endl;    
    printArray(arr,size);

    for (int n = 0; n<size; n++) {
        cout << arr[n] << endl;
    }
 
}
