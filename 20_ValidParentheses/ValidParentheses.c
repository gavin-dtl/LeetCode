/* ************************************************************************
 *       Filename:  ValidParentheses.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2015Äê04ÔÂ13ÈÕ 11ʱ36·Ö51Ãë
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/
/*  
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', 
determine if the input string is valid.
The brackets must close in the correct order, "()" and "()[]{}" are all valid 
but "(]" and "([)]" are not.")"")"""""''']'''''''')'
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char *s);

int main(int argc, char **argv)
{
	char *str1 = "sdasd()assd{},fafasd[]";
	char *str2 = "sdafsd{)";
	printf("str1 is %d\n", isValid(str1));
	printf("str2 is %d\n", isValid(str2));
	
	return 0;
} 

bool isValid(char *s) 
{
	char sta[64]="";
	int i = 0;
	int j = 0;
	for(i=0; i<strlen(s); i++){
		if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
			sta[j] = s[i];
			j++;
			continue;
		}	

		if(s[i]==')'){
			if(sta[j-1] != '('){
				return false;
			}
			sta[j-1] = 0;
			j--;
		}else if(s[i] == ']'){
			if(sta[j-1] !='['){
				return false;
			}
			sta[j-1] = 0;
			j--;
		}else if(s[i] == '}'){
			if(sta[j-1] != '{'){
				return false;
			}
			sta[j-1] = 0;
			j--;
		}
	}

	if(j == 0){
		return true;
	}else{
		return false;
	
	}

	return true;
    
}





