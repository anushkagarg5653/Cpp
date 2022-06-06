class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            for(int j=1; j<nums.size(); j++){
                if(i == j)
                    continue;
            if(nums[i] + nums[j] == target && result.size()<2){
              result.push_back(i);
                result.push_back(j);   
            }
        }
        }
       return result;
    }
};