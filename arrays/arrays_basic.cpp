//
//  arrays_basic.cpp
//  dsa_cpp
//
//  Created by Rajith Thennakoon on 2021/11/13.
//
#include <iostream>
using namespace std;

int main(){
    // initialize arrays with size and default value
    int marks[100] = {0};
    int n;
    cout<< "Enter the no of students ";
    // getting inputs
    cin >> n;
    for (int i=0; i<n; i++) {
        cin>> marks[i];
        marks[i] = marks[i]*2;
    }
    //looping and accessing array indexes
    for (int i = 0; i<n; i++) {
        cout<<marks[i] << " ";
    } cout << endl;
}
