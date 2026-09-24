#include <stdio.h>

struct Result {
    char Name[50];
    int marks;
};

int main() {
    struct Result Q[15] = {
        {"PARAS DHALARIA", 99},
        {"RAHUL", 92},
        {"PRIYA", 89},
        {"ROHAN", 95},
        {"ANAYA", 91},
        {"ADITYA", 87},
        {"SNEHA", 94},
        {"Mehta", 88},
        {"MOHAN ", 96},
        {"NAZIR", 90}
       
    };

    struct Result *topper = &Q[0];

    for (struct Result *ptr = Q + 1; ptr < Q + 10; ptr++) {
        if (ptr->marks > topper->marks) {
            topper = ptr;
        }
    }

    printf("Topper Details \n");
    printf("Name= %s\n", topper->Name);
    printf("Marks= %d\n", topper->marks);

    return 0;
}