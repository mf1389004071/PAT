#include <cstdio>
#define ONLINE_JUDGE

int main()
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif // ONLINE_JUDGE
	int time;
	scanf("%d", &time);
	int a, b, h_a, h_b, count_a = 0, count_b = 0, sum;
	for (int i = 0; i < time; ++i)
	{
		scanf("%d%d%d%d", &a, &h_a, &b, &h_b);
		sum = a + b;
		if (h_a == sum && h_b != sum)
			++count_b;
		if (h_b == sum && h_a != sum)
			++count_a;
	}
	printf("%d %d", count_a, count_b);
}