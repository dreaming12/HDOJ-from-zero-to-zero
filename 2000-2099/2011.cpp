/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=2011
 * DATE: 2021-04-07
 * LEVEL: C
 */

#include <iostream>
using namespace std;

int main(void) {
    int m, n;

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> n;
        double sum = 0;
        int flag = -1;

        for (int j = 1; j <= n; j++) {
            flag = -flag;
            sum += flag * 1.0 / j;  // 不能是1
        }

        printf("%.2f\n", sum);
    }

    return 0;
}
