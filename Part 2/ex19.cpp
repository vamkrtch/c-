#include <iostream>
int main ()
{
    int a,b,c,d;
    std::cin >> a >> b >> c >> d;
    if(a > c)
        std::cout << ((a * d) - (b+c));
    else if (c > a)
    {
        std::cout << (b + d) * a;
    }
    else
    {
        std::cout << a + b + c + d;
    }

}
