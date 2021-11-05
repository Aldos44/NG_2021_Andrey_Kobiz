#include <iostream>

using namespace std;

int main()
{
    int a,b;
    a = 50;
    b = 20;
    cout <<("a= ")<<a;
    cout <<("\nb= ") << b << endl;
    cout << ("Let's start to transform!")<< endl << ("Press enter."); // просто так :)
    cin.ignore();
   // int c = a;
   //  a = b;
   //  b = c;
    a = a+b-a;
    b = a+b-a;
    cout << ("\na = ")<<a<< endl;
    cout << ("b = ")<<b<< endl;
    return 0;
}
