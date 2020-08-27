class Solution {
public:
    Solution(vector<int>& nums) {
        original = array = nums;
    }

    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return array = original;
    }

    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        int j;
        for (int i=0;i<array.size();i++){
            j = i + rand() %(array.size()-i);

            swap(array[i], array[j]);
        }

        return array;
    }
private:
    vector<int> original;
    vector<int> array;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
