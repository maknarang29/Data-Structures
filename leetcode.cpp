#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i<=nums.size();i++){
            if (i==0){
                ans.push_back(nums.at(i));
            }
            else{
                ans.push_back(nums.at(i) + ans.at(i-1));
            }
        }
        return ans;
    }
};
class Solution {
public:
    
};