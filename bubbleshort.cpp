#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<int> arrBubble = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arrBubble);

    std::cout << "Bubble Sorted Array:";
    for (int num : arrBubble) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    return 0;
}