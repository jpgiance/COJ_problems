
/*  Problem

1059 - Numeric Parity

Description

We define the parity of an integer N as the sum of the bits in binary representation computed modulo two. As an example, the number 21 = 10101 has three 1s in its binary representation so it has parity 3 (mod 2), or 1. In this problem you have to calculate the parity of an integer 1 <= I <= 2147483647 (2^31-1). Then, let start to work...
Input specification

Each line of the input has an integer I and the end of the input is indicated by a line where I = 0 that should not be processed.
Output specification

For each integer I in the input you should print one line in the form "The parity of B is P (mod 2)." where B is the binary representation of I.
Sample input

1
2
10
21
0
Sample output

The parity of 1 is 1 (mod 2).
The parity of 10 is 1 (mod 2).
The parity of 1010 is 2 (mod 2).
The parity of 10101 is 3 (mod 2).

*/





/* Code */



#include <stdio.h>

void print(int N)
{
        if(N == 0) return;
        print(N >> 1);
        printf("%d",N&1);
}

int main()
{
        int N;
        while(scanf("%d",&N),N)
        {
                int counter = 0;
                int NN = N;
                while(NN)
                {
                        counter += NN&1;
                        NN >>= 1;
                }
                printf("The parity of ");
                print(N);
                printf(" is %d (mod 2). \n",counter);
        }
        return 0;
}