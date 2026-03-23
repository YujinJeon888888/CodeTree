#include <iostream>
#include <algorithm>
using namespace std;

int N, C, G, H;
int Ta[1000], Tb[1000];

int Calculate(int ta, int tb, int degree){
    int val;
    
    if(degree<ta){
        val = C;
    }
    else if(degree>=ta&&degree<=tb){
        val =  G;
    }
    else if(degree>tb){
        val =  H;
    }

    return val;
}

int main() {
    cin >> N >> C >> G >> H;

    for (int i = 0; i < N; i++) {
        cin >> Ta[i] >> Tb[i];
    }

    // Please write your code here.
    int ans=-1;
    //모든 온도에 대해,
    for(int temperature=0;temperature<=1000;temperature++){
        int sum=0;
        //N개의 ta tb를 넣고
        for(int i=0;i<N;i++){
            sum+=Calculate(Ta[i],Tb[i],temperature);    
        }
        //max갱신
        ans=max(sum,ans);
    } 
    
    cout<<ans;

    return 0;
}