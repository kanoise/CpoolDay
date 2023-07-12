#include <string.h>

void print_char(char c);

void my_print_revert(char *toRevert)
{
     for (char i = 1; i < 26; i++) {
        print_char(i);
    }
}

int main(void)
{
    my_print_revert("codingclub");
    return 0;    
}