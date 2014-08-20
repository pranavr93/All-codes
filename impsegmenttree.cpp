void set(int idx, int val)
{
	while (idx <= N)
	{
		BIT[idx] += val;
		idx += (idx & -idx);
	}
}

for (int i = 1; i <= N; i++)
{
	scanf("%d", &arr[i]);
	set(i, arr[i]);
}

if (strlen(query) == 6)
{
	set(a, b-arr[a]);
	arr[a] = b;
}