class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int b,p=0,cp=0;
        
        b=prices[0];
        
        for(int i=1;i<prices.size();i++){
            if(prices[i]<b){
                b=prices[i];
            }
            cp=prices[i]-b;
            if(cp>p){
                p=cp;
            }
        }
        return p;
    }
};