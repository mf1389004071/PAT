#include <cstdio>
#include <algorithm>
#define ONLINE_JUDGE
int main()
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif // ONLINE_JUDGE

	int a,b;
	char n;
	scanf("%d %c", &a, &n);
	b = round(a / 2.0);
	for (int i = 0; i < a; ++i)
		printf("%c", n);
	printf("\n");
	for (int i = 0; i < b - 2; ++i)
	{
		printf("%c", n);
		for (int j = 0; j < a - 2; ++j)
			printf(" ");
		printf("%c\n", n);
	}
	for (int i = 0; i < a; ++i)
		printf("%c", n);
	printf("\n");
	return 0;
}