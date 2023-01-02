class Solution {
public:
    bool detectCapitalUse(string word) 
    {   if(word.size()==1)
        return true;
        else if(islower(word[0]) and isupper(word[1]))
        {
                return false;
        }
        else if(isupper(word[0]) and isupper(word[1]))
        {
            for(int i=2;i<word.length();i++)
            {
                if(isupper(word[i])) continue;
                else return false;
            }
        }
        else if((isupper(word[0]) and islower(word[1])) or (islower(word[0]) and islower(word[1])))
        {
            for(int i=2;i<word.length();i++)
            {
                if(islower(word[i])) continue;
                else return false;
            } 
        }

        return true;
        
    }
};

//problem link: https://leetcode.com/problems/detect-capital/description/
