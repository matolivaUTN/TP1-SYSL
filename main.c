#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    c = getchar();
    while(c != '\n'){
        if(isdigit(c)){
            c = getchar();
        }
        else{
            if(isupper(c)){
                putchar(tolower(c));
            }
            else{
                putchar(toupper(c));
            }
            c = getchar();
        }
    }

    return 0;
}

//Oliva Matias K2002