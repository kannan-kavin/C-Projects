#include "helpers.h"
#include "math.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            float red = (float)image[j][i].rgbtRed;
            float green = (float)image[j][i].rgbtGreen;
            float blue = (float)image[j][i].rgbtBlue;
            float average = round((red + green + blue) / 3);
            image[j][i].rgbtRed = average;
            image[j][i].rgbtGreen = average;
            image[j][i].rgbtBlue = average;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < (width / 2); i++)
    {
        for (int j = 0; j < height; j++)
        {
            RGBTRIPLE temp = image[j][i];
            image[j][i] = image[j][width-1-i];
            image[j][width-1-i] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE average[height][width]

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            float red = 0;
            float green = 0;
            float blue = 0;
            float denominator = 0;
            for (int k = -1; k < 2; k++)
            {
                for (int l = -1; l < 2; l++)
                {
                    if (i + k > 0)
                    {
                        image[i+k][j].rgbtRed += red;
                        image[i+k][j].rgbtGreen += green;
                        image[i+k][j].rgbtBlue += blue;
                        denominator++;
                    }
                    if (i + k < width)
                    {
                        image[i+k][j].rgbtRed += red;
                        image[i+k][j].rgbtGreen += green;
                        image[i+k][j].rgbtBlue += blue;
                        denominator++;
                    }
                    if (j + l > 0)
                    {
                        image[i][j+l].rgbtRed += red;
                        image[i][j+l].rgbtGreen += green;
                        image[i][j+l].rgbtBlue += blue;
                        denominator++;
                    }
                    if (j + l < height)
                    {
                        image[i][j+l].rgbtRed += red;
                        image[i][j+l].rgbtGreen += green;
                        image[i][j+l].rgbtBlue += blue;
                        denominator++;
                    }
                }
            }
        }
    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    /* for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {

        }
    }
    return; */
}
