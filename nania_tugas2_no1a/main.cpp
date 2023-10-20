#include <iostream>

using namespace std;

int main()
{
    int n, s, a;
    n=10;
    s=8;

    cout << "n=" <<n << endl;
    cout << "s=" <<s << endl;

    a=n;
    n=s;
    s=a;

    cout << "n=" <<n << endl;
    cout << "s=" <<s << endl;
    return 0;
}
