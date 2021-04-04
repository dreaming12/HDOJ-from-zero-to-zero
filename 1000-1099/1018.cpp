/**
 * CATEGORY: 基本输入输出|数学题
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=1018
 * DATE: 2021-03-29
 * LEVEL: B
 * MORE: http://acm.hdu.edu.cn/discuss/problem/list.php?problemid=1018
 */

#include <math.h>

#include <iostream>
using namespace std;

int main(void) {
    int n, i, j, a;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> a;
        double d = 1;

        for (j = 2; j <= a; j++) {
            d += log10(j);
        }

        cout << int(d) << endl;
    }

    return 0;
}
