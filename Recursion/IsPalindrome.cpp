#include <iostream>
using namespace std;

bool isPalindromeString(char ch[], int s, int e) {
    if (s == e || s > e) {
        return true;
    }

    if (ch[s] == ch[e]) {
        bool temp = isPalindromeString(ch, s + 1, e - 1);
        return temp;
    } else {
        return false;
    }
}

int main() {
    string st;
    cin >> st;
    char ch[st.length() + 1];
    strcpy(ch, st.c_str());
    int s = 0;
    int e = st.length() - 1;
    cout << (isPalindromeString(ch, s, e) ? "true" : "false") << endl;
    return 0;
}
