#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int min1=INT_MAX,max1=INT_MIN;
    for(int i=0;i<5;i++){
        
        if(min1>arr[i]){
            min1=arr[i];
        }
        if(max1<arr[i]){
            max1=arr[i];
        }
    }
    cout<<arr[4]<<endl;
    cout<<min1<<" "<<max1<<endl;
}
