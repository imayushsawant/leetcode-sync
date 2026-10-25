class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int k = 0;
        vector<int> extra;
        while(k!=m+n){
            if (i >= m) {
                extra.push_back(nums2[j]);
                j++;
            }
            else if (j >= n) {
                extra.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]<nums2[j] ){
                extra.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>nums2[j]){
                extra.push_back(nums2[j]);
                j++;
            }
            else{
                extra.push_back(nums2[j]);
                j++;
            }
            k++;
        }
        for(int i = 0 ; i< m+n ; i++){
            nums1[i]=extra[i];
        }
    }
};