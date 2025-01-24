#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int intelligence, stamina, charisma;
    int total_points = 20;

    intelligence = rand() % (total_points - 2) + 1;
    stamina = rand() % (total_points - intelligence - 1) + 1;
    charisma = total_points - intelligence - stamina;

    char *class;
    if (intelligence >= stamina && intelligence >= charisma) {
        class = "mage";
    } else if (stamina >= intelligence && stamina >= charisma) {
        class = "knight";
    } else {
        class = "thief";
    }
    
    printf("Class: %s\n", class);
    printf("Stats: Intelligence = %d, Stamina = %d, Charisma = %d\n", 
           intelligence, stamina, charisma);

    return 0;
}
