class Solution {
    public:
    vector <int> commonElements(int a[],int b[], int c[], int n1,int n2, int n3){
        int i,j,k;
        i = j = k =0;
        vector<int> ans;

        int prev1,prev2,prev3;
        prev1 = prev2 = prev3 = INT_MIN;

        while( i <n1 &&j <n2 k && n3){
            while(a[i] == prev1 && i <n1)
            i++;
            while(b[j] == prev2 && j<n2)
            j++;
            while(c[k] == prev3 && k<n3)
            k++;

            if(a[i] == b[j] && b[j] == c[k]){
                ans.push_back(a[i]);
                prev1 = a[i++];
                prev2 = a[j++];
                prev3 = a[k++];
            }
            else if(a[i] < b[j]){
                prev1 = a[i++];
            }
            else if(b[j] < c[k]){
                prev2 = a[j++];
            }
            else
                prev3 = c[k++];
        }
    }
    return ans;
}