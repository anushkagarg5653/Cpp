class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int n = a.size();
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2;
        while(s<e){
            if(a[mid + 1] > a[mid]) {
                s = mid + 1;
            }
            else{
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return a[s];
    }
};