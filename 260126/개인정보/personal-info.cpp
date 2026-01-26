#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student{
    public:
        string name;
        int height;
        double weight;
};

bool cmpByName(const Student& a, const Student& b){
    return a.name<b.name;
}

bool cmpByHeight(const Student& a, const Student& b){
    return a.height>b.height;
}

int main() {
    vector<Student> students(5);
    for (int i = 0; i < 5; i++) {
        cin >> students[i].name >> students[i].height >> students[i].weight;
    }

    // Please write your code here.
    cout << fixed;//소숫점고정
    cout.precision(1);//소숫점이하 1자리
    
    sort(students.begin(),students.end(),cmpByName);
    cout<<"name"<<'\n';
    for(int i=0;i<5;i++){
        cout<<students[i].name<<' '<<students[i].height<<' '<<students[i].weight<<'\n';
    }
    cout<<'\n';

    sort(students.begin(),students.end(),cmpByHeight);
    cout<<"height"<<'\n';
    for(int i=0;i<5;i++){
        cout<<students[i].name<<' '<<students[i].height<<' '<<students[i].weight<<'\n';
    }

    return 0;
}