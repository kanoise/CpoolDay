void print_char(char c);

void my_print_ascii(void)
{
    for (char i = 33; i < 127; i++) {
        print_char(i);
    }
}