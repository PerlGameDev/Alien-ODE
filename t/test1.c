#include <ode/ode.h>
#include <stdio.h>

int main()
{
  printf("sizeof(dReal)=%lu\n", sizeof(dReal));

  dInitODE();
  dWorldID W = dWorldCreate();
  dWorldDestroy(W);
  dCloseODE();

  return 0;
}
