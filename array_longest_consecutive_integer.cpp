int findLongestConseqSubseq(int arr[], int N)
    {
        set<int> uniq;
        int count=0,temp=0,ans=1,temp2=0;
        for(int i=0;i<N;i++){
            uniq.insert(arr[i]);
        }
        set<int>::iterator itr;
        for (itr = uniq.begin(); itr != uniq.end(); itr++)
        {
            count=0;
            temp= *itr;
            temp2=temp;
            while(uniq.count(temp--)){
                count++;
                uniq.erase(temp);
            }
            while(uniq.count(++temp2)){
                count++;
                uniq.erase(temp2);
            }
            ans=max(count,ans);
        }
        return ans;
    }
