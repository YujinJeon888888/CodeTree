#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& arr, int n,int i){
    int largest=i;
    int l=i*2;
    int r=i*2+1;

    if(l<=n&&arr[l]>arr[largest]){
        largest=l;
    }
    if(r<=n&&arr[r]>arr[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void heap_sort(vector<int>& arr,int n){
    //max heap 만들기
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }

    for(int i=n; i>=2; i--){
        //끝자리 확정
        swap(arr[1],arr[i]);
        //확정 후 다시 max heap만들기
        heapify(arr,i-1,1);
    }

}

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    vector<int> arr(n+1,0);
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }
    heap_sort(arr,n);
    for(const auto val: arr){
        if(val==0){
            continue;
        }
        cout<<val<<' ';
    }
    return 0;
}