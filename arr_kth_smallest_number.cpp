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
    int n,k;
    cin>>n>>k;
    int* arr=new int[n+1];
    int* heap=new int[k+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        
    }
    for(int i=1;i<=k;i++){
        heap[i]=arr[i];
    }
    for(int i=k/2;i>=1;i--){
        heapify(heap,k,i);
    }
    for(int i=k+1;i<=n;i++){
        if(arr[i]<heap[1]){
            heap[1]=arr[i];
            heapify(heap,k,1);
        }
    }
    cout<<heap[1]<<endl;
    delete [] heap;
    delete [] arr;
}
