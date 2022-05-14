#include <iostream>
int main()
{
    int a;
    std::cin >> a;
    int sum = 0;
    while (a > 0)
    {
        sum = sum + a % 10;
        a = a / 10;
    }
    std::cout << sum;
}
