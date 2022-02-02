int findPosition(int N) {
       if(N==0) return -1;
        if((N & (N-1)) == 0){
            int pos =log2(N)+1;
            return pos;
        }
        else
            return -1;
        
    }

    // method 2

    int findPosition(int N) {
       if(N==0) return -1;
        if((N & (N-1)) == 0){
            int pos =0;
            while(N){
                pos++;
                N = N>>1;

            }
            return pos;
        }
        else
            return -1;
        
    }