//
//  main.cpp
//  lesson 7
//
//  Created by Jack on 03.12.21.
//

#include <iostream>
void  v_swap(int *a , int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
    
}

int main()
{
    int a;
    int b;
    int c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
   // int max = c;
   // int min = a;
    
    if (b < a)
    {
        v_swap(&a,&b);
    }
    if(c < a)
    {
        v_swap(&a, &c);
    }
    if (b > c)
    {
        v_swap(&b, &c);
    }
    if (a > c)
    {
        v_swap(&c, &a);
    }
    std::cout << b << "\n";
 

}
