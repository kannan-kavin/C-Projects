#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] is jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, eliminated status
typedef struct
{
    string name;
    int votes;
    bool eliminated;
} candidate;

// Array of candidates
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int voter_count;
int candidate_count;

// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    voter_count = get_int("Number of voters: ");
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Keep querying for votes
    for (int i = 0; i < voter_count; i++)
    {

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            // Record vote, unless it's invalid
            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // Keep holding runoffs until winner exists
    while (true)
    {
        // Calculate votes given remaining candidates
        tabulate();

        // Check if election has been won
        bool won = print_winner();
        if (won)
        {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone wins
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to zero
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

// Record preference if vote is valid
bool vote(int voter, int rank, string name)
{
    for (int j = 0; j < candidate_count; j++)
    // Iterating through candidates
    {
        if (strcmp(candidates[j].name, name) == 0)
        // Compare the candidates name to the input name
        {
            preferences[voter][rank] = j;
            // Update the preferences of the voters to match the candidate
            return true;
        }
    }
    return false;
}

// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    for (int j = 0; j < voter_count; j++)
    {
        for (int k = 0; k < 3; k++)
        // Iterating through the voters, candidates, and ranks for the candidates of those voters
        {
            if (candidates[preferences[j][k]].eliminated == 0)
            // Checking whether the candidate is still in the election
            {
                candidates[preferences[j][k]].votes++;
                break;
                // Breaking out of the loop to prevent repeat voters
            }
        }
    }
    return;
}
// Print the winner of the election, if there is one
bool print_winner(void)
{
    for (int j = 0; j < candidate_count; j++)
    // Iterating through candidates
    {
        if (candidates[j].votes > (voter_count / 2))
        // Checking whether the candidate more than half the votes in the election
        {
            printf("Winner: %s\n", candidates[j].name);
            // Printing the winner of the election
            return true;
        }
    }
    return false;
}

// Return the minimum number of votes any remaining candidate has
int find_min(void)
{
    int min = voter_count;
    for (int j = 0; j < candidate_count; j++)
    // Iterating through candidates
    {
        if (candidates[j].eliminated == 0)
        // Checking whether the candidate is still in the election
        {
            if (candidates[j].votes < min)
            // Comparing candidate[j]'s votes to the minimum to find the new minimum
            {
                min = candidates[j].votes;
            }
        }
    }
    return min;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{
    int tied = 0;
    int candidate_check = 0;
    for (int j = 0; j < candidate_count; j++)
    // Iterating through candidates
    {
        if (candidates[j].votes == min && candidates[j].eliminated == 0)
        // Finding the number of candidates in the election and tied at the minimum number of votes
        {
            tied++;
        }
        if (candidates[j].eliminated == 0)
        // Finding the number of candidates total still in the election
        {
            candidate_check++;
        }
    }
    if (tied == candidate_check)
    // Comparing minimum votes candidates to total candidates to determine tie status
    {
        return true;
    }
    return false;
}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min)
{
    for (int j = 0; j < candidate_count; j++)
    // Iterating through candidates
    {
        if (candidates[j].votes == min && candidates[j].eliminated == 0)
        {
            candidates[j].eliminated = 1;
        }
    }
    return;
}
