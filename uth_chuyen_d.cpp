#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int>q(n, 1);
    for (int i = 0; i < n; i++){
        if (s[i] == 'R'){
            q[i+1] += q[i];
            q[i] = 0;
        }
        else {
            q[i-1] += q[i];
            q[i] = 0;
        }
    }
    for (int x : q) cout << x << " ";
    return 0;
}