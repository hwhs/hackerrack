#if 1
#include <stdio.h>

int main()
{
    int a;
    long b;
    long long c;
    char d;
    float e;
    double f;

    scanf("%d %ld %lld %c %f %lf", &a, &b, &c, &d, &e, &f);
    printf("%d\n%ld\n%lld\n%c\n%f\n%lf\n", a, b, c, d, e, f);

    return 0;
}
#else
#include <iostream>

using namespace std;

int main()
{
    int a;
    long b;
    long long c;
    char d;
    float e;
    double f;

    cin >> a >> b >> c >> d >> e >> f;
    cout << (int)a << endl
         << (long)b << endl
         << (long long)c << endl
         << (char)d << endl
         << (float)e << endl;
    cout.unsetf(ios::floatfield);
    cout.precision(20);
    cout<< (double)f << endl;

    return 0;
}
#endif
