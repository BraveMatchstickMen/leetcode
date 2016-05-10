//
//  main.c
//  leetcode
//
//  Created by 柴勇峰 on 4/18/16.
//  Copyright © 2016 Brave. All rights reserved.
//

#include <stdio.h>
#include "1 Two Sum.h"
#include "2 Add Two Number.h"
#include "stdlib.h"
#include "Remove Element.h"
#include "Remove Duplicates from Sorted Array.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
//    int nums[] = {1, 3, 6, 7};
//    
//    int *res = twoSum(nums, 4, 10);
//    
//    for (int i = 0; i < 2; i++) {
//        printf("%d \n", res[i]);
//    }
//    
//    free(res);
    
//   ********************************
    
//    struct ListNode {
//        int val;
//        struct ListNode *next;
//    };
    
//    struct ListNode l3 = {4};
//    
//    struct ListNode l4 = {6};
//    
//    struct ListNode *l5 = &l3;
//    
//    struct ListNode *l6 = &l4;
//    
//    struct ListNode l7 = {2, l5};
//    
//    struct ListNode l8 = {5, l6};
//    
//    struct ListNode *l9 = &l7;
//    
//    struct ListNode *l0 = &l8;
//    
//    struct ListNode *l = addTwoNumbers(l9, l0);
//    
//    printf("%d, %d, %d", l->val, l->next->val, l->next->next->val);
    
//    *********************************
    
    int nums[] = {3, 2, 2, 3};
    
//    removeElement(nums, 4, 3);
    
    removeDuplicates(nums, 4);
    
    return 0;
}
