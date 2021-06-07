int jump(const int* nums, const int numsSize){
    int max_pos = 0;
    int count = 0;
    int next_max = 0;
    for (register int i = 0; i < numsSize; ++i) {
        if (max_pos < i) {
            count++;
            max_pos = next_max;
        }
        int cur = nums[i] + i;
        if (cur > next_max) next_max = cur;
    }
    return count;
}
