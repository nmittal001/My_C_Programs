#include<stdio.h>
int squeeze(char[],char[],int,int);
int main(void)
{
	int i=0,c=0,k=0,j=0,len1=0,len2=0;
	char str1[100],str2[100];
	for(i=0;(c=getchar())!=EOF && c != '\n';i++)
	{	str1[i] = c;
		len1+=1;
	}
	if(c == '\n')
        {
                str1[i] = '\0';
        }

	for(i=0;(c=getchar())!=EOF && c != '\n';i++)
	{
		str2[i] = c;
		len2+=1;
	}
	if(c == '\n')
	{
		str2[i] = '\0';
	}
	int loc=squeeze(str1,str2,len1,len2);
		
//	for(int i=0;str1[i]!='\0';i++)
                printf("%d",loc+1);
}

int squeeze(char str1[],char str2[],int len1,int len2)
{
int check=-1;
    for(int i=0;str1[i]!='\0';++i)
    {
        for(int k=0;k<len2 ;++k)
	{
		if((str1[i]==str2[k]) && (str2[k]!='\0'))
		{
			check=i;
			break;	
		}
	}
	if(check==i)
		break;
	
    }
if(check==-1)
	return -1 ;
else return check;
}
