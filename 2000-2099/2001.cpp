/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=2001
 * DATE: 2021-04-05
 * LEVEL: C
 */

#include <math.h>

#include <iostream>
using namespace std;

int main(void) {
    double a, b, c, d, distance;

    while (cin >> a >> b >> c >> d) {
        distance = sqrt(pow((a - c), 2) + pow((b - d), 2));

        printf("%.2f\n", distance);
    }

    return 0;
}
