//
//  1 Two Sum.c
//  leetcode
//
//  Created by 柴勇峰 on 4/18/16.
//  Copyright © 2016 Brave. All rights reserved.
//

#include "1 Two Sum.h"
#include "stdlib.h"

/*
 Given an array of integers, find two numbers such that they add up to a specific target number.
 
 The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
 
 You may assume that each input would have exactly one solution.
 
 Input: numbers={2, 7, 11, 15}, target=9
 Output: index1=1, index2=2
*/

// 1.malloc free 需要引入stdlib.h
// 2.返回一个数组
// 3.数组指针

int* twoSum(int* nums, int numsSize, int target) {
    
    int index = 0;
    int nextIndex = 0;
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i+1; j < numsSize; j++) {
            int a = nums[i];
            int b = nums[j];
            if (a + b == target) {
                index = i;
                nextIndex = j;
                break;
            }
        }
    }
    
    int *resultArray = (int *)malloc(2*sizeof(int));
    
    resultArray[0] = index;
    resultArray[1] = nextIndex;
    
//    printf("%d %d\n", index, nextIndex);
    
    return resultArray;
}