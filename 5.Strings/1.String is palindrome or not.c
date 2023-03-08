// Return 1 if the string is palindrome, else return 0
int isPalindrome(char *str) {
  // Write your code here
  int l=0;
  int h=strlen(str)-1;
  while(l<h)
  {
    if(str[l++]!=str[h--])
    {
      return 0;
    }
  }
  return 1;
}
