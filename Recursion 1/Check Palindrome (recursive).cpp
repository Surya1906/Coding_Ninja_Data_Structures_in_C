/* 
Check Palindrome (recursive)

Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S
Output Format :
'true' or 'false'
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false
*/

#include <cstring>
bool checkPalindrome(char input[]) {
    // Write your code here
    static int start = 0;
    static int end = strlen(input)-1;
    if(start >= end) {
        return true;
    }
    if (input[start] != input[end]){
        return false;
    }
    start++;
    end--;
    bool smallOutput = checkPalindrome(input);
    return smallOutput;
}







