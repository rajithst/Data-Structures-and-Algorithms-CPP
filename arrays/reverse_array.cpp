#include <iostream>
using namespace std;

void reverse_array(int arr[],int size) {

	int start = 0;
	int end = size -1;

	while(start < end) {
		swap(arr[start],arr[end]);
		start+=1;
		end-=1;

	}
}

int main(){

	int arr[] = {10,20,30,40};
	int size = sizeof(arr)/sizeof(int);
	reverse_array(arr,size);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}


}