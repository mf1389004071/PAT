#include <cstdio>
#include <cstring>
#define ONLINE_JUDGE
const int n = 10010;
int main()
{
#ifdef ONLINE_JUDGE
	freopen("新建文本文档.txt", "r", stdin);
#endif
	int num,school[n+1],no,score;
	memset(school, 0, sizeof(school));
	scanf("%d", &num);
	for (int i = 1; i < num; i++)
	{
		scanf("%d%d", &no,&score);
		school[no] += score;
	}
	int max=0;
	for (int i = 1; i < n; ++i)
	{
		if (school[i] > max)
		{
			max = school[i];
			no = i;
		}
	}
	printf("%d %d", no, max);
	return 0;
}