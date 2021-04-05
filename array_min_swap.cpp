int minSwap(int *arr, int n, int k) {
    int good=0,bad=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            good++;
        }
    }
    for(int i=0;i<good;i++){
        if(arr[i]>k){
            bad++;
        }
    }
    int i=0,j=good-1;
    int ans=INT_MAX;
    while(j<n){
        ans=min(ans,bad);
        j++;
        if(arr[j]>k && j<n){
            bad++;
        }if(arr[i]>k){
            bad--;
        }
        i++;
    }
    if(ans==INT_MAX){
        return 0;
        
    }
    return ans;
}
