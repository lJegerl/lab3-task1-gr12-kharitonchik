//
// Created by Yegor Kharitonchik
//

#ifndef INTERFACE_H
#define INTERFACE_H

// This functions are used in main.c client file. Implementation is in
// server.c server file

/// compare
/// Function compares two strings by position of symbol "ш".
/// Arguments:
///    firstText - first string(char[])
///    secondText - second string(char[])
/// Return:
///    1, if first string has greater position
///    0, another

int compare(char firstText[], char secondText[]);

#endif