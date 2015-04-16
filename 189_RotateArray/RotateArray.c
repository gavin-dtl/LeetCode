/* ************************************************************************
 *       Filename:  RotateArray.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2015Äê04ÔÂ15ÈÕ 19ʱ23·Ö01Ãë
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/
 
/*
Rotate an array of n elements to the right by k steps.

For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].

Note:
Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.

[show hint]

Related problem: Reverse Words in a String II

Credits:
Special thanks to @Freezen for adding this problem and creating all test cases.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_num(int nums[], int n)
{
	int i = 0;
	for(i=0; i<n; i++){
		printf("%d ", nums[i]);
	}
	printf("\n");
}

void rotate(int nums[], int n, int k) 
{
	int i = 0;
	if(k>=n){
		k = k%n;
	} 
//	print_num(nums,n);
	int *p = malloc(sizeof(int) * k);
	memcpy(p, nums+(n-k), k*sizeof(int));
//	print_num(p,k);
	for(i=1; i<n-k+1; i++){
		nums[n-i] = nums[n-k-i];
	}
//	print_num(nums,n);
	memcpy(nums, p, k*sizeof(int));
	print_num(nums,n);		

}

int main(int argc, char **argv)
{
	int n = 7;
	
	int k = 3;
	int i = 0;
	if(argc == 3){
		n = atoi(argv[1]);	
		k = atoi(argv[2]);	
	}
	int *num = malloc(sizeof(int)*n);
	for(i=0; i<n; i++){
		num[i] = i+1;
	}

	rotate(num, n, k);

	return 0;
}

