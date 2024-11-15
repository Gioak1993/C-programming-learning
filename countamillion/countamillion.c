#include <stdio.h>
int main (){
int i = 1;
int j = 1;
while (i < 1000000000){
    i += 1 ;
    while ( j < 1000000000){
        j += 1;
    }
}
printf ( "%i\n %i\n", i, j);
}