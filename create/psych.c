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
        terms[1].term = "Charles Darwin";
        terms[1].definition = "Biologist who created many theories which can be applied to psychology";
        terms[2].term = "Dorothea Dix";
        terms[2].definition = "A Nurse who advocated on behalf of the indigent mentally ill through the government";
        terms[3].term = "Sigmund Freud";
        terms[3].definition = "Revolutionized psychology with his psychoanalytic theory; believed the unconscious mind must be examined through dream analysis, word association, and other psychoanalytic therapy techniques; criticized for being unscientific and creating unverifiable theories";
        terms[4].term = "G. Stanley Hall";
        terms[4].definition = "Student of William James who pioneered he study of child development and was the first president of the APA";
        terms[5].term = "William James";
        terms[5].definition = "Published The Principles of Psychology, the science's first textbook; responsible for theory of functionalism";
        terms[6].term = "Ivan Pavlov";
        terms[6].definition = "Russian and Soviet experimental neurologist and physiologist known for his discovery of classical conditioning through his experiments with dogs";
        terms[7].term = "Jean Piaget";
        terms[7].definition = "Came up with a cognitive developmental theory, which focuses on how our cognitions develop in stages as we mature";
        terms[8].term = "Carl Rogers";
        terms[8].definition = "American psychologist who was one of the founders of humanistic psychology and was known especially for his person-centered psychotherapy.";
        terms[9].term = "B. F. Skinner";
        terms[9].definition = "Behaviorist who expanded the basic ideas of behaviorism to include the idea of reinforcement- environmental stimuli that either encourage or discourage certain responses";
        terms[10].term = "Margaret Floy Washburn";
        terms[10].definition = "First woman to earn a PhD in psychology";
        terms[11].term = "John B. Watson";
        terms[11].definition = "American psychologist who popularized the scientific theory of behaviorism, establishing it as a psychological school";
        terms[12].term = "Wilhelm Wundt";
        terms[12].definition = "Set up first psychological laboratory in Leipzig, Germany in 1879; known for training subjects in introspection and for his theory of structuralism";
        terms[13].term = "Structuralism";
        terms[13].definition = "Idea proposed by Wundt that the mind operates by combining subjective emotions and objective sensations; aimed to uncover the basic structures that make up mind and thought";
        terms[14].term = "Functionalism";
        terms[14].definition = "Theory presented by William James; emphasizes adaptiveness of the mental or behavioral processes";
        terms[15].term = "Early Behaviorism";
        terms[15].definition = "Theory that states psychologists should look at only behavior and causes of behavior, and not concern themselves with describing elements of consciousness; dominant school of thought in psychology from the 1920s through the 1960s";
        terms[16].term = "Gestalt";
        terms[16].definition = "Theory that states that the whole experience is often more than just the sum of the parts, because the way we experience the world is more than just an accumulation of various perceptual experiences; relatively little influence on current psychology";
        terms[17].term = "Psychoanalytic/Psychodynamic";
        terms[17].definition = "Theory that states a part of our mind over which we do not have conscious control determines, in part, how we think and behave/Modern clinical viewpoint emphasizing the understanding of mental disorders in terms of unconscious needs, desires, memories, and conflicts";
        terms[18].term = "Humanistic";
        terms[18].definition = "A perspective that emphasizes looking at the whole individual and stresses concepts such as free will, self-efficacy, and self-actualization";
        terms[19].term = "Evolutionary approach";
        terms[19].definition = "Also known as Darwinian; modern psychological perspective that examines human thoughts and actions in terms of natural selection; similar to biopsychology";
        terms[20].term = "Biological approach";
        terms[20].definition = "Personality is influenced by biological factors such as genetics and biochemistry and that certain personality traits are influenced by these factors";
        terms[21].term = "Cognitive approach";
        terms[21].definition = "Modern psychological perspective that examines human thought and behavior in terms of how we interpret, process, and remember environmental events";
        terms[22].term = "Biopsychosocial approaches";
        terms[22].definition = "";
        terms[23].term = "";
        terms[23].definition = "";
        terms[24].term = "";
        terms[24].definition = "";
        terms[25].term = "";
        terms[25].definition = "";
        terms[26].term = "";
        terms[26].definition = "";
        terms[27].term = "";
        terms[27].definition = "";
        terms[28].term = "";
        terms[28].definition = "";
        terms[29].term = "";
        terms[29].definition = "";
        terms[30].term = "";
        terms[30].definition = "";
        terms[31].term = "";
        terms[31].definition = "";
        terms[32].term = "";
        terms[32].definition = "";
        terms[33].term = "";
        terms[33].definition = "";
        terms[34].term = "";
        terms[34].definition = "";
        terms[35].term = "";
        terms[35].definition = "";
        terms[36].term = "";
        terms[36].definition = "";
        terms[37].term = "";
        terms[37].definition = "";
        terms[38].term = "";
        terms[38].definition = "";
        terms[39].term = "";
        terms[39].definition = "";
        terms[40].term = "";
        terms[40].definition = "";
        terms[41].term = "";
        terms[41].definition = "";
        terms[42].term = "";
        terms[42].definition = "";
        terms[43].term = "";
        terms[43].definition = "";
        terms[44].term = "";
        terms[44].definition = "";
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
