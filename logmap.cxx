#include <iostream>

using namespace std;

int main(){
  int N = 100;
  double xn, xo = 0.5;
  
  for(double r = 0.0; r < 4.0; r+=0.01){
    for(int i = 1; i <= N; i++){
      xn = xo*r - xo*xo*r;
      xo = xn;
      if(i>19){
	cout << r << "\t" << xn << endl;
      }
    }
    xo = 0.5;
  }
}