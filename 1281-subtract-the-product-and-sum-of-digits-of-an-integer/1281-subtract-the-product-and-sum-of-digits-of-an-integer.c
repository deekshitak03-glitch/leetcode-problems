int subtractProductAndSum(int n) {
    int div=1;
    int sum=0;
    int product=1;
    while(div<=n){
        int ed=(n%(div*10))/div;
        sum=sum+ed;
        product=product*ed;
        div=div*10;

    }
    int result = product-sum;
    return result;
}