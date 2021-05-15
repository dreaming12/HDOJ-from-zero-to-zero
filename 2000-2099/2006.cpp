/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=2006
 * DATE: 2021-04-06
 * LEVEL: C
 */

#include <iostream>
using namespace std;

int main(void) {
    int n, a;

    while (cin >> n) {
        int total = 1;

        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a % 2 != 0) {
                total *= a;
            }
        }

        cout << total << endl;
    }

    return 0;
}
