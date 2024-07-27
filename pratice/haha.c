#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        int product = 1;
        int ct = 0;
        int ct1 = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            product *= arr[i];
            if (arr[i] == -1)
            {
                ct++;
            }
            else
            {
                ct1++;
            }
        }
        int diff;
        // cout << sum << " " << product << " " << ct << " " << ct1;
        if (sum == 0)
        {
            if (product == 1)
                cout << 0;
            else
                cout << 1;
        }
        else if (sum > 0)
        {
            if (product == 1)
                cout << 0;
            else
                cout << 1;
        }

        else
        {
            while (ct > ct1)
            {
                ct--;
                ct1++;
                count++;
            }
            if (ct % 2 == 0)
            {
                cout << count;
            }
            else
            {
                cout << count + 1;
            }
        }
        cout << endl;
    }
}