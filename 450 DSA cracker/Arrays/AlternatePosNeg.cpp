void rearrange(int arr[], int n) {
	    vector<int> positive;
	    vector<int> negative;
	    
	    for(int i =0; i<n; i++){
	        if(arr[i] < 0){
	            negative.push_back(arr[i]);
	        }
	        else
	            positive.push_back(arr[i]);
	    }
	    int k =0; int j =0;
	    for(int i =0; i<n; i++ ){
	        if(j<positive.size()&& k<negative.size()){
	            if(i%2 ==0)
	                arr[i] = positive[j++];
	           else
	                arr[i] = negative[k++];
	        }
	        else{
	            if(j<positive.size())
	                    arr[i] = positive[j++];
	           else
	                arr[i] = negative[k++];
	        }
	    }