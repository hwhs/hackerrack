#include <iostream>
#include <vector>

using namespace std;

class Person {
public:
    int age;
    Person(int initialAge);
    void amIOld();
    void yearPasses();
};

Person::Person(int initialAge)
{
    age = initialAge;
    if (age <= 0) {
        cout << "Age is not valid, setting age to 0.\n";
        age = 0;
    }
}

void Person::amIOld()
{
    if (age < 13)
        cout << "You are young.\n";
    else if (age < 18)
        cout << "You are a teenager.\n";
    else
        cout << "You are old.\n";
}

void Person::yearPasses()
{
    age += 1;
}

int main()
{
	int T, i;
    vector<int> initialAge;

    cin >> T;
    for (i = 0; i < T; i++) {
        int temp;
        cin >> temp;
        initialAge.push_back(temp);
    }

    for (i = 0; i < T; i++) {
        cout << endl;
        Person person(initialAge.at(i));
        person.amIOld();
        person.yearPasses();
        person.yearPasses();
        person.yearPasses();
        person.amIOld();
    }

    return 0;
}