#include <iostream>
using namespace std;
int main() {
    int n, a;
    cin >> n >> a;
    long long sum = 0, term = 0;
    for (int i = 1; i <= n; i++) {
        term = term * 10 + a;
        sum += term;
    }
    cout << sum << endl;
    return 0;
}
