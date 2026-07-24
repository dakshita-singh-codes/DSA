class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> values(nums.begin(), nums.end());
        
        unordered_set<int> pairXor;
        
        for (int a : values) {
            for (int b : values) {
                pairXor.insert(a ^ b);
            }
        }
        
        unordered_set<int> result;
        
        for (int x : pairXor) {
            for (int c : values) {
                result.insert(x ^ c);
            }
        }
        
        return result.size();
    }
};