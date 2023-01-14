class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums[0];
        
        int cur = 0, maxTillNow = nums[0];
        for(auto c : nums)
        {
            cur+=c;
            if(maxTillNow<cur)
                maxTillNow=cur;
            if(cur<0)
                cur=0;
        }
            
        return maxTillNow;
    }
};

