bool isPossSol(vector<int> &stalls, int k, int mid){
    int cowCount = 1;
    int LastPos = stalls[0];
    for(int i = 0; i<stalls.size(); i++){
        if(stalls[i] - LastPos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            LastPos = stalls[i];
        }
        
    }
    return false;
     
}

int aggressiveCows(vector<int> &stalls, int k)
{
    int s = 0;
    int maxi = 0;
    sort(stalls.begin(), stalls.end());
    for(int i = 0; i<stalls.size(); i++){
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(isPossSol(stalls, k,mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}