
// questions:Write a program to get a number from the user. If the last digit (defined here as the Most Significant Digit / MSB) of the number is even, print the same number. If the last digit (MSB) is odd, subtract 1 from it and print the updated number.Examples:Input: 654324 $\rightarrow$ Output: 654324 (Since 6 is even)Input: 76895439 $\rightarrow$ Output: 66895439 (Since 7 is odd, $7 - 1 = 6$)Input: 675 $\rightarrow$ Output: 575 (Note: The platform's test case has a typo where it treats 6 as odd to get 575, but logically we will target the actual leftmost digit).
#include<stdio.h>
int main(){
    
    int i ;

    printf("enter the number");
    scanf("%d",&i);
    o=i
    n=count
    loop:if(o!=0){
        count= count+1;
        o=o/10;
        goto loop;
    }
    if(n==3){
        fd=i/100;
        sub=i-1000;
    }
    elseif(n==4){
         fd=i/1000;
        sub=i-10000;
    }
    elseif(n==5){
        fd=i/100000;
        sub=i-100000;
    }
    elseif(n==6){
         fd=i/100000;
        sub=i-100000;
    }
    if (fd%2!=0){
        printf("%d",i-sub);
    }
    else{
        printf("%d",i)
    }
    }
            
    }

}