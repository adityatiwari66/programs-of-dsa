#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

int main() {
    std::vector<int> arrSelection = {64, 25, 12, 22, 11};
    selectionSort(arrSelection);

    std::cout << "Selection Sorted Array:";
    for (int num : arrSelection) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    return 0;
}