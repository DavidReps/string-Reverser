#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int getLine (char *m);
void changeCap(char *line, int size);
void reverseText(char *line, int size);


int main () {
  char m[80];
  int size = 0;
  printf("Enter the text: \n");
  size = getLine(m);
  printf("The size of the array is: %d \n", size);

  changeCap(m, size);
  printf("****************\n");
  reverseText(m, size);

  int i, counter;
return 0;
}

int getLine(char *m){
  char c;
  int i = 0;
  while ((c = getchar()) != EOF){
    *(m + i) = c;
    i++;
  }
  return i;
}
void changeCap(char *m, int size){
  int count = 0;
  *m = toupper(*m);
  for (int k = 1; k < size; k++){
    count = *(m+k);
    if ((count <= 32)||(count >= 127)){
      *(m+k+1) = toupper(*(m+k+1));
    }
  }
  printf("%s", m);

}
