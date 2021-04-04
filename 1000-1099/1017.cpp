/**
 * CATEGORY: 基本输入输出
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=1017
 * DATE: 2021-04-04
 * LEVEL: C
 * MORE:
 */

#include <iostream>
using namespace std;

int main(void) {
    int N, i, m, n;

    cin >> N;

    for (i = 0; i < N; i++) {
        int cases = 0;  // 不要用 case，那是关键字

        while ((cin >> n >> m) && (m != 0 || n != 0)) {
            int sum = 0;
            cases++;

            for (int a = 1; a < n - 1; a++) {
                for (int b = 2; b < n; b++) {
                    if (a < b) {
                        double temp = (a * a + b * b + m) / (a * b * 1.0);
                        if (temp == (int)temp) {
                            sum++;
                        }
                    }
                }
            }

            cout << "Case " << cases << ": " << sum << endl;
        }

        if (i != N - 1) {
            cout << endl;
        }
    }

    return 0;
}
