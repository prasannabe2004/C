  #include <stdio.h>
  int main()
  {
      char dummy[80];
      printf("Enter a string:\n");
      scanf("%[^a]",dummy);
      printf("%s\n",dummy);
      return 0;
  }
