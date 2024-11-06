#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    if (min(min(a, b), c) > 0 && a + b + c >= n) cout << "YES";
    else cout << "NO";
    return 0;
}