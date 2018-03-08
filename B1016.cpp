#include <cstdio>
#include <cstring>
#define ONLINE_JUDGE
//int ans_a[10], ans_b[10];
//template<size_t size>
//void ans(long long temp, int(&goal)[size])
//{
//	int i = 0;
//	do
//	{
//		goal[i++] = temp % 10;
//		temp /= 10;
//	} while (temp);
//}
//long long create(int p, int count)
//{
//	int temp = 0;
//	while (count--)
//		temp = temp * 10 + p;
//	return temp;
//}
//int main()
//{
//#ifdef ONLINE_JUDGE
//	freopen("Text.txt", "r", stdin);
//#endif // ONLINE_JUDGE
//	long long a, b;
//	int p, q;
//	while (scanf("%lld%d%lld%d", &a, &p, &b, &q)!=EOF)
//	{
//		memset(ans_a, -1, sizeof(ans_a));
//		memset(ans_b, -1, sizeof(ans_b));
//		int count1 = 0, count2 = 0;
//		
//		ans(a, ans_a);
//		ans(b, ans_b);
//		for (auto i : ans_a)
//			if (i == p)
//				++count1;
//		for (auto i : ans_b)
//			if (i == q)
//				++count2;
//		printf("%lld\n", create(p, count1) + create(q, count2));
//	}
//	return 0;
//}
long long ans(long long temp,int p)
{
	long long count=0;
	do
	{
		if (temp % 10 == p)
			count = count * 10 + p;
		temp /= 10;
	} while (temp);
	return count;
}
int main()
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif // ONLINE_JUDGE
	long long a, b;
	int p, q;
	while (scanf("%lld%d%lld%d", &a, &p, &b, &q) != EOF)
	{
		printf("%d\n", ans(a, p) + ans(b, q));
	}
}