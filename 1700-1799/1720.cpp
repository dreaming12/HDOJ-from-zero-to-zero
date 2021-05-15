/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=1720
 * DATE: 2021-04-08
 * LEVEL: C
 */

#include <iostream>
using namespace std;

int main(void) {
    int A, B;

    while (scanf("%x %x", &A, &B) != EOF) {
        printf("%d\n", A + B);
    }

    return 0;
}
