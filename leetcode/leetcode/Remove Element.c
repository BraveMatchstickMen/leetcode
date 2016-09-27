//
//  Remove Element.c
//  leetcode
//
//  Created by 柴勇峰 on 4/20/16.
//  Copyright © 2016 Brave. All rights reserved.
//

#include "Remove Element.h"
#include "util.h"

/*
 Given an array and a value, remove all instances of that value in place and return the new length.
 
 Do not allocate extra space for another array, you must do this in place with constant memory.
 
 The order of elements can be changed. It doesn't matter what you leave beyond the new length.
 
 Example:
 Given input array nums = [3,2,2,3], val = 3
 
 Your function should return length = 2, with the first two elements of nums being 2.
 */

/*
 题解:简单的讲，可以一遍一遍查找是否有值等于val，如果有，删除.但是显然时间代价高。第二种做法是，用变量countVal记录元素值等于val的个数，对于任意一个非val值的元素，它的最终位置是（它原来所处的位置-它之前的值为val的元素个数）.这样，只需要一次遍历数组.
 */

int removeElement(int* nums, int numsSize, int val) {
    
    if(nums==NULL)return 0;
    
    int i;
    
    int countVal = 0;
    
    int newSize = numsSize;
    
    for(i = 0; i < numsSize; i++)
    {
        if(nums[i] == val)
        {
            countVal ++;
            
            newSize --;
            
        } else {
            
            nums[i-countVal] = nums[i];
        }
    }
    
    printf("new length: %zd\n", newSize);
    
    printfArray(nums, newSize);
    
    return newSize;
}

int removeElementSecond(int *nums, int numsSize, int val) {
    
    if (nums == NULL) return 0;
    
    int i = 0;
    
    int j = 0;
    
    for (i = 0; i < numsSize; i++) {
        
        if (nums[i] == val) {
            
            continue;
        }
        
        nums[j] = nums[i];
        j++;
    }
    
    return j;
}
