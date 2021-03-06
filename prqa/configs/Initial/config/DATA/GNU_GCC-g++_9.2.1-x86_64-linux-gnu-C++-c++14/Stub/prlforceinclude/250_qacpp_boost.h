// qacpp_boost.h
//

#ifndef PRLGCC_INCLUDED_QACPP_BOOST
#define PRLGCC_INCLUDED_QACPP_BOOST

#define BOOST_COMPILER_CONFIG "boost/config/compiler/gcc.hpp"
#define BOOST_NO_EXTERN_TEMPLATE 1
#define BOOST_ASIO_DISABLE_THREAD_KEYWORD_EXTENSION 1
#define BOOST_NO_CXX11_CONSTEXPR 1
#define BOOST_NO_CXX14_CONSTEXPR 1
#define BOOST_NO_ALIGNMENT 1
#define BOOST_PP_VARIADICS 1

#if (__QACPP_MAJOR__ < 41)
#define BOOST_NO_CXX11_UNICODE_LITERALS 1
#define BOOST_NO_CXX11_CHAR32_T 1
#define BOOST_NO_CXX11_CHAR16_T 1
#define BOOST_NO_CXX11_RAW_LITERALS 1
#endif

#if (__QACPP_MAJOR__ < 42)
#define BOOST_NO_CXX11_DECLTYPE_N3276 1
#define BOOST_NO_CXX11_STATIC_ASSERT 1
#endif

// do not use type trait intrinsics in BOOST
#define __GCCXML__ 1

#endif
