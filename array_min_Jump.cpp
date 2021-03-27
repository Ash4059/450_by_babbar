int minJumps(int arr[], int n){
        if(n==1){
            return 0;
        }
        if(arr[0]==0){
            return -1;
        }
        int maxR=arr[0],jump=1,steps=arr[0];
        for(int i=1;i<n;i++){
            if(i==n-1){
                return jump;
            }
            maxR=max(maxR,i+arr[i]);
            
            steps--;
            if(steps==0){
                jump++;
                if(i>=maxR){
                    return -1;
                }
                steps=maxR-i;
            }
            
                
            
        }
        return jump;
    }
