#include <cstdio>
#include <algorithm>
#define ONLINE_JUDGE
#define ll long long
//int main()
//{
//#ifdef ONLINE_JUDGE
//	freopen("Text.txt", "r", stdin);
//#endif // ONLINE_JUDGE
//
//	long long start, end;
//	while (scanf("%lld%lld", &start, &end) != EOF)
//	{
//		long long time = round((end - start) / 100);
//		int hour = time / 3600;
//		int min = time % 3600 / 60;
//		int sec = time % 60;
//		printf("%2d:%2d:%2d", hour, min, sec);
//	}
//	return 0;
//}
int main()
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif // ONLINE_JUDGE
	ll start, end;
	while (scanf("%lld%lld", &start, &end) != EOF)
	{
		ll time = end - start;
		if (time % 100 >= 50)
			time = time / 100 + 1;
		else
			time /= 100;
		printf("%02lld:%02lld:%02lld", time / 3600, time % 3600 / 60, time % 60);
	}
}