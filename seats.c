#include <stdio.h>

#define ROWS 10
#define SEATS 15

void displaySeats(int seats[ROWS][SEATS]) {
    printf("\nSeating Arrangement:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < SEATS; j++) {
            printf("%d ", seats[i][j]);
        }
        printf("\n");
    }
}

void reserveSeat(int seats[ROWS][SEATS]) {
    int row, col;
    printf("Enter row (1-10) and seat number (1-15) to reserve: ");
    scanf("%d %d", &row, &col);

    if (seats[row - 1][col - 1] == 1) {
        printf("Seat is already reserved!\n");
    } else {
        seats[row - 1][col - 1] = 1;
        printf("Seat reserved successfully.\n");
    }
}

void cancelReservation(int seats[ROWS][SEATS]) {
    int row, col;
    printf("Enter row (1-10) and seat number (1-15) to cancel reservation: ");
    scanf("%d %d", &row, &col);

    if (row < 1 || row > ROWS || col < 1 || col > SEATS) {
        printf("Invalid seat number. Please try again.\n");
        return;
    }

    if (seats[row - 1][col - 1] == 0) {
        printf("Seat is already vacant!\n");
    } else {
        seats[row - 1][col - 1] = 0;
        printf("Reservation cancelled successfully.\n");
    }
}

int main() {
    int seats[ROWS][SEATS] = {0}; // Initialize all seats to 0 (vacant)
    int choice;

    while (1) {
        printf("\nTheater Seat Reservation System\n");
        printf("1. Display Seat Availability\n");
        printf("2. Reserve a Seat\n");
        printf("3. Cancel a Reservation\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displaySeats(seats);
                break;
            case 2:
                reserveSeat(seats);
                break;
            case 3:
                cancelReservation(seats);
                break;
            case 4:
                printf("Exiting the program. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}