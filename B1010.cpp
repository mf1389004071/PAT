#include <cstdio>
#define ONLINE_JUDGE
int date[1001] = {0};

int main(int argc, char* argv[])
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif
	int a, b, count = 0;
	while (scanf("%d %d", &a, &b) != EOF)
		date[b] = a;
	date[0] = 0;
	for(int i=1;i<1000;++i)
	{
		date[i - 1] = date[i] * i;
		date[i] = 0;
		count += 1;
	}
	if (count == 0)
		printf("0 0");
	else
	{
		for(int i=1000;i>=0;i--)
		{
			if(date[i]!=0)
			{
				printf("%d %d", date[i], i);
				count -= 1;
				if (count != 0)
					printf(" ");
			}
		}
	}
	return 0;
}
