#include <stdio.h>
#include<stdlib.h>
#define ll long long

void find_ncr_npr(int, int, ll*, ll*);
ll find_npr(int, int);
ll factorial(int);
int get_int(int *);

int main() {
   int n, r;
   ll ncr, npr;
   printf("Input n \n");
	get_int(&n);
	printf("Input r \n");
	get_int(&r);
   find_ncr_npr(n, r, &npr, &ncr);
   
   printf("%dC%d = %lld\n", n, r, ncr);
   printf("%dP%d = %lld\n", n, r, npr);
   return 0;
}
void find_ncr_npr(int n, int r, ll *npr, ll *ncr) {
   *npr = find_npr(n, r);
   *ncr = *npr/factorial(r);
}
ll find_npr(int n, int r) {
   ll result = 1;
   int c = 1;
   while (c <= r) {
      result = result * (n - r + c);
      c++;
   }
   
   return result;
}
ll factorial(int n) {
   int c;
   ll result = 1;
 
   for (c = 1; c <= n; c++)
      result = result*c;
 
   return result;
}

int get_int(int *px){
  scanf("%d",px);
  while (!scanf("%d",px)&& !isspace()&& getchar()!= '\n'){
    printf("Please enter an integer value:"); 
  }
  return 0;
 }
