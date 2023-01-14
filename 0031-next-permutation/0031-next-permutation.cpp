class Solution
{
    public:
        void nextPermutation(vector<int> &nums)
        {

            int n = nums.size() - 1;
            while (n > 0)
            {
                if (nums[n - 1] < nums[n])
                {
                    int min = nums[n], p;
                    for (int i = n; i <= nums.size() - 1; i++)
                    {
                        if (nums[i] > nums[n - 1] && nums[i]<= min)
                        {
                            min = nums[i];
                            p = i;
                        }
                    }
                    
                    swap(nums[n - 1], nums[p]);

                    sort(nums.begin() + n, nums.end());
                    break;
                }
                n--;
            }

            if (n == 0)
                reverse(nums.begin(), nums.end());
        }
};