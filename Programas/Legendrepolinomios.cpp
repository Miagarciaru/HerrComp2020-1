#include <iostream>
#include <cmath>

int main ()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  
  double dx=0.001;
  for (double x=-1; x<=1; x+=dx)
    {
      std::cout << x<< "\t" << std::legendre(5, x) <<"\n";
    }
  return 0;
}
