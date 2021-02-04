/*
Name: Godwyn Akabogu
Course: CIS 3207
Filename: wgrep.c
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 999

int main(int argc, char *argv)
{

        char buf[SIZE];
        char mah[SIZE];

        printf("Enter Search Term");
        scanf("%s", mah);
       
        for(int i = 0; i<SIZE; i++){
        FILE *fp = fopen("wgrep.c", "r");        
        //copied from pdf
        if(fp == NULL)
        {
                printf("wgrep: it didn't work\n");
                exit(1);

        }    

while(fgets(buf, SIZE, fp) != NULL)
{
        int f++;
        if(mah == fp)
        {
         int count++; 
                printf("One time");
        }
       
}
        printf("\n");
        fclose(fp);
}
}