#include <iostream>

#include "Resource.cpp"

using namespace std;

bool running = true;

int main()
{
    
    while(running == true){
        double a, b, c, delta, root1, root2;
        bool complexAnswer=false;

        //Introduction
        cout << "\nThis program will calculate a quadratic equation (ax^2±bx±c = 0)\nUsing the quadratic formula(x = (-b ± √Δ)÷2a)(Δ=b^-4ac).";
        cout << "\nKeep in mind that: If a = 0 you do not have a quadratic equation.\n\nInsert a number for the coeficient a: ";
        cin >> a;
        cout << "Insert a number for the coeficient b: ";
        cin >> b;
        cout << "Insert a number for the coeficient c: ";
        cin >> c;

        quadratic(a,b,c,&delta,  &root1, &root2, &complexAnswer);

        if(complexAnswer==false && a != 0){
            cout << "\nRoot 1: " << root1 << "\nRoot 2: " << root2;
        }else if(complexAnswer==true && a != 0){
            cout << "\nImaginary roots = " << root1 << " ± " << delta << "i\n";
        }else{
            cout << "\nError: the coeficient \"a\" cannot be = 0";
        }
        
        restart(&running);
    }
}