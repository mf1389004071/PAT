#include <cstdio>
#include <cstring>/
#define ONLINE_JUDGE
int order[54] = { 0 }, cards[54] = { 0 }, tmp[54] = { 0 };
char colors[5] = { 'S','H','C','D','J' };
int main()
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif // ONLINE_JUDGE
	int num;
	while (scanf("%d",&num)!=EOF)
	{
		for (int i = 0; i < 54; ++i)
			cards[i] = i + 1;
		for (int i = 0; i < 54; ++i)
			scanf("%d", &order[i]);
		for(int n=0;n<num;++n)
		{
			for (int i = 0; i < 54; ++i)
				tmp[order[i] - 1] = cards[i];
			for (int i = 0; i < 54; ++i)
				cards[i] = tmp[i];
		}
		for (int i = 0; i < 53; ++i)
			printf("%c%d ", colors[(cards[i]-1) / 13], (cards[i]-1) % 13+1);
		printf("%c%d ", colors[(cards[53] - 1) / 13], (cards[53] - 1) % 13 + 1);
	}
	return 0;
}
