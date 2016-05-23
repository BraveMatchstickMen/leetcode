//
//  Remove Duplicates from Sorted Array II.c
//  leetcode
//
//  Created by 柴勇峰 on 5/10/16.
//  Copyright © 2016 Brave. All rights reserved.
//

#include "Remove Duplicates from Sorted Array II.h"
#include "util.h"
/*
 Follow up for "Remove Duplicates":
 What if duplicates are allowed at most twice?
 
 For example,
 Given sorted array A = [1,1,1,2,2,3],
 
 Your function should return length = 5, and A is now [1,1,2,2,3].
 */

int removeDuplicates2(int* nums, int numsSize) {
    
    if (numsSize == 0) {
        return numsSize;
    }
    
    if (numsSize == 1) {
        return numsSize;
    }
    
    int temp = nums[1];
    
    int i;
    
    int num = 1;
    
    for (i = 2; i < numsSize; ++i) {
        
        if (nums[i] != nums[i-2]) {
            
            nums[num++] = temp;
            
            temp = nums[i];
        }
    }
    
    nums[num++] = temp;
    
    printfArray(nums, num);
    
    return num;
}
