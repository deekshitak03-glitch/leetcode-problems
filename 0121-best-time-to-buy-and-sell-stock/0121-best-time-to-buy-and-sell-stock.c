int maxProfit(int* A,int n) {
    int max=0;
    int buy = A[0];
    for(int i=1;i<n;i++){
        if(buy>A[i]){
            buy = A[i];
        }
        else{
            int val = A[i]-buy;
            if(max<val){
                max=val;
            }
        }
    }
    return max;
}