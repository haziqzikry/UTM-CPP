#include <iostream>
#include <cctype>

int CountWords(const char* str)
{
   if (str == NULL)
      return error_condition;  // let the requirements define this...

   bool inSpaces = true;
   int numWords = 0;

   while (*str != '\0')
   {
      if (std::isspace(*str))
      {
         inSpaces = true;
      }
      else if (inSpaces)
      {
         numWords++;
         inSpaces = false;
      }

      ++str;
   }

   return numWords;
}