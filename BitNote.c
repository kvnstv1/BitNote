#include <unistd.h>
#include <math.h>

int main(){
    char c;
    while( read(STDIN_FILENO, &c, 1) == 1 && c!='q');
    return 0;
}