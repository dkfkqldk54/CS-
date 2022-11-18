#include <stdio.h>

int main(void) {

  int matrix[5][5], i, j;
  double total_for_student, average_for_quiz, max_for_quiz, min_for_quiz;

  for (i=0; i<5; i++) {
    printf("Each quiz of student %d: ", i+1);
    for (j=0; j<5; j++) {
      scanf(" %d", &matrix[i][j]);
    }
  }

  printf("\ntotal(average) score for each student:");
  for (i=0; i<5; i++) {
    total_for_student = 0;
    for (j=0; j<5; j++) {
      total_for_student += matrix[i][j];
    }
    printf(" %.1lf(%.1lf)", total_for_student, total_for_student/5);
  }

  printf("\naverage score for each quiz:");
  for (j=0; j<5; j++) {
    average_for_quiz = 0;
    for (i=0; i<5; i++) {
      average_for_quiz += matrix[i][j];
    }
    printf(" %.1lf", average_for_quiz/5);
  }

  printf("\nhigh score for each quiz:");
  for (j=0; j<5; j++) {
    max_for_quiz = 0;
    for (i=0; i<5; i++) {
      if (max_for_quiz < matrix[i][j])
        max_for_quiz = matrix[i][j];
    }
    printf(" %.1lf", max_for_quiz);
  }

  printf("\nlow score for each quiz:");
  for (j=0; j<5; j++) {
    min_for_quiz = 1000;
    for (i=0; i<5; i++) {
      if (min_for_quiz > matrix[i][j])
        min_for_quiz = matrix[i][j];
    }
    printf(" %.1lf", min_for_quiz);
  }
  
  return 0;
}
