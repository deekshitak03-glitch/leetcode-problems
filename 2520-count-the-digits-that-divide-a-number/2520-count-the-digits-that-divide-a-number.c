int countDigits(int num) {
    int count=0;
    int div=1;
    while(div<=num){
        int ed=(num%(div*10))/div;
        if(num%ed==0){
            count++;
        }
        div=div*10;
    }
    return count;

}
