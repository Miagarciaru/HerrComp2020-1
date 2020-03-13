//Éste programa tiene como objetivo determinar el máximo valor para el cual existe un overflow y el mínimo valor para un underflow para diferente tipo de variable.

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

int main (int argc, char **argv)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double under=1.0;
  double over=1.0;
  const int N= std::atoi(argv[1]);
  for (int ii=1; ii<=N; ii++)
    {
      under/=2;
      over*=2;
      std::cout<<ii<<"\t"<<under<<"\t"<<over<<std::endl;
    }
  return 0;
}
