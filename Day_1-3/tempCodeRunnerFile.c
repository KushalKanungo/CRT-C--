#include <stdio.h>
int table(n){
  if(n==0){
    return 0;
  }
  printf("%d ", n );
  return table(n-1);

}



int main(){
  table(10);
  return 0;
}