#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int scores[] = {543,323,32,554,11,3,112};
    int i;
    qsort(scores, 7, sizeof(int), compare_scores_desc); // qsort() changes the order of the elements in the array
    puts("These are the scores in order:");
    for (i = 0; i < 7; i++) {
        printf("Score = %i\n", scores[i]); // This will print out ther array once it's been sorted
    }
    char *names[] = {"Karen", "Mark", "Brett", "Molly"};
    qsort(names, 4, sizeof(char*), compare_names); /* Remember, an array of names is just an array of char pointers, 
                                                        so the size of each item is sizeof(char*) */
    puts("These are the names in order:");
    for (i = 0; i < 4; i++) {
        printf("%s\n", names[i]); // This prints the sorted names out
    }
    return 0;
}