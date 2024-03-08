#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            float average = ((image[j][i].rgbtRed + image[j][i].rgbtGreen + image[j][i].rgbtBlue) / 3);
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
    /* for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height, j++)
        {

        }
    }
    return; */
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    /* for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height, j++)
        {

        }
    }
    return; */
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    /* for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height, j++)
        {

        }
    }
    return; */
}
