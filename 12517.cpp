#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>

#include <cmath>
#include <iostream>
#include <fstream>

#include <string>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <set>
#include <sstream>
#include <stack>

using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

#define FOR(i,n) for( i = 0 ; i<(n) ; i++)
#define RFOR(i,a,b)  for( i = (a) ; i<(b) ; i++)
#define CLR(a) memset(a, 0, sizeof(a))
#define MCLR(a) memset(a, -1, sizeof(a))
#define READ(input) freopen("input", "r", stdin);
#define WRITE(output) freopen("output", "w", stdout):
#define sf scanf
#define pf printf
#define re return

#define all(a) a.begin(),a.end()
#define pb push_back
#define vi vector<int>
#define qi queue<int>
#define pqi priority_queue<int>
#define msi map<string, int>

#define i64 long long
#define pi (2.0*acos(0.0))
#define eps (1e-11)
#define inf 1e9
#define N 100000

i64 C(int n){
	return 1+(9*n*pow(10,n))/2;
}

i64 Aa(char n[]){
	int l=strlen(n);
	long ps=0;
	i64 res=0;
	for(int i=0; i<l; i++){
		int x=n[i]-'0';
		res+=x*C(l-i-1);
		int y=(x*(x-1))/2;
		long h=pow(10,l-i-1);
		res+=y*h;
		res+=ps*x*h;
		ps+=x;
	}
	return res;
}
int main(){
	char n[13],m[13];
	while(scanf("%s %s", n, m)==2){
		int l1=strlen(n);
		int l2=strlen(m);
		if(l1==1 and n[0]=='0' and l2==1 and m[0]=='0') break;
		i64 res=Aa(m)-Aa(n);
		for(int i=0; i<l1; i++) res+=(n[i]-'0');
		printf("%lld\n", res);
	}

	return 0;
}
