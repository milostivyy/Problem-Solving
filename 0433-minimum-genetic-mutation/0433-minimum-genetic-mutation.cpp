class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string>st{bank.begin(),bank.end()};
        int mutations=0;
        if(!st.count(end)) return -1;
        queue<string>q;
        q.push(start);
        string curr;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                curr=q.front();
                q.pop();
                if(curr==end) return mutations;
                st.erase(curr);
                for(int i=0;i<8;i++){
                    string t=curr;
                    t[i]='A';
                    if(st.count(t)!=0){
                        q.push(t);
                    }
                    t[i]='C';
                    if(st.count(t)!=0){
                        q.push(t);
                    }
                    t[i]='G';
                    if(st.count(t)!=0){
                        q.push(t);
                    }
                    t[i]='T';
                    if(st.count(t)!=0){
                        q.push(t);
                    }
                }
                
            }
            mutations++;
            
        }
        return -1;
        
    }
};