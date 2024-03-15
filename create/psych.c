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
        Term terms[43];
        terms[0].term = "Mary Whiton Calkins";
        terms[0].definition = "Studied with William James and went on to become president of the American Psychological Association";
        terms[1].term =
        terms[1].definition =
        terms[2].term =
        terms[2].definition =
        terms[3].term =
        terms[3].definition =
        terms[4].term =
        terms[4].definition =
        terms[5].term =
        terms[5].definition =
        terms[6].term =
        terms[6].definition =
        terms[7].term =
        terms[7].definition =
        terms[8].term =
        terms[8].definition =
        terms[9].term =
        terms[9].definition =
        terms[10].term =
        terms[10].definition =
        terms[11].term =
        terms[11].definition =
        terms[12].term =
        terms[12].definition =
        terms[13].term =
        terms[13].definition =
        terms[14].term =
        terms[14].definition =
        terms[15].term =
        terms[15].definition =
        terms[16].term =
        terms[16].definition =
        terms[17].term =
        terms[17].definition =
        terms[18].term =
        terms[18].definition =
        terms[19].term =
        terms[19].definition =
        terms[20].term =
        terms[20].definition =
        terms[21].term =
        terms[21].definition =
        terms[22].term =
        terms[22].definition =
        terms[23].term =
        terms[23].definition =
        terms[24].term =
        terms[24].definition =
        terms[25].term =
        terms[25].definition =
        terms[26].term =
        terms[26].definition =
        terms[27].term =
        terms[27].definition =
        terms[28].term =
        terms[28].definition =
        terms[29].term =
        terms[29].definition =
        terms[30].term =
        terms[30].definition =
        terms[31].term =
        terms[31].definition =
        terms[32].term =
        terms[32].definition =
        terms[33].term =
        terms[33].definition =
        terms[34].term =
        terms[34].definition =
        terms[35].term =
        terms[35].definition =
        terms[36].term =
        terms[36].definition =
        terms[37].term =
        terms[37].definition =
        terms[38].term =
        terms[38].definition =
        terms[39].term =
        terms[39].definition =
        terms[40].term =
        terms[40].definition =
        terms[41].term =
        terms[41].definition =
        terms[42].term =
        terms[42].definition =
        terms[43].term =
        terms[43].definition =
        terms[44].term =
        terms[44].definition =
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
