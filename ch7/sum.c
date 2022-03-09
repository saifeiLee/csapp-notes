int sum(int *a, int n)
{
    int i, s;
    for (i = 0, s = 0; i < n; i++)
        s += a[i];
    return s;
}