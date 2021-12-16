#include <iostream>
#include <vector>
using namespace std;


void bubble_sort(int arr[], int n) {

	for (int times = 1; times <= n - 1; times++) {
		for (int i = 0; i <= n - times - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
			}
		}
	}
}

int main() {

	int arr[] = { -2, 3, 4, -1, 5, -12, 6, 1, 3};
	int n  = sizeof(arr) / sizeof(int);

	bubble_sort(arr, n);
	for (auto x : arr) {
		cout << x << endl;
	}
}