#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define __CLEAR_SCREEN system("clear")

void editfile(char filename[8192],char text[16384]){
        FILE *file;
        file = fopen(filename,"a");
        fprintf(file,"%s",text);
        fclose(file);
}

int main(){
        char text[16384];
        char f[8192];
        printf("file: ");
        fgets(f,8192,stdin);
        f[strlen(f)-1]='\0';
        __CLEAR_SCREEN;
        int i=1;
        while(1){
                printf("%d ",i);
                fgets(text,16384,stdin);
                if(strcmp(text,"!EXITWTE\n")==0){
                        __CLEAR_SCREEN;
                        return 0;
                }
                editfile(f,text);
                i++;
        }

        return 0;
}
