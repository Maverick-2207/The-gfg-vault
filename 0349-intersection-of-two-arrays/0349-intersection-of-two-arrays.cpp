class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;
        int m = nums1.size();
        int n = nums2.size();

        set<int> s;

        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                i++;
            } else if(nums1[i] > nums2[j]){
                j++;
            } else {
                s.insert(nums1[i]);  // only unique values will be stored
                i++;
                j++;
            }
        }

        // convert set to vector
        vector<int> ans(s.begin(), s.end());
        return ans;
    }
};
