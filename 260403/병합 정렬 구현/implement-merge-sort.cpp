#include <iostream>
#include <vector>

using namespace std;
vector<int> temp;

void merge(vector<int> &arr, int start,int middle, int end){
    int i=start;
    int j=middle+1;
    int k=start;
    
    while(i<=middle && j<=end){
        if(arr[i]>arr[j]){
            temp[k++]=arr[j++];
        }
        else{
            temp[k++]=arr[i++];
        }
    }

    //남은거처리
    while(i<=middle){
        temp[k++]=arr[i++];
    }
    while(j<=end){
        temp[k++]=arr[j++];
    }

    //옮기기
    for(int i=start;i<=end;i++){
        arr[i]=temp[i];
    }

}

void merge_sort(vector<int> &arr,int start,int end){
    //base condition
    if(start<end){
        int middle=(start+end)/2;
        //왼쪽,오른쪽으로 쪼개기
        merge_sort(arr,start,middle);
        merge_sort(arr,middle+1,end);
        //합치기
        merge(arr,start,middle,end);
    }
    
}





int main() {
    // Please write your code here.
    int n;
    cin>>n;
    vector<int> arr(n);
    temp.resize(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    merge_sort(arr,0,arr.size()-1);

    for(const auto val: arr){
        cout<<val<<' ';
    }

    return 0;
}