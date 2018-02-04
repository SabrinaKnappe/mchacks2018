#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define MAX_CONTENT_LENGTH 10000

int main(int argc, char* argv[]){
  
  int ad;
  char stname[20];
  char ll[30];
  int rent;
  char satll[20];
  char satap[20];
  char comments[1000];
  
  int n = atoi(getenv("CONTENT_LENGTH"));
        char array[n];
        fgets(array, n, stdin);

        int i;

        //until the first = keep looping through the array
        for(i=0; i<n && array[i] != '='; i++){
          ;
        }
  
  for( ; i<n && array[i] != '&'; i++){
    const char *a = &(array[i]);
      char *cat;
      cat = malloc(20);
      strcpy(cat, a);

    while(array[i+1] != ',' && array[i+1] != '\0'){
        ad = (int) strcat(cat, &(array[i+1]));
        i++;
    }
  }
  
for( ; i<n && array[i] != '='; i++){
    ;
}
  
int j = 0;
for( ; i<n && array[i] != '&'; i++){ 
  
  if(array[i] == '+'){
    array[j] = ' ';
  }
     
  else{
   stname[j] = array[i];
  }
     
  j++;
}

for( ; i<n && array[i] != '='; i++){
    ;
}
  
int k = 0;
for( ; i<n && array[i] != '&'; i++){ 
  
  if(array[i] == '+'){
    array[k] = ' ';
  }
     
  else{
   ll[k] = array[i];
  }
     
  k++;
}
     
for( ; i<n && array[i] != '='; i++){
    ;
}
     
 for( ; i<n && array[i] != '&'; i++){
    const char *a = &(array[i]);
      char *cat;
      cat = malloc(20);
      strcpy(cat, a);

    while(array[i+1] != ',' && array[i+1] != '\0'){
        rent = (int) strcat(cat, &(array[i+1]));
        i++;
    }
  }

for(i=0; i<n && array[i] != '='; i++){
    ;
}
  
int m = 0;
for( ; i<n && array[i] != '&'; i++){ 
  
  if(array[i] == '+'){
    array[m] = ' ';
  }
     
  else{
   satll[m] = array[i];
  }
     
  m++;
}
     
for( ; i<n && array[i] != '='; i++){
    ;
}
  
int g = 0;
for( ; i<n && array[i] != '&'; i++){ 
  
  if(array[i] == '+'){
    array[g] = ' ';
  }
     
  else{
   satap[g] = array[i];
  }
     
  g++;
}
     
for( ; i<n && array[i] != '='; i++){
    ;
}
  
int p = 0;
for( ; i<n && array[i] != '&'; i++){ 
  
  if(array[i] == '+'){
    comments[p] = ' ';
  }
     
  else{
   comments[p] = array[i];
  }
     
  p++;
}
  return 0;
}
