void print_char(char c);

void my_print_n_ascii(int howMany)
{
    int a = howMany;

    for (char i = 0; i < a; i++) {
        print_char(i + 33); 
    }

    if (a > 33)
    {
        printf("")
    }
}
