#include <tommath.h>
#ifdef BN_MP_MOD_D_C
/* LibTomMath, multiple-precision integer library -- Tom St Denis
 *
 * LibTomMath is a library that provides multiple-precision
 * integer arithmetic as well as number theoretic functionality.
 *
 * The library was designed directly after the MPI library by
 * Michael Fromberger but has been written from scratch with
 * additional optimizations in place.
 *
 * The library is free for all purposes without any express
 * guarantee it works.
 *
 * Tom St Denis, tomstdenis@iahu.ca, http://math.libtomcrypt.org
 */

int
mp_mod_d (mp_int * a, mp_digit b, mp_digit * c)
{
  return mp_div_d(a, b, NULL, c);
}
#endif

/* $Source: /cvs/libtom/libtommath/bn_mp_mod_d.c,v $ */
/* $Revision: 1.2 $ */
/* $Date: 2005/05/05 14:38:45 $ */