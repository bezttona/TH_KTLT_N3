#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char s1[100],s2[100];
	gets(s1);gets(s2);
	if (strlen(s1)!= strlen(s2)) printf("Hai chuoi %s va %s khong la anagram ",s1,s2);
	else{
	int b[400],c[400];
	int kt=1;
	for(int i=65;i<=122;i++){
	b[i]=0;c[i]=0;
	}
	for(int i=0;i<=strlen(s1);i++)
	b[int(s1[i])]+=1;
	for(int i=0;i<=strlen(s2);i++)
	c[int(s2[i])]+=1;
	if ((b[i]==0 && c[i]!=0) || (b[i]!=0 && c[i]==0)){
		kt=0;break;
	}

	if(kt) printf("Hai chuoi %s va %s la anagram ",s1,s2);else printf("Hai chuoi %s va %s khong la anagram ",s1,s2);
	getch();
}
}