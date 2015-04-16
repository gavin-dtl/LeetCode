/* ************************************************************************
 *       Filename:  FactorialTrailingZeroes.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  2015Äê04ÔÂ16ÈÕ 10ʱ29·Ö34Ãë
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/
/*
Given an integer n, return the number of trailing zeroes in n!.

Note: Your solution should be in logarithmic time complexity.

Credits:
Special thanks to @ts for adding this problem and creating all test cases.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

class Solution {
public:
/*
    int trailingZeroes(int n) {
        int ret = 0;
        for(int i = 5; i <= n; i=i+5)
        {
            int tmp = i;
            while(tmp%5 == 0)
            {
                ret ++;
                tmp /= 5;
            }
        }
        return ret;
    }
*/
    int trailingZeroes(int n) {
      	int i = 5;
      	int ret = 0;
      	int tmp  = 0;
      	do{
      		tmp = n/i;
      		ret += tmp;
      		i *= 5;
      	}while(tmp);
      	
        return ret;
    }
};

int main(int argc, char const *argv[])
{
	/* code */
	int num =  5;
	if(argc > 1){
		num  = atoi(argv[1]);
	}

	Solution solution;
	cout << solution.trailingZeroes(num) << endl;

	return 0;
}
