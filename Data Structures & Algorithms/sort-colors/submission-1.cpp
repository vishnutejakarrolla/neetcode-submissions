class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        while(i<nums.size()-1){
            if(nums[i] > nums[i+1]){
                swap(nums[i],nums[i+1]);

                if(i > 0){
                    i--;
                }
            }
            else{
                i++;
            }
        }
        
    }
};