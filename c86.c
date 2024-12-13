#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdbool.h>
bool is_anagram(char s1[],char s2[])
{
	if (strlen(s1)!= strlen(s2)) return 0;
	int b[400],c[400];
	int i;
	for(i=0;i<400;i++)
	{
		b[i]=0;c[i]=0;
	}
	for(i=0;i<strlen(s1);i++)
	b[s1[i]]++;
	for(i=0;i<strlen(s2);i++)
	c[s2[i]]++;
	for(i=0;i<strlen(s2);i++)
	{
		if(b[s1[i]]!=c[s1[i]]) return 0;
	}
	return 1;	
}
main()
{
	char s1[100],s2[100];
	gets(s1);
	gets(s2);
	if(is_anagram(s1,s2)) printf("Hai chuoi %s va %s la anagram ",s1,s2);
	else printf("Hai chuoi %s va %s khong la anagram ",s1,s2);
	return ;
}
