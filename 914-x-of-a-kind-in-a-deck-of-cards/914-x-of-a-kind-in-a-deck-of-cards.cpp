class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mp;
        vector<int>fre;
        int n=deck.size();
        for(int i=0;i<n;i++)
        {
            mp[deck[i]]++;
        }
        for(auto it:mp) fre.push_back(it.second);
        sort(fre.begin(),fre.end());
        if(fre.size()==1 and fre[0]>=2) return true;
        if(fre.size()>1)
        {int hcf=fre[0];
            for(int i=0;i<fre.size();i++)
            {
                hcf=__gcd(hcf,fre[i]);
            }
         if(hcf>=2) return true;
        }
        return false;
    }
        
};