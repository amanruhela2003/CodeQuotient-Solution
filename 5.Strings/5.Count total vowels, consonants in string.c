#include <stdio.h>
#define N 100
int main() 
{
  char str[N];
  scanf("%s",str);
  int n=strlen(str);
  int vowel=0;
  for(int i=0;i<n;i++)
  {
    if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
    {
      vowel++;
    }
  }
  printf("%d %d",vowel,n-vowel);
  return 0;
}
