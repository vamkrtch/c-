//
// Created by Jack on 12/25/21.
//

#include <iostream>
int main()
{
    int i;
    std::cin >> i;
    if (i == 2)
    {
        std::cout << 28;
    }
    if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12 )
    {
        std::cout << 31;
    }
    if (i == 4 || i == 6 || i == 9 || i == 11)
    {
        std::cout << 30;
    }
}
