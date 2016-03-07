#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  screen s;
  color c;
  clear_screen(s);
  int x;
  int y;

  struct matrix *set1;
  //struct matrix *transform;

  set1 = new_matrix(4, 4);
  c.red = 100;
  c.blue = 100 + x; 
  c.green = 100 - x;
  for(y = 0;y < 50; y++ ){
    add_edge(set1, y,y++,y,y+=2,y,y+=3);
  }
  draw_lines(set1,s,c);
  
  //transform = new_matrix(4, 4);

  //free_matrix( transform );
  free_matrix( set1 );

  //display(s);
  save_extension(s,"shapes.png");
}  
