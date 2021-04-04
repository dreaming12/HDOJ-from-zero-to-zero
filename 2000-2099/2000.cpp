/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=2000
 * DATE: 2021-04-04
 * LEVEL: C
 */

#include <iostream>
using namespace std;

int main(void) {
    char a, b, c;

    while (cin >> a >> b >> c) {
        char x, y, z;

        if (a > b) {
            if (a > c) {
                z = a;
                if (b > c) {
                    y = b;
                    x = c;
                } else {
                    y = c;
                    x = b;
                }
            } else {
                x = b;
                y = a;
                z = c;
            }
        } else {
            if (a > c) {
                x = c;
                y = a;
                z = b;
            } else {
                x = a;
                if (b > c) {
                    y = c;
                    z = b;
                } else {
                    y = b;
                    z = c;
                }
            }
        }

        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}
