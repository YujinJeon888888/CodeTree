#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student{
    public:
        int N;
        int h;
        int w;
};

bool cmp(const Student& a, const Student& b){
    if(a.h!=b.h){
        return a.h>b.h;
    }
    if(a.w!=b.w){
        return a.w>b.w;
    }
    return a.N<b.N;
    
}

int main() {
    int n;
    cin >> n;
    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cin >> students[i].h>>students[i].w;
        students[i].N = i+1;
    }

    // Please write your code here.
    sort(students.begin(),students.end(),cmp);

    for(int i=0;i<n;i++){
        cout<<students[i].h<<' '<<students[i].w<<' '<<students[i].N<<'\n';
    }
    return 0;
}
