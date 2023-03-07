//
// Created by Yegor Kharitonchik
//

// Implementation of interface.h functions

#include "interface.h"
#include <locale.h>

/// getIndexOfLetter
/// Shows the last position of "ш" in string
/// Arguments:
///    text - string where we search the symbol
/// Return:
///    position of last 'ш' symbol

int getIndexOfLetter(char text[], char letter) {
  int id = 0;
  setlocale(LC_ALL, "RU-ru");
  for (int i = 0; i < 20; i++) {
    if (text[i] == letter) {
      id = i + 1;
      }
    }
  return id;
}

int compare(char firstText[], char secondText[]) {
   if (getIndexOfLetter(firstText, 'ш') > getIndexOfLetter(secondText, 'ш')) {
     return 1;
     }
   else {
    return 0;
  }
}