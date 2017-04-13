#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if(argc != 2) {
        puts("Need one argument");
    }

    char *string = argv[1];
    int len = strlen(string);

    int i;
    for(i = 0; i < len; i++) {
        switch(string[i]){

            case 'A':
                string[i] = 'U';
                break;

            case 'T': 
                string[i] = 'A';
                break;
            
            case 'G': 
                string[i] = 'C';
                break;
               
            case 'C': 
                string[i] = 'G';
                break;
        }
    }

    printf("\n%s\n", string);
}
