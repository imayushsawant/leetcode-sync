class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count;
        vector<int> unique;
        if(nums.size()==1){
            return 1;
        }
        for(int i = 0 ; i<nums.size()-1 ; i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            else{
                unique.push_back(nums[i]);
            }
        } 
        unique.push_back(nums.back());
        count = unique.size();
        for(int i = 0 ; i < nums.size() ; i++){
            if(i<count){
                nums[i]=unique[i];
            }
            else{
                nums[i]=0;
            }
        }
        return count;
    }
};