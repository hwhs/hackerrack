#include <iostream>
using namespace std;

int update(int *a, int *b);

int main()
{
    int a, b;

    cin >> a >> b;
    update(&a, &b);
    cout << a << endl << b << endl;

    return 0;
}

int update(int *a, int *b)
{
    int c = *a + *b;
    int d = abs(*a - *b);
    *a = c;
    *b = d;

    return 0;
}
