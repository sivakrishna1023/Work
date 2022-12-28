class Solution {
public:
    int integerReplacement(int n) {
    int steps = 0;long long int val=n;
    while (val!= 1) {
        if (val % 2 == 0) {
            val /= 2;
        } else {
            if ((val + 1) % 4 == 0 && val != 3) {
                val += 1;
            } else {
                val -= 1;
            }
        }
        steps++;
    }
    return steps;
};
  //problem link:  https://leetcode.com/problems/integer-replacement/description/
  
