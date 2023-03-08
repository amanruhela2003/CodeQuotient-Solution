/*     
 * Complete the 'isPangrams' function below.
 * @params
 *   str -> a string that is to be tested for pangram
 *
 * @return
 *   boolean value, based on the fact, whether 
 *   the given string is a pangram or not.
 */
bool isPangram(string str) {
  // Write your code here
  set<char> set;
  for(auto ch:str)
  {
    if(ch>='a' and ch<='z')
      set.insert(ch);
    if(ch>='A' and ch<='Z')
    {
      ch=tolower(ch);
      set.insert(ch);
    } 
  }
  return set.size()==26;
}
