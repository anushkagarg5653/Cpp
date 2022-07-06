vector<int>ans;
        int k=0;
       for(int i =0; i<n; i++){
           for(int j= 0; j<n; j++){
                ans.push_back(Mat[i][j]);
           }
       }
       sort(ans.begin(), ans.end());
      for(int i =0;i<n;i++){
          for(int j=0; j<n; j++){
              Mat[i][j] = ans[k++];
          }
      }
      return Mat;
    }