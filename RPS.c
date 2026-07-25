#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Scoring Included
char name[10];
int pscore = 0, cscore = 0;
void end() {
  printf("\n-=-=-=-=-=-=-=-=-\n%s, Final score is:\n\nYou: %d\nComputer: %d\n", name, pscore, cscore);
  if (pscore > cscore) {
    printf("\nYou win %s!\n", name);
  } else if (pscore < cscore) {
    printf("\nComputer wins!\n");
  } else if (pscore == cscore) {
    printf("\nIt's a tie!\n");
  }
  printf("-=-=-=-=-=-=-=-=-\n\nThanks for Playing %s !!!\n", name);
  printf("\nProgrammed by __Karan Angane__\n\n-=-=-=-=-=-=-=-=-\n");
}

int main() {
  printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
  printf("  Welcome to Rock Paper Scissor Game!\n");
  printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
  printf("\nEnter your Name: ");
  scanf("%s", &name);
  printf("\nWelcome %s\n", name);
  while (1) {
    int choice, comp;
    printf("\n-=-=-=-=-=-=-=-=-\n       MENU\n-=-=-=-=-=-=-=-=-\n0 for Rock,\n1 for Paper,\n2 for Scissors,\n3 to Quit;\n-=-=-=-=-=-=-=-=-\n\nYou choose:");
    scanf("%d", &choice);
    printf("\n-=-=-=-=-=-=-=-=-\nYour choice: %d", choice);
    srand(time(NULL));
    comp = rand() % 3;
    printf("\nComputer's choice: %d\n-=-=-=-=-=-=-=-=-", comp);
    if (choice == comp) {
      printf("\n\nDraw\n");
    } else if (choice == 0 && comp == 1 || choice == 1 && comp == 2 || choice == 2 && comp == 0) {
      printf("\n\n%s, You lose\n", name);
      cscore += 1;
    } else if (choice == 1 && comp == 0 || choice == 2 && comp == 1 || choice == 0 && comp == 2) {
      printf("\n\n%s, You Win\n", name);
      pscore += 1;
    } else if (choice == 3) {
      printf("\n\nYou quit\n");
      end();
      break;
    } else if (choice < 0 || choice > 3) {
      printf("\n\nInvalid input!!!\n");
    }
    printf("\n-=-=-=-=-=-=-=-=-\n%s, Your Score: %d\nComputer Score: %d\n-=-=-=-=-=-=-=-=-\n", name, pscore, cscore);
  }
  return 0;
}
