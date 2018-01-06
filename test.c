#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{

    while (1)
    {
        printf("비트코인\t");
        system("cat output.txt | grep Buy");
        //system("./test.out");
        
        sleep(2);
    }

    return 0;
}