#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    map<int, int>qn, qm;
    qn[0] = (int)(n/5);
    qm[0] = (int)(m/5);
    for (int i = 1; i < 5; i++){
        qn[i] = (n/5) + (n%5>=i ? 1 : 0);
        qm[i] = (m/5) + (m%5>=i ? 1 : 0);
    }
    int sum = qn[0]*qm[0];
    for (int i = 1; i < 5; i++){
        sum += qn[i]*qm[5-i];
    }
    cout << sum << '\n';
    return 0;
}