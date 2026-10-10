#include <vector>

void bubble_sort(std::vector<int>& arr) {
	bool needs_sorting{ true };
	while (needs_sorting) {
		needs_sorting = false;
		for (unsigned int i{}; i < arr.size() - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				needs_sorting = true;
				std::swap(arr[i], arr[i + 1]);
			}
		}
	}
	return;
}