#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	
	int length;
	int i;
	char *chk;
	char input[]="I $am 5a$ go68od#@$ st-ude[nt].";
	length=strlen(input);
	chk=input;
	for(i=0;i<length;i++){
		if(*(chk+i)<122&&*(chk+i)>=96){
			printf("%c", *(chk+i));
		}
			else if(*(chk+i)==32){
			printf("%c", *(chk+i));
		}
	else if(*(chk+i)<91&&*(chk+i)>64){
			printf("%c", *(chk+i));
		}
	}
	system("pause");
	return 0;
} 
