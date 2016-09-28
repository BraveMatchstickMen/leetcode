//
//  Pascal's Triangle.c
//  leetcode
//
//  Created by Brave Chai on 9/26/16.
//  Copyright © 2016 Brave. All rights reserved.
//

#include "Pascal's Triangle.h"
#include "stdlib.h"

/**
 * Return an array of arrays.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int** columnSizes) {
    
    int i=0;
    int j=0;
    
    if(numRows == 0)
        return 0;
    
    int ** returnArray = (int **)malloc(sizeof(int *) * numRows);
    *columnSizes = (int *)malloc(sizeof(int)*numRows);
    
    for(i=0; i<numRows; i++)
    {
        (*columnSizes)[i] = i+1;
        
        returnArray[i] = (int *)malloc(sizeof(int) * (i+1));
        
        for(j=0; j<i+1; j++)
        {
            if( (0 == j)  || (i == j) )
                returnArray[i][j] = 1;
            else
                returnArray[i][j] = returnArray[i-1][j-1] + returnArray[i-1][j];
        }
        
    }
    
    return returnArray;
}
