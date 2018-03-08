#include <cstdio>
#include <cstring>
#define ONLINE_JUDGE
//C 锤子 B布 J剪刀
int change_word(char tmp)
{
	switch (tmp)
	{
	case 'B':
		return 0;
		break;
	case 'C':
		return 1;
		break;
	case 'J':
		return 2;
		break;
	}
}
char change_num(int tmp)
{
	switch (tmp)
	{
	case 0:
		return 'B';
		break;
	case 1:
		return 'C';
		break;
	case 2:
		return 'J';
		break;
	}
}
int main()
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r",stdin);
#endif // ONLINE_JUDGE
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		int jia = 0, yi = 0, both = 0, max[6];
		memset(max, 0, sizeof(max));
		char a, b;
		for (int i = 0; i < n; ++i)
		{
			getchar();
			scanf("%c %c", &a, &b);
			int tmp_a = change_word(a), tmp_b = change_word(b);
			if((tmp_a+1)%3==tmp_b)
			{
				++jia;
				max[tmp_a] += 1;
				continue;
			}
			else {
				if (tmp_a==tmp_b)
				{
					++both;
					continue;
				}
				else
				{
					++yi;
					max[3 + tmp_b] += 1;
					continue;
				}
			}
		}
		int max_a = 0, max_b = 0;
		for (int i = 0; i < 3; ++i)
			if (max[max_a] < max[i])
				max_a = i;
		for(int i=3;i<6;++i)
			if (max[max_b] < max[i])
				max_b = i;
		printf("%d %d %d\n", jia, both, n - jia - both);
		printf("%d %d %d\n", yi, both, n - yi - both);
		printf("%c %c", change_num(max_a), change_num(max_b));
	}
	return 0;
}