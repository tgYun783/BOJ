#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int bag = 0;
    while (n >= 0)
    {
        if (n % 5 == 0)
        {
            bag += (n / 5);
            cout << bag;
            return 0;
        }
        n -= 3;
        bag++;
    }
    cout << -1;
}