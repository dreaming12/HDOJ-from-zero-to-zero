/**
 * CATEGORY: 基础-基本输入输出
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=1091
 * UPDATE: 2021-03-28
 */

#include <iostream>
using namespace std;

int main(void) {
    int a, b;

    while (cin >> a >> b && (a != 0 || b != 0)) {
        cout << a + b << endl;
    }

    return 0;
}
