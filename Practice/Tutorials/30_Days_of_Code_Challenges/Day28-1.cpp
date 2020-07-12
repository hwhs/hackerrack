#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

#define GMAIL_STR "@gmail.com"

typedef struct {
    string firstName;
    string emailID;
}elem;

int main(){
    int N;
    list<elem> db;
    list<elem>::iterator it;

    cin >> N;
    while (N--) {
        string firstName, emailID;
        elem e;

        cin >> firstName >> emailID;
        int index = emailID.find(GMAIL_STR);
        if (index != -1) {
            if (emailID.length() == (index+strlen(GMAIL_STR))) {
                e.firstName = firstName;
                e.emailID = emailID;

                if (db.size() == 0) {
                    db.push_back(e);
                }
                else {
                    int flag = 0;
                    for (it = db.begin(); it != db.end(); it++) {
                        if (firstName < it->firstName) {
                            db.insert(it, e);
                            flag++;
                            break;
                        }
                    }
                    if (!flag) {
                        db.insert(it, e);
                    }
                }
            }
        }
    }

    for (it = db.begin(); it != db.end(); it++)
        cout << it->firstName << endl;
//        cout << it->firstName << "/" << it->emailID << endl;
}