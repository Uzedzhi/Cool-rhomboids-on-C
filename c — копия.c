#include <stdio.h>

void print_rhomboid(const char ,const char, char);
void print_row(const char, const char, char);

int main(void){
    char start, end;
    scanf("%c %c", &start, &end);
    while (1){
        print_rhomboid(start, end, start);
    }
    return 0;
}


void print_rhomboid(const char start, const char end, char now){
    if (now <= end){
        print_row(start, end, now);
        print_rhomboid(start, end, now+1);
        if (now != end){
            print_row(start, end, now);
        }
    }
}
void print_row(const char start, const char end, char now){
    char j;
    for(j = end-now;j>0;j--){
        printf(" ");
    }
    for (j = start;j < now;j++){
        printf("%c", j);
    }
    for (j = now; j >= start; j--){
        printf("%c", j);
    }
    printf("\n");
}