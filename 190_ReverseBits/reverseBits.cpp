/* ************************************************************************
 *       Filename:  reverseBits.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2015Äê04ÔÂ14ÈÕ 19ʱ58·Ö12Ãë
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/
/*  

Reverse bits of a given 32 bits unsigned integer.

For example, given input 43261596 (represented in binary as 00000010100101000001111010011100), return 964176192 (represented in binary as 00111001011110000010100101000000).

Follow up:
If this function is called many times, how would you optimize it?

Related problem: Reverse Integer

Credits:
Special thanks to @ts for adding this problem and creating all test cases.
*/


#include <iostream>
#include <stdint.h>
#include <stdlib.h>

using namespace std;


class Solution {
public:
    uint32_t reverseBits(uint32_t n);
};

uint32_t reverseBits(uint32_t n) 
{
	int i = 0;
	int num = 0;
	for(i=0; i<32; i++){
		num = num << 1;	
		if(n&0x1){
		//	num = num << 1;
			num  = num | 0x1;
		}
		n = n >> 1;
		
	}
	return num;	    
}


int main(int argc, char **argv)
{
	unsigned int num = 0;
	if(argc > 1){
		num = atoi(argv[1]);
	}

	cout << num << " reverseBits is " << reverseBits(num) <<endl;

	return 0;
}
