vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size(),last=0;
        vector<vector<int>> result;
        for(int i=0;i<n;i++){
            if(i==0){
                result.push_back(intervals[i]);
                continue;
            }
            if(result[last][1]>=intervals[i][0] ){
                result[last][1]=max(intervals[i][1],result[last][1]);
            }
            if(result[last][1]<intervals[i][0]){
                last++;
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
