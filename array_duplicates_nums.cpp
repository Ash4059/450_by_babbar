int findDuplicate(vector<int>& nums) {
        int arr[30001]={0};
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(arr[nums[i]]==1){
                return nums[i];
            }
            arr[nums[i]]=1;
        }
        return 0;
    }
