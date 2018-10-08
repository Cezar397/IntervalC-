#include <iostream>
#include <fstream>
using namespace std;

ifstream f("intervare.in");

int main()
{
    int n, x, y, i, a, b;

    cin>>n>>x>>y;

    for(i=2;i<=n;i++)
    {
        f>>a>>b;
        if(a > y)
        {
            cout<<x<<" "<<y;
            y = b;
        }
    }


    return 0;
}
