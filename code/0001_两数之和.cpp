#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> numToIndex;
        for (int i = 0; i < nums.size(); ++i) {
            int x=target-nums[i];//对应值
            if(numToIndex.find(x)!=numToIndex.end()){//对应值存在
                ans.push_back(numToIndex[x]);
                ans.push_back(i);
                return ans;
            }
            numToIndex[nums[i]]=i;//对应值不存在建立值和位置的映射
        }
        return ans;
    }
};

int main() {
    int n,x,t;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        v.push_back(x);
    }
    cin>>t;
    Solution s;
    vector<int> vs=s.twoSum(v,t);
    cout<<vs[0]<<" "<<vs[1]<<endl;
    return 0;
}
