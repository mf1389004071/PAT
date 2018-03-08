#include <cstdio>
#define ONLINE_JUDGE
void reverseArray(int *arr, int start, int end)
{
	int temp;
	for (; start < end; ++start, --end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	}
}
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	return gcd(b, a%b);
}
void loop(int *arr,int size, int offset)
{
	offset %= size;
	if (offset)
	{
		for (int i = size - offset; i < size - offset + gcd(size, offset); ++i)
		{
			int temp = arr[i], pos = i, next;
			do
			{
				next = (pos - offset + size) % size;
				if (next != i)
					arr[pos] = arr[next];
				else
					arr[pos] = temp;
				pos = next;
			} while (pos != i);
		}
	}
}
int main()
{
#ifdef ONLINE_JUDGE
	freopen("Text.txt", "r", stdin);
#endif // ONLINE_JUDGE
	int n, m;
	scanf("%d%d", &n, &m);
	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
		scanf("%d", arr+i);
	/*reverseArray(arr, 0, n - m - 1);
	reverseArray(arr, n - m, n - 1);
	reverseArray(arr, 0, n - 1);*/
	loop(arr, n, 2);
	for (int i = 0; i < n; ++i)
		printf("%d", arr[i]);
	return 0;
}