#include <iostream>
#include <string>

void bubbleSort(std::string arr[], int size) {
  for (int i = 0; i < size - 1; ++i) {
    for (int j = 0; j < size - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        // Tukar posisi elemen jika elemen saat ini lebih besar dari elemen
        // berikutnya
        std::string temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  std::string arr[] = {"Fahmi", "Romi", "Andri", "Fadillah",
                       "Ruli",  "Rudi", "Dendi", "Zaki"};
  int size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size; ++i) {
    std::cout << arr[i] << " ";
  }

  std::cout << "\n";

  bubbleSort(arr, size);

  for (int i = 0; i < size; ++i) {
    std::cout << arr[i] << " ";
  }

  std::cout << std::endl;
  return 0;
}