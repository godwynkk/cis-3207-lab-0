/*
Name: Godwyn Akabogu
Course: CIS 3207
Filename: reverse.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 999

int main(int argc, char *argv[])
{

        FILE *fp = fopen(argv[1], "r");        
        if(fp == NULL)
        {
                printf("ERROR \n");
                exit(1);
        }

        char line[SIZE];                
        fgets(line, SIZE, fp);
        fclose(fp);
                                    
        int tot = 0;
        char word[SIZE];
        char words[SIZE][SIZE];
        int l = 0;
        char c;
        for(int i = 0; i<= strlen(line); i++)
        {          
                c = line[i];

                if(c == ' ' || c == 0)
                {
                        strcpy(words [tot++] ,word);
                        memset(word, 0, SIZE);
                        l = 0;
                }
                else
                {
                        l++;
                        word[l]= c;
        }
        }

        for(int i = tot-1; i >= 0; i--)
        {
                printf("%s", words[i]);        
        }

        printf("\n");
        return 0;

}