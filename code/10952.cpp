#include <iostream>
using namespace std;

int main()
{
    int x, y;
    while(true)
    {
        cin >> x >> y;
        if(x==0 && y==0)break;
        cout << x+y << endl;
    }

}