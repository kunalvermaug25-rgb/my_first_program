#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool rotateString(char* s, char* goal) {
    int len_s = strlen(s);
    int len_goal = strlen(goal);
    if (len_s != len_goal) return false;
    
    char* doubled = (char*)malloc((2 * len_s + 1) * sizeof(char));
    strcpy(doubled, s);
    strcat(doubled, s); 
    
    bool is_rotation = (strstr(doubled, goal) != NULL);
    
    free(doubled); 
    return is_rotation;
}