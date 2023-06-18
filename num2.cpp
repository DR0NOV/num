#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    for (int i = 0; i <= number; i++)
    {
        cout << i;
    }

    for (int i = number - 1; i >= 0; i--)
    {
        cout << i;
    }

    system("pause");
}