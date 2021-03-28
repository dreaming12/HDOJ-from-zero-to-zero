/**
 * CATEGORY: 基础-基本输入输出
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=1090
 * UPDATE: 2021-03-28
 */

#include <iostream>
using namespace std;

int main(void) {
    int n, i, a, b;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> a >> b;
        cout << a + b << endl;
    }

    return 0;
}
