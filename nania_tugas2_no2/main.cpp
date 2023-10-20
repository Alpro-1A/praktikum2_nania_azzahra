#include <iostream>

using namespace std;

int main()
{
    int m, n, o, p;

    cout << "jumlah bebek:";
    cin >> m;
    cout << "jumlah orang:";
    cin >> n;

    o=m/n;
    p=m%n;

    cout << "jumlah bebek yang dibagikan perorang:" <<m << endl;
    cout << "jumlah sisa bebek:" <<p << endl;

    return 0;
}
