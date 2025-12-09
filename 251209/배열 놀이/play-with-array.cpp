#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    vector<int> element;
    int N,Q;
    cin>>N>>Q;
    for(int i=0;i<N;i++){
        int ele;
        cin>>ele;
        element.push_back(ele);
    }

    for(int i=0;i<Q;i++){
        int query;
        cin>>query;
        switch(query){
            case 1:
                {int a;
                cin>>a;
                cout<<element[a-1]<<'\n';
                break;}
            case 2:
                {int b;
                cin>>b;
                int count=1;
                bool find=false;
                for(auto& ele:element){
                    if(ele==b){
                        cout<<count<<'\n';
                        find=true;
                    }
                    count++;
                }
                if(!find){
                    cout<<0<<'\n';
                }
                break;}
            case 3:
                {int s,e;
                cin>>s>>e;
                for(int i=s-1;i<e;i++){
                    cout<<element[i]<<' ';
                }
                cout<<'\n';
                break;}    
        }
    }
    return 0;
}