#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
class Info{
public:
    string name;
    int height;
    int weight;

};

bool cmp (const Info& a, const Info& b){
    return a.height<b.height;
}

int main() {

    cin >> n;
    vector<Info> info(n);

    for (int i = 0; i < n; i++) {
        cin >> info[i].name;
        cin >> info[i].height;
        cin >> info[i].weight;
    }
    
    sort(info.begin(),info.end(),cmp);


    for(const auto& value :info){
        cout<<value.name<<' '<<value.height<<' '<<value.weight;
        cout<<'\n';
    }

   
    return 0;
}