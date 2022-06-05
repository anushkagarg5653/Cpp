class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid = 0;
        int low = 0;
        int high = nums.size()-1;
        
       while(mid<=high){
           switch(nums[mid]){
                   
           
               case 0:
                swap(nums[mid++], nums[low++]);
                break;
            
            // for 1
                case 1:
                mid++;
                break;
            // for 2
                case 2:
                swap(nums[mid], nums[high--]);
                break;
            
        }
       }
    }
};