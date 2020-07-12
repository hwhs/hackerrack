#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t, n, npflag;
    //vector<int> ptable;

    //ptable.push_back(0);
    //ptable.push_back(1);
    //ptable.push_back(1);

    cin >> t;
    while (t--) {
        cin >> n;

        npflag = 0;
        if ((n == 1) || (n > 2 && (n & 0x1) == 0)) {
            npflag = 1;
        }
        else {
            int s = sqrt(n);
            for (int i = 2; i <= s; i++) {
                if (n%i == 0) {
                    npflag++;
                    break;
                }
            }
        }

        if (npflag)
            cout << "Not prime" << endl;
        else
            cout << "Prime" << endl;
    }

    return 0;
}