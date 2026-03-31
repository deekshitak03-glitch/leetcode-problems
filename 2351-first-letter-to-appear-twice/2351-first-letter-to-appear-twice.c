char repeatedCharacter(char* s) {
    int *f=calloc(26,sizeof(int));
    int n=strlen(s);
    for(int i=0;i<26;i++){
        char ch=s[i];
        if(f[ch -'a']!=0)
        return ch;
        f[ch-'a']++;
    }
    return 'a';
}