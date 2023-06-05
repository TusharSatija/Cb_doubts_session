#include <iostream>
using namespace std;

void reverseString(string& s, int i, int e) {
    if (i>e) {
        return;
    }
    char temp = s[i];
    s[i] = s[e];
    s[e] = temp;
    reverseString(s, i + 1, e - 1);
}

int main() { 
    string s = "abcdef";
    int e = s.size() - 1;
    reverseString(s,0, e);
    cout << s << endl;
    return 0;
}