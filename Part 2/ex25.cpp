//
//  main.cpp
//  came das
//
//  Created by Jack on 01.12.21.
//

#include <iostream>

int main(void)
{
    double x;
    std::cin >> x;
    if (x < 0) {
        std::cout << -1 * x;
    }
    else
        std::cout << x;
}
