#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int editfile(char filename[8192],char text[16384]){
	FILE *file;
	file = fopen(filename,"a");
	fprintf(file,text);
	fclose(file);
}

void main(){
	char text[16384];
	char f[8192];
	printf("file: ");fgets(f,8192,stdin);
	f[strlen(f)-1]='\0';
	system("clear");
	while(1){
		printf("~ ");fgets(text,16384,stdin);
		if(strcmp(text,"EXITWTE\n")==0){
			exit(1);
		}
		editfile(f,text);
	}
}
