class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int j=1;
        int result;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[j]){
                j++;
            }
            else{
                result = nums[i];
            }
        }
        return result;
    }
};