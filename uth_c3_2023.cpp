#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    long long a[5], b[5];
    fill_n(a, 5, n/5);
    fill_n(b, 5, m/5);
    for (int i = 1; i <= n % 5; i++) a[i]++;
    for (int i = 1; i <= m % 5; i++) b[i]++;
    cout << a[0]*b[0] + a[1]*b[4] + a[2]*b[3] + a[3]*b[2] + a[4]*b[1];
    return 0;
}