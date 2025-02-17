#include<iostream>
#include "ShellSort.h"
using namespace std;
int main() {
	int num = 6;
	int arr[] = { 23,43,12,54,5,34 };
	ShellSort(arr, num);
	for (const auto& m : arr) {
		cout << m << " ";
	}
	return 0;
}
