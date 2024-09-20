#include <iostream>
#include <cmath>

using namespace std;
double delta;
double Fdelta;
double quadratic(double a, double b, double c){
        Fdelta = (((b*b)-4)*a)*c;
        if(Fdelta<0){
         delta = sqrt(Fdelta);
        }
    return delta;
}
