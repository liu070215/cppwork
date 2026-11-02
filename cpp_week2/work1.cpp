#include <iostream>
using namespace std;
short divide(unsigned short a, unsigned short b)
{
    if (b == 0)
    {
        return -1;
    }
    return (short)(a / b);
}

int main()
{
    unsigned short x, y;
    cin >> x >> y;
    short res = divide(x, y);
    cout << res << endl;
    return 0;
}
