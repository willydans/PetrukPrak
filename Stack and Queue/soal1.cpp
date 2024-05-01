#include <iostream>

void print_even_numbers(int arr[], int N) {
    for (int i = 1; i < N; i += 2) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int N;
    std::cin >> N;

    int numbers[N];
    for (int i = 0; i < N; ++i) {
        std::cin >> numbers[i];
    }

    print_even_numbers(numbers, N);

    return 0;
}
