#include <iostream>
#include <cmath>

using namespace std;

void restart(bool *running){
    int choice;
    cout << "\n\nPress:\n1.To restart: \n2.To quit: \n";
    cin >> choice;
    if(choice==2){
        *running = false;
    }
}

void quadratic(double a, double b, double c, double *delta, double *root1, double *root2, bool *complexAnswer){
            *delta = (b*b)+(-4*(a*c));
            if(*delta<0){
                *complexAnswer=true;
                *delta = *delta*(-1);
                *delta = sqrt(*delta)/2*a;
                *root1 = (-b)/(2*a);
            }else{
            *root1 = (-b+sqrt(*delta))/(2*a);
            *root2 = (-b-sqrt(*delta))/(2*a);
            }
}
//\nError: Δ is negative in this equation making it impossible to square root. Given this equation has no real solution: 
 
 