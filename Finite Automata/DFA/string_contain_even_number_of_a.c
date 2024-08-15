#include<stdio.h>
void q0();
void q1();
void Exit();

int main(){
printf("-----> Finite Automata accept even number of 'a' <-----\n");
printf("Enter the string (sigma over {a,b} and (put '$' at the end of string)) : ");
q0();
return 0;
}

void q0(){
char C;
scanf(" %c",&C);// Notice the space before %c
//Input Handling: After entering a character and pressing Enter, the newline character is left in the input buffer, which is then read by scanf("%c", &C); as the next input, potentially leading to incorrect transitions or premature termination.
if(C=='$'){
printf("String Accepted.");
Exit();
}
else if(C == 'b'){
q0();
}
else if(C == 'a'){
q1();
}
else{
    printf("invalid Symbol.");
    Exit();
}
}

void q1(){
char C;
scanf(" %c",&C);// Notice the space before %c
//Input Handling: After entering a character and pressing Enter, the newline character is left in the input buffer, which is then read by scanf("%c", &C); as the next input, potentially leading to incorrect transitions or premature termination.
if(C=='$'){
printf("String Rejected.");
Exit();
}
else if(C=='b'){
q1();
}
else if(C=='a'){
q0();
}
else{
    printf("invalid Symbol.");
    Exit();
}
}

void Exit(){
char C;
printf("\nPress a key then enter to exit.");
scanf(" %c",&C);
return;
}
