/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** A, int r, int* colsize, int* returnSize, int** returnColSizes) {
    int c=colsize[0];
    int nr=c,nc=r;
    int** T=calloc(nr,sizeof(int*));
    for(int i=0;i<nr;i++){
        T[i]=calloc(nc,sizeof(int));
    }
    for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
            T[i][j]=A[j][i];
        }
    }
    *returnSize=nr;
    *returnColSizes=calloc(nr,sizeof(int));
    for(int i=0;i<nr;i++){
        (*returnColSizes)[i]=nc;
    }
    return T; 
}