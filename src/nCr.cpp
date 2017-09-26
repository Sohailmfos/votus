#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
int dp[1000][1000] = {0};
int C(int n,int r){
	if(r>n) return 0;
    if(r==0 || r == n)
    	return 1;
    if(dp[n][r] != 0) return dp[n][r];
    return dp[n][r] = (C(n-1,r-1)+C(n-1,r))%mod;
}

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,r;
		scanf("%d %d",&n,&r);
		printf("%d\n",C(n,r));
	}
	return 0;
}