/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=2003
 * DATE: 2021-04-05
 * LEVEL: C
 */

#include <iostream>
using namespace std;

int main(void) {
    double a;

    while (cin >> a) {
        if (a < 0) {
            a = -a;
        }

        printf("%.2f\n", a);
    }

    return 0;
}
