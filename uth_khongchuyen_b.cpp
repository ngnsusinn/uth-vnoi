#include<bits/stdc++.h>

using namespace std;

bool check(map<int, int>q){
    for (auto x : q) if (x.second > 1) return false;
    return true; 
}

int main(){
    int n;
    cin >> n;
    map<int, int>q;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        q[t]++;
    }
    if (check(q)) cout << "YES";
    else cout << "NO";
    return 0;
}