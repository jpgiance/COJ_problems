
/* Problem

1596 - Fibonacci Numbers

Statistics	Sub: 329 | AC: 192 | AC%: 58,36 | Score: 0,94
Created by	2006 UCI Void Cup
Added by	ymondelo20 (2011-11-15)
Limits	
Total Time: 2000 MS |Memory: 62 MB | Output: 64 MB | Size: 29 KB
Enabled languages	
Available in	
Description

The Fibonacci sequence is one in which fib (1) = 1, fib (2) = 1, fib (n) = fib (n-1) + fib (n-2) for every natural number. The series has the following form:

1, 1, 2, 3, 5, 8, 13, 21, 34, 55,...,?

One of the curiosities of this series is that there are several ways to calculate it, we know that the Nth term of this series is equal to An(fib(n) = An), where A is the golden ratio, but this number is irrational, then the calculation would be about.

Another way to calculate fib (n) is using the following matrix: M = [(1,1),(1,0)].
It is known that fib(n) = Mn-1[0][0] where Mn-1 is the product of the matrix M by itself n-1 times (the power known). The last 9 digits of the numbers in this series are widely used in cryptography software, then you need generate very quickly the last 9 digits of fib (n) for each of the n values ​​given by standard input, 50 <= n <= 10 000 000.
Input specification

The first line of standard input contains an integer value C between 1000 and 1500, indicating the number of terms in the series that you want, then follow C lines, each containing an integer value indicating the index of the term of Fibonacci who want to get the last 9 digits.
Output specification

One line for each case of entry with the last 9 digits of the corresponding term of Fibonacci.
Sample input

7
4398995
6135707
6597130
9284625
8085296
6646824
7755224
Sample output

363038505
480312313
370844215
985425250
418898597
061247968
317571893


*/


/* Code */



/*****************************************
 ***Problema: Fibonacci Numbers
 ***ID: 1594
 ***Juez: COJ
 ***Tipo: Fibonacci
 ***Tiempo:
 ***Autor: Jhosimar George Arias Figueroa
 ******************************************/

#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <stdlib.h>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <numeric>
#include <utility>
#include <deque>
#include <stack>
#include <bitset>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <queue>
#include <limits>
#include <fstream>
#include <list>
#include <sstream>
#include <iostream>
#include <iomanip>

using namespace std;
long long fibonacci(long n,long m){
    if(n==0)return 0;
    long long a,b,c,d,t; //t temporal para no afectar algun cambio a otra variable
    n--;
    a=1;b=0;
    c=0;d=1;
   while (n > 0){
     if (n % 2 == 1){ //impar
       t = (((d%m)*((b + a)%m))%m + (c%m*b%m)%m)%m;
       a = ((d*b)%m + (c*a)%m)%m;
       b = t;
     }
     t = ((d*2*c)%m + (d*d)%m)%m;
     c = ((c*c)%m + (d*d)%m)%m;
     d = t;
     n/=2;
   }
   return (a%m + b%m)%m;

}
int main(){
    int t, n;
    scanf("%d" , &t );
    while( t-- ){
        scanf("%d" , &n );
        printf("%.9d\n" , fibonacci( n , 1000000000));
    }
    return 0;
}