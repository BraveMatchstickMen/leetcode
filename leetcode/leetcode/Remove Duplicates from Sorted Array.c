//
//  Remove Duplicates from Sorted Array.c
//  leetcode
//
//  Created by 柴勇峰 on 5/4/16.
//  Copyright © 2016 Brave. All rights reserved.
//

#include "Remove Duplicates from Sorted Array.h"
#include "util.h"

/*
 Given a sorted array, remove the duplicates in place such that > each element appear only once and return the new length.
 
 Do not allocate extra space for another array, you must do this in place with constant memory.
 
 For example, Given input array A = [1,1,2],
 
 Your function should return length = 2, and A is now [1,2].
 */

/*
 1》若数族大小为0/1。 数组A 不变，返回0/1。
 
 2》 若数组大小大于1。用count记录新数组元素A的末尾的下一个index，若a[i] != a[i-1], 则把 a[i]的值赋给count位置上（a[count] = a[i] )。
 
 例如数组元素为 1, 2 2, 2 2, 3, 3, 4。 此时count=2,表示A的下标2前面有两个不同的元素，若 A[5]=3,A[4]=2, 则到A[5] != A[4]时，将A[5]的只赋给A[count]上，然后count++。详细如下面代码
 
 
 
 记住：
 1. 当自己面对问题想解题思路的时候，要依靠自己的逻辑思维来”证明/保证”算法的可靠性，不能依靠调试/测试来发现代码的中的bug或逻辑错误。
 
 2. 能一次性写出没有逻辑错误，能够work的代码 是编程能力的体现，也是Google 或 Facebook等大公司面试的必备。
 
 转自: http://blog.csdn.net/acema/article/details/29626909
 
 */

int removeDuplicates(int* nums, int numsSize) {
    
    if (numsSize == 0) {
        return 0;
    }
    
    int count = 1;
    
    for (int i = 1; i < numsSize; i++) {
        
        if (nums[i] != nums[i-1]) {
            
            nums[count] = nums[i];
            
            count++;
        }
    }
    
    printfArray(nums, count);
    
    return count;
}
