#include <iostream>
using namespace std;
int main() {
  int i;
  int square_sum = 0;
  int sum_square = 0;
  for (i = 1; i <= 100; i++) {
    square_sum += i;
    sum_square += i * i;
  }
  square_sum *= square_sum;
  cout<<"la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma"<<(square_sum - sum_square)<<endl;
  return 0;
}