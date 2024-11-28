#include <iostream>
#include <unordered_set>

void print_unique_elements(int arr[], int n) {
    std::unordered_set<int> unique_elements;

    for (int i = 0; i < n; i++) {
        unique_elements.insert(arr[i]);
    }

    for (auto it = unique_elements.begin(); it != unique_elements.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 4, 5, 6, 6, 7, 8, 9, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    print_unique_elements(arr, n);

    return 0;
}
