/**
 * CATEGORY: 基础-基本输入输出
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=1096
 * UPDATE: 2021-03-28
 * LEVEL: C
 */

#include <iostream>
using namespace std;

int main(void) {
    int m, n, i, j, sum, a;
    cin >> m;

    for (i = m; i > 0; i--) {
        cin >> n;
        sum = 0;

        for (j = 0; j < n; j++) {
            cin >> a;
            sum += a;
        }

        /**
         * ！！！ - 注意最后一个输出后没有空行
         * ！！！ - 注意只有一组数据时也是如此
         */
        if (i == 1) {
            cout << sum << endl;
        } else {
            cout << sum << endl << endl;
        }
    }

    return 0;
}
