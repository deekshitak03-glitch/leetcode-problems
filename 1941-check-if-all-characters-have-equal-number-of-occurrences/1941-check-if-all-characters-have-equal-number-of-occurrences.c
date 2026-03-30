bool areOccurrencesEqual(char* s) {
 int* f=calloc(26,sizeof(int));
 int n=strlen(s);
 for(int i=0;i<n;i++){
      int val=s[i]-'a';
      f[val]++;
 }
 int ans = f[s[0]-'a'];
 for(int j=0;j<26;j++){
    if(f[j]==0)  continue;
    if (f[j] != ans) return false;
 }
 return true;
}