/* ************************************************************************
 *       Filename:  ExcelSheetColumnNumber.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  2015Äê04ÔÂ16ÈÕ 11ʱ40·Ö38Ãë
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

/*
Related to question Excel Sheet Column Title

Given a column title as appear in an Excel sheet, return its corresponding column number.

For example:

    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
*/

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
    	int strlen = s.size();
    	int ret = 0;

    	//cout << s << " sizeof=" << strlen << endl;

    	for(int i=0; i<strlen; i++){
    		ret *= 26; 
    		ret += s[i] - 'A' + 1;
    		//cout << s[i] <<" i=" << i << "   ret="<< ret << endl;
    	}

    	cout << ret << endl;

    	return ret;
    }
};

int main(int argc, char const *argv[])
{
	/* code */
	string str = "AA";
	Solution val;
	cout << str << endl;
	
	if(argc > 1){
		str = argv[1];	
	}
	val.titleToNumber(str);
	//cout << str[0] << endl;

	return 0;
}

