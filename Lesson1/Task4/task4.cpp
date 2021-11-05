#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Solution of the quadratic equation. Please enter 3 variables in turn (a, b, c)" << endl;
    int a,b,c,d,x_1,x_2;
    cout << "Enter a= " ;
    scanf ("%d", &a);
    cout << "Enter b= ";
    scanf ("%d", &b);
    cout << "Enter c= ";
    scanf ("%d", &c);
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    cout << "c= " << c << endl;
    cout << "\nFormule: ax^2+bx-c=0" << endl;
    d = pow(b, 2)-(4*a*c);
    cout << "D=b^2-4ac = " << d << endl;
    if (d>0)
    {
        x_1= (-b+sqrt(d)/(2*a));
        cout << "\nx1= " << x_1 << endl;
        x_2= (-b-sqrt(d)/(2*a));
        cout << "x2= " << x_2 << endl;
    }
    if (d==0)
    {
        x_1=(-b+sqrt(d)/(2*a));
        cout << "\nx=" << x_1 << endl;
    }
    else
    {
        cout << "\a\nNo mathematical roots.";
    }

    return 0;
}
