void sort012(int a[], int n)
    {
        int count_0=0,count_1=0,count_2;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count_0++;
            }
            else if(a[i]==1){
                count_1++;
            }
            else{
                count_2++;
            }
        }
        int i=0;
        while(count_0){
            a[i++]=0;
            count_0--;
        }
        while(count_1){
            a[i++]=1;
            count_1--;
        }
        while(count_2){
            a[i++]=2;
            count_2--;
        }
    }
