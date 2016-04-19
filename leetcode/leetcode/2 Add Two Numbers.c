//
//  2 Add Two Numbers.c
//  leetcode
//
//  Created by 柴勇峰 on 4/18/16.
//  Copyright © 2016 Brave. All rights reserved.
//

#include <stdio.h>
#include "stdlib.h"

/*
 You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
 
 Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 Output: 7 -> 0 -> 8
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    if (l1 == NULL)
        return l2;
    
    if (l2 == NULL)
        return l1;
    
    struct ListNode *p1 = l1, *p2 = l2, *pNew = NULL,*pre=p1;
    
    int res, carry = 0;
    
    while (p1&&p2)
    {
        res = p1->val + p2->val + carry;
        carry = res / 10;
        p1->val = res % 10;
        pre = p1;
        p1 = p1->next;
        p2 = p2->next;
    }
    if (p2 != NULL)
    {
        pre->next = p2;
        while (p2)
        {
            res = (p2->val + carry);
            p2->val = res % 10;
            carry = res / 10;
            pre=p2;
            p2 = p2->next;
            if(p2==NULL&&carry==1)//一定要考虑这种进位了的情况
            {
                pNew=malloc(sizeof(struct ListNode));
                pNew->val=1;
                pNew->next=NULL;
                pre->next=pNew;
            }
            
        }
    }
    else if (p1 != NULL)
    {
        while (p1)
        {
            res = p1->val + carry;
            p1->val = res % 10;
            carry = res / 10;
            pre=p1;
            p1 = p1->next;
            if(p1==NULL&&carry==1)
            {
                pNew=malloc(sizeof(struct ListNode));
                pNew->val=1;
                pNew->next=NULL;
                pre->next=pNew;
            }
        }
    }
    else
    {
        if (carry == 1)
        {
            pNew =malloc(sizeof(struct ListNode));
            pNew->val = carry;
            pNew->next = NULL;
            pre->next = pNew;
        }
    }
    return l1;
    
}