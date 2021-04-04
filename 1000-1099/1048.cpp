/**
 * CATEGORY: 基本输入输出
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=1048
 * DATE: 2021-03-29
 * LEVEL: C
 */

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string start, message, end;

    getline(cin, start);
    while (start == "START") {
        getline(cin, message);
        getline(cin, end);

        /** 
         * ASCII： A - 65
         */
        for (char ch : message) {
            if (ch >= 'A' && ch <= 'E') {
                ch = ch - 5 + 26;
            } else if (ch >= 'F' && ch <= 'Z') {
                ch = ch - 5;
            }
            printf("%c", ch);
        }
        cout << endl;

        getline(cin, start);
    }

    return 0;
}
