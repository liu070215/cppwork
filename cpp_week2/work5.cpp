#include <iostream>
using namespace std;

// 整型版本
int getPower(int x, int y)
{
    if (y < 0)
        return 0;
    if (y == 0)
        return 1;
    return x * getPower(x, y - 1);
}

// 实型版本
double getPower(double x, int y)
{
    if (y == 0)
        return 1.0;
    if (y < 0)
        return 1.0 / getPower(x, -y);
    return x * getPower(x, y - 1);
}

int main()
{
    int a, m;
    double b;
    cin >> a >> b >> m;
    cout << a << "^" << m << " = " << getPower(a, m) << endl;
    cout << b << "^" << m << " = " << getPower(b, m) << endl;
    return 0;
}
