#include<iostream>
#include<algorithm>
using namespace std;
int BinarySearch(int arr[], int left, int right, int target) {
	
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == target) {
			return mid;
		}
		else if (arr[mid] > target) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	return -1;
}
int main() {
	int num[] = { 13,45,2,433,54,23,64,1,3,6,7 };
	sort(num, num+11);
	cout << BinarySearch(num, 0, 10, 7);
	return 0;
}
