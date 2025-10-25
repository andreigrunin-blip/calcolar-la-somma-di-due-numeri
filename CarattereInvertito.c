#include <stdio.h>
int main()
{
	char carattere1, carattere2, carattere3;
	printf("Inserisci i 3 caratteri: ");
	scanf("%c %c %c", &carattere1, &carattere2, &carattere3);
	printf("I caratteri invertiti sono: %c%c%c", carattere3, carattere2, carattere1);
	return 0;
}
