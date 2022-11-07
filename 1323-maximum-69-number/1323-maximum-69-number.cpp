class Solution {
public:
    int maximum69Number (int num) {
        vector<int>res;
        while(num){
            int rem=num%10;
            res.push_back(rem);
            num=num/10;
        }
        reverse(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            if(res[i]==6){
                res[i]=9;
                break;
            }
        }
        int number=0;
        for(int i=0;i<res.size();i++){
            number=number*10+res[i];
        }
        return number;
        
    }
};