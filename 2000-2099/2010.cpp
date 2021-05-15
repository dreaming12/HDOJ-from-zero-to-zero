/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=2010
 * DATE: 2021-04-07
 * LEVEL: C
 */

#include <iostream>
using namespace std;

int main(void) {
    int m, n;

    while (cin >> m >> n) {
        int a;
        int flag = 0;  // 范围内是否有水仙花数

        for (int i = m; i <= n; i++) {
            int temp = 0, original = i, k = i;  // !!!

            while (k > 0) {
                a = k % 10;
                temp += a * a * a;
                k = k / 10;
            }

            if (temp == original) {
                if (flag == 1) {
                    cout << " ";
                }
                cout << temp;
                flag = 1;
            }
        }

        if (flag == 0) {
            cout << "no";
        }

        cout << endl;
    }

    return 0;
}
