#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp= *a;
    *a = *b;
    *b =temp;
}
void heapify(int *arr,int  n,int i){
    int l=2*i,r=2*i+1,largest=i;
    if(l<=n && arr[l]>arr[largest]){
        largest=l;
    }if(r<=n && arr[r]>arr[largest]){
        largest=r;
    }if(largest!=i){
        swap(&arr[i],&arr[largest]);
        if(largest==r && r>=n/2){
            heapify(arr,n,r);
        }else if(largest==l && l>=n/2){
            heapify(arr,n,l);
        }
    }
}

int main() {
    int n;
    cin>>n;
    int* arr=new int[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=n/2;i>=1;i--){
        heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    delete [] arr;
}
