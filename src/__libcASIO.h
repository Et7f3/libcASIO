#ifndef __LIBCASIOH_
# define __LIBCASIOH_

# ifdef USE_LCA
#   define LCA lca_
# else
#   define LCA __
# endif
#define __PASTER(fun,preffix) fun ## preffix
#define __EVALUATOR(fun,preffix) __PASTER(fun,preffix)
#define __ADD_PREFIX(fun) __EVALUATOR(LCA, fun)

extern void __ADD_PREFIX(test)();

#endif //__LIBCASIOH_
