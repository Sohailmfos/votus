#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int start,end,i,number=1;
	int mat[4][4];
	for(start = 0,end = 3;start<end;start++,end--){
        for(i=start;i<=end;i++)
        	mat[i][start] = number++;
        number--;
        for (int i = start+1; i <=end; i++)
        	mat[end][i] = number++;
        number--;
        for(i=end-1;i>=start;i--)
        	mat[i][end] = number++;
        number--;
        for(i=end-1;i>start;i--)
        	mat[start][i] = number++;
        number--;
	}
	return 0;
}