// Here is the exact question and the example cases shown on your screen for C Level 4 – Problem 14:Question:Write a program to get a number from user and interchange the first and last digits and print the result.Examples:Input: 123456 $\rightarrow$ Output: 623451Input: 76895439 $\rightarrow$ Output: 96895437Input: 675 $\rightarrow$ Output: 576
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int count=0;
    int i ;

    int k;
    int l;
    int j;
    int p;
    int o;
    j=i%10;
    l=(i/100)%10;
    k=(i/10)%10;
    printf("enter the number");
    scanf("%d",&i);
       j=i%10;
    l=(i/100)%10;
    k=(i/10)%10;
    o=i;
    loop:if(o!=0){
        count =count+1;
        o=o/10;
        goto loop;
    }
    if(count==2){
        p=j*10+i/10;
        printf("%d",p);
    }
    else if(count==3){
        p=j*100+k*10+i/100;
        printf("%d",p);
    }
    else if(count==4){
        p=j*1000+l*100+i%100/10*10+i/1000;
         printf("%d",p);
    }
    else if(count==5){
         p=j*10000+i/1000%10*1000+i%1000/100*100+i%1000/10%10*10+i/10000;
         printf("%d",p);
    }
      else if(count==5){
         p=j*10000+i/1000%10*1000+i%1000/100*100+i%1000/10%10*10+i/10000;
         printf("%d",p);
    }
    
    return 0;
}