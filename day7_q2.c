#include <stdio.h>

int main(){

    /*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
Sample Test Cases:
Input 1 : a
Output 1 : Vowel

Input 2 : b
Output 2 : Consonant*/
    char alphabett;
    printf("enter the alphabet \n");
    scanf("%c",&alphabett);
    if (alphabett== 'a'||'e'||'i'||'o'||'u' )
    printf("it is a vowel \n");
    else
    printf("it is a consonant");    
    return 0;
}