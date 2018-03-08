#include <cstdio>
#include <algorithm>
#include <optional>
#define ONLINE_JUDGE
const int MAXN = 100005;
int dis_1[MAXN] = {0};
int dis[MAXN], A[MAXN];

int main_1()
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif
	int point, time, sum = 0;
	scanf("%d", &point);
	for (int i = 0; i < point; ++i)
	{
		scanf("%d", &dis_1[i]);
		sum += dis_1[i];
	}
	scanf("%d", &time);
	int a, b, ans = 0;
	for (int i = 0; i < time; ++i)
	{
		ans = 0;
		scanf("%d%d", &a, &b);
		if (a > b)
			std::swap(a, b);
		if (a == b)
		{
			ans = 0;
			continue;
		}
		a -= 1;
		b -= 1;
		while (a < b)
		{
			ans += dis_1[a];
			a += 1;
		}
		if (i == time - 1)
			printf("%d", ans > (sum - ans) ? (sum - ans) : ans);
		else
			printf("%d\n", ans > (sum - ans) ? (sum - ans) : ans);
	}
	return 0;
}

int main(int argc, char* argv[])
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif
	int sum = 0, query, n, left, right;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &A[i]);
		sum += A[i];
		dis[i] = sum;
	}
	scanf("%d", &query);
	for(int i=0;i<query;i++)
	{
		scanf("%d%d", &left, &right);
		if (left > right) std::swap(left, right);
		int temp = dis[right - 1] - dis[left - 1];
		printf("%d\n", std::min(temp, sum - temp));
	}
}
