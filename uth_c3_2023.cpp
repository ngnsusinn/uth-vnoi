#include<bits/stdc++.h>

using namespace std;

int getnum(int x, int r) {
    if (x % 5 >= r)
        return x - (x % 5 - r);
    else
        return x - (x % 5 + 5 - r);
}

int main(){
    int n, m;
    cin >> n >> m;
    int qn[5], qm[5];
    for (int i = 0; i < 5; i++){
        qn[i] = (n >= 5 ? (getnum(n, i) - 1)/5 + 1 : 1);
        qm[i] = (m >= 5 ? (getnum(m, i) - 1)/5 + 1 : 1);
    }
    if (n < 5){
        qn[0] = 0;
        for (int i = n + 1; i < 5; i++){
            qn[i] = 0;
        }
    }
    if (m < 5){
        qm[0] = 0;
        for (int i = m + 1; i < 5; i++){
            qm[i] = 0;
        }
    }
    int p = qn[0]*qm[0];
    for (int i = 1; i < 5; i++){
        p += qn[i] * qm[5 - i];
    }
    cout << p;
    return 0;
}
