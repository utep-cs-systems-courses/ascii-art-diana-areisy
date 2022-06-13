#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

void print_arrow(int leftCol, int size_square, int size_triangle)
{
  for (int row = 0; row <= size_triangle; row++) {
    int minCol = leftCol + size_triangle - row, maxCol = leftCol + size_triangle + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
  int i,j;
  leftCol = ((size_triangle*2) - size_square)/2;
  int endCol = (leftCol + size_triangle) + size_square;
  for(int row = 0; row<size_square;row++){
    int col;
    for(col = 0 ;col<(leftCol + size_triangle);col++)putchar(' ');
    for( ;col<endCol;col++)putchar('*');
    putchar('\n');
    
  }
}
