#include <cstdio>
#include <string>
#define ONLINE_JUDGE

int main()
{
	int n;
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif // ONLINE_JUDGE
	while ((scanf("%d",&n)!=EOF))
	{
		int ans[5], mem, flag = -1, flags[5];
		double count_3 = 0;
		memset(ans, 0, sizeof(ans));
		memset(flags, 0, sizeof(flags));
		//scanf("%d", &n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &mem);
			if (mem % 5 == 0 && mem % 2 == 0)
			{
				ans[0] += mem;
				flags[0] = 1;
			}
			if (mem % 5 == 1)
			{
				flag *= -1;
				ans[1] += flag * mem;
				flags[1] = 1;
			}
			if (mem % 5 == 2)
			{
				++ans[2];
				flags[2] = 1;
			}
			if (mem % 5 == 3)
			{
				ans[3] += mem;
				++count_3;
				flags[3] = 1;
			}
			if (mem % 5 == 4 && mem > ans[4])
			{
				ans[4] = mem;
				flags[4] = 1;
			}
		}
		for (int i = 0; i < 5; ++i)
		{
			if (i == 3&&flags[3]!=0)
			{
				double q = ans[3] / count_3;
				printf("%.1f ", q);
				continue;
			}
			if (flags[i] != 0)
				printf("%d", ans[i]);
			else
				printf("%s", "N"); 
			if (i != 4)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}