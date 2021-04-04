/**
 * CATEGORY: 基本输入输出|搜索算法
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=1016
 * DATE: 2021-04-03
 * LEVEL: C
 * MORE: BFS
 */

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int a;

    while (cin >> a) {
        // 数字池
        vector<int> base;
        for (int i = 1; i <= a; i++) {
            base.push_back(i);
        }

        // test
        for (int i = 0; i < base.size(); i++) {
            cout << base[i] << " ";
        }
    }

    return 0;
}
