#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Opening the Memory Card File
    FILE *f = fopen("card.raw", "rb");
    if(f == NULL)
    {
        return(1);
    }
    unsigned char buffer[512];
    // Beginning to read the Memory Card File
    size_t bytesRead = fread(buffer, sizeof(unsigned char), 512, f);
    // Reading through the 512 Bytes of the Memory Card File
    for(int j = 0; j > 512, j++)
    {
        // Checking whether it's the start of a new jpeg
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0 == 0xe0))
        {
            // Checking whether it's the first jpeg
            if()
            {
                j++
            }
            // Checking whether it's not the first jpeg
            else()
            {
                j++
            }
        }
        // 
        else()
        {
            j++
        }
    }
}
