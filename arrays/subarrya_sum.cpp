#include <iostream>
using namespace std;


int largestSubarraySum(int arr[], int n) {

	//prefix sum
	int prefix[100] = {0};
	prefix[0] = arr[0];
	for (int i = 1; i < n; i++) {
		prefix[i] = prefix[i - 1] + arr[i];
	}

	//subarray sum
	int largestSum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int subarraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
			largestSum = max(subarraySum, largestSum);
		}

	}
	return largestSum;

}

int main() {

	int arr[] = { -2, 3, 4, -1, 5, -12, 6, 1, 3};
	int n = sizeof(arr) / sizeof(int);
	cout << largestSubarraySum(arr, n) << endl;

}