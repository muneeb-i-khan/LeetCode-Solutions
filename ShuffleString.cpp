class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
      
        string h=s;
        
        for(int i=0;i<indices.size();i++)
        {
            h[indices[i]]=s[i];
        }
        return h;
    }
};