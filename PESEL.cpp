// PESEL.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int isValidPesel(std::string& pesel) 
{
    int wynik = 0;
    if (pesel.length() == 11) {
        for (int i = 0; i < pesel.length(); i++)
        {
            if (i == 1 || i == 5 || i == 9)
            {
                wynik += (pesel[i] - '0') * 3;
            }
            else if (i == 2 || i == 6)
            {
                wynik += (pesel[i] - '0') * 7;
            }
            else if (i == 3 || i == 7)
            {
                wynik += (pesel[i] - '0') * 9;
            }
            else
            {
                wynik += pesel[i] - '0';
            }
        }
        return wynik == 110;
    }
}

int main()
{
    int i;
    int repeat;
    std::cin >> repeat;
    std::string pesel;
    for(int r = 0; r < repeat; r++)
    {
        std::cin >> pesel;
        isValidPesel(pesel) ? std::cout << "D\n" : std::cout << "N\n";
    }
}
