#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
class Student{
    public:
    string name;
    int score1;
    int score2;
    int score3;
};

bool cmp(const Student& a, const Student& b){
    return a.score1+a.score2+a.score3<b.score1+b.score2+b.score3;
}

int main() {
    cin >> n;
    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cin >> students[i].name;
        cin >> students[i].score1;
        cin >> students[i].score2;
        cin >> students[i].score3;
    }

    // Please write your code here.
    sort(students.begin(),students.end(),cmp);

    for(const auto& val: students){
        cout<<val.name<<' '<<val.score1<<' '<<val.score2<<' '<<val.score3<<'\n';
    }
    
    return 0;
}