int searchInsert(int* nums, int numsSize, int target) 
{
    int left = 0, middle, right = numsSize - 1;
    
    while(left <= right) {
        middle = left + (right - left) / 2;

        if(nums[middle] == target) return middle;
        else if(nums[middle] < target) left = middle + 1;
        else right = middle - 1;
    }

    return left;
};
