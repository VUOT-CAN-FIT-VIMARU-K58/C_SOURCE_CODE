//CAU 60: CHUAN HOA KI TU - CODING BY NTK - 74458
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int i,j;
char s[100];
void chuanHoa();
int main(){
	printf("Nhap chuoi ki tu can chuan hoa: \n");
	gets(s);
	chuanHoa();
	printf("Chuoi ki tu da chuan hoa la: \n %s",s);
}
void chuanHoa(){
	while (s[0] ==' '){
		for(i=0;i<strlen(s);i++)
			s[i]=s[i+1];
	}
	i=0;
	while(i<strlen(s)){
		if(s[i]==' '&& s[i+1]==' '){
			for(j=i;j<strlen(s);j++)
				s[j]=s[j+1];
		}		
	}
	while(s[strlen(s)]==' ') s[strlen(s)] = '\0';
	strlwr(s); //HAM CHUYEN TOAN BO CHU HOA THANH CHU THUONG
	s[0]=toupper(s[0]);
	for(i=0;i<strlen(s);i++){
		if(s[i]==' ')
			s[i+1]=toupper(s[i+1]);
	}		
}
