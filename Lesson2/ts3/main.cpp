#include <iostream>

using namespace std;

int main()
{
    unsigned int user_in;
    cout << "Enter your size=";
    cin >> user_in;
    for(int i=1; i<=user_in; i++)
        {
        for(int j=1; j<=user_in; j++)
        {
            if((i==1)||(j==1)||(i==user_in)||(j==user_in)) // if ((i==1) || (j==1) || (i==a) || (j==b))
              cout << "*";
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
