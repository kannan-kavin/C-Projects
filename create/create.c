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
void shuffle(int numberofterms, int indexterm, int index1, int index2, int index3, struct Term terms[])
{
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
    return ()
}

// Generate a question using the shuffle function to shuffle w/ independency
void question(int unit)
{
    if (unit == 1)
    {
        int numberofterms = 56;
        Term terms[numberofterms];
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
        Term terms[63];
        terms[0].term = "REM motor behavior disorder";
        terms[0].definition = "Disorder in which you act out vivid unpleasant dreams with violent arm or leg motions.";
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
        terms[13].term = "Brainstem";
        terms[13].definition = "Responsible for automatic survival functions; made of the hypothalamus, pons, thalamus, medulla, reticular formation, cerebellum";
        terms[14].term = "Reticular Formation";
        terms[14].definition = "A nerve network that plays a role in controlling arousal";
        terms[15].term = "Thalamus";
        terms[15].definition = "Sensory switchboard";
        terms[16].term = "Hypothalamus";
        terms[16].definition = "AKA rewards center...maintenance activities: eating, drinking, body and temperature; it governs the endocrine system via the pituitary gland and is linked to emotion";
        terms[17].term = "Medulla";
        terms[17].definition = "Heartbeat and breathing";
        terms[18].term = "Cerebellum";
        terms[18].definition = "Voluntary movement and balance";
        terms[19].term = "Limbic System";
        terms[19].definition = "Associated with emotions and drives";
        terms[20].term = "Hippocampus";
        terms[20].definition = "Part of the limbic system; involved in memory";
        terms[21].term = "Amygdala";
        terms[21].definition = "Part of the limbic system; linked to emotion, especially fear and anger";
        terms[22].term = "Cerebral cortex";
        terms[22].definition = "Ultimate control & information processing center; it is what distinguishes us from animals";
        terms[23].term = "Glial cells";
        terms[23].definition = "Support, nourish & protect neurons; make up the cerebral cortex";
        terms[24].term = "Association Areas";
        terms[24].definition = "Parts of the cerebral cortex not involved in primary motor or sensory functions; involved in higher mental functions such as learning, remembering, thinking & speaking";
        terms[25].term = "Temporal Lobe";
        terms[25].definition = "Auditory areas";
        terms[26].term = "Parietal Lobe";
        terms[26].definition = "Includes sensory cortex";
        terms[27].term = "Occipital Lobe";
        terms[27].definition = "Visual areas, receives visual information from the opposite fields";
        terms[28].term = "Frontal Lobe";
        terms[28].definition = "Speaking, muscle movements, plans & judgements";
        terms[29].term = "Motor Cortex";
        terms[29].definition = "Controls voluntary movements at the back of the frontal lobe";
        terms[30].term = "Sensory Cortex";
        terms[30].definition = "Registers and processes body sensation";
        terms[31].term = "Broca's Area";
        terms[31].definition = "In the frontal lobe, in the left hemisphere; directs muscle movements involved in speech";
        terms[32].term = "Wernicke's Area";
        terms[32].definition = "In the left temporal lobe; involved in language comprehension and expression";
        terms[33].term = "Angular Gyrus";
        terms[33].definition = "Ability to read, controls word transformations into auditory code";
        terms[34].term = "Pons";
        terms[34].definition = "Contains centers for the control of vital processes, including respiration and cardiovascular functions. It also is involved in the coordination of eye movements and balance.";
        terms[35].term = "Brain Lateralization";
        terms[35].definition = "The relegation of cognitive processes to different regions in the brain";
        terms[36].term = "Hemispheric Specialization";
        terms[36].definition = "Refers to the different and specific functions performed by the two hemispheres of the brain";
        terms[37].term = "Paul Broca";
        terms[37].definition = "French physician, anatomist and anthropologist. He is best known for his research on Broca's area concerning language";
        terms[38].term = "Carl Wernicke";
        terms[38].definition = "German physician, anatomist, psychiatrist and neuropathologist. He is known for his influential research into the pathological effects of specific forms of encephalopathy";
        terms[39].term = "Case Study";
        terms[39].definition = "A research design involving an in-depth and detailed examination of a single subject, or case, usually an individual or a small group";
        terms[40].term = "Split Brain Research";
        terms[40].definition = "Experiments on people with a severed corpus callosum";
        terms[41].term = "Imaging Techniques";
        terms[41].definition = "EEG, MRI, and PET, allow us to explore and measure the insane amounts of activity going on in our brain";
        terms[42].term = "Lesioning";
        terms[42].definition = "Naturally or experimentally caused destruction of brain tissue";
        terms[43].term = "Autopsy";
        terms[43].definition = "A procedure in which the body of a dead person is examined in an effort to determine the exact cause and time of death";
        terms[44].term = "Roger Sperry";
        terms[44].definition = "Studied split brain patients; showed that left/right hemispheres have different functions";
        terms[45].term = " Michael Gazzaniga";
        terms[45].definition = "Led pioneering studies in learning and understanding split brained patients and how their brains work";
        terms[46].term = "Depressants";
        terms[46].definition = "One classification of drugs that reduce or slow our neural activity and body functions";
        terms[47].term = "Stimulants";
        terms[47].definition = "Chemicals known to stimulate the nervous system";
        terms[48].term = "Hallucinogen";
        terms[48].definition = "Distort perception and evoke sensory images without any actual sensory input";
        terms[49].term = "William James";
        terms[49].definition = "His work laid much of the groundwork for modern theories about consciousness, perception, memory, emotion, etc.";
        terms[50].term = "Sigmund Freud";
        terms[50].definition = "Believed that the unconscious determines everything we do";
        terms[51].term = "NREM-1";
        terms[51].definition = "Falling into unconsciousness, easily awakened";
        terms[52].term = "NREM-2";
        terms[52].definition = "Deeper into sleep , bursts of brain activity ( sleep spindles)";
        terms[53].term = "NREM-3";
        terms[53].definition = "Deepest sleep ; characterized by deep and slow delta waves";
        terms[54].term = "REM";
        terms[54].definition = "Dreaming occurs, high brain activity, physical appearance of deep sleep";
        terms[55].term = "Activation Synthesis";
        terms[55].definition = "Circuits in the brain are activated during REM sleep";
        terms[56].term = "Adaptive Theory";
        terms[56].definition = "Sleeping in the darkness when predators loomed about kept our ancestors out of harm's way";
        terms[57].term = "Repair Theory";
        terms[57].definition = "Sleep helps restore and repair brain tissue";
        terms[58].term = "Insomnia";
        terms[58].definition = "Persistent problems in falling or staying asleep (although they do sleep less than others they often overestimate)";
        terms[59].term = "Narcolepsy";
        terms[59].definition = "Victim suffers sudden, uncontrollable sleep attacks, often characterized by entry directly into REM. Attacks can last around five minutes usually but happen at the worst times.";
        terms[60].term = "Sleep Apnea";
        terms[60].definition = "Sleep disorder in which victims stop breathing while asleep, briefly arouses and gasps for air, and falls back asleep, and repeats this cycle through the night.";
        terms[61].term = "Night Terrors (aka incubus attacks)";
        terms[61].definition = "Victims experience episodes of high arousal with apparent terror. (Screaming, kicking, thrashing, etc.) Usually occurs during stage 4 sleep and common in children. Usually people with it don't remember having the episodes the next morning.";
        terms[62].term = "Sleep Walking / sleep talking";
        terms[62].definition = "Stage 4 sleep disorders, run in families. Usually harmless. Children and sleep deprived people are more likely to sleepwalk.";
        srand(time(NULL));
        int indexterm = rand() % 63;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 63;
            index2 = rand() % 63;
            index3 = rand() % 63;
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
        Term terms[22];
        terms[0].term = "Gestalt Principles";
        terms[0].definition = "Different ways individuals group stimuli together in order to make a whole that makes sense to them; divided up into five categories: proximity, similarity, continuity, connectedness, and closure";
        terms[1].term = "Depth Perception";
        terms[1].definition = "The ability to see objects in three dimensions although the images that strike the retina are two-dimensional";
        terms[2].term = "Top-down Processing";
        terms[2].definition = "Perceiving things based on your prior experiences and knowledge";
        terms[3].term = "Bottom-up Processing";
        terms[3].definition = "When the brain processes sensory information and uses clues to understand stimuli";
        terms[4].term = "Gustav Fechner";
        terms[4].definition = "Studied our awareness of faint stimuli and coined the term absolute threshold";
        terms[5].term = "David Hubel";
        terms[5].definition = "Demonstrated that neurons in the occipital lobe's visual cortex receive information from individual ganglion cells in the retina and proved that the brain divides a visual scene into several subdimensions";
        terms[6].term = "Ernst Weber";
        terms[6].definition = "Created a law that proved that rather than a constant, absolute amount of change, there must be a constant percentage change for two stimuli to be perceived as different";
        terms[7].term = "Torsten Wiesel";
        terms[7].definition = "Discovered feature detectors, groups of neurons in the visual cortex that respond to different types of visual stimuli";
        terms[8].term = "Perceptual set";
        terms[8].definition = "A predisposition to perceive or notice some aspects of the available sensory data and ignore others";
        terms[9].term = "Context effects";
        terms[9].definition = "States that the context (environmental factors) that surrounds an event effects how an event is perceived and remembered";
        terms[10].term = "Schema";
        terms[10].definition = "The cognitive framework that allows a person to interpret a new situation based on their experience in similar, prior experiences";
        terms[11].term = "Vision process";
        terms[11].definition = "Light will initially pass through the cornea and bend through the pupil to reach the lens. The lens is responsible for taking the refracted light and refocusing it. In doing so, the refocused rays will create an inverted image on the retina";
        terms[12].term = "Theories of color vision";
        terms[12].definition = "Human eyes only perceive three colors of light: red, blue, and green. The wavelengths of these three colors can be combined to create every color on the visible light spectrum";
        terms[13].term = "Visual and hearing impairments";
        terms[13].definition = "Conductive hearing loss, Sensorineural hearing loss, remedied by ALD's";
        terms[14].term = "Synthesia";
        terms[14].definition = "A condition in which stimulation of one sense generates a simultaneous sensation in another.";
        terms[15].term = "Hearing process";
        terms[15].definition = "When the vibration of sound waves are converted to neural impulses. Each vibration causes molecules to compress and expand; the greater the compression, the higher the amplitude, and the louder the sound";
        terms[16].term = "Taste";
        terms[16].definition = "A sense that is picked up by the tongue and involves the detection of chemicals in food that produces different flavors";
        terms[17].term = "Smell";
        terms[17].definition = "A sense that is picked up by the nose and involves the detection of chemicals in the air that produce different scents";
        terms[18].term = "Touch";
        terms[18].definition = "A mix of 4 distinct skin senses; pressure, warmth, cold and pain";
        terms[19].term = "Pain";
        terms[19].definition = "Your body's message telling you that something has gone wrong";
        terms[20].term = "Vestibular";
        terms[20].definition = "Your sense of movement, including balance";
        terms[21].term = "Kinesthesis";
        terms[21].definition = "The system that enables us to sense our position and how and when our body parts move";
        srand(time(NULL));
        int indexterm = rand() % 22;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 22;
            index2 = rand() % 22;
            index3 = rand() % 22;
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
        Term terms[25];
        terms[0].term = "Albert Bandura";
        terms[0].definition = "Creator of the social learning theory";
        terms[1].term = "Ivan Pavlov";
        terms[1].definition = "One of the earliest psychologists known for classical conditioning";
        terms[2].term = "Robert Rescorla";
        terms[2].definition = "Founder of the contingency theory";
        terms[3].term = "B. F. Skinner";
        terms[3].definition = "Developed the theory of operant conditioning";
        terms[4].term = "Edward Thorndike";
        terms[4].definition = "Came up with the law of effect";
        terms[5].term = "Edward Tolman";
        terms[5].definition = "The first psychologist to study latent learning";
        terms[6].term = "John B. Watson";
        terms[6].definition = "A classical conditioning psychologist who did the Little Albert experiment";
        terms[7].term = "John Garcia";
        terms[7].definition = "Discovered a phenomenon in which conditioned taste aversions develop after a specific food becomes associated with a negative reaction, such as nausea or vomiting";
        terms[8].term = "Acquisition";
        terms[8].definition = "When a behavior, such as a conditioned response, has been learned";
        terms[9].term = "Extinction";
        terms[9].definition = "The cessation of the conditioned response when the unconditioned stimulus is no longer presented";
        terms[10].term = "Spontaneous recovery";
        terms[10].definition = "The comeback of a conditioned response (fear) after extinction when the unconditioned stimulus (noise) is presented again";
        terms[11].term = "Generalization";
        terms[11].definition = "The tendency to respond in the same way to different but similar stimuli";
        terms[12].term = "Stimulus discrimination";
        terms[12].definition = "The ability to distinguish between similar but non-identical stimuli";
        terms[13].term = "High-Order Learning";
        terms[13].definition = "When a neutral stimulus becomes linked to a conditioned stimulus";
        terms[14].term = "Unconditioned stimulus";
        terms[14].definition = "Something that has a natural response and can be used to create certain behaviors through classical conditioning";
        terms[15].term = "Unconditioned response";
        terms[15].definition = "The unlearned, naturally occurring response to the unconditioned stimulus";
        terms[16].term = "Neutral/conditioned stimulus";
        terms[16].definition = "A stimulus that does not produce a reflexive response";
        terms[17].term = "Conditioned response";
        terms[17].definition = "A behavior that does not come naturally, but must be learned by the individual by pairing a neutral stimulus with a potent stimulus.";
        terms[18].term = "Contingencies";
        terms[18].definition = "For learning to take place, a stimulus must provide the subject information about the likelihood that certain events will occur.";
        terms[19].term = "Positive reinforcement";
        terms[19].definition = "A method for behavior modification that increases the likelihood or probability that a behavior will occur";
        terms[20].term = "Negative reinforcement";
        terms[20].definition = "The idea of taking away an unwanted stimulus in order to encourage good behavior";
        terms[21].term = "Positive punishment";
        terms[21].definition = "A behavior is discouraged with the application of a negative stimulus or experience";
        terms[22].term = "Negative punishment";
        terms[22].definition = "Taking away something pleasant in order to change a certain behavior";
        terms[23].term = "Classical Conditioning";
        terms[23].definition = "The process of repeatedly pairing an original (unconditioned) stimulus, which naturally produces a reflexive (unconditioned) response, with a new (neutral) stimulus, such that the new stimulus produces the same response.";
        terms[24].term = "Operant Conditioning";
        terms[24].definition = "A method of learning that alters the frequency of a behavior by manipulating its consequences through reinforcement or punishment.";
        srand(time(NULL));
        int indexterm = rand() % 25;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 25;
            index2 = rand() % 25;
            index3 = rand() % 25;
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
        Term terms[43];
        terms[0].term = "Effortful processing";
        terms[0].definition = "Active processing of information that requires sustained effort";
        terms[1].term = "Automatic processing";
        terms[1].definition = "The unconscious processing of incidental or well-learned information";
        terms[2].term = "Deep processing";
        terms[2].definition = "Processing information with consideration to its meaning";
        terms[3].term = "Shallow processing";
        terms[3].definition = "Processing information based on its surface characteristics";
        terms[4].term = "Selective attention";
        terms[4].definition = "Allows one to focus on certain specific sensory information, while ignoring other sensory input";
        terms[5].term = "Divided attention";
        terms[5].definition = "The ability to focus on two or more stimuli simultaneously";
        terms[6].term = "Metacognition";
        terms[6].definition = "The ability to control and be aware of your own thoughts";
        terms[7].term = "Short-term memory";
        terms[7].definition = "Generally include quick observations, and are only stored for 10-30 seconds";
        terms[8].term = "Implicit memory";
        terms[8].definition = "Memories that do not rely upon conscious recall activities";
        terms[9].term = "Long-term memory";
        terms[9].definition = "Stores material organized according to meaning, long periods of time pass and is still extremely relevant/vivid";
        terms[10].term = "Sensory memory";
        terms[10].definition = "The stage of memory that holds an exact copy of incoming information for just a few seconds. Iconic memory: Visual sensory memory. Echoic memory: Auditory sensory memory.";
        terms[11].term = "Prospective memory";
        terms[11].definition = "Remembering to perform an action at a certain time";
        terms[12].term = "Explicit memory";
        terms[12].definition = "The stored memory of facts. Semantic —the memory of facts, ideas, and concepts. Episodic—memories of personal experiences.";
        terms[13].term = "Physiological systems";
        terms[13].definition = "Three necessary stages in the learning and memory process: encoding, storage, and retrieval";
        terms[14].term = "Noam Chomsky";
        terms[14].definition = "Proposed that linguistics, or the study of language, should be included in the field of cognitive psychology since it involves mental processes";
        terms[15].term = "Hermann Ebbinghaus";
        terms[15].definition = "Pioneered the experimental study of memory, and is known for his discovery of the forgetting curve and the spacing effect";
        terms[16].term = "Wolfgang Köhler";
        terms[16].definition = "Contributed his work on insight learning";
        terms[17].term = "Elizabeth Loftus";
        terms[17].definition = "Revealed how memories can be changed by things that we are told";
        terms[18].term = "George A. Miller";
        terms[18].definition = "Theorized that short-term memory can hold between five and nine pieces of information";
        terms[19].term = "Encoding";
        terms[19].definition = "The process of putting new information into memory";
        terms[20].term = "Storing";
        terms[20].definition = "The process of maintaining or keeping information readily available";
        terms[21].term = "Retrieving";
        terms[21].definition = "The process of recalling information from memory such as feelings, images, and events";
        terms[22].term = "Forgetting and Memory Distortion";
        terms[22].definition = "Trace decay theory, retrieval failure theory, interference theory, consolidation theory, and displacement theory.";
        terms[23].term = "Problem Solving";
        terms[23].definition = "A cognitive process that involves identifying, analyzing, and resolving issues";
        terms[24].term = "Bias and Error in Thinking (Cognitive Bias)";
        terms[24].definition = "Predictable thinking errors that occur when processing information around us";
        terms[25].term = "Abstract measures";
        terms[25].definition = "Tests that use non-verbal measures to assess abilities.";
        terms[26].term = "Verbal measures";
        terms[26].definition = "Tests that use word problems to assess abilities";
        terms[27].term = "Speed of processing";
        terms[27].definition = "Attempts to measure how quickly your mind works.";
        terms[28].term = "Fluid intelligence";
        terms[28].definition = "The ability to solve new tasks for which there is no prior knowledge";
        terms[29].term = "Crystallized intelligence";
        terms[29].definition = "The ability to apply previously learned knowledge to solve a new task";
        terms[30].term = "Flynn effect";
        terms[30].definition = "The finding that IQ scores have steadily been surpassing previous generations";
        terms[31].term = "Stereotype threat";
        terms[31].definition = "When a person feels at risk of conforming to negative stereotypes about his or her race";
        terms[32].term = "Savant syndrome";
        terms[32].definition = "A condition in which someone shows exceptional ability in a single skill but limited general mental ability";
        terms[33].term = "Charles Spearman";
        terms[33].definition = "Pioneered the theory of general intelligence";
        terms[34].term = "Howard Gardner";
        terms[34].definition = "Best known for his theory of multiple intelligences";
        terms[35].term = "Robert Sternberg";
        terms[35].definition = "Created a theory that states that there are three aspects to intelligence. These are creative, analytical, and practical intelligence";
        terms[36].term = "Alfred Binet";
        terms[36].definition = "Created the first practical intelligence test by assessing the diverse abilities of Parisian schoolchildren in the 19th century";
        terms[37].term = "Francis Galton";
        terms[37].definition = "Developed the idea of nature vs. nurture";
        terms[38].term = "Lewis Terman";
        terms[38].definition = "Professor who revised Binet's IQ test and established norms for American children";
        terms[39].term = "David Wechsler";
        terms[39].definition = "Became well known for his inventions of intelligence tests that evaluate cognitive abilities in adults and children";
        terms[40].term = "Gifted";
        terms[40].definition = "The state of possessing a great amount of natural ability, talent, or intelligence, which usually becomes evident at a very young age";
        terms[41].term = "Intellectual Disability";
        terms[41].definition = "A condition of limited mental ability, indicated by an intelligence score of 70 or below and difficulty in adapting to the demands of life";
        terms[42].term = "Language Acquisition";
        terms[42].definition = "Humans are born with an innate capacity for learning language";
        srand(time(NULL));
        int indexterm = rand() % 43;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 43;
            index2 = rand() % 43;
            index3 = rand() % 43;
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
        Term terms[15];
        terms[0].term = "Nutrition";
        terms[0].definition = "Diet during pregnancy is critical to the fetus' development and survival";
        terms[1].term = "Illness";
        terms[1].definition = "Avoiding diseaese during pregnancy is critical to the fetus' development and survival";
        terms[2].term = "Substance abuse";
        terms[2].definition = "Avoiding substance abuse during pregnancy is critical to the fetus' development and survival";
        terms[3].term = "Teratogens";
        terms[3].definition = "Substances that damage the process of fetal development such as tobacco and alcohol";
        terms[4].term = "Albert Bandura";
        terms[4].definition = "Creator of the social learning theory";
        terms[5].term = "Diana Baumrind";
        terms[5].definition = "Researched three types of parenting styles: authoritarian (harsh, emphasis on obedience), permissive (unpredictable, lenient), and authoritative (consistent, discussion-based, praising)";
        terms[6].term = "Konrad Lorenz";
        terms[6].definition = "Discovered that some infant animals become attached (imprint) on individuals or even objects they see during a critical period after birth";
        terms[7].term = "Harry Harlow";
        terms[7].definition = "Best known for his maternal separation, dependency needs, and social isolation experiments with primates";
        terms[8].term = "Mary Ainsworth";
        terms[8].definition = "Came up with the Strange Situation paradigm to observe how children react when their caregiver re-enters the room after having left prior.";
        terms[9].term = "Sigmund Freud";
        terms[9].definition = "Father of psychodynamic theory";
        terms[10].term = "Lev Vygotsky";
        terms[10].definition = "Founded the social-cultural perspective";
        terms[11].term = "Jean Piaget";
        terms[11].definition = "known for his stages of cognitive development";
        terms[12].term = " Erik Erikson";
        terms[12].definition = "a theorist who believed that each stage of life had its own task to overcome";
        terms[13].term = "Carol Gilligan";
        terms[13].definition = "A pioneer in the field of gender difference psychology";
        terms[14].term = "Lawrence Kohlberg";
        terms[14].definition = "Most influential psychologist in the field of moral development, particularly in children";
        srand(time(NULL));
        int indexterm = rand() % 15;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 15;
            index2 = rand() % 15;
            index3 = rand() % 15;
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
        Term terms[48];
        terms[0].term = "Instincts";
        terms[0].definition = "Inborn, fixed patterns of behavior that present in response to certain stimuli and are often species-specific";
        terms[1].term = "Incentives";
        terms[1].definition = "A theory of motivation stating that behaviors are motivated by the desire to attain rewards and avoid punishments";
        terms[2].term = "Intrinsic motivation";
        terms[2].definition = "Motivation to complete a behavior because it is internally satisfying to the person";
        terms[3].term = "Extrinsic motivation";
        terms[3].definition = "Motivation driven by an external reward or punishment";
        terms[4].term = "Overjustification effect";
        terms[4].definition = "A paradoxical effect in which rewarding (or offering to reward) a person for their performance can lead to lower, rather than higher, interest in the activity";
        terms[5].term = "Self-efficacy";
        terms[5].definition = "A concept that entails an individual's belief in accomplishing their goals and believing in their ability to successfully complete a task";
        terms[6].term = "Achievement motivation";
        terms[6].definition = "A social motivation wherein we are driven to achieve complex goals and attain knowledge or skils";
        terms[7].term = "Drive reduction theory";
        terms[7].definition = "A theory stating that imbalances to your body's internal environment generate drives that cause you to act in ways that restore homeostasis";
        terms[8].term = "Arousal theory";
        terms[8].definition = "A theory stating that individuals are motivated to perform behaviors in order to maintain an optimal arousal level, typically a moderate level";
        terms[9].term = "Yerkes-Dodson law";
        terms[9].definition = "For easy tasks, the higher the level of physiological or mental arousal, the higher the performance";
        terms[10].term = "Evolutionary theory of motivation";
        terms[10].definition = "Individuals are motivated to engage in behaviors that maximize their genetic fitness";
        terms[11].term = "Maslow’s theory";
        terms[11].definition = "A person cannot experience upper level needs without satisfying the needs below it";
        terms[12].term = "Cognitive dissonance theory";
        terms[12].definition = "An uncomfortable state of mind arising when you recognize inconsistencies in your beliefs and/or behaviors";
        terms[13].term = "Eating";
        terms[13].definition = "Hypothalamus wants to maintain a certain body weight and either triggers hunger or turns it off";
        terms[14].term = "Sex";
        terms[14].definition = "The natural instinct and desire to engage in sexual activities for pleasure and/or reproduction";
        terms[15].term = "Social";
        terms[15].definition = "The human need to interact with others and to be accepted by them";
        terms[16].term = "William James";
        terms[16].definition = "Proposed that emotions occur as a mental reaction to the physiological conditions that result from a stimulus";
        terms[17].term = "Alfred Kinsey";
        terms[17].definition = "Became famous for conducting groundbreaking research on human sexuality in the mid-20th century";
        terms[18].term = "Abraham Maslow";
        terms[18].definition = "Developed a hierarchy of needs, which includes physiological needs (i.e. food, water, shelter), safety, belonging and love, esteem, and self-actualization";
        terms[19].term = "Stanley Schachter";
        terms[19].definition = "Developed the two-factor theory of emotion";
        terms[20].term = "Hans Selye";
        terms[20].definition = "First scientist to identify 'stress' as underpinning the nonspecific signs and symptoms of illness";
        terms[21].term = "James–Lange Theory";
        terms[21].definition = "Emotions reflect physiological states in the body";
        terms[22].term = "Cannon–Bard Theory";
        terms[22].definition = "We feel emotions and experience physiological reactions such as sweating, trembling, and muscle tension simultaneously";
        terms[23].term = "Schachter two-factor theory";
        terms[23].definition = "Physiological arousal occurs, and then one must appraise the reason for that arousal and assign an emotion to it";
        terms[24].term = "Evolutionary theories";
        terms[24].definition = "An individual's thoughts and behaviors are based on what would give them the best chance of survival; subsequently, the behaviors that give the best chance of survival are passed on to further generations";
        terms[25].term = "Richard Lazarus’s appraisal theory";
        terms[25].definition = "A person must first think about a potentially stressful stimulus before experiencing any emotions";
        terms[26].term = "Joseph LeDoux’s theory";
        terms[26].definition = "Messages about fear either take the high road, the low road, or the low road, the fast road";
        terms[27].term = "Paul Ekman’s research on cross-cultural displays of emotion";
        terms[27].definition = "Emotions are biological in nature, meaning that individuals were born with the ability to experience the same emotions";
        terms[28].term = "Facial feedback hypothesis";
        terms[28].definition = "Using the muscles involved in a certain emotion will make you feel that emotion";
        terms[29].term = "General adaptation theory";
        terms[29].definition = "The process your body goes through when you are exposed to any kind of stress, positive or negative";
        terms[30].term = "Stress-related illnesses";
        terms[30].definition = "High blood pressure, heart disease, stroke, obesity and diabetes";
        terms[31].term = "Lewin’s motivational conflicts theory";
        terms[31].definition = "Individuals are motivated to resolve conflicts that can be categorized into three types: approach-approach, avoidance-avoidance, and approach-avoidance";
        terms[32].term = "Unhealthy behaviors";
        terms[32].definition = "Comfort eating, smoking, excessive drinking and lack of time or energy for exercise";
        terms[33].term = "Case studies";
        terms[33].definition = "Detailed investigations into the life of an individual or the dynamics of a small group";
        terms[34].term = "Surveys";
        terms[34].definition = "A mostly quantitative research method involving a list of questions filled out by a group of people to assess attitudes or opinions";
        terms[35].term = "Personalities inventories";
        terms[35].definition = "Questionnaires (often with true-false or agree-disagree items) designed to gauge a wide range of feelings and behaviors assessing several traits at once";
        terms[36].term = "Alfred Adler";
        terms[36].definition = "Focused on parenting styles";
        terms[37].term = "Albert Bandura";
        terms[37].definition = "Creator of the social learning theory";
        terms[38].term = "Paul Costa";
        terms[38].definition = "Associated with the Five Factor Model";
        terms[39].term = "Robert McCrae";
        terms[39].definition = "Associated with the Five Factor Theory";
        terms[40].term = "Sigmund Freud";
        terms[40].definition = "Attributes thoughts and actions to unconscious motives and conflicts";
        terms[41].term = "Carl Jung";
        terms[41].definition = "Believed that an individual's personal unconscious contains the painful or threatening memories and thoughts the person does not want to confront";
        terms[42].term = "Abraham Maslow";
        terms[42].definition = "Created the Hierarchy of Needs that describes motivation and the way to reach self-actualization ";
        terms[43].term = "Carl Rogers";
        terms[43].definition = "Believed that people are innately good, but he thought they require certain things from their interactions with others";
        terms[44].term = "Collectivist culture";
        terms[44].definition = "The tendency to view oneself as a member of a larger (family or social) group, rather than as an isolated, independent being";
        terms[45].term = "Individualistic cultures";
        terms[45].definition = "Tend to believe that independence, competition, and personal achievement are important.";
        terms[46].term = "Personality inventory";
        terms[46].definition = "A questionnaire (often with true-false or agree-disagree items) on which people respond to items designed to gauge a wide range of feelings and behaviors";
        terms[47].term = "Projective tests";
        terms[47].definition = "A personality test in which subjects are shown ambiguous images and asked to interpret them";
        srand(time(NULL));
        int indexterm = rand() % 48;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 48;
            index2 = rand() % 48;
            index3 = rand() % 48;
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
        Term terms[35];
        terms[0].term = "Confidentiality";
        terms[0].definition = "Experimenters will not release any information about subjects without their consent";
        terms[1].term = "Insanity defense";
        terms[1].definition = "a defendant's claim that they were so mentally disturbed at the time of their criminal act that they should not be held accountable for it";
        terms[2].term = "The Rosenhan Study";
        terms[2].definition = "An experiment conducted to determine the validity of psychiatric diagnosis";
        terms[3].term = "Neurodevelopmental Disorders";
        terms[3].definition = "A broad spectrum of conditions that affect a child's brain and nervous system and are similar in that they present in early development";
        terms[4].term = "Schizophrenic Spectrum Disorders";
        terms[4].definition = "A range of conditions that share symptoms with schizophrenia, such as disorganized thinking, hallucinations, delusions, and social withdrawal";
        terms[5].term = "Bipolar Disorders";
        terms[5].definition = "Someone alternates between episodes of mania and depression";
        terms[6].term = "Depressive Disorders";
        terms[6].definition = "Characterized by a depressed mood and physical symptoms such as loss of appetite and fatigue for 2 or more weeks in the absence of a clear cause";
        terms[7].term = "Anxiety Disorders";
        terms[7].definition = "Differ from normal feelings of nervousness or anxiousness and involve excessive fear";
        terms[8].term = "Obsessive-Compulsive Disorders";
        terms[8].definition = "A psychiatric illness characterized by excessive thoughts (obsessions) that lead to repetitive, maladaptive behaviors (compulsions)";
        terms[9].term = "Trauma Disorders";
        terms[9].definition = "Develops after a person is exposed to one or more traumatic events, including war, injury, assault, and natural disasters";
        terms[10].term = "Stressor Disorders";
        terms[10].definition = "Characterized by the development of symptoms following exposure to a stressful event";
        terms[11].term = "Dissociative Disorders";
        terms[11].definition = "A disruption causing inconsistencies in consciousness";
        terms[12].term = "Somatic Disorders";
        terms[12].definition = "Characterized by physical symptoms that cannot be explained by medical conditions, substance use, or other mental disorders";
        terms[13].term = "Eating Disorders";
        terms[13].definition = "Conditions in which a child avoids eating or limits what or how much he or she will eat";
        terms[14].term = "Substance Abuse Disorders";
        terms[14].definition = "Drug use continues despite significant life disruption";
        terms[15].term = "Personality Disorders";
        terms[15].definition = "Characterized by inflexible and enduring behavior patterns that impair social functioning";
        terms[16].term = "Aaron Beck";
        terms[16].definition = "Credited with creating cognitive therapy for disorders such as depression and anxiety";
        terms[17].term = "Albert Ellis";
        terms[17].definition = "Developed the psychotherapeutic approach known as rational emotive behavior therapy (REBT)";
        terms[18].term = "Sigmund Freud";
        terms[18].definition = "Founded the idea of psychoanalysis";
        terms[19].term = "Mary Cover Jones";
        terms[19].definition = "A pioneer of behavior therapy because of her seminal work on the unconditioning of the fear reaction in infants";
        terms[20].term = "Carl Rogers";
        terms[20].definition = "Believed that psychological disorders are caused by reflections of a distorted actualizing tendency";
        terms[21].term = " B. F. Skinner";
        terms[21].definition = "Developed a theory of learning that says that a person is first exposed to a stimulus, which elicits a response, and the response is then reinforced (stimulus, response, reinforcement";
        terms[22].term = "Joseph Wolpe";
        terms[22].definition = "Created a theory which posits that an individual cannot be relaxed and anxious simultaneously";
        terms[23].term = "Behavioral";
        terms[23].definition = "Used to change maladaptive behaviors such as smoking or alcohol abuse";
        terms[24].term = "Cognitive";
        terms[24].definition = "Designed to find maladaptive and harmful thought patterns and to replace them with healthier ones";
        terms[25].term = "Humanistic";
        terms[25].definition = "Treatment techniques based on the assumption that people have a tendency for positive growth and self-actualization, which may be blocked by an unhealthy environment that can include negative self-evaluation and criticism from others";
        terms[26].term = "Biopsychosocial method";
        terms[26].definition = "an integrated approach to psychology that incorporates three different perspectives and types of analysis: biological, psychological, and social-cultural";
        terms[27].term = "Cognitive-behavioral";
        terms[27].definition = "A structured, short-term therapeutic technique that aims to change a client's maladaptive cognitions and behaviors into more realistic and/or adaptive ones";
        terms[28].term = "Sociocultural";
        terms[28].definition = "Consider an individual's family and cultural background when determining the most appropriate treatments for psychological disorders";
        terms[29].term = "Individual";
        terms[29].definition = "a therapist works one-on-one with a client to explore their feelings, beliefs, or behaviors, work through challenging memories, identify aspects of their lives that they would like to change and set personal goals";
        terms[30].term = "Group";
        terms[30].definition = "A form of psychotherapy that typically involves a small group of people to help them cope with their problems and reach goals";
        terms[31].term = "Rational-emotive method";
        terms[31].definition = "helps you identify self-defeating thoughts and feelings, challenge the nature of irrational and unproductive feelings, and replace them with healthier, more productive beliefs";
        terms[32].term = "Psychoanalytic/psychodynamic method";
        terms[32].definition = "Views individuals as responding to unconscious forces and childhood experiences, and that seeks to enhance self-insight";
        terms[33].term = "Client-centered method";
        terms[33].definition = "Uses techniques such as active listening within a genuine, accepting, empathic environment to facilitate clients' growth";
        terms[34].term = "Behavioral method";
        terms[34].definition = "Focuses on observable behaviors rather than internal events like thinking and emotion";
        srand(time(NULL));
        int indexterm = rand() % 35;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 35;
            index2 = rand() % 35;
            index3 = rand() % 35;
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
        Term terms[40];
        terms[0].term = "Fundamental attribution error";
        terms[0].definition = "A person's tendency to attribute another's actions to their character or personality or internal circumstances rather than external factors such as the environment while attributing their own behavior to external factors";
        terms[1].term = "Self-serving bias";
        terms[1].definition = "A cognitive bias where individuals attribute their successes to internal factors like talent or effort, while blaming external factors like luck or other people for their failures";
        terms[2].term = "False consensus effect";
        terms[2].definition = "The tendency to assume that one's own opinions, beliefs, attributes, or behaviors are more widely shared than is actually the case";
        terms[3].term = "Confirmation bias";
        terms[3].definition = "The tendency of individuals to support or search for information that aligns with their opinions and ignore information that doesn't";
        terms[4].term = "Just-world hypothesis";
        terms[4].definition = "The belief that good things happen to good people and bad things happen to bad people";
        terms[5].term = "Halo effect";
        terms[5].definition = "The idea that people tend to overgeneralize one character trait";
        terms[6].term = "Gender";
        terms[6].definition = "How society dictates a man or a woman should look or act";
        terms[7].term = "Race";
        terms[7].definition = "The social construction and categorization of people based on perceived shared physical traits that result in the maintenance of a sociopolitical hierarchy";
        terms[8].term = "Ethnicity";
        terms[8].definition = "A characterization of people based on having a shared culture (e.g., language, food, music, dress, values, and beliefs) related to common ancestry and shared history";
        terms[9].term = "Leon Festinger";
        terms[9].definition = "Proposed the cognitive dissonance theory";
        terms[10].term = "Central route to persuasion";
        terms[10].definition = "A method of persuasion in which you are convinced by the content of the message";
        terms[11].term = "Peripheral route to persuasion";
        terms[11].definition = "A method of persuasion in which you are convinced by something other than the message's content";
        terms[12].term = "Cognitive dissonance";
        terms[12].definition = "An uncomfortable state of mind arising when you recognize inconsistencies in your beliefs and/or behaviors";
        terms[13].term = "Elaboration likelihood model";
        terms[13].definition = "A model suggesting that attitudes can change through evaluation of the content of a persuasive message (central route) or by irrelevant persuasion cues (peripheral routes)";
        terms[14].term = "Solomon Asch";
        terms[14].definition = "Developed the line test to test for conformity- people conformed 33 percent of the time";
        terms[15].term = "Stanley Milgram";
        terms[15].definition = "Student of Asch, shock experiments with the teacher and learner, tested obedience which varied based on circumstances in each experiment";
        terms[16].term = "Philip Zimbardo";
        terms[16].definition = "Created Prison experiment (6 days - the guards became evil and by the end everyone thought it was a real prison), fried grasshopper experiment";
        terms[17].term = "Bystander effect";
        terms[17].definition = "The more people who witness someone in distress, the less likely someone is to intervene";
        terms[18].term = "Social facilitation";
        terms[18].definition = "The phenomenon where the presence of other people can enhance an individual's performance on a task";
        terms[19].term = "Social inhibition";
        terms[19].definition = "The tendency to perform complex or difficult tasks more poorly in the presence of others";
        terms[20].term = "Group polarization";
        terms[20].definition = "Occurs when a group makes a more extreme decision than its individual members would have made if acting on their own";
        terms[21].term = "Deindividuation";
        terms[21].definition = "Occurs when individuals lose their self-awareness and self-restraint in group situations";
        terms[22].term = "Diffusion of responsibility";
        terms[22].definition = "When there are multiple people present, each individual feels less of a responsibility for the situation";
        terms[23].term = "In-group/out-group bias";
        terms[23].definition = "Our tendency to favor our own group as opposed to the outgroup";
        terms[24].term = "Reciprocity norms";
        terms[24].definition = "Our expectation that people will help us if we help them";
        terms[25].term = "Social norms";
        terms[25].definition = "Groups expectations regarding what is appropriate and acceptable for its members";
        terms[26].term = "Social traps";
        terms[26].definition = "A situation in which a group intentionally works for short-term gains at the expense of long-term, widespread negative consequences";
        terms[27].term = "Prisoner’s dilemma";
        terms[27].definition = "Situation where people must choose between an act that is beneficial to themselves but harmful to others and an act that is moderately beneficial to all";
        terms[28].term = "Conflict resolution";
        terms[28].definition = "The reduction of discord and friction between individuals or groups, usually through the use of active strategies, such as conciliation, negotiation, and bargaining";
        terms[29].term = "Superordinate goals";
        terms[29].definition = "A goal that takes precedence over one or more other, more conditional goals";
        terms[30].term = "In-group";
        terms[30].definition = "A social group to which a person psychologically identifies as being a member";
        terms[31].term = "Out-group";
        terms[31].definition = "A social group with which an individual does not identify";
        terms[32].term = "Ethnocentrism";
        terms[32].definition = "The prejudicial belief that one's culture is superior to all other cultures";
        terms[33].term = "Prejudice";
        terms[33].definition = "Involve stereotyped beliefs, negative feelings, and discrimination";
        terms[34].term = "Bias";
        terms[34].definition = "A tendency, inclination, or prejudice toward or against something or someone";
        terms[35].term = "Discrimination";
        terms[35].definition = "The behavioral manifestation of prejudice and therefore involves negative, hostile, and injurious treatment of the members of rejected groups";
        terms[36].term = "Scapegoat theory";
        terms[36].definition = "Maintains that our prejudices dictate who we blame when we are angry, and negative emotions exacerbate prejudice";
        terms[37].term = "Stereotype";
        terms[37].definition = "Beliefs about people based on their membership in a particular group";
        terms[38].term = "Out-group homogeneity bias";
        terms[38].definition = "The tendency to assume that the members of other groups are very similar to each other, particularly in contrast to the assumed diversity of the membership of one's own group";
        terms[39].term = "Mere-exposure effect";
        terms[39].definition = "The idea that people tend to like things or people they are familiar with/exposed to more often";
        srand(time(NULL));
        int indexterm = rand() % 40;
        int index1;
        int index2;
        int index3;
        do
        {
            index1 = rand() % 40;
            index2 = rand() % 40;
            index3 = rand() % 40;
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

void shuffle
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
