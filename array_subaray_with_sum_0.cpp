bool subArrayExists(int arr[], int n)
    {
        set<int> sum;
        sum.insert(0);
        int add=0;
        for(int i=0;i<n;i++){
            add+=arr[i];
            
            if(sum.count(add)){
                return true;
            }
            sum.insert(add);
            
        }
        return false;
    }
