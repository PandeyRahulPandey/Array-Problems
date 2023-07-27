  #include<stdio.h>
int getreverse (int num);
int getsumofdigit (int num);
int main()
{
  int num, digitsum, reverse;
  printf("enter a number:");
  scanf("%d", &num);
  digitsum = getsumofdigit (num);
  reverse = getreverse (digitsum);
  if((digitsum * reverse) == num)
  {
    printf ("%d is a magic number ", num);
    }
    else {
      printf ("%d is not a magic number",num);
    }
    return 0;
}

int getreverse (int num)
{
  int r=0;
  while (num>0){
    r= (r*10) + (num % 10);
    num = num/10;
  }
  return r;
}

int getsumofdigit (int num){
  int sum = 0;
  while(num !=0){
    sum = sum + num%10;
    num = num/10;
    }
    return sum;
}