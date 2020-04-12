#include <random>
#include <iostream>

void fill_array(double * array, int size, int seed, double mu, double sigma);
double get_mean(double * array, int size);

int main(void)
{
  const int N = 100000;
  const int seed = 1;
  double * data;
  data = new double [N];
  fill_array(data, N, seed, 1.5, 0.5);
  std::cout<< "The mean is : " << get_mean(data, N) << std::endl; //Debe los argumentos ser data, N en vez de data, N+1
  
  return 0;
}

void fill_array(double * array, int size, int seed, double mu, double sigma)
{
  std::mt19937 gen(seed);
  std::normal_distribution<> dis{mu, sigma};
  for(int n = 0; n < size; n++) { //segmentation fault n iba creciendo y así el indice del arreglo array sin tener en cuenta el tamaño size.
    array[n] = dis(gen); //n aumentaba realmente de a dos
  }
}

double get_mean(double * array, int size)
{
  double sum=0.0; 
  for (int ii = 0; ii < size; ii++) { //SegFault debido a que se llega al indice size cuando el conteo inicia desde cero hasta size-1
    sum += array[ii]; //Existia overflow porque sum no estaba inicializada y guardaba un valor basura que provocaba overflow
  }
  array = new double [size]; 
  return sum/size;
}
