/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=2039
 * DATE: 2021-04-07
 * LEVEL: C
 */

#include <iostream>
using namespace std;

int main(void) { 
    double M, A, B, C;
    cin >> M;

    for (int i = 0; i < M; i++) {
        cin >> A >> B >> C;

        if (A + B > C && A + C > B && B + C > A) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
