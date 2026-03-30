#include <iostream>
#include <list>
using namespace std;


list<char> l;

void ProceedOP(const char op, list<char>::iterator &it, const char c){
    if(op=='L'){
        if(it!=l.begin()){
            it--; 
        }
    }
    if(op=='P'){
        l.insert(it,c);
    }
    if(op=='R'){
        if(it!=l.end()){
            it++;
        }
    }
    if(op=='D'){
        if(it!=l.end()){
            it = l.erase(it);
        }
    }   
}

int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;

    list<char>::iterator it;

    for(int i=0;i<n;i++){
        char c;
        cin>>c;

        l.push_back(c);
    }


    it=l.end();

    for(int i=0;i<m;i++){
        char op;
        cin>>op;
        char c;
        if(op=='P'){
            cin>>c;
        }
        ProceedOP(op,it,c);
    }

    for(const char val:l){
        cout<<val;
    }

    return 0;
}