#include <iostream>
using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;
    cout << a.length() << " " << b.length() << endl;
    cout << a+b << endl;

    cout << b.at(0);
    for (int i = 1; i < a.length(); i++)
        cout << a.at(i);
    cout << " ";

    cout << a.at(0);
    for (int i = 1; i < b.length(); i++)
        cout << b.at(i);
    cout << endl;

    return 0;
}
