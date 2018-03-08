#include <cstdio>
#define ONLINE_JUDGE
int main()
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif // ONLINE_JUDGE
	char str[81][81] = {0};
	int num = 0;
	while (scanf("%s", str[num++]) != EOF);
	for (int i = num - 2; i >= 0; --i)
	{
		printf("%s", str[i]);
		if (i > 0)
			printf(" ");
	}
	return 0;
}