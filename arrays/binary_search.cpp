#include <iostream>
using namespace std;

int binary_search(int arr[],int size,int key){

	int start = 0;
	int end = size -1;

	while(start<=end) {

		int mid = (start+end)/2;

		if (arr[mid]==key){
			return mid;
		}else if (arr[mid] < key){
			start = mid + 1;
		}else{
			end = mid - 1;
		}
	}
	return -1;
}

int main() {

	int arr[] = {1,4,5,10,12,18,19};

	int size = sizeof(arr)/sizeof(int);
	int key = 13;
	int result = binary_search(arr,size,key);
	cout << result << endl;
	

	
}