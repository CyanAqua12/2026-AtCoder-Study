#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int H, W;
    cin >> H >> W;
    if(H == 1 && W == 1){
        cout << 0 << endl;
    }
    else if(H == 1){
        for(int i = 0; i < W; i++){
            if(i == 0 || i == W - 1){
                cout << 1 << ' ';
            }
            else{
                cout << 2 << ' ';
            }
        }
    }
    else if (W == 1){
        for(int i = 0; i < H; i++){
            if(i == 0 || i == H - 1){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }
        }
    }
    else{
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                if((i == 0 || i == H - 1) && (j == 0 || j == W - 1)){
                    cout << 2 << ' ';
                }
                else if(i == 0 || i == H - 1 || j == 0 || j == W - 1){
                    cout << 3 << ' ';
                }
                else{
                    cout << 4 << ' ';
                }
            }
            cout << endl;
        }

    }

    return 0;
}