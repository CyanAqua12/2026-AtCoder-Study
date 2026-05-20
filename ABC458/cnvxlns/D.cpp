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

int X;
int A, B;

priority_queue<int> Mheap;
priority_queue<int, vi, greater<int>> mheap;

void insert(int val){
    Mheap.push(val);
    if(!mheap.empty() && Mheap.top() > mheap.top()){
        mheap.push(Mheap.top());
        Mheap.pop();
    }
    if(Mheap.size() > mheap.size() + 1){
        mheap.push(Mheap.top());
        Mheap.pop();
    }
    if(Mheap.size() < mheap.size()){
        Mheap.push(mheap.top());
        mheap.pop();
    }
}

void init(){
    cin >> X;
    insert(X);
}

void solve(){
    cin >> A >> B;
    insert(A);
    insert(B);
    cout << Mheap.top() << endl;
}

int32_t main(){
    cin.tie(0)->sync_with_stdio(0);
    init();
    int t = 1;
    cin >> t;
    for(auto i: range(t)){
        solve();
    }
    return 0;
}
