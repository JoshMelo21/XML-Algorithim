
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
typedef struct Entry Entry, *EntryPtr;
struct Entry {
  char * string;
  int count;
};
extern char* pop();
extern void push(char*);
extern int isEmpty();
extern int getCode(char*);
extern void add(char*);
extern Entry hash_table[];
char s[100];
char * copy;
int end =0;
int entered =0;

int main(int argc, char * argv[])
{

 int ch;
  while ((ch = getchar()) != EOF) {
   if(ch == '<'){
        ch = getchar();
        if(ch == '/'){
                ch = getchar();
            end =1;
        }


   int i =0;
    while(ch != '>'){
        s[i] =  ch;
        i++;
       ch = getchar();
    }
    if(end==1){
      if(strcmp(s, pop())!=0){
        printf("Invalid");
      exit(1);
     }
     else{
    hash_table[getCode(s)%1057].count++;
     }


    }
    else{
copy =  malloc(strlen(s) +1);
strcpy(copy, s);
add(copy);
    push(copy);
    entered =1;
    }
   }

   if(entered && isEmpty()){
    printf("Valid\n");
    int e =0;
    for(e; e<1057; e++){
    if(hash_table[e].string!=NULL){
        printf("%s %d\n", hash_table[e].string, hash_table[e].count);

    }


    }



    exit(0);
   }
    end =0;
memset(s, 0, 100);
  }
  free(copy);
  exit(0);

}