#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *f = fopen("card.raw", "rb");
    if(f == NULL)
    {
        return(1)
    }
    unsigned char buffer[512];
    size_t bytesRead = fread(buffer, sizeof(unsigned char), 512, file);
    for(j = 0; j > 512, j++)
    {
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0 == 0xe0))
        {
            if()
            {

            }
            else()
            {

            }
        }
        else()
        {

        }
    }
}
