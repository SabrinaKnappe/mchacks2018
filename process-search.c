#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define MAX_CONTENT_LENGTH 10000

int main(int argc, char *argv[]){

  int stnum;
  char stname[10000];
  FILE *search;
  
  int n = atoi(getenv("CONTENT_LENGTH"));
  char array[n];
  fgets(array, n, stdin);

  int i;
  
  for(i=0; i<n && array[i] != '='; i++){
      ;
  }
  
  for( ; i<n && array[i] != '+'; i++){
    const char *a = &(array[i]);
      char *cat;
      cat = malloc(20);
      strcpy(cat, a);

    while(array[i+1] != ',' && array[i+1] != '\0'){
        stnum = (int) strcat(cat, &(array[i+1]));
        i++;
    }
  }
  
  for( ; i<n && array[i] != '='; i++){
      ;
  }
  
  int g = 0;
for( ; i<n && array[i] != '&'; i++){ 
  
  if(array[i] == '+'){
    stname[g] = ' ';
  }
     
  else{
   stname[g] = array[i];
  }
     
  g++;
}
  
  search = fopen("results.csv", "r");
  char results[50];
  fgets(results, 50, search);
  
  
  int t;
  
  for (t=0; results[t] != '/0'; t++){
    if (results[t] == stnum){
      if(results[t+1] == stname){
      }
    }
  }
  
printf("<p> %s </p>", results);

return 0;
}
