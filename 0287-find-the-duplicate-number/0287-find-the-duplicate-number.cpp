class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        //Floyd's tortoise and hare algo
        
        int slow=0,fast=0;
        while(slow!=fast || slow==0){
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        
        int slow2=0;
        while(slow!=slow2){
            slow=nums[slow];
            slow2=nums[slow2];
        }
        
        return slow;
    }
};