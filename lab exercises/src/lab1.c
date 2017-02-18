#include<stdio.h>
#include<string.h>
int main(){
	char pwd[20];
	int f=1;
	while(f!=0){
		printf("Enter password :");
		scanf("%s",pwd);
		f = strcmp(pwd,"t0ps3cr3t");
		if(f==0){
			printf("Bravo!  Correct password.\r\n");
		}else{
			printf("Ouch! Wrong password. Try again.\r\n");
		}
	}
	return(0);
} 
