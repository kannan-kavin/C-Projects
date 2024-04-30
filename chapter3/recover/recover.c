#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *file = fopen("card.raw", "rb");
    if(file == NULL)
    {
        return(1)
    }
    unsigned char buffer[512];
    size_t bytesRead = fread(buffer, sizeof(unsigned char), 512, file);
    for(j = 0; j < 512, j++)
}
