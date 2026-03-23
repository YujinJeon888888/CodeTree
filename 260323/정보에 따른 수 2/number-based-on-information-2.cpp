#include <climits>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int T, a, b;
char c[100];
int x[100];
//X: 안놓임
vector<char> arr(1000+1,'X');

bool IsInRange(int pos){
    if(pos<1||pos>1000){
        return false;
    }
    return true;
}

bool IsSpecialPos(int pos){
    int ansSDistance=INT_MAX,ansNDistance=INT_MAX;
    int sDistance=0;
    int nDistance=0;
    
    //pos+1부터 ++
    for(int x=pos;x<=1000;x++){
        if(!IsInRange(x)){
            break;
        }
        
        if(arr[x]=='S'){
            ansSDistance=min(ansSDistance,sDistance);
            break;
        }
        sDistance++;
    }
    for(int x=pos;x<=1000;x++){
        if(!IsInRange(x)){
            break;
        }
        
        if(arr[x]=='N'){
            ansNDistance=min(ansNDistance,nDistance);
            break;
        }
        nDistance++;
    }
    //pos-1부터 --
    sDistance=0;
    nDistance=0;
    for(int x=pos;x>0;x--){
        if(!IsInRange(x)){
            break;
        }
        
        if(arr[x]=='S'){
            ansSDistance=min(ansSDistance,sDistance);
            break;
        }
        sDistance++;
    }
    for(int x=pos;x>0;x--){
        if(!IsInRange(x)){
            break;
        }
        
        if(arr[x]=='N'){
            ansNDistance=min(ansNDistance,nDistance);
            break;
        }
        nDistance++;
    }

    
    if(ansSDistance<=ansNDistance){
        return true;
    }
    return false;
}



int main() {
    cin >> T >> a >> b;
    
    
    for (int i = 0; i < T; i++) {
        cin >> c[i] >> x[i];
        arr[x[i]]=c[i];
    }

    // Please write your code here.
    int ans=0;
    for(int i=a;i<=b;i++){
        if(IsSpecialPos(i)){
            ans++;
        }
    }

    cout<<ans;
    
    return 0;
}