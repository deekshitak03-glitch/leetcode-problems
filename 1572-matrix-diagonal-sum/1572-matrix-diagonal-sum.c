int diagonalSum(int** A, int r, int* matcolsize) {
    int c= matcolsize[0];
    int P1=0,P2=c-1,sum=0;
    for(int i=0;i<r;i++){
        if(P1!=P2){
            sum+=A[i][P1]+A[i][P2];
        }
         if(P1==P2){
            sum+=A[i][P2];
        }
        P1++;
        P2--;
    }
    return sum;
}