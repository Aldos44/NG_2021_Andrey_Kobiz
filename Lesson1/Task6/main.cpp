#include <iostream>

using namespace std;

int main()
{
    cout << "We need to help to admin. We have address mask: 255.255.255.*" << endl << "Where * = your number. Please, enter your number:";
    int a;
    scanf("%d", &a);
    cout << "\nAddress mask is 255.255." << a << endl;
    int ip_adr;
    switch (a)
    {
        case 255: ip_adr = 1; break;
        case 254: ip_adr = 2; break;
        case 252: ip_adr = 4; break;
        case 248: ip_adr = 8; break;
        case 240: ip_adr = 16; break;
        case 224: ip_adr = 32; break;
        case 192: ip_adr = 64; break;
        case 128: ip_adr = 128; break;
        default: cout << "Something went wrong... Please, try again start this programm and write another numbers."; break;
    }
    cout << endl;
    cout << "IP addresses in your local network = " << ip_adr << endl;
    return 0;
}
