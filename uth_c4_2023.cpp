#include<bits/stdc++.h>

using namespace std;

int cal(string s, int a, int b){
    int arr[s.size()+1];
    arr[1] = (s[0] == '0') ? 0 : 1;
    for (int i = 1; i < s.size(); i++){
        if (s[i] == '1'){
            arr[i+1] = (arr[i] == '1' ? arr[i] : 0) + 1;
        }
        else arr[i+1] = 0;
    }
    for (int x : arr) cout << x << " ";
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        cout << cal(s, a, b);
    }
    return 0;
}