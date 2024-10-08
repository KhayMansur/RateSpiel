#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void main() {

	int number;
	int randomnumber;
	int level;
	int attempts = 0;

	srand(time(0));

	printf_s("Waehle die Schwierigkeitsstufe (1-5)\n");
	scanf_s("%d", &level);

	int max_range = pow(10, level);
	randomnumber = (rand() % max_range) + 1;

	while (1) {
		printf_s("Rate eine Zahl:");
		scanf_s("%d", &number);
		

		attempts++;

		

		if (number == randomnumber) {
			printf_s("Good Job!\n");
			printf_s("Du hast %d Versuche gebraucht.\n", attempts);
			
			break;
		}
		
		else if (number > randomnumber) {
			printf_s("Zu hoch!\n");

		}

		else {
			printf_s("Zu niedrig!\n");

		}

	}

}