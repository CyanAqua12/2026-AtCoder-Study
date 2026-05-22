#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll sum = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'C'){
            sum += 1 + min(i, (int)s.length() - 1 - i);
        }
    }
    cout << sum << endl;

    return 0;
}