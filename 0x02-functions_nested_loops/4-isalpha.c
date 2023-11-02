#include"main.h"
/**
* _isalpha - checks the alphabetic character
* Return : The checked character
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}

