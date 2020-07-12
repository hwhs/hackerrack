#include <iostream>
#include <set>

using namespace std;

int main()
{
    int q, y, x;
    set<int> s;

    cin >> q;
    while (q--) {
        cin >> y >> x;

        switch (y) {
            case 1:
                s.insert(x);
                break;
            case 2:
                s.erase(x);
                break;
            case 3:
                if (s.find(x) != s.end())
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
                break;
        }
    }

    return 0;
}
