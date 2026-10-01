class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> record(nums.size()+1,0);
        vector<int> duplicates;
        for(int i=0;i<nums.size();i++){
            record[nums[i]]++;
        }
        for(int i=0;i<record.size();i++){
            if(record[i]>1){
                duplicates.push_back(i);
            }
        }
        return duplicates;
    }
};