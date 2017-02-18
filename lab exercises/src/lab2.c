#include<stdio.h>
#include<string.h>

char* callthis(){
	return "h!ghlyt0ps3cr3t";
}

char* callthat(){
	return "t0ps3cr3t";
}

int main(){
	char pwd[20];
	int f=1;
	while(f!=0){
		printf("Enter password :");
		scanf("%s",pwd);
		f = strcmp(pwd,callthat());
		if(f==0){
			printf("Bravo!  Correct password.\r\n");
		}else{
			printf("Ouch! Wrong password. Try again.\r\n");
		}
	}
	return(0);
} 
