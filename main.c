int jump(const int *nums, const int numsSize)
{
    if(numsSize < 2) 
    {
        return 0;
    }
    
    int maxReachableIndex = nums[0];
    int limit = nums[0];
    int minJumps = 1;
    for(int i=1; i<numsSize; i++){

        if(i > limit)
        {
            minJumps++;
            limit = maxReachableIndex;
        }
        maxReachableIndex = (maxReachableIndex > i + nums[i]) ? maxReachableIndex : i + nums[i];
    }

    return minJumps;
}
