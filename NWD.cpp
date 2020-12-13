#include <iostream>

int nwd(uint a, uint b) {
    int R;
    while ((a % b) > 0) {
        R = a % b;
        a = b;
        b = R;
    }
    return b;
}
int main()
{
    uint repeat, a, b;
    std::cin >> repeat;
    for (uint r = 0; r < repeat; r++) {
        std::cin >> a;
        std::cin >> b;
        std::cout << nwd(a, b) << "\n";
    }

    return 0;
}