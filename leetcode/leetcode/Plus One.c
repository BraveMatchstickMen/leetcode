//
//  Plus One.c
//  leetcode
//
//  Created by Brave Chai on 9/26/16.
//  Copyright © 2016 Brave. All rights reserved.
//

#include "Plus One.h"
#include "stdlib.h"
#include "string.h"

//题目：
//
//Given a non-negative number represented as an array of digits, plus one to the number.
//
//The digits are stored such that the most significant digit is at the head of the list.

// 思路：从最后一位开始遍历，如果是9，plus one 后就是 0
// 需要注意的是 如果首位是9 plus one 后是0 需要重新开辟空间 首位为1

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    
    int i = (digitsSize) - 1; // start from back
    int* newDigits = NULL;
    
    // if input is 0 don't bother
    if(!digits || digitsSize < 1) return NULL;
    
    while( i >= 0 )
    {
        if(digits[i] == 9)
        {
            digits[i] = 0;
            --i;
        }
        else
        {
            ++digits[i];
            --i;
            break;
        }
    }
    
    if(digits[0] == 0)
    {
        *returnSize = digitsSize +1;
        newDigits =(int*) malloc(sizeof(int)*(*returnSize));
        memcpy(newDigits+1,digits,sizeof(int)*digitsSize);
        newDigits[0]=1;
    }
    else
    {
        *returnSize = digitsSize ;
        newDigits = (int*)malloc(sizeof(int)*(*returnSize));
        memcpy(newDigits,digits,sizeof(int)*digitsSize);
        
    }
    return newDigits;
}