int findDuplicate(int arr[], int size)  
{
    int ans = 0;
    for(int i=0;i<size; i++){
        ans = ans^arr[i];
    }

	
    for(int i=1;i<size;i++){
        ans = ans^i;
    }
    return ans;
}
