#include "main.h"
/** _islower - checks for lowercase
* c : the character to be checked
* Retuen: 1 for lowercase or 0 for upper
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
