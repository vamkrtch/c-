#include <iostream>


int main()
{
    int age;
    int kids_value;
    char gender;
    std::cin >> age >> gender;

    if (gender == 'm' && age >= 18)
    {
        std::cin >> kids_value;
        if (kids_value >= 2)
        {
            std::cout << "NO";
        }
        else
        {
            std::cout << "YES";
        }
    }
    if (gender == 'm' && age < 18)
    {
        std::cout << "NO";
    }
    if (gender == 'w')
    {
        std::cout << "Happy March 8";
    }

}
