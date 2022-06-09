int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int,int> count;
    int maxFre =0;
    int maxAns = 0;
    
    for(int i=0;i<arr.size(); i++){
        count[arr[i]]++;
        maxFre = max(maxFre,count[arr[i]]);
    }
    for(int i=0;i<arr.size(); i++){
        if(maxFre == count[arr[i]])
        {
            maxAns = arr[i];
            break;
        }
    }
    return maxAns;
}

//https://www.codingninjas.com/codestudio/problems/maximum-frequency-number_920319?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar