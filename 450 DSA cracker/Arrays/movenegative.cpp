 void segregateElements(int arr[],int n)
    {
        if(n == 0 || n == 1)
        return;
        
        int a[n];
        int j = 0;
        for(int i=0;i<n;i++){
            if(arr[i] >= 0)
            {a[j] = arr[i];
            j++;}
        }
        for(int i = 0; i<n ;i++){
            if(arr[i] < 0){
            a[j] = arr[i];
            j++;
            }
           
        }
        for(int i=0;i<n;i++){
            arr[i] = a[i];
        }
    }