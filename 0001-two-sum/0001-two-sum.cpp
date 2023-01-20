class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> vec;
        vec=nums;
        
        sort(nums.begin(),nums.end());
        int sum=0;
       
        int l=0,r=nums.size()-1,a,b;
        
        while(l<r)
        {
            sum=nums[l]+nums[r]; //[1,3,4,5,6] //target=8
            if(sum<target)
                l++;
            else if(sum>target)
                r--;
            else
            {
                //finding position a and b in actual array
                a=find(vec.begin(),vec.end(),nums[l])-vec.begin();
                cout<<nums[a]<<endl;
                vec[a]--;
                cout<<nums[a]<<endl;
                
                b=find(vec.begin(),vec.end(),nums[r])-vec.begin();
                cout<<nums[b]<<endl;
                vec={a,b};
                return vec;
            }
        }
        return vec;
    }
};