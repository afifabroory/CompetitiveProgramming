#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include<bits/stdc++.h>
#include <map>
#include<set>
#include<math.h>
#include "solution.h"
#define rep(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define MOD 998244353ll
#define ROD 1000000009ll
#define INF 1e9
#define MIN(a,b) (a>b?b:a)
using namespace std;
#define mp make_pair
#define pb push_back
#define  piii pair<pair<ll,ll>,ll>
#define pii pair<ll,ll>
#define fi first
#define se second
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) \
    for ( \
        auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
        blockTime.second; \
        debug("%s: %lld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
    )
#define MAXN 100005
ll t,n,ar[MAXN];
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		rep(i,0,n)
			scanf("%lld",&ar[i]);
		ll ans = 0,prev_ = 0;
		rep(i,1,n)
		{
			if(ar[i]<ar[prev_])
			{
				ans += ar[prev_] * (i - prev_ + 1) - ar[i];
				prev_ = i; 
			}
		}
		ans += ar[prev_] * (n-1 - prev_ +1) - ar[n-1];
		printf("%lld\n",max(0ll,ans));
		solve(ar, n);
	}
}
