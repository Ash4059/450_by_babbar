long long maxProduct(int *arr, int n) {
	    long long ans=1,mul=1;
	    for(int i=0;i<n;i++){
	        for(int j=i;j<n;j++){
	            mul*=arr[j];
	            ans=max(ans,mul);
	        }
	        mul=1;
	    }
	    return ans;
	}
