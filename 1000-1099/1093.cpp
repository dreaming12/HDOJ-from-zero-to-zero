/**
 * CATEGORY: 基本输入输出
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=1093
 * DATE: 2021-03-28
 * LEVEL: C
 */

#include <iostream>
using namespace std;

int main(void) {
    int n, m, i, j, sum, a;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> m;
        sum = 0;

        for (j = 0; j < m; j++) {
            cin >> a;
            sum += a;
        }

        cout << sum << endl;
    }

    return 0;
}