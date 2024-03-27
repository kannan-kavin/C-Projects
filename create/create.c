// When displayed a term, pick the correct definition (a-d)

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    string term;
    string definition;
} Term;

// Pick a term to use as the question
void question(int unit)
{
    // terms[].term = "";
    // terms[].definition = "";
    if (unit == 1)
    {
        Term terms[56];
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
        terms[22].definition = "Systematically considers biological, psychological, and social factors and their complex interactions in understanding health, illness, and health care delivery";
        terms[23].term = "Sociocultural";
        terms[23].definition = "Modern psychological perspective that looks at how our thoughts and behaviors vary from people living in other cultures; emphasizes the influence of culture on the way we think and act";
        terms[24].term = "Biological domain";
        terms[24].definition = "The application of the principles of biology to the study of mental processes and behavior";
        terms[25].term = "Clinical domain";
        terms[25].definition = "The area of psychology that focuses on the diagnosis and treatment of psychological disorders and other problematic patterns of behavior";
        terms[26].term = "Cognitive domain";
        terms[26].definition = "Covers content on perception, thinking, intelligence, and memory";
        terms[27].term = "Counseling domain";
        terms[27].definition = "Using psychological principles to enhance and promote the positive growth, well-being, and mental health of individuals, families, groups, and the broader community";
        terms[28].term = "Developmental domain";
        terms[28].definition = "Covers topics on learning and conditioning as well as lifespan development";
        terms[29].term = "Educational domain";
        terms[29].definition = "The study of how humans learn and retain knowledge, primarily in educational settings like classrooms";
        terms[30].term = "Experimental domain";
        terms[30].definition = "Concerned with testing theories of human thoughts, feelings, actions, and beyond – any aspect of being human that involves the mind";
        terms[31].term = "Industrial–organizational domain";
        terms[31].definition = "The scientific study of human behavior in organizations and the work place";
        terms[32].term = "Personality domain";
        terms[32].definition = "Concerned with the way such feelings, thoughts, beliefs, intentions, and goals are constructed";
        terms[33].term = "Psychometric domain";
        terms[33].definition = "Looks at the theory and technique of psychological measurement, which quantifies knowledge, abilities, attitudes and personality traits";
        terms[34].term = "Social domain";
        terms[34].definition = "A theory of moral psychology that examines social reasoning and behavior from a developmental perspective";
        terms[35].term = "Positive domain";
        terms[35].definition = "Focused on the character strengths and behaviors that allow individuals to build a life of meaning and purpose—to move beyond surviving to flourishing";
        terms[36].term = "Research method: experiments";
        terms[36].definition = "Involves the manipulation of an independent variable, the measurement of a dependent variable, and the exposure of various participants to one or more of the conditions being studied";
        terms[37].term = "Research method: correlational studies";
        terms[37].definition = "A type of research design that looks at the relationships between two or more variables";
        terms[38].term = "Research method: survey research";
        terms[38].definition = "The collection of information from a sample of individuals through their responses to questions";
        terms[39].term = "Research method: naturalistic observations";
        terms[39].definition = "A research method that involves observing subjects in their natural environment";
        terms[40].term = "Research method: case studies";
        terms[40].definition = "A thorough study of a single person, community or event that relies on observations, facts and experiments to gather information";
        terms[41].term = "Research method: longitudinal studies";
        terms[41].definition = "Researchers repeatedly examine the same individuals to detect any changes that might occur over a period of time";
        terms[42].term = "Research method: cross-sectional studies";
        terms[42].definition = "A type of observational research that analyzes data of variables collected at one given point in time across a sample population or a pre-defined subset";
        terms[43].term = "Cause and Effect";
        terms[43].definition = "Only proved through experiments, the relationship between two events or situations when one of the two is the cause of the other";
        terms[44].term = "Control";
        terms[44].definition = "Used in scientific experiments to prevent factors other than those being studied from affecting the outcome";
        terms[45].term = "Random Assignment";
        terms[45].definition = "Needed to prove cause and effect, every participant having an equal chance of being in either the experimental group or the control group";
        terms[46].term = "Association";
        terms[46].definition = "Can prove a relationship, one variable provides information about another";
        terms[47].term = "Confounding Variables";
        terms[47].definition = "Those that affect other variables in a way that produces spurious or distorted associations between two variables and limit confidence";
        terms[48].term = "Measures of central tendency";
        terms[48].definition = "Mode (most common), median (middle), and mean (average)";
        terms[49].term = "Variation";
        terms[49].definition = "Range (max - min) and Standard Deviation (amount of variation)";
        terms[50].term = "Correlation Coefficient";
        terms[50].definition = "A number between −1 and +1 calculated so as to represent the linear dependence of two variables or sets of data.";
        terms[51].term = "Frequency Distribution";
        terms[51].definition = "An organized tabulation/graphical representation of the number of individuals in each category on the scale of measurement (Normal, Bimodal, Positive Skew, Negative Skew.)";
        terms[52].term = "American Psychological Association";
        terms[52].definition = "Creates guidelines such as: Informed Consent, Deception/Deception Debriefing, Protection from Harm, Anonymity, and Coercion";
        terms[53].term = "Federal Regulations";
        terms[53].definition = "Act as a bedrock for ethical research practices in psychology";
        terms[54].term = "Local Institutional Review Board (IRB)";
        terms[54].definition = "A committee that reviews research studies involving humans for ethics";
        terms[55].term = "The Institutional Animal Care and Use Committee (IACUC)";
        terms[55].definition = "Reviews research studies involving animals for ethics violations.";
        srand(time(NULL));
        int indexterm = rand() % 56;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 56;
            index2 = rand() % 56;
            index3 = rand() % 56;
        }
        while (index1 == indexterm && index2 == indexterm && index3 == indexterm && index1 == index2 && index1 == index3 && index2 == index3);
        string shuffled[4];
        shuffled[0] = terms[indexterm].definition;
        shuffled[1] = terms[index1].definition;
        shuffled[2] = terms[index2].definition;
        shuffled[3] = terms[index3].definition;
        for (int i = 3; i > 0; i--)
        {
            int j = rand() % (i + 1);
            string temp = shuffled[i];
            shuffled[i] = shuffled[j];
            shuffled[j] = temp;
        }
        printf("What does %s mean?\na.) %s\nb.) %s\nc.) %s\nd.) %s\n", terms[indexterm].term, shuffled[0], shuffled[1], shuffled[2], shuffled[3]);
    }
    if (unit == 2)
    {
        Term terms[13];
        terms[1].term = "Charles Darwin";
        terms[1].definition = "Demonstration of the continuity of species, a model for the study of instinct, a book on the expression of the emotions, and a baby biography";
        terms[2].term = "Endocrine System";
        terms[2].definition = "A system of glands that secretes hormones into the circulatory system. These glands include the ovaries and testes, the pituitary gland, the thyroid, and pineal glands and many others, all of which control growth and development, reproduction, and body metabolism.";
        terms[3].term = "Central Nervous System";
        terms[3].definition = "Composed of the brain and spinal cord";
        terms[4].term = "Peripheral Nervous System";
        terms[4].definition = "All of the nerves that branch out from the brain and spinal cord and extend to other parts of the body, including muscles and organs";
        terms[5].term = "Sensory Neurons";
        terms[5].definition = "What carry incoming sensory information into the brain and CNS";
        terms[6].term = "Soma";
        terms[6].definition = "Cell body that keeps the cell alive and functioning";
        terms[7].term = "Dendrite";
        terms[7].definition = "Branch-like structures of neurons that receive messages from other neurons and transmit them towards the cell body";
        terms[8].term = "Axon";
        terms[8].definition = "Passes messages through its terminal branch to other neurons, muscles, or glands";
        terms[9].term = "Action Potential";
        terms[9].definition = "An electrical charge that travels along an axon when a neuron transmits information.";
        terms[10].term = "Reuptake Mechanisms";
        terms[10].definition = "The process by which the presynaptic neuron reabsorbs its released neurotransmitter after the neurotransmitter has done its job by binding to the postsynaptic neuron";
        terms[11].term = "Agonists";
        terms[11].definition = "Substances that bind to synaptic receptors and increase the effect of the neurotransmitter";
        terms[12].term = "Antagonists";
        terms[12].definition = "Drugs that block a particular neurotransmitter from activating its receptors";
        terms[13].term = "Forebrain";
        terms[13].definition = "Consists of the thalamus, hypothalamus, amygdala, and the hippocampus";
        terms[14].term = "";
        terms[14].definition = "";
        terms[15].term = "";
        terms[15].definition = "";
        terms[16].term = "";
        terms[16].definition = "";
        terms[17].term = "";
        terms[17].definition = "";
        terms[18].term = "";
        terms[18].definition = "";
        terms[19].term = "";
        terms[19].definition = "";
        terms[20].term = "";
        terms[20].definition = "";
        terms[21].term = "";
        terms[21].definition = "";
        terms[22].term = "";
        terms[22].definition = "";
        terms[23].term = "";
        terms[23].definition = "";
        terms[24].term = "";
        terms[24].definition = "";
        terms[].term = "";
        terms[].definition = "";
                srand(time(NULL));
        int indexterm = rand() % 56;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 56;
            index2 = rand() % 56;
            index3 = rand() % 56;
        }
        while (index1 == indexterm && index2 == indexterm && index3 == indexterm && index1 == index2 && index1 == index3 && index2 == index3);
        string shuffled[4];
        shuffled[0] = terms[indexterm].definition;
        shuffled[1] = terms[index1].definition;
        shuffled[2] = terms[index2].definition;
        shuffled[3] = terms[index3].definition;
        for (int i = 3; i > 0; i--)
        {
            int j = rand() % (i + 1);
            string temp = shuffled[i];
            shuffled[i] = shuffled[j];
            shuffled[j] = temp;
        }
        printf("What does %s mean?\na.) %s\nb.) %s\nc.) %s\nd.) %s\n", terms[indexterm].term, shuffled[0], shuffled[1], shuffled[2], shuffled[3]);
    }
    if(unit == 3)
    {
                srand(time(NULL));
        int indexterm = rand() % 56;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 56;
            index2 = rand() % 56;
            index3 = rand() % 56;
        }
        while (index1 == indexterm && index2 == indexterm && index3 == indexterm && index1 == index2 && index1 == index3 && index2 == index3);
        string shuffled[4];
        shuffled[0] = terms[indexterm].definition;
        shuffled[1] = terms[index1].definition;
        shuffled[2] = terms[index2].definition;
        shuffled[3] = terms[index3].definition;
        for (int i = 3; i > 0; i--)
        {
            int j = rand() % (i + 1);
            string temp = shuffled[i];
            shuffled[i] = shuffled[j];
            shuffled[j] = temp;
        }
        printf("What does %s mean?\na.) %s\nb.) %s\nc.) %s\nd.) %s\n", terms[indexterm].term, shuffled[0], shuffled[1], shuffled[2], shuffled[3]);
    }
    if(unit == 4)
    {
                srand(time(NULL));
        int indexterm = rand() % 56;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 56;
            index2 = rand() % 56;
            index3 = rand() % 56;
        }
        while (index1 == indexterm && index2 == indexterm && index3 == indexterm && index1 == index2 && index1 == index3 && index2 == index3);
        string shuffled[4];
        shuffled[0] = terms[indexterm].definition;
        shuffled[1] = terms[index1].definition;
        shuffled[2] = terms[index2].definition;
        shuffled[3] = terms[index3].definition;
        for (int i = 3; i > 0; i--)
        {
            int j = rand() % (i + 1);
            string temp = shuffled[i];
            shuffled[i] = shuffled[j];
            shuffled[j] = temp;
        }
        printf("What does %s mean?\na.) %s\nb.) %s\nc.) %s\nd.) %s\n", terms[indexterm].term, shuffled[0], shuffled[1], shuffled[2], shuffled[3]);
    }
    if(unit == 5)
    {
                srand(time(NULL));
        int indexterm = rand() % 56;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 56;
            index2 = rand() % 56;
            index3 = rand() % 56;
        }
        while (index1 == indexterm && index2 == indexterm && index3 == indexterm && index1 == index2 && index1 == index3 && index2 == index3);
        string shuffled[4];
        shuffled[0] = terms[indexterm].definition;
        shuffled[1] = terms[index1].definition;
        shuffled[2] = terms[index2].definition;
        shuffled[3] = terms[index3].definition;
        for (int i = 3; i > 0; i--)
        {
            int j = rand() % (i + 1);
            string temp = shuffled[i];
            shuffled[i] = shuffled[j];
            shuffled[j] = temp;
        }
        printf("What does %s mean?\na.) %s\nb.) %s\nc.) %s\nd.) %s\n", terms[indexterm].term, shuffled[0], shuffled[1], shuffled[2], shuffled[3]);
    }
    if(unit == 6)
    {
                srand(time(NULL));
        int indexterm = rand() % 56;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 56;
            index2 = rand() % 56;
            index3 = rand() % 56;
        }
        while (index1 == indexterm && index2 == indexterm && index3 == indexterm && index1 == index2 && index1 == index3 && index2 == index3);
        string shuffled[4];
        shuffled[0] = terms[indexterm].definition;
        shuffled[1] = terms[index1].definition;
        shuffled[2] = terms[index2].definition;
        shuffled[3] = terms[index3].definition;
        for (int i = 3; i > 0; i--)
        {
            int j = rand() % (i + 1);
            string temp = shuffled[i];
            shuffled[i] = shuffled[j];
            shuffled[j] = temp;
        }
        printf("What does %s mean?\na.) %s\nb.) %s\nc.) %s\nd.) %s\n", terms[indexterm].term, shuffled[0], shuffled[1], shuffled[2], shuffled[3]);
    }
    if(unit == 7)
    {
                srand(time(NULL));
        int indexterm = rand() % 56;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 56;
            index2 = rand() % 56;
            index3 = rand() % 56;
        }
        while (index1 == indexterm && index2 == indexterm && index3 == indexterm && index1 == index2 && index1 == index3 && index2 == index3);
        string shuffled[4];
        shuffled[0] = terms[indexterm].definition;
        shuffled[1] = terms[index1].definition;
        shuffled[2] = terms[index2].definition;
        shuffled[3] = terms[index3].definition;
        for (int i = 3; i > 0; i--)
        {
            int j = rand() % (i + 1);
            string temp = shuffled[i];
            shuffled[i] = shuffled[j];
            shuffled[j] = temp;
        }
        printf("What does %s mean?\na.) %s\nb.) %s\nc.) %s\nd.) %s\n", terms[indexterm].term, shuffled[0], shuffled[1], shuffled[2], shuffled[3]);
    }
    if(unit == 8)
    {
                srand(time(NULL));
        int indexterm = rand() % 56;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 56;
            index2 = rand() % 56;
            index3 = rand() % 56;
        }
        while (index1 == indexterm && index2 == indexterm && index3 == indexterm && index1 == index2 && index1 == index3 && index2 == index3);
        string shuffled[4];
        shuffled[0] = terms[indexterm].definition;
        shuffled[1] = terms[index1].definition;
        shuffled[2] = terms[index2].definition;
        shuffled[3] = terms[index3].definition;
        for (int i = 3; i > 0; i--)
        {
            int j = rand() % (i + 1);
            string temp = shuffled[i];
            shuffled[i] = shuffled[j];
            shuffled[j] = temp;
        }
        printf("What does %s mean?\na.) %s\nb.) %s\nc.) %s\nd.) %s\n", terms[indexterm].term, shuffled[0], shuffled[1], shuffled[2], shuffled[3]);
    }
    if(unit == 9)
    {
                srand(time(NULL));
        int indexterm = rand() % 56;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 56;
            index2 = rand() % 56;
            index3 = rand() % 56;
        }
        while (index1 == indexterm && index2 == indexterm && index3 == indexterm && index1 == index2 && index1 == index3 && index2 == index3);
        string shuffled[4];
        shuffled[0] = terms[indexterm].definition;
        shuffled[1] = terms[index1].definition;
        shuffled[2] = terms[index2].definition;
        shuffled[3] = terms[index3].definition;
        for (int i = 3; i > 0; i--)
        {
            int j = rand() % (i + 1);
            string temp = shuffled[i];
            shuffled[i] = shuffled[j];
            shuffled[j] = temp;
        }
        printf("What does %s mean?\na.) %s\nb.) %s\nc.) %s\nd.) %s\n", terms[indexterm].term, shuffled[0], shuffled[1], shuffled[2], shuffled[3]);
    }
}
// Using their choice, determine whether the user is correct or not and allow them to try again (FOR LOOP) if they get it wrong
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
