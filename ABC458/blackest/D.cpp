#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, q;
    cin >> x >> q;
    priority_queue<int> pq, inverse_pq;
    pq.push(x);
    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        if(pq.top() < a){
            inverse_pq.push(-a);
        }
        else{
            int top = pq.top();
            pq.pop();
            pq.push(a);
            inverse_pq.push(-top);
        }
        if(pq.size() < inverse_pq.size()){
             int top = inverse_pq.top();
             inverse_pq.pop();
             pq.push(-top);
        }
        if(pq.top() > b){
            int top = pq.top();
            pq.pop();
            pq.push(b);
            inverse_pq.push(-top);
        }
        else{
            inverse_pq.push(-b);
        }
        if(pq.size() < inverse_pq.size()){
             int top = inverse_pq.top();
             inverse_pq.pop();
             pq.push(-top);
        }
        cout << pq.top() << endl;

    }    
    return 0;
}