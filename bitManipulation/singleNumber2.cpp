#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<32;i++){
            int count = 0;
            for(int j=0;j<nums.size();j++){
                if( (nums[j]&(1<<i))!=0 )count++;
            }
            if(count%3!=0)ans = ans|(1<<i);
        }
        return ans;
    }
};