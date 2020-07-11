#include <iostream>
#include <sstream>
using namespace std;

class Student {
public:
    void set_age(int n) {
        age = n;
    }
    void set_first_name(string str) {
        first_name = str;
    }
    void set_last_name(string str) {
        last_name = str;
    }
    void set_standard(int n) {
        standard = n;
    }
    int get_age() {
        return age;
    }
    string get_first_name() {
        return first_name;
    }
    string get_last_name() {
        return last_name;
    }
    int get_standard() {
        return standard;
    }
    string to_str() {
        string s, buffer;
        stringstream ss;
        ss << age;
        ss >> buffer;
        ss.clear();
        s += buffer;
        s += "," + first_name + "," + last_name + ",";
        ss << standard;
        ss >> buffer;
        s += buffer + "\n";

        return s;
    }

private:
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main()
{
    int age, standard;
    string first_name, last_name;
    Student st;

    cin >> age >> first_name >> last_name >> standard;

    st.set_age(age);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    st.set_standard(standard);

    cout << st.get_age() << endl;
    cout << st.get_last_name() << ", " << st.get_first_name() << endl;
    cout << st.get_standard() << endl;
    cout << endl;
    cout << st.to_str();

    return 0;
}
