
///  Method 1 ///

int search(int arr[], int n, int x, int k)
{
   	for(int i =0; i<n; i++){
   	    if(arr[i] == x)
   	    return i;
   	}
   	return -1;
}    


/// method 2 ///
int search(int arr[], int n, int x, int k)
{       int ans = -1;
        int i =0;
    while(i<n){
        if(arr[i] == x)
        {   ans = i;
            return ans;
            
            }
            
        else
        i = i + max(1,abs(arr[i]-x )/ k);
    }
    return ans;;
} 