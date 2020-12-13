#include <iostream>

ulong pow(ulong a, ulong b) {
    ulong n = 1;
    for (ulong i = 0; i < b; i++) {
        n = n * a;
    }
    return n;
}

int main()
{
    ulong repeat, a, b;
    for (ulong r = 0; r < repeat; r++) {
        std::cin >> a;
        std::cin >> b;
        std::cout << pow(a, b) << "\n";
    }
}