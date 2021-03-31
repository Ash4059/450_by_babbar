int getPairsCount(int arr[], int n, int k) {
        int cnt=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            if(m.find(k-arr[i])!=m.end()){
                cnt+=m[k-arr[i]];
            }
            m[arr[i]]++;
        }
        return cnt;
    }
