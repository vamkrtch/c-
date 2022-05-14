#include <iostream>
int main()
{
    char a;
    char b;
    std::cin >> a >> b;
    if ((int)b < (int)a)
    {
        
        std::cout << "YES"<< "\n";
    }
    else if ((int)b == (int)a)
    {
        std::cout << "EQUAL";
    }
    else
        std::cout << "NO";
}
