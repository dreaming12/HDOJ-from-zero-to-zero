/**
 * CATEGORY:
 * FROM: http://acm.hdu.edu.cn/showproblem.php?pid=1062
 * DATE: 2021-04-08
 * LEVEL: C
 */
// TEMP - PE
#include <algorithm>
#include <iostream>
#include <sstream>  // 25行需要
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int T;
    cin >> T;
    getchar();  // 获取数字后的换行符

    for (int i = 0; i < T; i++) {
        string line, word;
        vector<string> words;

        // 获取句子后通过空格分割单词，反转后将其添加到words中
        getline(cin, line);
        istringstream record(line);
        while (record >> word) {
            reverse(word.begin(), word.end());
            words.push_back(word);
        }

        for (int j = 0; j < words.size(); j++) {
            cout << words[j];
            if (j != words.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
