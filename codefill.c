#include<stdio.h>
void printClue(int );
int findSum(int );
int main()
{
    // write a code to find the sum of n number in fibonacci series
    // eg 
    //     if n=8
    //         then series would be 0, 1, 1, 2, 3, 5, 8, 13,
    //     explaination 
    //         fibonacci stats with        0
    //                                     1
    //                                 0+1=1
    //                                 1+1=2
    //                                 1+2=3
    //                                 2+3=5
    //                                 3+5=8
    //                                 5+8=13
    //                                 etc.....
    //   then the sum would be 0+1+1+2+3+5+8+13
                                    
    int n;
    // write a code to get input for n

    int sum =findSum(n);
    printClue(sum);
    return 0;
}
int findSum(int n)
{
    int sum =0;
   // write a code here to find the sum
  

    return sum;
}

void printClue(int x)
{
    printf("%c",x);
}