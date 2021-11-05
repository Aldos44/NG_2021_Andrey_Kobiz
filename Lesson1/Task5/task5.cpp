#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int m;
    cout << "You are in space ..." << endl << "You have such a good spaceship from the great manufacturer of \"Space Traveler\" class models from ZAZ." << endl << "And you need to calculate how much fuel is spent on a journey 300 light years long." << endl;
    cout << "To do this, you need to know the mass of the ship." << endl << "\nEnter the mass of the your ship(in kg):";
    scanf("%d", &m);
    cout << "\nMass of your \"Space Travaller\"(in kg): " << m << endl;
    cout << "Press enter to continue" << endl;
    cin.ignore();
    cout << "\nWe need to use formule: (mass/3)-2*300." << endl;
    double y;
    y = (round(m/3)-3)*300;
    cout << "\nWe need fuel in mount:" << y << " litres";
    return 0;
}
