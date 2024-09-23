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

void quadratic(double a, double b, double c, double *delta, double *root1, double *root2){
            *delta = (b*b)+(-4*a*c);
            *root1 = (-b+sqrt(*delta))/(2*a);
            *root2 = (-b-sqrt(*delta))/(2*a);
}
 
 