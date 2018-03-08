#include <cstdio>
#define ONLINE_JUDGE
double a[1001] = { 0 };
int main(int argc, char* argv[])
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif
	int length,tmp_1;
	double tmp_2;
	for(int b=0;b<2;++b)
	{
		scanf("%d", &length);
		for (int i = 0; i<length; ++i)
		{
			scanf("%d %lf", &tmp_1, &tmp_2);
			a[tmp_1] += tmp_2;
		}
	}
	length = 0;
	for(int i=1000;i>=0;--i)
	{
		if (a[i] != 0)
			length += 1;
	}
	printf("%d", length);
	for(int i=1000;i>=0;--i)
	{
		if(a[i]!=0)
			printf(" %d %.1lf", i, a[i]);
	}
	return 0;
}
