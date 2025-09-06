#include <stdio.h>

int main(){
/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
Sample Test Cases:
Input 1  : 4 2 +
Output 1 : 6

Input 2  : 10 3 %
Output 2 : 1

Input 3   : 15 5 /
Output 3  : 3
*/
     int n1,n2;
    printf("enter the value of 1st number :\n");
    scanf("%d",&n1);
    printf("enter the value of 2nd number :\n");
    scanf("%d",&n2);
    int choice;
    printf("[ in choice \n 1:addition \n 2:subtraction \n 3:multiplication \n 4:quetient \n 5 :remainder \n]");
    printf("enter your choice :\n");
    scanf("%d",&choice);
    int sum;
    int subtraction;
    int multiplication;
    int quetient;
    int remainder;
    
    switch (choice)
    {
        case 1 : sum  = n1 + n2 ;
                 printf("sum : %d \n",sum);
                 break;
        case 2 : subtraction = n1 - n2 ;
                 printf("subtraction : %d \n",subtraction);
                 break;
        case 3 : multiplication = n1*n2 ;
                 printf("multiplication : %d \n",multiplication);
                 break;
        case 4 : quetient = n1/n2 ;
                 printf("quetient : %d \n",quetient);
                 break;
        case 5 : remainder = n1%n2;
                 printf("remainder : %d \n",remainder);
                 break;
    
    default: printf("invalid choice ");
        break;
    }


    return 0;
}