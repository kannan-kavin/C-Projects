// When displayed a term, pick the correct definition (a-d)

// Separate into units 1-9

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct
    {
        string term;
        string definition;
    } Term;

// Pick a term to use as the question
void question(int unit)
{
    if(unit == 1)
    {
        
        printf("What does %s mean\n");
    }
    if(unit == 2)
    {
        printf("What does %s mean\n");
    }
    if(unit == 3)
    {
        printf("What does %s mean\n");
    }
    if(unit == 4)
    {
        printf("What does %s mean\n");
    }
    if(unit == 5)
    {
        printf("What does %s mean\n");
    }
    if(unit == 6)
    {
        printf("What does %s mean\n");
    }
    if(unit == 7)
    {
        printf("What does %s mean\n");
    }
    if(unit == 8)
    {
        printf("What does %s mean\n");
    }
    if(unit == 9)
    {
        printf("What does %s mean\n");
    }
}
// Using their choice, determine whether the user is correct or not and allow them to try again if they get it wrong
void answer(char choice)
{

}

int main(int argc, string argv[])
{
    // Ensure proper usage
    if (argc != 2)
    {
        printf("Usage: ./psych [unit]\n");
        return 1;
    }

    // Ensure valid unit
    int unit = atoi(argv[1]);
    if (unit < 1 || unit > 9)
    {
        printf("Unit must be between 1 to 9");
        return 2;
    }
    // Prompt the user with the question
    question(unit);
    //Get the user's answer
    char choice = tolower(get_char("What is your answer?\n"));
    // Congratulate the user if they answer correctly or tell the user the correct answer if they answer incorrectly
    answer(choice);
}
