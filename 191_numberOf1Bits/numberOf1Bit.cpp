/* ************************************************************************
 *       Filename:  numberOf1Bit.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2015Äê04ÔÂ14ÈÕ 16ʱ22·Ö12Ãë
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/
/*  
Write a function that takes an unsigned integer and returns the number of ’1
' bits it has (also known as the Hamming weight).

For example, the 32-bit integer ’11' has binary representation
00000000000000000000000000001011, so the function should return 3.

Credits:
Special thanks to @ts for adding this problem and creating all test cases.''
*/

#include <iostream> 
#include <stdint.h>
#include <stdlib.h>

using namespace std;

class Solution {
public:
	int hammingWeight(uint32_t n);
				        
};



int hammingWeight(uint32_t n) 
{
	int i = 0;
	int count = 0;
	while(n){
		if(n&0x00000001){
			count ++;
		}
		n = n>>1;
	}

	return count;
	    
}


int main(int argc, char **argv)
{
	unsigned int  num = 3;
	if(argc>1){
		num = atoi(argv[1]);
	}

	cout << "number of 1 bit is " << hammingWeight(num) << endl;

	return 0;
}
