#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Student{
    public:
string name;
int height;
int weight;
}

int n;

bool cmp(const Student& a, const Student& b){
    if(a.height!=b.height){
        return a.height<b.height;
    }

    return a.weight>b.weight;
}

int main() {
    cin >> n;
    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].height >> students[i].weight;
    }

    // Please write your code here.
    sort(students.begin(),students.end(),cmp);

    for (int i=0;i<n;i++){
        cout<<students[i].name<<' '<<students[i].height<<' '<<students[i].weight<<'\n';
    }
    
    return 0;
}