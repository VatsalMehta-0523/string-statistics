#include <stdio.h>

int main(){
    char str[100];
    int up = 0 , low = 0 , space = 0 , sp = 0 ,dig = 0 ;
    printf("enter a string : ");
    gets(str);

    for (int i = 0 ; str[i] ; i++){
        if(str[i] >= 'a' && str[i] <= 'z' ){
            low++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z' ){
            up++;
        }
        else if(str[i] == ' ' ){
            space++ ;
        }
        else if ( str[i] >= '0' && str[i] <= '9'){
            dig++;
        }
        else{
            sp++;
        }
    }



    printf("\n\nstring statistic for ( %s ) -\n", str );
    printf("\n upper case character(s) found  : %d \n", up );
    printf("lower case character(s) found    : %d \n", low );
    printf("space(s) found                   : %d \n", space );
    printf("number of digits found           : %d \n", dig );
    printf("special character(s) found       : %d \n", sp );
    return 0;
}
