/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=2005
 * DATE: 2021-04-06
 * LEVEL: C
 */

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int y, m, d;
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (cin >> y && cin.get() && cin >> m && cin.get() && cin >> d) {
        int flag = 0, today = 0;

        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
            flag = 1;
        }

        for (int i = 0; i < m - 1; i++) {
            today += days[i];
        }
        if (flag && m > 2) {
            today += (d + 1);
        } else {
            today += d;
        }

        cout << today << endl;
    }

    return 0;
}
