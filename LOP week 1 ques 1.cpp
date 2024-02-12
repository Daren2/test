#include <iostream>

int convert(int a) {
    return ~a + 1;
}

int main() {
    int a;
    std::cin >> a;
    std::cout << convert(a) << std::endl;
    return 0;
}
