/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=2002
 * DATE: 2021-04-05
 * LEVEL: C
 */

#include <iostream>
#define PI 3.1415927
using namespace std;

int main(void) {
    double r, V;

    while(cin >> r) {
        V = 4  * PI * r * r * r / 3;

        printf("%.3f\n", V);
    }

    return 0;
}
