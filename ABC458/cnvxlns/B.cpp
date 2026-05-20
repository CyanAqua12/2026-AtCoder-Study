#include<bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using tiii = tuple<int, int, int>;
using vpii = vector<pii>;

auto range(auto start, auto end) {
    return std::views::iota(start, end);
}

auto range(auto end) {
    return std::views::iota(decltype(end){0}, end);
}

constexpr int inf = 4e18;
constexpr int MOD = 1e9 + 7;

const vpii drc = {{1, 0}, {0, -1}, {-1, 0}, {0, 1}};

pii operator+(pii A, pii B){
    return {A.first + B.first, A.second + B.second};
}
pii operator-(pii A, pii B){
    return {A.first - B.first, A.second - B.second};
}

int H, W;

void init(){
    cin >> H >> W;
    if(H == 1 && W == 1){
        cout << 0 << endl;
    }else if(H == 1){
        for(auto i: range(W)){
            if(i == 0 || i == W - 1){
                cout << 1 << " ";
            }else{
                cout << 2 << " ";
            }
        }
    }else if(W == 1){
        for(auto i: range(H)){
            if(i == 0 || i == H - 1){
                cout << 1 << endl;
            }else{
                cout << 2 << endl;
            }
        }
    }else{
        for(auto r: range(H)){
            for(auto c: range(W)){
                if(r == 0 || r == H - 1){
                    if(c == 0 || c == W - 1){
                        cout << 2 << " ";
                    }else{
                        cout << 3 << " ";
                    }
                }else if(c == 0 || c == W - 1){
                    cout << 3 << " ";
                }else{
                    cout << 4 << " ";
                }
            }
            cout << endl;
        }
    }

}

void solve(){
    
}

int32_t main(){
    cin.tie(0)->sync_with_stdio(0);
    init();
    int t = 1;
    // cin >> t;
    for(auto i: range(t)){
        solve();
    }
    return 0;
}
