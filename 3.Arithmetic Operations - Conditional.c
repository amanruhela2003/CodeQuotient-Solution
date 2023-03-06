// Write your code
int num1,num2;
char choice;
scanf("%d",&num1);
scanf("%d",&num2);
scanf(" %c",&choice);
if(choice=='+')
{
  printf("%d",num1+num2);
}
else if(choice=='-')
{
  printf("%d",num1-num2);
}
else if(choice=='%')
{
  printf("%d",num1%num2);
}
else if(choice=='/')
{
  printf("%d",num1/num2);
}
else if(choice=='*')
{
  printf("%d",num1*num2);
}
else
{
  printf("Enter valid arithmetic operator");
}
