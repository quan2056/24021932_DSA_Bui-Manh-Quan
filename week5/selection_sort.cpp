void selection_sort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
       int min = i;
       for(int j = i + 1; i < n; j++){
            if(a[j] < a[min]) min = j;
       }
       if(min != i){
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
       }
    }
}
