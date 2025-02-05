// program to print if a number is a prime or not
#include <iostream>
using namespace std;

int main()
{

    int num, count = 0;
    cout << "Enter the num to check if prime: ";
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count > 2)
    {
        cout << " Not Prime";
    }
    else
    {
        cout << "prime";
    }

    return 0;
}