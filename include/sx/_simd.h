#ifndef SX__SIMD_H_
#error "this is an internal header and must only be included from simd.h"
#endif

// swizzle macros
// clang-format off
sx__simd_implement_swizzle(x, x, x, x)
sx__simd_implement_swizzle(x, x, x, y)
sx__simd_implement_swizzle(x, x, x, z)
sx__simd_implement_swizzle(x, x, x, w)
sx__simd_implement_swizzle(x, x, y, x)
sx__simd_implement_swizzle(x, x, y, y)
sx__simd_implement_swizzle(x, x, y, z)
sx__simd_implement_swizzle(x, x, y, w)
sx__simd_implement_swizzle(x, x, z, x)
sx__simd_implement_swizzle(x, x, z, y)
sx__simd_implement_swizzle(x, x, z, z)
sx__simd_implement_swizzle(x, x, z, w)
sx__simd_implement_swizzle(x, x, w, x)
sx__simd_implement_swizzle(x, x, w, y)
sx__simd_implement_swizzle(x, x, w, z)
sx__simd_implement_swizzle(x, x, w, w)
sx__simd_implement_swizzle(x, y, x, x)
sx__simd_implement_swizzle(x, y, x, y)
sx__simd_implement_swizzle(x, y, x, z)
sx__simd_implement_swizzle(x, y, x, w)
sx__simd_implement_swizzle(x, y, y, x)
sx__simd_implement_swizzle(x, y, y, y)
sx__simd_implement_swizzle(x, y, y, z)
sx__simd_implement_swizzle(x, y, y, w)
sx__simd_implement_swizzle(x, y, z, x)
sx__simd_implement_swizzle(x, y, z, y)
sx__simd_implement_swizzle(x, y, z, z)
sx__simd_implement_swizzle(x, y, w, x)
sx__simd_implement_swizzle(x, y, w, y)
sx__simd_implement_swizzle(x, y, w, z)
sx__simd_implement_swizzle(x, y, w, w)
sx__simd_implement_swizzle(x, z, x, x)
sx__simd_implement_swizzle(x, z, x, y)
sx__simd_implement_swizzle(x, z, x, z)
sx__simd_implement_swizzle(x, z, x, w)
sx__simd_implement_swizzle(x, z, y, x)
sx__simd_implement_swizzle(x, z, y, y)
sx__simd_implement_swizzle(x, z, y, z)
sx__simd_implement_swizzle(x, z, y, w)
sx__simd_implement_swizzle(x, z, z, x)
sx__simd_implement_swizzle(x, z, z, y)
sx__simd_implement_swizzle(x, z, z, z)
sx__simd_implement_swizzle(x, z, z, w)
sx__simd_implement_swizzle(x, z, w, x)
sx__simd_implement_swizzle(x, z, w, y)
sx__simd_implement_swizzle(x, z, w, z)
sx__simd_implement_swizzle(x, z, w, w)
sx__simd_implement_swizzle(x, w, x, x)
sx__simd_implement_swizzle(x, w, x, y)
sx__simd_implement_swizzle(x, w, x, z)
sx__simd_implement_swizzle(x, w, x, w)
sx__simd_implement_swizzle(x, w, y, x)
sx__simd_implement_swizzle(x, w, y, y)
sx__simd_implement_swizzle(x, w, y, z)
sx__simd_implement_swizzle(x, w, y, w)
sx__simd_implement_swizzle(x, w, z, x)
sx__simd_implement_swizzle(x, w, z, y)
sx__simd_implement_swizzle(x, w, z, z)
sx__simd_implement_swizzle(x, w, z, w)
sx__simd_implement_swizzle(x, w, w, x)
sx__simd_implement_swizzle(x, w, w, y)
sx__simd_implement_swizzle(x, w, w, z)
sx__simd_implement_swizzle(x, w, w, w)
sx__simd_implement_swizzle(y, x, x, x)
sx__simd_implement_swizzle(y, x, x, y)
sx__simd_implement_swizzle(y, x, x, z)
sx__simd_implement_swizzle(y, x, x, w)
sx__simd_implement_swizzle(y, x, y, x)
sx__simd_implement_swizzle(y, x, y, y)
sx__simd_implement_swizzle(y, x, y, z)
sx__simd_implement_swizzle(y, x, y, w)
sx__simd_implement_swizzle(y, x, z, x)
sx__simd_implement_swizzle(y, x, z, y)
sx__simd_implement_swizzle(y, x, z, z)
sx__simd_implement_swizzle(y, x, z, w)
sx__simd_implement_swizzle(y, x, w, x)
sx__simd_implement_swizzle(y, x, w, y)
sx__simd_implement_swizzle(y, x, w, z)
sx__simd_implement_swizzle(y, x, w, w)
sx__simd_implement_swizzle(y, y, x, x)
sx__simd_implement_swizzle(y, y, x, y)
sx__simd_implement_swizzle(y, y, x, z)
sx__simd_implement_swizzle(y, y, x, w)
sx__simd_implement_swizzle(y, y, y, x)
sx__simd_implement_swizzle(y, y, y, y)
sx__simd_implement_swizzle(y, y, y, z)
sx__simd_implement_swizzle(y, y, y, w)
sx__simd_implement_swizzle(y, y, z, x)
sx__simd_implement_swizzle(y, y, z, y)
sx__simd_implement_swizzle(y, y, z, z)
sx__simd_implement_swizzle(y, y, z, w)
sx__simd_implement_swizzle(y, y, w, x)
sx__simd_implement_swizzle(y, y, w, y)
sx__simd_implement_swizzle(y, y, w, z)
sx__simd_implement_swizzle(y, y, w, w)
sx__simd_implement_swizzle(y, z, x, x)
sx__simd_implement_swizzle(y, z, x, y)
sx__simd_implement_swizzle(y, z, x, z)
sx__simd_implement_swizzle(y, z, x, w)
sx__simd_implement_swizzle(y, z, y, x)
sx__simd_implement_swizzle(y, z, y, y)
sx__simd_implement_swizzle(y, z, y, z)
sx__simd_implement_swizzle(y, z, y, w)
sx__simd_implement_swizzle(y, z, z, x)
sx__simd_implement_swizzle(y, z, z, y)
sx__simd_implement_swizzle(y, z, z, z)
sx__simd_implement_swizzle(y, z, z, w)
sx__simd_implement_swizzle(y, z, w, x)
sx__simd_implement_swizzle(y, z, w, y)
sx__simd_implement_swizzle(y, z, w, z)
sx__simd_implement_swizzle(y, z, w, w)
sx__simd_implement_swizzle(y, w, x, x)
sx__simd_implement_swizzle(y, w, x, y)
sx__simd_implement_swizzle(y, w, x, z)
sx__simd_implement_swizzle(y, w, x, w)
sx__simd_implement_swizzle(y, w, y, x)
sx__simd_implement_swizzle(y, w, y, y)
sx__simd_implement_swizzle(y, w, y, z)
sx__simd_implement_swizzle(y, w, y, w)
sx__simd_implement_swizzle(y, w, z, x)
sx__simd_implement_swizzle(y, w, z, y)
sx__simd_implement_swizzle(y, w, z, z)
sx__simd_implement_swizzle(y, w, z, w)
sx__simd_implement_swizzle(y, w, w, x)
sx__simd_implement_swizzle(y, w, w, y)
sx__simd_implement_swizzle(y, w, w, z)
sx__simd_implement_swizzle(y, w, w, w)
sx__simd_implement_swizzle(z, x, x, x)
sx__simd_implement_swizzle(z, x, x, y)
sx__simd_implement_swizzle(z, x, x, z)
sx__simd_implement_swizzle(z, x, x, w)
sx__simd_implement_swizzle(z, x, y, x)
sx__simd_implement_swizzle(z, x, y, y)
sx__simd_implement_swizzle(z, x, y, z)
sx__simd_implement_swizzle(z, x, y, w)
sx__simd_implement_swizzle(z, x, z, x)
sx__simd_implement_swizzle(z, x, z, y)
sx__simd_implement_swizzle(z, x, z, z)
sx__simd_implement_swizzle(z, x, z, w)
sx__simd_implement_swizzle(z, x, w, x)
sx__simd_implement_swizzle(z, x, w, y)
sx__simd_implement_swizzle(z, x, w, z)
sx__simd_implement_swizzle(z, x, w, w)
sx__simd_implement_swizzle(z, y, x, x)
sx__simd_implement_swizzle(z, y, x, y)
sx__simd_implement_swizzle(z, y, x, z)
sx__simd_implement_swizzle(z, y, x, w)
sx__simd_implement_swizzle(z, y, y, x)
sx__simd_implement_swizzle(z, y, y, y)
sx__simd_implement_swizzle(z, y, y, z)
sx__simd_implement_swizzle(z, y, y, w)
sx__simd_implement_swizzle(z, y, z, x)
sx__simd_implement_swizzle(z, y, z, y)
sx__simd_implement_swizzle(z, y, z, z)
sx__simd_implement_swizzle(z, y, z, w)
sx__simd_implement_swizzle(z, y, w, x)
sx__simd_implement_swizzle(z, y, w, y)
sx__simd_implement_swizzle(z, y, w, z)
sx__simd_implement_swizzle(z, y, w, w)
sx__simd_implement_swizzle(z, z, x, x)
sx__simd_implement_swizzle(z, z, x, y)
sx__simd_implement_swizzle(z, z, x, z)
sx__simd_implement_swizzle(z, z, x, w)
sx__simd_implement_swizzle(z, z, y, x)
sx__simd_implement_swizzle(z, z, y, y)
sx__simd_implement_swizzle(z, z, y, z)
sx__simd_implement_swizzle(z, z, y, w)
sx__simd_implement_swizzle(z, z, z, x)
sx__simd_implement_swizzle(z, z, z, y)
sx__simd_implement_swizzle(z, z, z, z)
sx__simd_implement_swizzle(z, z, z, w)
sx__simd_implement_swizzle(z, z, w, x)
sx__simd_implement_swizzle(z, z, w, y)
sx__simd_implement_swizzle(z, z, w, z)
sx__simd_implement_swizzle(z, z, w, w)
sx__simd_implement_swizzle(z, w, x, x)
sx__simd_implement_swizzle(z, w, x, y)
sx__simd_implement_swizzle(z, w, x, z)
sx__simd_implement_swizzle(z, w, x, w)
sx__simd_implement_swizzle(z, w, y, x)
sx__simd_implement_swizzle(z, w, y, y)
sx__simd_implement_swizzle(z, w, y, z)
sx__simd_implement_swizzle(z, w, y, w)
sx__simd_implement_swizzle(z, w, z, x)
sx__simd_implement_swizzle(z, w, z, y)
sx__simd_implement_swizzle(z, w, z, z)
sx__simd_implement_swizzle(z, w, z, w)
sx__simd_implement_swizzle(z, w, w, x)
sx__simd_implement_swizzle(z, w, w, y)
sx__simd_implement_swizzle(z, w, w, z)
sx__simd_implement_swizzle(z, w, w, w)
sx__simd_implement_swizzle(w, x, x, x)
sx__simd_implement_swizzle(w, x, x, y)
sx__simd_implement_swizzle(w, x, x, z)
sx__simd_implement_swizzle(w, x, x, w)
sx__simd_implement_swizzle(w, x, y, x)
sx__simd_implement_swizzle(w, x, y, y)
sx__simd_implement_swizzle(w, x, y, z)
sx__simd_implement_swizzle(w, x, y, w)
sx__simd_implement_swizzle(w, x, z, x)
sx__simd_implement_swizzle(w, x, z, y)
sx__simd_implement_swizzle(w, x, z, z)
sx__simd_implement_swizzle(w, x, z, w)
sx__simd_implement_swizzle(w, x, w, x)
sx__simd_implement_swizzle(w, x, w, y)
sx__simd_implement_swizzle(w, x, w, z)
sx__simd_implement_swizzle(w, x, w, w)
sx__simd_implement_swizzle(w, y, x, x)
sx__simd_implement_swizzle(w, y, x, y)
sx__simd_implement_swizzle(w, y, x, z)
sx__simd_implement_swizzle(w, y, x, w)
sx__simd_implement_swizzle(w, y, y, x)
sx__simd_implement_swizzle(w, y, y, y)
sx__simd_implement_swizzle(w, y, y, z)
sx__simd_implement_swizzle(w, y, y, w)
sx__simd_implement_swizzle(w, y, z, x)
sx__simd_implement_swizzle(w, y, z, y)
sx__simd_implement_swizzle(w, y, z, z)
sx__simd_implement_swizzle(w, y, z, w)
sx__simd_implement_swizzle(w, y, w, x)
sx__simd_implement_swizzle(w, y, w, y)
sx__simd_implement_swizzle(w, y, w, z)
sx__simd_implement_swizzle(w, y, w, w)
sx__simd_implement_swizzle(w, z, x, x)
sx__simd_implement_swizzle(w, z, x, y)
sx__simd_implement_swizzle(w, z, x, z)
sx__simd_implement_swizzle(w, z, x, w)
sx__simd_implement_swizzle(w, z, y, x)
sx__simd_implement_swizzle(w, z, y, y)
sx__simd_implement_swizzle(w, z, y, z)
sx__simd_implement_swizzle(w, z, y, w)
sx__simd_implement_swizzle(w, z, z, x)
sx__simd_implement_swizzle(w, z, z, y)
sx__simd_implement_swizzle(w, z, z, z)
sx__simd_implement_swizzle(w, z, z, w)
sx__simd_implement_swizzle(w, z, w, x)
sx__simd_implement_swizzle(w, z, w, y)
sx__simd_implement_swizzle(w, z, w, z)
sx__simd_implement_swizzle(w, z, w, w)
sx__simd_implement_swizzle(w, w, x, x)
sx__simd_implement_swizzle(w, w, x, y)
sx__simd_implement_swizzle(w, w, x, z)
sx__simd_implement_swizzle(w, w, x, w)
sx__simd_implement_swizzle(w, w, y, x)
sx__simd_implement_swizzle(w, w, y, y)
sx__simd_implement_swizzle(w, w, y, z)
sx__simd_implement_swizzle(w, w, y, w)
sx__simd_implement_swizzle(w, w, z, x)
sx__simd_implement_swizzle(w, w, z, y)
sx__simd_implement_swizzle(w, w, z, z)
sx__simd_implement_swizzle(w, w, z, w)
sx__simd_implement_swizzle(w, w, w, x)
sx__simd_implement_swizzle(w, w, w, y)
sx__simd_implement_swizzle(w, w, w, z)
sx__simd_implement_swizzle(w, w, w, w)

// test macros
sx__simd_implement_test(x    , 0x1);
sx__simd_implement_test(y    , 0x2);
sx__simd_implement_test(xy   , 0x3);
sx__simd_implement_test(z    , 0x4);
sx__simd_implement_test(xz   , 0x5);
sx__simd_implement_test(yz   , 0x6);
sx__simd_implement_test(xyz  , 0x7);
sx__simd_implement_test(w    , 0x8);
sx__simd_implement_test(xw   , 0x9);
sx__simd_implement_test(yw   , 0xa);
sx__simd_implement_test(xyw  , 0xb);
sx__simd_implement_test(zw   , 0xc);
sx__simd_implement_test(xzw  , 0xd);
sx__simd_implement_test(yzw  , 0xe);
sx__simd_implement_test(xyzw , 0xf);
// clang-format on