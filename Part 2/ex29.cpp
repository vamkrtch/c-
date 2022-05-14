#include <iostream>

int main()
{
    double arr[5];
    std::cin >> arr[0];
    double max = arr[0];
    for (std::size_t i = 1; i < 5; ++i)
    {
        std::cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    std::cout << max;
    return 0;
}
