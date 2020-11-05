#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int min(int a, int b){
    if(a<b) return a;
    return b;
}

int sublen(char *s, int i, int j){
    return &s[j]-&s[i]+1;
}

int main() {
    int n;
    scanf("%d",&n);
    char *s = (char *)malloc(sizeof(char)*n);
    scanf("%s",s);
    
    int *f = (int *)calloc(sizeof(int),26);
    for(int k=0;k<strlen(s);k++)
        f[s[k]-'A']++;
    
    int *subf = (int *)calloc(sizeof(int),26);
    int i=0,j=1;
    subf[s[i]-'A']++;subf[s[j]-'A']++;
    while((subf['A'-'A']<f['A'-'A']-(n/4)) || 
    	(subf['G'-'A']<f['G'-'A']-(n/4)) || 
        (subf['C'-'A']<f['C'-'A']-(n/4)) ||           			(subf['T'-'A']<f['T'-'A']-(n/4))){  
        	j++;
        	subf[s[j]-'A']++;
    }
    
    int min_len=INT_MAX;
    while(j!=strlen(s)-1 && i!=j){
        subf[s[i]-'A']--;
        if(subf[s[i]-'A']<f[s[i]-'A']-(n/4)){
            j++;
          	while(j!=strlen(s)-1 && s[j]!=s[i]){
            	subf[s[j]-'A']++;
            	j++;
          	}
          	subf[s[i]-'A']++;
        }
        i++;
        min_len=min(min_len,sublen(s,i,j));
    }
    if(i==j) min_len=0;
    printf("%d",min_len);
    return 0;
}