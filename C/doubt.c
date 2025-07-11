#include<stdio.h>
const char *bool_to_word (int value) {
  return value ? "Yes" : "No";
}
void main(){
    bool_to_word(1);
}