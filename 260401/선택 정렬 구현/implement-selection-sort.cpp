#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //바깥for: i부터 끝까지 스캔할 i정하기
    for(int i=0;i<n;i++){
        int minIndex=i;
        //안쪽for: j부터 끝까지 스캔하며 가장작은 애 찾아서 i자리 확정
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }

    for(const auto val: arr){
        cout<<val<<' ';
    }
        
    return 0;
}