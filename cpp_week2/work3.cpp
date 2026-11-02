#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int g = gcd(m, n);
    int l = m / g * n; // 防止溢出，先除后乘
    cout << "最大公约数：" << g << endl;
    cout << "最小公倍数：" << l << endl;
    return 0;
}
