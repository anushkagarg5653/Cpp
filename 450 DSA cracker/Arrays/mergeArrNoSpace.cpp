void merge(int arr1[], int arr2[], int n, int m) {
	    for(int i = 0; i<n; i++){
	        bool flag = 0;
	        if(arr1[i] > arr2[0]){
	            flag = 1;
	            swap(arr1[i], arr2[0]);
	        }
	        if (flag)
	            sort(arr2, arr2+m);
	    }
	}