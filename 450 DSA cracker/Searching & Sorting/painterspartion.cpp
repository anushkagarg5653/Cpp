bool isPossible(vector<int> &arr, int n, int k, int mid){
    int unitSum = 0;
    int painters = 1;
    
    for(int i = 0; i<arr.size(); i++){
        if(unitSum + arr[i] <= mid){
            unitSum += arr[i];
        }
        else{
            painters++;
            if(painters > k || arr[i] > mid){
                return false;
            }
            unitSum = arr[i];
            if(painters > k){
                return false;
            }
        }
        
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0 ;
    int sum = 0;
    for(int i = 0; i<boards.size(); i++){
        sum += boards[i];
    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;
    int n = boards.size();
    
    while(s<=e){
        if(isPossible(boards,n, k, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}