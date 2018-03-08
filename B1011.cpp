#include <cstdio>
#define ONLINE_JUDGE
int main()
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif // ONLINE_JUDGE
	int n;
	long long a, b, c;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		scanf("%lld%lld%lld", &a, &b,&c);
		a += b;
		if (a > c)
			printf("Case #%d:true\n", i);
		else
			printf("Case #%d:false\n", i);
	}
}