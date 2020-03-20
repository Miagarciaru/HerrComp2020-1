#include <iostream>
#include <cmath>

double sum1 (int N);
double sum2 (int N);
double sum3 (int N);

int main ()
{
  std::cout.precision(15);
  std::cout.setf(std::ios::scientific);
  std::cout<< sum1(10)<<"\n";
  std::cout<< sum2(10)<<"\n";
  return 0;
}

double sum1 (int N)
{
  double sum=0.0;
  int sign=-1;
  for (int n=1; n<=2*N; ++n)
    {
      sum+=sign*1.0*n/(n+1);
      sign*=-1;
    }
  return sum;
}

double sum2 (int N)
{
  double suma1=0.0, suma2=0.0;
  for (int n=1; n<=N; ++n)
    {
      suma1+=(2.0*n-1)/(2*n);
      suma2+= 2.0*n/(2*n+1);
    }
  return suma2-suma1;
}

double sum3 (int N)
{
  double sumas = 0;
  for (int n=1; n<=N; ++n)
    {
      sumas+=1.0/((2*n)*(2*n+1));
    }
  return sumas;
}
