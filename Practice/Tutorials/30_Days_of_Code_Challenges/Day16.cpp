#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    cin >> s;
    try {
        cout << stoi(s) << endl;
    }
    catch (exception e) {
        cout << "Bad String" << endl;
    }

    return 0;
}