#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    long long max_product = 0;
    int n = numbers.size();
    long long maximum = -1;
    long long secondMaximum = -2;

    for (int first = 0; first < n; first++) {
        if (numbers[first] >= maximum)
        {
            secondMaximum = maximum;
            maximum = numbers[first];
        }
        else if (numbers[first] >= secondMaximum)
        {
            secondMaximum = numbers[first];
        }
    }
    max_product = maximum * secondMaximum;
    return max_product;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
