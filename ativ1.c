#include <stdio.h>
int main()
{
  char word1[100];
  char word2[100];

  printf("Digite uma palavra: ");
  scanf("%s", word1);

  printf("Digite a segunda palavra: ");
  scanf("%s", word2);

  printf("Conteudo da primeira palavra: %s\n", word1);
  printf("Conteudo da segunda palavra: %s\n", word2);

  int i = 0;
  while (word1[i] != '\0')
  {
    word2[i] = word1[i];
    i++;
  }
  word2[i] = '\0';

  printf("Conteudo da primeira palavra apos a copia: %s\n", word1);
  printf("Conteudo da segunda palavra apos a copia: %s\n", word2);

  return 0;
}