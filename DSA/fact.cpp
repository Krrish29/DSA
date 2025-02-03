#include <iostream>
using namespace std;

int main()
{

    int fact = 1, num;
    cout << "Enter number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    cout << fact;

    return 0;
}