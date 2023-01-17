int* get_concatenation(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize * 2;
    int *ans = (int*) malloc(*returnSize * sizeof(int));
    
    for(int i = 0; i < numsSize; i++)
    {
        ans[i] = ans[i + numsSize] = nums[i];
    }

    return ans;
}