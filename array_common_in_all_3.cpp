bool binarySearch(int arr[],int l,int r,int x){
           if(r>=l){
               int mid=l+(r-l)/2;
               if(arr[mid]==x){
                   return true;
               }
               if(arr[mid]>x){
                   return binarySearch(arr,l,mid-1,x);
               }
               else{
                   return binarySearch(arr,mid+1,r,x);
               }
           }
           return false;
       }
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            set<int> res;
            for(int i=0;i<n1;i++){
                if(binarySearch(B,0,n2-1,A[i]) && binarySearch(C,0,n3-1,A[i])){
                    res.insert(A[i]);
                }
            }
            vector<int> ans;
            set<int >::iterator itr;
            for(itr=res.begin();itr!=res.end();itr++){
                ans.push_back(*itr);
            }
            return ans;
        }
