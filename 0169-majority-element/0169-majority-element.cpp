class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //Boyer Moore's Algorithm
        
        int res=nums[0],c=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==res){
                c++;
            }
            else{
                if(c>0)
                    c--;
                else if(c==0){
                    res=nums[i];
                    c=1;
                }
            }
        }
        return res;
    }
};  