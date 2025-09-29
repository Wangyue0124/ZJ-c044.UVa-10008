#include <iostream>
#include <cctype>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<int>tal(26, 0);
    int n, max;
    string s;
    cin >> n;
    cin.ignore();
    while (n--) {
        getline(cin, s);
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                char ch = tolower(s[i]);
                tal[ch - 'a']++;
            }
        }
    }
    max = *max_element(tal.begin(), tal.end());
    while (max) {
        for (int i = 0; i <= 25; i++) {
            char ch = 'A' + i;
            if (tal[i] == max) cout << ch << " " << max<<"\n";
        }
        max--;
    }
    return 0;
}

