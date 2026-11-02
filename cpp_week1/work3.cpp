#include <iostream>
using namespace std;
int main() {
    int n, tmp, rev = 0;
    cin >> n;
    tmp = n;
    while (tmp > 0) {
        rev = rev * 10 + tmp % 10;
        tmp /= 10;
    }
    if (rev == n)
        cout << n << " 是回文数" << endl;
    else
        cout << n << " 不是回文数" << endl;
    return 0;
}
