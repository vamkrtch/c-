#include <iostream>

int main() {
  int x{};
  int y{};
  int z{};



  std::cin >> x >> y >> z;
    if (x <= y && x <= z)
    {
    std::cout << x;
    }
    else if(y <= x && y <= z){
        std::cout << y;
    } else
        std::cout << z;
}
