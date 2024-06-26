#include <iostream>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    int a[test_cases], b[test_cases], c[test_cases];
    for (int i = 0; i < test_cases; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    for (int i = 0; i < test_cases; i++)
    {
        if (a[i] + b[i] >= 10 || b[i] + c[i] >= 10 || a[i] + c[i] >= 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}