/**
 * CATEGORY: 基础-基本输入输出
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=1092
 * UPDATE: 2021-03-28
 */

#include <iostream>
using namespace std;

int main(void) {
    int n, i, a, sum;

    while (cin >> n && n != 0) {
        sum = 0;  // 注意

        for (i = 0; i < n; i++) {
            cin >> a;
            sum += a;
        }

        cout << sum << endl;
    }

    return 0;
}
