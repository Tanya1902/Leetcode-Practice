class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        vector<int> v;
        int d;
        while(x){
            d=x%10;
            v.push_back(d);
            x/=10;
        }
        
        vector<int> r(v);
        reverse(r.begin(),r.end());
        if(v==r)
            return true;
        else
            return false;
        
    }
};