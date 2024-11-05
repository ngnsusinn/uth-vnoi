#include<bits/stdc++.h>

using namespace std;

int llen(int n, int &fd){
    int len = 0;
    while (n != 0){
        len++;
        if (n / 10 == 0){
            fd = n;
        }
        n /= 10;
    }
    return len;
}

int main(){
    long n;
    int fd;
    cin >> n;
    int l = llen(n, fd);
    if (l < 2) cout << 1;
    else {
        cout << fixed << setprecision(0) << (fd+1)*pow(10, l-1) - n;
    }
    return 0;
}