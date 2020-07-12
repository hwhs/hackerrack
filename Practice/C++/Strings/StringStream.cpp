#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string str;
    stringstream ss;
    vector<int> vi;
    int n;
    char c;

    cin >> str;
    ss << str;
    while (ss) {
        ss >> n >> c;
        vi.push_back(n);
    }
    for (int i = 0; i < vi.size(); i++)
        cout << vi.at(i) << endl;

    return 0;
}
