class Solution {
public:
    int minimumRounds(vector<int>& tasks) 
    {
        map<int,int> mp;int ans=0;
        for(int i=0;i<tasks.size();i++)
        {
            mp[tasks[i]]++;
        }
        // for(auto x: mp)
        // {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        for(auto x:mp)
        {
            if(x.second==1)
            return -1;
            else if(x.second>1)
            {
                int val=x.second%3;
                if(val==0)
                {
                    ans=ans+(x.second/3);
                }
                else if(val==1)
                {
                    ans=ans+(x.second/3)-1;
                    ans=ans+2;
                }
                else
                {
                    ans=ans+(x.second/3);
                    ans++;
                }
            }
        }
        return ans;
    }
};
//project link: https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/description/
