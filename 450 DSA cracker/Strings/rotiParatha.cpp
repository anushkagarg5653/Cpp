int solve(int *arr, int n, int dish, int mid){
    int time = 0;
    int Totaldishes = 0;
    for(int i = 0; i<n; i++){
        time = arr[i];
        int j = 2;
        while(time <= mid) {
            Totaldishes++;
            time = time + (arr[i]*j);
            j++;
}
         if(Totoldishes >= dish)
             return 1;
         }
return 0;
}

while(lb<=ub){
   int mid = lb + (ub - lb)/2;
   if(solve(arr,n,dish,mid)){
        minTime = mid;
        ub = mid - 1;
}
    else 
        lb = mid + 1;
}
    cout<<minTime<<endl;
}