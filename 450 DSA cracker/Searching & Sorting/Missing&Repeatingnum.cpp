//////////////////////     METHOD 1       //////////

vector<int> find_missing_repeating(vector<int> array)
{
    int n = array.size() + 1;

    vector<int> substitute(n, 0); // initializing the substitute array with 0 of size n+1.

    vector<int> ans;              // initializing the answer  array .

    for (int i = 0; i < array.size(); i++)
    {
        substitute[array[i]]++;
    }

    for (int i = 1; i <= array.size(); i++)
    {
        if (substitute[i] == 0 || substitute[i] > 1)
        {
            ans.push_back(i);
        }
    }

    return ans;
}

//////////////////////     METHOD 2      /////////////

        int x =0;
       for(int i =0; i<n; i++){
           x ^= arr[i];
           x ^= (i+1);
}
            //set differencce
            int setbit = x & ~(x-1);
            int* ans;
            ans[0] = 0;
            ans[1] = 0;
            for(int i=0; i<n; i++ ){
                if(arr[i]&setbit)
                    ans[0] ^= arr[i];
                else
                ans[1] ^= arr[i];
                if((i+1) & setbit)
                ans[0] ^= (i+1);
                else
                ans[1] ^= (i+1);
            }
            
            for(int i =0; i<n; i++){
                if(arr[i] == ans[0])break;
                if(arr[i] == ans[1]){
                    int temp = ans[0];
                    ans[0] = ans[1];
                    ans[1] = temp;
                    break;
                }
                
            }
            return ans;
            
            