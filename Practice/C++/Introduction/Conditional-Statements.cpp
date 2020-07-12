#include <iostream>
using namespace std;

string number[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main()
{
    int n;

    cin >> n;

    if (n >= 1 && n <= 9)
        cout << number[n-1];
    else if (n > 9)
        cout << "Greater than 9";
    cout << endl;

    return 0;
}
