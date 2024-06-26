#include <iostream>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        int n, a, b, c=0;
        cin >> n;
        while(n--)
        {
            cin >> a >> b;
            if(a > b)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}