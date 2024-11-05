#include<bits/stdc++.h>

using namespace std;

string cung(int x, string y){
    map<string, int>mon = {{"Jan", 1}, {"Feb", 2}, {"Mar", 3}, {"Apr", 4}, {"May", 5}, {"Jun", 6},
                            {"Jul", 7}, {"Aug", 8}, {"Sep", 9}, {"Oct", 10}, {"Nov", 11}, {"Dec", 12}};
    int m = mon[y];
    if ((m == 3 && x >= 21) || (m == 4 && x <= 20)) return "Aries";
    if ((m == 4 && x >= 21) || (m == 5 && x <= 20)) return "Taurus";
    if ((m == 5 && x >= 21) || (m == 6 && x <= 21)) return "Gemini";
    if ((m == 6 && x >= 22) || (m == 7 && x <= 22)) return "Cancer";
    if ((m == 7 && x >= 23) || (m == 8 && x <= 22)) return "Leo";
    if ((m == 8 && x >= 23) || (m == 9 && x <= 21)) return "Virgo";
    if ((m == 9 && x >= 22) || (m == 10 && x <= 22)) return "Libra";
    if ((m == 10 && x >= 23) || (m == 11 && x <= 22)) return "Scorpio";
    if ((m == 11 && x >= 23) || (m == 12 && x <= 21)) return "Sagittarius";
    if ((m == 12 && x >= 22) || (m == 1 && x <= 20)) return "Capricorn";
    if ((m == 1 && x >= 21) || (m == 2 && x <= 19)) return "Aquarius";
    if ((m == 2 && x >= 20) || (m == 3 && x <= 20)) return "Pisces";
}

int main(){
    int n;
    cin >> n;
    for (int i = 0 ; i < n; i++){
        int x;
        string y;
        cin >> x >> y;
        cout << cung(x, y) << "\n";
    }
    return 0;
}