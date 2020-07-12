#include <iostream>
#include <list>

using namespace std;

#define GMAIL_STR "@gmail.com"

int main(){
    int N;
    list<string> db;
    list<string>::iterator it;

    cin >> N;
    while (N--) {
        string firstName, emailID;

        cin >> firstName >> emailID;
        int index = emailID.find(GMAIL_STR);
        if (index != -1) {
            if (emailID.length() == (index+strlen(GMAIL_STR))) {
                db.insert(upper_bound(db.begin(), db.end(), firstName), firstName);
            }
        }
    }

    for (it = db.begin(); it != db.end(); it++)
        cout << (*it) << endl;
}