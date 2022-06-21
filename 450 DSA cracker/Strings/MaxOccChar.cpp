 char getMaxOccuringChar(string str)
    {
        int arr[26] = {0};
        
        for(int i = 0; i<str.length(); i++){
            char ch = str[i];
            int num = 0;
            num = ch - 'a';
            arr[num]++;
        }
        
        int maxi = -1, ans = 1;
        for(int i = 0 ; i<26; i++){
            if(maxi < arr[i]){
                maxi = arr[i];
                ans = i;
                }
        }
        return ans + 'a';
        
    }
