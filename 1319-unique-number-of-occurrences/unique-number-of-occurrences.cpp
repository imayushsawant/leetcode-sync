class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int counter = 1;
        vector<int> occurance;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                counter++;
            }
            else {
                occurance.push_back(counter);
                counter = 1;
            }
            if (i == arr.size() - 1) {
                occurance.push_back(counter);
            } 
        }
        sort(occurance.begin(), occurance.end());
        for (int i = 1; i < occurance.size(); i++) {
            if (occurance[i] == occurance[i - 1]) {
                return false;
            }
        }
        return true;
    }
};