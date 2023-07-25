#include <iostream>
#include <string>

void binaryInsertionSort(std::string arr[], int size) {
    for (int i = 1; i < size; ++i) {
        std::string key = arr[i];
        int left = 0;
        int right = i - 1;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (arr[mid] > key) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        for (int j = i - 1; j >= left; --j) {
            arr[j + 1] = arr[j];
        }

        arr[left] = key;
    }
}

int main() {
    std::string arr[] = {"Fahmi", "Romi", "Andri", "Fadillah",
                       "Ruli",  "Rudi", "Dendi", "Zaki"};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    binaryInsertionSort(arr, size);

    std::cout << "\n";
  
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}

