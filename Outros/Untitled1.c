#include <stdio.h>
#include <stdlib.h>

#define constante1 10

    main()
{
      #ifdef constante1
      #define constante2 14
      #else
      #define constante2 20
      #endif
      printf("%i",constante2);
}

