/**
 * CATEGORY: 基本输入输出
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=1094
 * DATE: 2021-03-28
 * LEVEL: C
 */

#include <iostream>
using namespace std;

int main(void) {
    int n, i, sum, a;

    while (cin >> n) {
        sum = 0;

        for (i = 0; i < n; i++) {
            cin >> a;
            sum += a;
        }

        cout << sum << endl;
    }

    return 0;
}
