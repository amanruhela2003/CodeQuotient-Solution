int countWords(char str[]) {
  // Write your code here
  int count=0;
  if(strlen(str)==0)
  {
    return 0;
  }
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]==' ' && str[i+1]!=' ')
      count++;
  }
  return count+1;
}
