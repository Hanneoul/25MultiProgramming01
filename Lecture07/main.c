int main()
{
    if(1)
    {
        puts("Manyak");
    }

    char input = getch();

    while (input != 'a')
    {
        puts("Its not 'a' !!!!!");
        input = getch();
    }

    puts("Complete");

    return 0;
}
