#pragma once
template <typename T>
void ShellSort(T*arr,int cnt) {
	int j;
	for (int gap = cnt / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < cnt; i++) {
			T tept = arr[i];
			for (j = i; j >= gap && arr[j - gap] > tept; j -= gap) {
				arr[j] = arr[j - gap];
			}
			arr[j] = tept;
		}
	}
}
