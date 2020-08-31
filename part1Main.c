#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();

int main(int argc, char * argv[])
{
  int ch;
int a[26];
 int end=0;
int map =0;
int entered= 0;
  while ((ch = getchar()) != EOF) {
    if (ch == '>' || ch == '<' || ch == '/'){
if(ch =='/')
end =1;
continue;
}
  //
 if(ch== 'a'){
map =1;
}
else if(ch== 'b'){
map =2;
}
else if(ch== 'c'){
map =3;
}
else if(ch== 'd'){
map =4;
}
else if(ch== 'e'){
map =5;
}
else if(ch== 'f'){
map =6;
}
else if(ch== 'g'){
map =7;
}
else if(ch== 'h'){
map =8;
}
else if(ch== 'i'){
map =9;
}
else if(ch== 'j'){
map =10;
}
else if(ch== 'k'){
map =11;
}
else if(ch== 'l'){
map =12;
}
else if(ch== 'm'){
map =13;
}
else if(ch== 'n'){
map =14;
}
else if(ch== 'o'){
map =15;
}
else if(ch== 'p'){
map =16;
}
else if(ch== 'q'){
map =17;
}
else if(ch== 'r'){
map =18;
}
else if(ch== 's'){
map =19;
}
else if(ch== 't'){
map =20;
}
else if(ch== 'u'){
map =21;
}
else if(ch== 'v'){
map =22;
}
else if(ch== 'w'){
map =23;
}
else if(ch== 'x'){
map =24;
}
else if(ch== 'y'){
map =25;
}
else if(ch== 'z'){
map =26;
}

if(end == 1){
//printf("%d", pop());
if(pop() != map){
printf("Invalid");
exit(1);
}
else{
        if(map!=0)
a[map-1]++;
}


}
else{
if(map!=0){
push(map);
entered=1;
}
}

if(entered && isEmpty()){
    printf("Valid");
    exit(0);
}


end =0;
map =0;
  }
return(0);
}
