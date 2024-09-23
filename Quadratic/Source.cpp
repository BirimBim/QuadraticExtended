#include <iostream>

#include "Resource.cpp"

using namespace std;

bool running = true;

int main()
{
    
    while(running == true){
        double a, b, c, delta, root1, root2;

        //Introduction
        cout << "\nThis program will calculate a quadratic equation (ax^2±bx±c = 0)\nUsing the quadratic formula(x = (-b ± √Δ)÷2a)(Δ=b^-4ac).";
        cout << "\nKeep in mind that: If a = 0 you do not have a quadratic equation.\n\nInsert a number for the coeficient a: ";
        cin >> a;
        cout << "Insert a number for the coeficient b: ";
        cin >> b;
        cout << "Insert a number for the coeficient c: ";
        cin >> c;

        quadratic(a,b,c,&delta,  &root1, &root2);

        if(delta >= 0 && a != 0){
            cout << "\nRoot 1: " << root1 << "\nRoot 2: " << root2;
        }else if(delta < 0 && a != 0){
            cout << "\nError: Δ is negative in this equation making it impossible to square root. Given this equation has no real solution: " << b << "^2-4x" << a << "x" << c << " = " << delta;
        }else{
            cout << "\nError: the coeficient \"a\" cannot be = 0";
        }
        
        restart(&running);
    }
}