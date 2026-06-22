class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = INT_MIN;
        int cur_sum = 0;
        for(int i : nums){
            cur_sum = cur_sum + i;
            m = max(m, cur_sum);
            if(cur_sum < 0){
                cur_sum = 0;
            }
        }
        return m;
    }
};