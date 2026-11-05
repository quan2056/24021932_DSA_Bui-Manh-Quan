void quick_sort(int a[], int l, int r) {
    int i = l, j = r;
    int pivot = a[(l + r) / 2];

    while (i <= j) {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;

        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    if (l < j) quick_sort(a, l, j);
    if (i < r) quick_sort(a, i, r);
}
