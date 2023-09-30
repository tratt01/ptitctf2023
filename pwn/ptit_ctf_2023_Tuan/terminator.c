#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
void init(){
	setbuf(stdin,0);
	setbuf(stdout,0);
	setbuf(stderr,0);
}

void banner(){
    printf("Welcome to Terminator \n");
}

void help(){
    printf("This is a CLI to communicate with server. Support command: ls, cat, id, whoami.\n");
}

int filenameSandbox(char filename[]){
    if(strlen(filename)>255){
        filename[255] = '\0';
    }
    if(strcmp(filename,"*")==0){
        printf("Don't try to read all file !");
        return -1;
    }
    if(strstr(filename,"flag")!=NULL){
        printf("Don't try to read flag !");
        return -1;
    }
    if(strstr(filename,"flag.txt")!=NULL){
        printf("Don't try to read flag ... again !");
        return -1;
    }
    if(strstr(filename,"flag.*")!=NULL){
        printf("Don't try to read flag ... again...again !");
        return -1;
    }
    return 1;
}

void talk(){
    char userinput[10]={"\0"};
    char filename[256] ={"\0"};
    char *p;
    while(1){
        puts("\nType Exit to exit communicate\n>> ");
        gets(userinput);
        if(strcmp(userinput, "exit")==0){
            break; 
        }
        if(strcmp(userinput, "ls")==0){
            system("ls");
        }
        if(strcmp(userinput, "cat")==0){
            puts("Filename: ");
            gets(filename);
            if(filenameSandbox(filename)==1){
                p = (char*) malloc(260);
                strcpy(p,"cat ");
                strcat(p,filename);
                system(p);
                free(p);
                p = NULL;
            }
        }
        if(strcmp(userinput, "id")==0){
            system("id");
        }
        if(strcmp(userinput, "whoami")==0){
            system("whoami");
        }
    }
    

}

int strcat___(char str1[], char str2[]){
    int size1 = sizeof(&str1);
    int len2 = strlen(str2);
    if(len2 > size1){
        printf("To much for me!");
        return 1;
    }
    else{
        printf("OK for me");
        return 0;
    }
}

int main(){
init();
    banner();
    help();
    talk();
    return 0;
}
