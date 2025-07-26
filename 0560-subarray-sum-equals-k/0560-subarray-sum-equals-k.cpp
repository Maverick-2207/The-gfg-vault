class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int ,int > map;
        long long maxlen =0;
        int sum=0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

            if(sum==k){
                maxlen = i+1;
            }


            if(map.find(sum-k)!= map.end()){
                int len = i - map[sum-k];
                maxlen= max(len, maxlen);
            }

            if(map.find(sum)==map.end()){
                map[sum]=i;
            }
        }

        return maxlen;
        
    }
};