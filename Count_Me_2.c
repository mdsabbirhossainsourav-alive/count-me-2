#include <stdio.h>
int main()
{
    char s[100001]; 
    scanf("%s",s);
    int consonants = 0;
    int sz = strlen(s); 
    for(int i=0; i<sz; i++)
    {
        char c = s[i];
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            consonants ++;
        }
    }
    printf("%d\n",consonants);
    return 0;
}

