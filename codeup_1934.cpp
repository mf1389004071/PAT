#include <cstdio>
#include <cstring>
#define ONLINE_JUDGE
const int q = 210;
int main()
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif // ONLINE_JUDGE
	int n, num[q],b;
	memset(num, 0, sizeof(num));
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &num[i]);
	}
	scanf("%d", &b);
	int i;
	for (i = 0; i < n; ++i)
	{
		if (b == num[i])
		{
			printf("%d", i);
			break;
		}
	}
	if (i==n)
		printf("-1");
	return 0;
}