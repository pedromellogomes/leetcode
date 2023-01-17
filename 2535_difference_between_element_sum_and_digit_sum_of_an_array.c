int difference_of_sum(int* nums, int numsSize)
{
    int element_sum = 0;
    int digit_sum = 0;

    for(int i = 0; i < numsSize; i++)
    {
        element_sum = element_sum + nums[i];
    
        while(nums[i] >= 10)
        {
            digit_sum = digit_sum + (nums[i] % 10);
            nums[i] = nums[i] / 10;
        }

        digit_sum = digit_sum + nums[i];
    }

    return (element_sum - digit_sum);
}
