long ans = INT_MIN;
        long sum = 0;
        int i=0,j=0;
        while(j<N){
            sum += Arr[j];
            if(j-i+1<K){
                j++;
            }
            else if(j-i+1==K){
                ans = max(ans,sum);
                sum -= Arr[i];
                i++; j++;
            }
        }
        return ans;
    }