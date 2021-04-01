string isSubset(int a1[], int a2[], int n, int m) {
    set<int> arr;
    for(int i=0;i<n;i++){
        arr.insert(a1[i]);
    }
    for(int i=0;i<m;i++){
        if(arr.count(a2[i])==0){
            return "No";
        }
    }
    return "Yes";
}
