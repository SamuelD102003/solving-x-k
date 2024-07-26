#include <stdio.h>

int main(void) {
  int k;
  double x,i,result=1;
  printf("Calculate x^k Type in the value for x:");
  scanf("%lf",&x);
  printf("Calculate x^k Type in the value for k (has to be an integer):");
  scanf("%d",&k);
  for (i=1;i<=k;i++)
    {
      result*=x;
    }
  printf("The value of %.2lf^%d = %lf",x,k,result);
  return 0;
}