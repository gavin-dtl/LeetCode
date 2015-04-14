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
 

char *nextSay(char * str)
{
	int i = 0;	
	char c = str[i];
	int count = 0;
	char *ret = malloc(sizeof(char)*strlen(str)*2+1);
	memset(ret, 0, sizeof(ret));
//	printf("str = %s\n", str);
	for(i=0; i<=strlen(str); i++){
		if(c != str[i]){
			sprintf(ret+strlen(ret), "%d%c", count, c);
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
	if(n == 0){
		return "";		
	}
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

