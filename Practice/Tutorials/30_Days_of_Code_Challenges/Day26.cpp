#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int da, ma, ya, de, me, ye;

    cin >> de >> me >> ye;
    cin >> da >> ma >> ya;

    if (ye > ya) {
        cout << "10000" << endl;
    }
    else if ((ye == ya) && (me > ma)) {
        cout << 500*(me-ma) << endl;
    }
    else if ((ye == ya) && (me == ma) && (de > da)) {
        cout << 15*(de-da) << endl;
    }
    else {
        cout << "0" << endl;
    }

    return 0;
}