#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    int i=0;
    while (1)
    {
        system("python api_test.py > output.txt");
        //system("./test.out");
        printf("(%d)번 실행 되었습니다.\n",i++);
        sleep(2);
    }

    return 0;
}