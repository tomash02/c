#include <iostream>

int isPrime(int n)
{
    int i = n;
    while (i > 2)
    {
        i--;
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    isPrime(n) ? std::cout << "TAK\n" : std::cout << "NIE\n";

}