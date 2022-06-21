int s = 0;
    int e = S.size();
    while(s<e){
        if(S[s] != S[e])
        return 0;
        
        else
            s++;
            e--;
    }
    
    return 1;
    