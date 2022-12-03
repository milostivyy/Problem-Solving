class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> cnt;
        for (char c : s) ++cnt[c];
        
        set<pair<int,char>> pq;                       // surprisingly, set can be
        for (auto[ch,c] : cnt) pq.insert({-c, ch});   // used as a priority queue
        
        string ss = "";
        for (auto[c,ch] : pq)
            ss += string(-c, ch);
        
        return ss;
        
    }
};