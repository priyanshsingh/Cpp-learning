# include <stdio.h>
# include <string.h>
int main()
{
int n,i,j,k;char s[1000];char c1[1000];int x,c;
scanf("%s",s);
int y=strlen(s);
scanf("%d",&n);
for(i=0;i<n;i++)
{
    c=0;
    scanf("%s",c1);
     x=strlen(c1);
     for(j=0;j<x;j++)
     {
         for(k=0;k<y;k++)
         {
           if(c1[j]==s[k])
                c++;
         }
     }
     if(c==x)
        printf("Yes\n");
     else
        printf("No\n");
}
 
    return 0;
}