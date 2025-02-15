#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

int main() {
    char *countries[100];
    for(int i = 0 ; i < 100; i++){
        countries[i] = (char *)malloc(100*sizeof(char));
    }
    
    int id = 0;
    while(1){
        char * con = (char *) malloc (100 * sizeof(char));
        assert(con != NULL);
        scanf("%s\n", con);
        // printf("%s\n", con);
        if (strcmp(con, "end") == 0) break;
        strcpy(countries[id], con);
        id++;
        free(con);
    }

    // printf("%d", id);
    for (int j = 0; j < id-1; j++) {
        for (int k = j; k < id; k++) {
            if (strcmp(countries[j], countries[k]) > 0) {
                char * temp = (char *) malloc (100 * sizeof(char));
                assert(temp != NULL);

                strcpy(temp, countries[j]);
                strcpy(countries[j], countries[k]);
                strcpy(countries[k], temp);
                free(temp);
            }
        }
    }

    for (int j = 0; j < id; j++) {
        printf("%s\n", countries[j]);
    }

    for(int i = 0 ; i < 100; i++){
        free(countries[i]);
    }
    return 0;
}