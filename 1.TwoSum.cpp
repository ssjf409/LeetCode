class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        vector<int> ret;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(target == nums[i] + nums[j]) {
                    return ret = {i, j};
                }
            }
        }
        return ret;
        */
        
        
        map<int, int> m;
        map<int, int>::iterator iter;
        for(int i = 0; i < nums.size(); i++) {
            iter = m.find(target - nums[i]);
            if(iter == m.end()) {
                //추가
                m[nums[i]] = i;
            } else {
                //찾음
                return {(*iter).second, i};
            }
        }
        return {};
    }
};