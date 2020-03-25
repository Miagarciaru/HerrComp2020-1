#include <iostream>
#include <cmath>

double suma1 (int N);
double suma2 (int N);
double suma3 (int N);

int const limite=100;

int main ()
{
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);

  for (int ii=1; ii<=limite; ii++)
    {
      std::cout<<ii<<"\t"<<std::abs(suma3(ii)-suma1(ii))/suma3(ii)<<"\t"<<std::abs(suma3(ii)-suma2(ii))/suma3(ii)<<"\n";
    }
  return 0;
}

double suma1 (int N)
{
  int sign=-1;
  double sum1=0;
  for (int n=1; n<=2*N; n++)
    {
      sum1+=sign*1.0*n/(n+1);
      sign*=-1;
    }
  return sum1;
}

double suma2 (int N)
{
  double sumpos=0;
  double sumneg=0;
  
  for (int n=1; n<=N; n++)
    {
      sumpos+=2.0*n/(2*n+1);
      sumneg+=(2.0*n-1)/(2*n);
    }
  return sumpos-sumneg;
}

double suma3 (int N)
{
  double sum3=0;
  
  for (int n=1; n<=N; n++)
    {
      sum3+=1.0/(2*n*(2*n+1));
    }
  return sum3;
}
