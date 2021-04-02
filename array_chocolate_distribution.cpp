long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    if(n==m){
        return a[n-1]-a[0];
    }
    long long ans=INT_MAX,diff;
    for(long long i=0;i+m-1<n;i++){
        diff=a[i+m-1]-a[i];
        ans=min(ans,diff);
    }
    return ans;
}
