//Calcula las raíces de un polinomio de grado dos evitando causar posibles underflows producidos por la resta de términos muy parecidos.

#include <iostream>
#include <cmath>

double metsum1 (double c);
double metsum2 (double c);
double metres1 (double c);
double metres2 (double c);

const int N=1000;
const double a=2.0;
const double b=5.0;

int main ()
{
  std::cout.precision(15);
  std::cout.setf(std::ios::scientific);

  double c=10.0;
  for (int ii=0; ii<=N; ii++)
    {
      double c=c/10.0;;
      std::cout<<ii<<"\t"<<metsum1(c)<<"\t"<<metres1(c)<<"\t"<<metsum2(c)<<"\t"<<metres2(c)<<"\n";
    }
  return 0;
}

double metsum1 (double c)
{
  double x=(-b-std::sqrt(b*b-4*a*c))/(2*a);
  return x;
}

double metsum2 (double c)
{
  double x=(-2*c)/(b+std::sqrt(b*b-4*a*c));
  return x;
}

double metres2 (double c)
{
  double x=(-b+std::sqrt(b*b-4*a*c))/(2*a);
  return x;
}

double metres1 (double c)
{
  double x=(-2*c)/(b-std::sqrt(b*b-4*a*c));
  return x;
}
