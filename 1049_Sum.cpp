/*

1049 - Sum

Statistics	Sub: 43206 | AC: 6952 | AC%: 16,09 | Score: 0,03
Created by	2000/2001 ACM Northeastern European Regional Programming Contest (test tour)
Added by	ejaltuna (2011-10-13)
Limits	
Total Time: 4000 MS | Test Time: 2000 MS |Memory: 62 MB | Output: 64 MB | Size: 30 KB
Enabled languages	
Available in	  
Description

Your task is to find the sum of all integer numbers lying between 1 and N inclusive.
Input specification

The input consists of a single integer N that is not greater than 10^4 by it's absolute value.
Output specification

Write to the output a single integer number that is the sum of all integer numbers lying between 1 and N inclusive.
Sample input

3
Sample output

6

*/


/*  Code */


# include <stdio.h>
int numero;
int main()
{
 while(scanf("%d",&numero)!=EOF)
 {
  if(numero>=0)
   printf("%d\n",(numero*(numero+1))/2);
  else
    {
     numero=numero*(numero-1);
     numero=numero/2;
     numero=numero*(-1) +1;
     printf("%d\n",numero);
    }
 }
        return 0;
}