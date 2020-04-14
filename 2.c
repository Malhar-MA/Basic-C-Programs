#include <stdio.h>
#include <math.h>

int find_roots(int ,int, int);
int get_int(int *);

int main()
{
  int a, b, c;

  printf("Enter a, b and c where a*x*x + b*x + c = 0\n");
  pritnf("Enter a\n");
	get_int(&a);
	pritnf("Enter b\n");
	get_int(&b);
	pritnf("Enter c\n");
	get_int(&c);
  
  find_roots(a,b,c);

  return 0;
}

int find_roots(int a,int b, int c)
{
  double root1, root2;
  int d;
	d = b*b - 4*a*c;
  if (d < 0) { //complex roots
    printf("First root = %.2lf + i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
    printf("Second root = %.2lf - i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
  }
  else { //real roots
    root1 = (-b + sqrt(d))/(2*a);
    root2 = (-b - sqrt(d))/(2*a);
    printf("First root = %.2lf\n", root1);
    printf("Second root = %.2lf\n", root2);
  }
}

int get_int(int *px){
  scanf("%d",px);
  while (!scanf("%d",px)&& !isspace()&& getchar()!= '\n'){
    printf("Please enter an integer value:"); 
  }
  return 0;
 }
