#include<stdio.h>
void Greenland() {
    printf("You live in Greenland\n");
    return;
}

void Spain() {
    printf("You live in Spain\n");
    Greenland();
    return;
}
void India() {
    printf("You live in India\n");
    Spain();
    return;
}

int main() {
    India();
    return 0;
}
