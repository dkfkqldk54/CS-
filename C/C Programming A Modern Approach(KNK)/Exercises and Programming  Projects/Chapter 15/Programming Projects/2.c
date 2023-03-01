void read_word(char *word, int len)
{
  int ch, pos = 0;
  
  while ( (ch = read_char()) == ' ');
  
  while (ch != ' ' && ch != EOF) {
   if (pos < len)
     word[pos++] = ch;
   ch = read_char();
  }
  word[pos] = '\0';
  
  word_len = strlen(word);
  if (word_len > len-1)
    word[len-1] = '*';
}
