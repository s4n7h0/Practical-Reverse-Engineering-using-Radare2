#include<stdio.h>

void display(int i){
	printf("you have entered %d\r\n",i);
}

int main(int argc, char* argv[])
{
	int i;

	printf("Hello there! Please provide an integer: ");
	scanf("%d", &i);
	display(i);
	printf("Thanks, bye!\r\n");
	return 0;
} 
