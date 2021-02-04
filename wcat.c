/*
Name: Godwyn Akabogu
Course: CIS 3207
Filename: wcat.c
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 999

int main(int argc, char *argv[]){

        char buf[SIZE];

        for(int i = 0; i < argc; i++){

        FILE *fp = fopen("wcat.c", "r");        
        //copied from pdf
        if(fp == NULL){
                printf("wcat: it didn't work\n");
                exit(1);

        }

        //char get = *fgets(buf, SIZE, fp);
        while(fgets(buf, SIZE, fp) != NULL){
        printf("%s", buf);

}

        printf("\n");
        fclose(fp);
}
return 0;

}
