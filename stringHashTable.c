#include <stdio.h>
#include <stdlib.h>
#define HASH_TABLE_SIZE 1057
typedef struct Entry Entry, *EntryPtr;
struct Entry {
  char * string;
  int count;
};
Entry hash_table[HASH_TABLE_SIZE];


int getCode(char * tag){
int n = strlen(tag);
int i, amount =0;

for(i=0; i<n; i++){
        int x = tag[i];
    amount = amount + x;

}
return amount;

}


 void add(char * tag){
int key = getCode(tag) % HASH_TABLE_SIZE;
    if(key <0)
        key=key*-1;
    int added =0;
while(!added){

    if(hash_table[key].string == NULL){
        hash_table[key].string = tag;
        added=1;
    }
    else{
        key++;
    }
}

}


