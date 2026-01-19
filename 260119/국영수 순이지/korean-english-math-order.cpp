#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n;
class Student{
    public:
        string name;
        int korean;
        int english;
        int math;
};

bool cmp(const Student& a, const Student& b){
    if(a.korean!=b.korean){
        return a.korean>b.korean;
    }
    if(a.english!=b.english){
        return a.english>b.english;
    }
    return a.math>b.math;
}

int main() {
    cin >> n;
    vector<Student> student(n);

    for (int i = 0; i < n; i++) {
        cin >> student[i].name;
        cin >> student[i].korean;
        cin >> student[i].english;
        cin >> student[i].math;
    }

    // Please write your code here.
    sort(student.begin(),student.end(),cmp);

    for(const auto& val: student){
        cout<<val.name<<' '<<val.korean<<' '<<val.english<<' '<<val.math<<'\n';
    }

    return 0;
}