#include <stdio.h>
#include <stdlib.h>

#define MIN -1000000000000000000LL
#define MAX 1000000000000000000LL

int main() {
    long long left_cost, right_cost;
    
    while (1) {
        // Ζήτηση κόστους αριστερά
        printf("Please enter the cost of going left (or EOF to terminate): ");
        if (scanf("%lld", &left_cost) == EOF) {
            printf("End of input detected. Program terminated.\n");
            return 0;  // Έξοδος από το loop αν έχουμε EOF
        }
        
        // Έλεγχος εύρους για το κόστος αριστερά
        if (left_cost < MIN || left_cost > MAX) {
            return 1;  // Έξοδος από το loop
        }
        
        // Ζήτηση κόστους δεξιά
        printf("Please enter the cost of going right: ");
        if (scanf("%lld", &right_cost) == EOF) {
            fprintf(stderr, "Error: No right cost provided.\n");
            return 1;  // Έξοδος από το loop
        }

        // Έλεγχος εύρους για το κόστος δεξιά
        if (right_cost < MIN || right_cost > MAX) {
            return 1;  // Έξοδος από το loop
        }

        // Επιλογή κατεύθυνσης ανάλογα με το χαμηλότερο κόστος
        if (left_cost <= right_cost) {
            printf("Go left\n");
        } else {
            printf("Go right\n");
        }
    }

    return 0;
}
