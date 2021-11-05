#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your number: ";
    int num_in = 0;
    cin >> num_in; //scanf ("%d", &num_in);
    int sum;
    while (num_in != 0) {
        sum += num_in % 10;
        num_in/=10;
    }
    cout << sum;
    return 0;
}
