/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=2004
 * DATE: 2021-04-04
 * LEVEL: C
 */

#include <iostream>
using namespace std;

int main(void) {
    int score;

    while (cin >> score) {
        if (score >= 0  && score <= 59) {
            cout << "E" << endl;
        } else if (score >= 60 && score <= 69) {
            cout << "D" << endl;
        } else if (score >= 70 && score <= 79) {
            cout << "C" << endl;
        } else if (score >= 80 && score <= 89) {
            cout << "B" << endl;
        } else if (score >= 90 && score <= 100) {
            cout << "A" << endl;
        } else {
            cout << "Score is error!" << endl;
        }
    }

    return 0;
}
