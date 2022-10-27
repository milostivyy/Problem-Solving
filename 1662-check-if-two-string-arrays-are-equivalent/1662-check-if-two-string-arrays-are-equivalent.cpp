class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result1;
        for(int i=0;i<word1.size();i++){
            string s=word1[i];
            result1+=s;
        }
        string result2;
        for(int i=0;i<word2.size();i++){
            string s=word2[i];
            result2+=s;
        }
        if(result1==result2) return true;
        else return false;
        
        
    }
};