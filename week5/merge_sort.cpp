void merge(int a[], int l, int m, int r) {
    int* b = new int[r - l + 1];

    int i = l, j = m + 1, k = 0;

    while (i <= m && j <= r) {
        if (a[i] <= a[j]) b[k++] = a[i++];
        else b[k++] = a[j++];
    }

    while (i <= m) b[k++] = a[i++];
    while (j <= r) b[k++] = a[j++];

    for (int i = 0; i < k; i++)
        a[l + i] = b[i];

    delete[] b;
}

void sort(int a[], int l, int r) {
    if (l >= r) return;

    int m = (l + r) / 2;

    sort(a, l, m);
    Sort(a, m + 1, r);

    merge(a, l, m, r);
}
