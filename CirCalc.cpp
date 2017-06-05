/* CirCalc Functions
* Author: Colin Hunt
*
* Test Version: Includes Main and Functions
* Copyright 2017
*/
#include <iostream>
#include <string>
#include <cmath>
#include <complex>

double parallel(double* components, int length){
  double sum = 0;

  for(int i = 0; i < length; i++){
    sum = sum + (1/(*(components + i)));
  }

  return (1/sum);
}

int main(){
  double components[5] = {100, 100, 50, 25, 12.5};
  std::cout << parallel(components, 5) << "\n" ;
  return 0;
}
