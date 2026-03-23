#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    int ans=0;
    //k
    for(int i=1;i<=100;i++){
        int count=0;
        //ai,aj
        for(int ai=0;ai<n;ai++){
            for(int aj=0;aj<n;aj++){
                if(ai==aj){
                    continue;
                }
                if(ai-i==aj+i){
                    count++;
                }
            }
        } 
        ans=max(count,ans);
    }

    cout<<ans;

    return 0;
}