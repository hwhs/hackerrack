#include <iostream>
#include <vector>

using namespace std;


class Person{
    protected:
        string firstName;
        string lastName;
        int id;
    public:
        Person(string firstName, string lastName, int identification){
            this->firstName = firstName;
            this->lastName = lastName;
            this->id = identification;
        }
        void printPerson(){
            cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
        }
    
};

class Student :  public Person{
    private:
        vector<int> testScores;  
    public:
        /*  
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstName, string lastName, int id, vector<int> scores):Person(firstName, lastName, id)
        {
            testScores = scores;
        }

        /*  
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate()
        {
            int n = (int)testScores.size();
            float a = 0.0;
            char ret = 'T';

            for (int i = 0; i < n; i++)
                a += testScores.at(i);
            a /= n;

            if (a >= 90)
                ret = 'O';
            else if (a >= 80)
                ret = 'E';
            else if (a >= 70)
                ret = 'A';
            else if (a >= 55)
                ret = 'P';
            else if (a >= 40)
                ret = 'D';

            return ret;
        }
};

int main() {
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for(int i = 0; i < numScores; i++){
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}