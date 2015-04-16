/* ************************************************************************
 *       Filename:  CountAndSay.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2015Äê04ÔÂ14ÈÕ 13ʱ55·Ö12Ãë
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


/*
nd-say sequence is the sequence of integers beginning as follows:
1, 11, 21, 1211, 111221, ...

1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string""""""
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 2
 
class Solution {
public:
    string countAndSay(int n) {
		string str = "1";
		//string *ret = str;
		for(;n>1;n--){
			str = nextSay(str);	
		}
		return str;
    }
};
string nextSay(string str)
{
	int i = 0;	
	char c = str.string[i];
	string ret;
	for(i=0; i<=str.size(); i++){
		if(c != str[i]){
		//	sprintf(ret+strlen(ret), "%d%c", count, c);
			
//			printf("count=%d c=%c\n", count, c);
			c = str[i];
			count = 1;
		}else{
			count ++;
		}
	}
//	printf("%s\n", ret);
	free(str);
	return ret;
}


char *countAndSay(int n) 
{
	int i = 0;
	char * str = malloc(sizeof(char)*STR_SIZE);
	memset(str, 0, sizeof(str));
	strcpy(str, "1");
	char * ret = str;
	for(;n>1;n--){
		ret = nextSay(ret);	
	}
	return ret;
}


int main(int argc,char **argv)
{
	int n = 3;
	if(argc >1){
		n = atoi(argv[1]);
	}

	char * ret = countAndSay(n);

	printf("ret = %s\n", ret);

	return 0;

}

