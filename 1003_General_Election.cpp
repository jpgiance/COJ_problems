/*
1003 - General Election

Statistics	Sub: 9877 | AC: 4357 | AC%: 44,11 | Score: 0,05
Created by	2009 ACM-ICPC INC
Added by	kojak (2011-10-13)
Limits	
Total Time: 2000 MS |Memory: 62 MB | Output: 64 MB | Size: 9 KB
Enabled languages	
Available in	  
Description

General Election is over, now it is time to count the votes! There are n (2 <= n <= 5) candidates and m (1 <= m <= 100) vote regions. Given the number of votes for each candidate from each region, determine which candidate is the winner (one with the most votes).
Input specification

The first line of input contains an integer T (1 <= T <= 100), the number of test cases follow. Each test case starts with two integers n and m denoting the number of candidate and number of region. The next m lines each contains n integers, V1, V2, ..., Vn (0 <= Vi <= 1000) the number of votes for candidate i.
Output specification

For each test case, output in a line the winning candidate. You may safely assume that the winner is unique.
Sample input

2
3 3
159 213 450
512 890 993
215 420 397
2 5
40 64
35 12
102 58
43 15
79 41
Sample output

3
1

*/

/*  Code */


#include <cstdio>
#define For( i, j, k ) for ( int i = (j); i <= (k); i++ )

const int mxn = 5;
int T, N, M, count[mxn+2], a, b;

int main(){
	
	for ( scanf ( "%d", &T ); T; T-- ){
		scanf ( "%d%d", &N, &M );
		For ( i, 1, M )
			For ( j, 1, N ){
				scanf ( "%d", &a );
				count[j] += a;
			}
		a = 0;
		For ( i, 1, N ){
			if ( a < count[i] ){ a = count[i]; b = i; }
			count[i] = 0;
		}
		printf ( "%d\n", b );
	}

	return 0;
}