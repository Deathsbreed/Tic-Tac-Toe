#include <stdio.h>

/**
 * 0 - Empty
 * 1 - X
 * 2 - O
 */
int grid[3][3];

char getChar(int in) {
	if(in == 0) {
		return ' ';
	} else if(in == 1) {
		return 'X';
	} else {
		return 'O';
	}
}

int main() {
	printf("Welcome to Tick-Tack-Toe\n");
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			grid[i][j] = 0;
		}
	}
	int turn = 0;
	int running = 1;
	do {
		int r, c;
		int valid = 0;
		printf(" %c | %c | %c\n", getChar(grid[0][0]),
			getChar(grid[0][1]), getChar(grid[0][2]));
		printf("---+---+---\n");
		printf(" %c | %c | %c\n", getChar(grid[1][0]),
			getChar(grid[1][1]), getChar(grid[1][2]));
		printf("---+---+---\n");
		printf(" %c | %c | %c\n", getChar(grid[2][0]),
			getChar(grid[2][1]), getChar(grid[2][2]));

		if(!turn) printf("It's X's turn to play\n");
		else printf("It's O's turn to play\n");
		do {
			printf("Which box would you like to play on?\nRow: ");
			scanf("%d", &r);
			printf("Column: ");
			scanf("%d", &c);
			if(r < 3 && r > -1 && c < 3 && c > -1 && grid[r][c] == 0) {
				valid = 1;
			} else {
				printf("Your answer is invalid, please try again.\n");
			}
		} while(valid);
		grid[r][c] = turn ? 2 : 1;
		turn = turn ? 0 : 1;
	} while(running);

	return 0;
}
