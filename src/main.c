//
// Created by Yegor Kharitonchik
//

// Client file

#include <stdio.h>
#include "interface.h"

int main(void) {
  
  char firstText[100];
  char secondText[100];
  
  printf("Enter first text: ");
  fgets(firstText, 100, stdin);
  printf("Enter second text: ");
  fgets(secondText, 100, stdin);


  int id = compare(firstText, secondText);
  if (id == 1) {
    printf("First sentence");
  }
  else {
    printf("Second sentence");
  }

  return 0;
}