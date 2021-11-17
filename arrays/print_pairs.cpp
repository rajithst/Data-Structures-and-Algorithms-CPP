#include <iostream>
using namespace std;


void print_pairs(int arr[],int size){

	for (int i = 0; i < size; i++)
	{
		int x = arr[i];

		for (int j = i+1; j < size; j++)
		{
			int y = arr[j];
			cout << x << "," << y << endl;
		}
		cout << endl;
	}
}


int main() {

	int arr [] = {10,20,30,40,50,60};
	int size = sizeof(arr)/sizeof(int);

	print_pairs(arr,size);
}