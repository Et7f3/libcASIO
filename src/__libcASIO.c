#ifndef __LIBCASIOC_
# define __LIBCASIOC_
# include "__libcASIO.h"
extern int main(void);
void my_test(void)
{
  locate(1,5);
  Print((unsigned char*)" sample Add-In.");
}

void __ADD_PREFIX(test)()
{
  locate(1,4);
  Print((unsigned char*)"This application is");
}
#endif //__LIBCASIOC_
