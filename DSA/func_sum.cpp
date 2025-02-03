// function to print sum

#include <iostream>
using namespace std;

void PrintSum(int num1, int num2)
{
    int sum = num1 + num2;

    cout << "The sum is: " << sum;
}

int main()
{

    int num1, num2, sum;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    PrintSum(num1, num2);

    return 0;
}