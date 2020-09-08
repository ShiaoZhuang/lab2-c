// Author: Shiao Zhuang sqz5328@psu.edu
// Collaborator: Ruimin Gao rpg5384@psu.edu
// Collaborator: Evan Eissfeldt eme5317@psu.edu
// Collaborator: Alondra Salinas avs6630@psu.edu
// Section: 1
// Breakout: 16
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  float n;
  char *grade = readline("Enter your CMPSC 131 grade: ");
  n = atof(grade);
  if (n >= 93.0) {
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if (n >= 90.0){
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if (n >= 87.0){
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if (n >= 83.0){
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if (n >= 80.0){
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if (n >= 77.0){
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if (n >= 70.0){
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if (n >= 60.0){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else if (n < 60.0){
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0;
}