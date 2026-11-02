#include <iostream>
using namespace std;
int main() {
    int peach = 1;
    // 从第10天倒推到第1天，循环9次
    for (int i = 9; i >= 1; i--) {
        peach = (peach + 1) * 2;
    }
    cout << "第一天摘的桃子：" << peach << endl;
    return 0;
}
