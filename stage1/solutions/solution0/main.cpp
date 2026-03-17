#include <iostream>

int main() {
    // Use long long to ensure we can handle 64-bit signed integers
    long long a, b;

    // cin automatically handles whitespace (spaces or newlines)
    if (std::cin >> a >> b) {
        long long sum = a + b;
        std::cout << sum << std::endl;
    }

    return 0;
}
