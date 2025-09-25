#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//
//				ECHO
// 		Enkelt program som skriver ut det du skriver inn
//

int main(int argc, char **argv) {
	if (argc > 1) {
		// huske lengden av argumentene
		size_t totalLen = 0;

		for (int x = 0; x < argc; ++x) {
			// legge til en for mellomromm eller \0
			totalLen += strlen(argv[x]) + 1;
			// printf("%s\n", argv[x]);
		}

		// avsette plass for inputten
		char *input = malloc(totalLen);

		// start input som ett tomt array
		input[0] = '\0'; // NOTE: man må bruke '' og ikke "" <- da funker det ikke og du får error

		// legge sammen inputs
		for (int x = 1; x < argc; ++x) {

			strcat(input, argv[x]);
			// legge til mellomromm mellom argumentene
			if (x < argc - 1) strcat(input, " ");

		}

		printf("%s\n", input);

		// NOTE: viktig å freee minne
		free(input);

	} else return 0;

	return 0;
}
