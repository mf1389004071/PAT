#include <cstdio>
#define ONLINE_JUDGE

int main(int argc, char* argv[])
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif
	long long a, b, c, tmp;
	int time;
	scanf("%d", &time);
	for(int i=1;i<=time;++i)
	{
		scanf("%lld%lld%lld", &a, &b, &c);
		tmp = a + b;
		if (a > 0 && b > 0 && tmp < 0)
			printf("Case #%d:true\n", i);
		if (a < 0 && b < 0 && tmp>0)
			printf("Case #%d:false\n", i);
		if(tmp>c)
			printf("Case #%d:true\n", i);
		else  
			printf("Case #%d:false\n", i);
	}
	return 0;
}
