#include <iostream>
#include <vector>
#include <algorithm>

// Binary Search Function
std::vector<int> binarySearchAll(int arr[], int left, int right, int target) {
    std::vector<int> indices;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            indices.push_back(mid);
            // Cek di sebelah kiri untuk kemungkinan angka yang sama
            int temp = mid - 1;
            while (temp >= 0 && arr[temp] == target) {
                indices.push_back(temp);
                temp--;
            }
            // Cek di sebelah kanan untuk kemungkinan angka yang sama
            temp = mid + 1;
            while (temp < right && arr[temp] == target) {
                indices.push_back(temp);
                temp++;
            }
            return indices;
        }

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return indices; // Return empty vector if target is not found
}

int main() {
    int arr[] = {19, 40, 10, 90, 2, 50, 60, 50, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array (binary search requires a sorted array)
    std::sort(arr, arr + n);

    int target;

    // Test Case 1
    target = 1;
    std::vector<int> result = binarySearchAll(arr, 0, n - 1, target);
    if (!result.empty()) {
        std::cout << "Angka " << target << " ada di indeks ke-";
        for (int idx : result)
            std::cout << idx << " ";
        std::cout << std::endl;
    } else {
        std::cout << "Angka " << target << " tidak ada dalam array." << std::endl;
    }

    // Test Case 2
    target = 50;
    result = binarySearchAll(arr, 0, n - 1, target);
    if (!result.empty()) {
        std::cout << "Angka " << target << " ada di indeks ke-";
        for (int idx : result)
            std::cout << idx << " ";
        std::cout << std::endl;
    } else {
        std::cout << "Angka " << target << " tidak ada dalam array." << std::endl;
    }

    // Test Case 3
    target = 100;
    result = binarySearchAll(arr, 0, n - 1, target);
    if (!result.empty()) {
        std::cout << "Angka " << target << " ada di indeks ke-";
        for (int idx : result)
            std::cout << idx << " ";
        std::cout << std::endl;
    } else {
        std::cout << "Angka " << target << " tidak ada dalam array." << std::endl;
    }

    return 0;
}
