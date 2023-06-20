#include <stdio.h>

int hex2int(char c) {
	switch (c) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		case 'A': return 10;
		case 'B': return 11;
		case 'C': return 12;
		case 'D': return 13;
		case 'E': return 14;
		case 'F': return 15;
		default: return -1;
	}
}

int main(int argc, char **argv) {
	if (argc == 1) {
		char hex1 = '\0';
		char hex2 = '\0';
		while (scanf("%1c%1c ", &hex1, &hex2) == 2) {
			printf("%c", (hex2int(hex1) * 16) + hex2int(hex2));
		}
	} else {
		for (int i = 1; i < argc; i++) {
			printf("%c", (hex2int(argv[i][0]) * 16) + hex2int(argv[i][1]));
		}
	}
	printf("\n");
	return 0;
}

