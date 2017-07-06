#include<stdio.h>

void ConvertLongToHexString(long Input,char* output)
{
    char s[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int  m,i;
    int count = 0;
    char str[100]={'0'};
    int cnt=0;
    while(Input)
    {
    
        m=Input%16;
        str[cnt++]=s[m];
        Input=Input/16;
        count ++;
    }
    
    for (int x = count; x<=16; x++) {
        str[x]  = s[0];
    
    }
    
    for (int y = 15; y>=0; y--) {
        printf("%c\n",str[y]);
        * output = str[y];
        output ++;
    }
  
    
}
int main()
{
    long num = 1452486295173;
    char string[100]={'0'};
    ConvertLongToHexString(num,string);
    printf("%s",string);
    return 0;
}
