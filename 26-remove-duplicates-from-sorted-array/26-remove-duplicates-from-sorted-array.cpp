#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int idx = 1;
        vector<int>::iterator iter;
        
        if (size <= 1)
            return (size);
        for (int i = 0; i < size - 1; ++i) {
            if (nums[i] != nums[i + 1]) {
                nums[idx++] = nums[i + 1];
            }
        }
        return (idx);
    }
};