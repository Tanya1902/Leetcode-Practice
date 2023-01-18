class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1)
            return nums;
        
        vector<int> res;
        int c1=0,c2=0;
        
        res.push_back(nums[0]);
        c1++;
        
        for(int i=1;i<n;i++){
            if(res[0]==nums[i]){
                c1++;
            }
            else if(res.size()==1){
                res.push_back(nums[i]);
                c2++;
            }
            else if(res[1]==nums[i]){
                c2++;
            }
            else{
                if(c1==0){
                    res[0]=nums[i];
                    c1=1;
                }else if(c2==0){
                    res[1]=nums[i];
                    c2=1;
                }
                else {
                    c1--;
                    c2--;
                }
                   
            }
        }
        
        c1=0,c2=0;
        
        for(int a:nums){
            if(a==res[0])
                c1++;
            else if(res.size()==2 && a==res[1])
                c2++;
        }
        
        n=n/3;
        
        if(c1>n && (c2>n || res.size()==1))
            return res;
            
        if(c1<=n)
            res.erase(res.begin());
        
        if(c2<=n)
            res.erase(res.end()-1); 
            
        return res;
    }
};