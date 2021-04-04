/**
 * CATEGORY: 基本输入输出|数学题
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=1001
 * DATE: 2021-04-04
 * LEVEL: C
 * MORE: 利用高斯求和公式时注意运算符顺序
 */

#include <iostream>
using namespace std;

int main(void) {
    int n;

    while (cin >> n) {
        int sum = 0;

        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        cout << sum << endl << endl;
    }

    return 0;
}
