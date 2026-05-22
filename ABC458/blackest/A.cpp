#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, s2;
    int n;
    cin >> s >> n;
    s[s.length() - n] = '\0';
    printf("%s\n", &s[n]);

    return 0;
}