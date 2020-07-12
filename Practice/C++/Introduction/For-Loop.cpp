#include <iostream>
using namespace std;

string number[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main()
{
    int a, b;

    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i <= 9 && i >= 1)
            cout << number[i-1];
        else if (i & 0x1UL)
            cout << "odd";
        else
            cout << "even";
        cout << endl;
    }

    return 0;
}
