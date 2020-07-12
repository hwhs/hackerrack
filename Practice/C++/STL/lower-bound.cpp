#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, temp, x, q, y;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> y;

        vector<int>::iterator itr = lower_bound(v.begin(), v.end(), y);
        int d = distance(v.begin(), itr);
        if ((*itr) == y)
            cout << "Yes ";
        else
            cout << "No ";
        cout << d+1 << endl;
    }

    return 0;
}
