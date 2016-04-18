//
//  main.c
//  leetcode
//
//  Created by 柴勇峰 on 4/18/16.
//  Copyright © 2016 Brave. All rights reserved.
//

#include <stdio.h>
#include "1 Two Sum.h"
#include "stdlib.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int nums[] = {1, 3, 6, 7};
    
    int *res = twoSum(nums, 4, 10);
    
    for (int i = 0; i < 2; i++) {
        printf("%d \n", res[i]);
    }
    
    free(res);
    
    return 0;
}
