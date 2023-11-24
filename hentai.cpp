#include <iostream>
using namespace std;
int main()
{
    cout << "enter n : ";
    int n;
    cin >> n;
    int b = n / 2 + 1;

    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= b - i; j++) // space
        {
            cout << " "
                 << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) // star
        {
            cout << "x"
                 << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n - b; i++)
    {
        for (int j = 1; j <= i; j++) // space
        {
            cout << " "
                 << " ";
        }

        for (int j = n-2; j >= 2 * i - 1; j--) // star
        {
            cout << "x"
                 << " ";
        }
        cout << endl;
    }
}