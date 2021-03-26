int maxSubarraySum(int arr[], int n){
        
        int ans=INT_MIN,res=0;
        for(int i=0;i<n;i++){
            res=res+arr[i];
            ans=max(res,ans);
            if(res<0){
                res=0;
            }
        }
        return ans;
    }
