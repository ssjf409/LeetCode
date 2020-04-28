class Solution {
    public int[] twoSum(int[] nums, int target) {
        // for(int i = 0; i < nums.length - 1; i++) {
        //     for(int j = i + 1; j < nums.length; j++) {
        //         if(target == nums[i] + nums[j]) {
        //             return new int[]{i, j};
        //         }
        //     }
        // }
        // return null;   
        
        Map<int, int> m = new HashMap();
        for(int i = 0; i < nums.length; i++) {
            int cur = nums[i];
            if(m.containKey(target - cur)) {
                return new int[]{m.get(target - cur), i};
            } else {
                m.put(cur, i);
            }
        }
        return null;
    }
}