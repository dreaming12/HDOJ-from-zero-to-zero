/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=2008
 * DATE: 2021-04-06
 * LEVEL: C
 */

#include <iostream>
using namespace std;

int main(void) {
    int n;
    // 有小数，不能用int
    double a;

    while (cin >> n && n != 0) {
        int x = 0, y = 0, z = 0;

        for (int i = 0; i < n; i++) {
            cin >> a;

            if (a > 0) {
                z++;
            } else if (a < 0) {
                x++;
            } else {
                y++;
            }
        }

        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}
