#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m, ans = -1;
    cin >> n >> m;
    vector<int> v(n);
    for(auto &i : v){
        cin >> i;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(i != j && j != k && i != k && v[i]+v[j]+v[k] <= m){
                    ans = max(v[i]+v[j]+v[k], ans);
                }
            }
        }
    }
    cout << ans;
    return 0;
}
