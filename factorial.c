#include<stdio.h>

int factorial(int number)
{
    if(number==0){
	
	return (1);
}
	
	else if(number<0){
	
    return (0);
}
     else {
	 
    return(number*factorial(number-1));
}
}

// Note: Don't add any other printf statement which will impact test cases. 
//Also don't change main function, focus function implementation only
int main() {
  int num = 0, N = 0;

  scanf("%d",&N);
  for(i = 0; i< N; i++)
  {
    scanf("%d", &num);
    printf("%d\n",factorial(num));
  }
    
  return 0;
}
