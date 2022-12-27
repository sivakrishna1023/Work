int mycompare1(string s1,string s2)
{
    string s12=s1.append(s2);
    string s21=s2.append(s1);
    return s12.compare(s21)<0 ? 1:0;
}
int mycompare2(string s1,string s2)
{
    string s12=s1.append(s2);
    string s21=s2.append(s1);
    return s12.compare(s21)>0 ? 1:0;
}
class Solution {
public:
    long long smallestNumber(long long num)
    {   if(num==0)
        return 0;
        vector<string> temp;
        if(num>0)
        {
         while(num>0)
        {   int rem=num%10; 
            temp.push_back(to_string(rem));
             num/=10;
        }
        sort(temp.begin(),temp.end(),mycompare1);
        long long ans=stoi(temp[0]);int j=1;
        while(ans==0 and j<temp.size())
        {
          swap(temp[0],*min_element(temp.begin()+j,temp.end()));
          ans=stoi(temp[0]);
          j++;
        }
        for(int i=1;i<temp.size();i++)
        {
            ans=(ans*10)+stoi(temp[i]);
        }
        return ans;
        }
        else
        {
            num= 0-num;
            while(num>0)
        {   int rem=num%10; 
            temp.push_back(to_string(rem));
             num/=10;
        }
        sort(temp.begin(),temp.end(),mycompare2);
        long long ans=stoi(temp[0]);
        for(int i=1;i<temp.size();i++)
        {
            ans=(ans*10)+stoi(temp[i]);
        }
        return -ans; 
        }
        
    }
};
