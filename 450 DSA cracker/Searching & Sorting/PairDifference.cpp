sort(arr, arr+size);
    int i = 0, j =1;
    
    while(i <size && j <size){
        if(i != j && arr[j] - arr[i] == n)
            return 1;
        else if(arr[j] - arr[i] < n)
            j++;
            
        else i++;
    }
    return -1;