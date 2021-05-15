/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=2007
 * DATE: 2021-04-06
 * LEVEL: C
 */

#include <iostream>
using namespace std;

int main(void) {
    int m, n;

    while (cin >> m >> n) {
        int square = 0, cube = 0;

        // 注意判断两个数的大小
        if (m > n) {
            int temp = m;
            m = n;
            n = temp;
        }

        for (int i = m; i <= n; i++) {
            if (i % 2 == 0) {
                square = square + i * i;
            } else {
                cube = cube + i * i * i;
            }
        }

        cout << square << " " << cube << endl;
    }

    return 0;
}
