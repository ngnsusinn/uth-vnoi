#include<bits/stdc++.h>

using namespace std;

void check(string s){
    string verify = "olp";
    for (int i = 0; i < s.size(); i++){
        if (int(s[i] >= 65 && int(s[i] <= 90))){
            s[i] += 32;
        }
    }
    if (s == verify) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        check(s);
    }
    return 0;
}