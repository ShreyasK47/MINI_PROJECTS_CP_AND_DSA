#include<stdio.h>
int main()
{
char c[100], k;
int i, shift;
printf("Enter a message to decrypt: ");
gets(c);
printf("Enter shift: ");
scanf("%d", &shift);
for(i = 0; c[i] != '\0'; ++i){
k = c[i];
if(k >= 'a' && k <= 'z'){
k = k - shift;
if(k < 'a'){
k = k + 'z' - 'a' + 1;
}
c[i] = k;
}
else if(k >= 'A' && k <= 'Z'){
k = k - shift;
if(k < 'A'){
k = k + 'Z' - 'A' + 1;
}
c[i] = k;
}
}
printf("Decrypted message: %s", c);
return 0;
}