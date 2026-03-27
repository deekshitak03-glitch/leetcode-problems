int pivotIndex(int* a, int n) {
     int ls=0,rs=0,total=0;
     for(int i=0;i<n;i++){
        total+=a[i];
     }
     for(int i=0;i<n;i++){
        rs=total-ls-a[i];
        if(ls==rs)
        return i;

        ls+=a[i];
     }
     return -1;
}