#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
    public:
    int maximumDifference;
    // Add your code here
    Difference(vector<int> e)
    {
        elements = e;
    }

    void computeDifference()
    {
        int max, min;
        vector<int>::iterator it;

        if (elements.size() > 0) {
            max = elements.at(0);
            min = elements.at(0);
        }
        for (it = elements.begin(); it != elements.end(); it++) {
            max = ((*it) > max)? (*it): max;
            min = ((*it) < min)? (*it): min;
        }
        //cout << "max=" << max << endl;
        //cout << "min=" << min << endl;
        maximumDifference = max - min;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference << endl;
    
    return 0;
}