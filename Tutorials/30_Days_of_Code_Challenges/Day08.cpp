#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    string name;
    long phone;
    map<string, long> pBook;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> phone;
        pBook[name] = phone;
    }

    while (cin >> name) {
        if (pBook.find(name) != pBook.end())
            cout << name << "=" << pBook.find(name)->first << "/"<< pBook.find(name)->second << endl;
        else
            cout << "Not found" << endl;
    }

    return 0;
}

#if 0  //timeout
typedef struct{
    string name;
    string phone;
}person;

int main()
{
    int n;
    person *pp;
    string s;

    cin >> n;
    //pp = (person *)malloc(sizeof(person) * n);
    pp = new person[n];
    for (int i = 0; i < n; i++) {
        cin >> pp[i].name;
        cin >> pp[i].phone;
    }

//    for (int i = 0; i < n; i++)
//        cout << pp[i].name << "/" << pp[i].phone << endl;

    while (cin >> s) {
        int flag = 0;
        for (int i = 0; i < n; i++) {
            if (s == pp[i].name) {
                cout << pp[i].name << "=" << pp[i].phone << endl;
                flag++;
                break;
            }
        }
        if (!flag)
            printf("Not found\n");
    }
    return 0;
}
#endif