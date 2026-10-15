
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;

        // Find the first increasing pair from the right.
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }

        // If no pivot exists, reverse the entire array.
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find the smallest element greater than the pivot.
        for (int i = n - 1; i > pivot; i--) {
            if (nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        // Reverse the suffix to get the smallest next permutation.
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};
