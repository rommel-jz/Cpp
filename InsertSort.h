#pragma once
template<typename T>
void InsertSort(T* items, int cnt) {
	for (int m = 1; m < cnt; m++) {
		T k = items[m];
		int j = m - 1;
		while (j >= 0 && items[j] > k) {
			items[j + 1] = items[j];
			j--;
		}
		items[j + 1] = k;
	}
}
