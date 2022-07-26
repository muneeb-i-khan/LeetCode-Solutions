class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations)
   { int ans =0;
    int countneg=0,countpos=0;
        for(int i=0;i<operations.size();i++)
        {
            
            if(operations[i]=="--X" || operations[i]=="X--")
            {
                countneg--;
            }
            else
            {
                countpos++;
            }
            
        }
     ans = countpos + countneg;
        return ans;
        
    }
};