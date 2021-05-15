/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=2009
 * DATE: 2021-04-07
 * LEVEL: C
 */

#include <math.h>

#include <iostream>
using namespace std;

int main(void) {
    int m;
    double n;

    while (cin >> n >> m) {
        double item = 0, sum = n;

        for (int i = 0; i < m - 1; i++) {
            item = sqrt(n);
            n = item;  // n不能为int
            sum += item;
        }

        printf("%.2f\n", sum);
    }

    return 0;
}
