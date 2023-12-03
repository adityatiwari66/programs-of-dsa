#include <iostream>
#include <vector>

std::vector<int> quickSort(std::vector<int>& arr) {
    if (arr.size() <= 1) {
        return arr;
    }

    int pivot = arr[arr.size() / 2];
    std::vector<int> left, middle, right;
    
    for (int x : arr) {
        if (x < pivot) {
            left.push_back(x);
        } else if (x == pivot) {
            middle.push_back(x);
        } else {
            right.push_back(x);
        }
    }

    left = quickSort(left);
    right = quickSort(right);

    std::vector<int> sortedArr;
    sortedArr.insert(sortedArr.end(), left.begin(), left.end());
    sortedArr.insert(sortedArr.end(), middle.begin(), middle.end());
    sortedArr.insert(sortedArr.end(), right.begin(), right.end());

    return sortedArr;
}

int main() {
    std::vector<int> arrQuick = {5, 3, 8, 6, 7, 2, 1, 4};
    std::vector<int> sortedArrQuick = quickSort(arrQuick);

    std::cout << "Quick Sorted Array:";
    for (int num : sortedArrQuick) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    return 0;
}