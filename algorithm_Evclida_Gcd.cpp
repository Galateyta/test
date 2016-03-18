#include <iostream>

int gcd(int a, int b)
{
   if (b > a){
      int tmp;
      tmp = a;
      a = b;
      b = tmp;
   }
   int r = 0;
   std::cout << "r = " << r << std::endl;
   while (a != 0 && b != 0 && a%b != 0)
   {
      r = a%b;
      a = b;
      b = r;
   }
return r;
   
}

int main()
{


   std::cout << "Hello Gayane\n";
   std::cout << gcd(119, 544) << std::endl;
   std::cout << gcd(544, 119) << std::endl;
   std::cout << gcd(0, 544) << std::endl;
   std::cout << gcd(119, 0) << std::endl;
   std::cout << gcd(0, 0) << std::endl;
return 0;
}

