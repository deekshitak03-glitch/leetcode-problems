void Swap(int* A,int i,int j){
    int t=A[i];
    A[i]=A[j];
    A[j]=t;
}
void reverse(int* A,int n){
    int i=0,j=n-1;
    while(i<j)
    {
        Swap(A,i,j);
        i++;
        j--;
    }
}
void transpose(int** A,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int t=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=t;
        }
    }
}
       
void rotate(int** A, int n, int* matrixColSize) {
       transpose(A,n);
       for(int i=0;i<n;i++){
        reverse(A[i],n);
       }
}