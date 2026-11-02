#include <iostream>
using namespace std;
int main() {
    int f1 = 1, f2 = 1;
    cout << "第1月：" << f1 << endl;
    cout << "第2月：" << f2 << endl;
    for (int i = 3; i <= 20; i++) {
        int f = f1 + f2;
        cout << "第" << i << "月：" << f << endl;
        f1 = f2;
        f2 = f;
    }
    return 0;
}
