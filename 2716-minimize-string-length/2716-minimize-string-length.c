int minimizedStringLength(char* s) {
    int *f=calloc(26,sizeof(int));
    int n= strlen(s);
    for(int i=0;i<n;i++)
    {
        int val=s[i]-'a';
        f[val]=1;
    }
    int sum=0;
    for(int i=0;i<26;i++){
        sum=sum+f[i];
    }
    return sum;
}