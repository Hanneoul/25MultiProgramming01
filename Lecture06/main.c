#include "Title.h"

int main()
{
    Title();
    TitleMenu();
    int in = TitleMenuInput();
    TitleMenuSelectMessage(in);

    return 0;
}