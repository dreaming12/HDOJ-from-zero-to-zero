/**
 * CATEGORY: 基本输入输出|超大数据处理
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=1013
 * DATE: 2021-03-29
 * LEVEL: C
 * MORE: ！！！ - 有超出数据范围的超大数据
 */

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int a, temp;
    string number;

    while (getline(cin, number) && number != "0") {
        int sum = 0;
        int root = 0;

        /**
         * 对超出数据范围的超大数据进行处理
         */
        for (char ch : number) {
            sum += (ch - 48);
        }

        a = sum;

        /**
         * 判断是否需要处理
         */
        if (a < 10) {
            root = a;
        }
        while (a > 9) {
            /**
             * 处理后a=0
             */
            while (a != 0) {
                temp = a % 10;
                root += temp;
                a = a / 10;
            }

            /**
             * 是否需要继续处理
             */
            if (root > 9) {
                a = root;
                root = 0;
            }
        }

        cout << root << endl;
    }

    return 0;
}
