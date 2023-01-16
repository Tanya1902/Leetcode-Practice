class Solution
{
    public:
        double myPow(double x, int n)
        {

            double ans;
            if (x == 0)
                return 0;
            if (n == 0)
                return 1;

            if (n == 1)
                return x;
            else
            {
                if (n > 0)
                {
                    ans = myPow(x, n / 2);
                    if (n % 2 == 0)
                        return ans * ans;
                    else
                        return ans *ans * x;
                }
                else
                {
                    ans = myPow(1/x, n / 2);
                    ans=1/ans;
                    if (n % 2 == 0)
                        return ans * ans;
                    else
                        return ans *ans * (1/x);
                }
            }
        }
};