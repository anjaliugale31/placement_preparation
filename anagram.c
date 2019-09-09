#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void bsort(char s[]);
int main()
{
    char s1[100],s2[100],s3[100],s4[100];
    int l1,l2,i;
    

    gets(s1);
    gets(s2);

    l1=strlen(s1);
    l2=strlen(s2);
    if(l1==l2)
    {
        //printf("ok");

        bsort(s1);
        bsort(s2);
        for(i=0;i<strlen(s1);i++)
         {
             s3[i]=s1[i];
             s4[i]=s2[i];
         }
        printf("\n %s",s3);
        printf("\n %s",s4);
        if(strcmp(s3,s4)==0)
            {
                printf("\nanagram");
            }
            else{
                printf("\n not anagram");
            }

    }
    else{
        printf("no");
    
    }
    
}
void bsort(char s[])
{
    int n=strlen(s),pass,i;
    char temp;
    char r[100];
    for(pass=0;pass<n-1;pass++)
        {
            for(i=0;i<n-pass-1;i++)
            {
                if(s[i]>s[i+1])
                    {
                    temp=s[i];
                    s[i]=s[i+1];
                    s[i+1]=temp;
                    }
            }
        }
    for(i=0;i<n;i++)
    {
        r[i]=s[i];
        }
    return r;
}