#include <stdio.h>

struct Student {
    int ID;
    char name[32];
    float CGPA;
};

int main() {
    struct Student AllStudents[5];
    int i = 0;
    while (i < 5) {
        int ID;
        char name[32];
        float CGPA;
        scanf("%d", &AllStudents[i].ID);
        getchar();
        fgets(AllStudents[i].name,32,stdin);
        AllStudents[i].name[strlen(AllStudents[i].name)-1] = '\0';
        scanf("%f", &AllStudents[i].CGPA);
        i++;
    }

    for (int i = 0; i < 5-1; i++) {
        for (int j = i+1; j < 5; j++) {
            if (AllStudents[i].CGPA < AllStudents[j].CGPA) {
                struct Student temp = AllStudents[i];
                AllStudents[i] = AllStudents[j];
                AllStudents[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d - %s - %g\n", AllStudents[i].ID, AllStudents[i].name, AllStudents[i].CGPA);
    }
    return 0;
}