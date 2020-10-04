
#ifndef V_COMMIT_HASH
	#define V_COMMIT_HASH "35a8346"
#endif

#ifndef V_CURRENT_COMMIT_HASH
	#define V_CURRENT_COMMIT_HASH "35a8346"
#endif

// V typedefs:

typedef struct {
	void* _object;
	int _interface_idx;
} _Interface;

typedef struct strings__Builder strings__Builder;
typedef union strconv__Float64u strconv__Float64u;
typedef struct strconv__PrepNumber strconv__PrepNumber;
typedef union strconv__Float64u strconv__Float64u;
typedef struct strconv__Dec32 strconv__Dec32;
typedef union strconv__Uf32 strconv__Uf32;
typedef struct strconv__Uint128 strconv__Uint128;
typedef struct strconv__Dec64 strconv__Dec64;
typedef union strconv__Uf64 strconv__Uf64;
typedef struct strconv__BF_param strconv__BF_param;
typedef struct array array;
typedef struct VAssertMetaInfo VAssertMetaInfo;
typedef struct MethodArgs MethodArgs;
typedef struct FunctionData FunctionData;
typedef struct FieldData FieldData;
typedef struct SymbolInfo SymbolInfo;
typedef struct SymbolInfoContainer SymbolInfoContainer;
typedef struct Line64 Line64;
typedef struct ExceptionRecord ExceptionRecord;
typedef struct ContextRecord ContextRecord;
typedef struct ExceptionPointers ExceptionPointers;
typedef struct DenseArray DenseArray;
typedef struct map map;
typedef struct OptionBase OptionBase;
typedef struct Option Option;
typedef struct SortedMap SortedMap;
typedef struct mapnode mapnode;
typedef struct string string;
typedef struct ustring ustring;
typedef struct RepIndex RepIndex;
typedef struct vsdl__RWops vsdl__RWops;
typedef struct vsdl__gfx__Cursor vsdl__gfx__Cursor;
typedef struct vsdl__gfx__Display vsdl__gfx__Display;
typedef struct vsdl__gfx__GLContext vsdl__gfx__GLContext;
typedef struct vsdl__gfx__MessageBox vsdl__gfx__MessageBox;
typedef struct vsdl__gfx__MessageBoxButton vsdl__gfx__MessageBoxButton;
typedef struct vsdl__gfx__MessageBoxColor vsdl__gfx__MessageBoxColor;
typedef struct vsdl__gfx__MessageBoxColorScheme vsdl__gfx__MessageBoxColorScheme;
typedef struct vsdl__gfx__Renderer vsdl__gfx__Renderer;
typedef struct vsdl__gfx__Surface vsdl__gfx__Surface;
typedef struct vsdl__gfx__Texture vsdl__gfx__Texture;
typedef struct vsdl__gfx__Window vsdl__gfx__Window;
typedef struct vsdl__gfx__PixelFormat vsdl__gfx__PixelFormat;
typedef struct vsdl__gfx__Palette vsdl__gfx__Palette;
typedef struct vsdl__gfx__Point vsdl__gfx__Point;
typedef struct vsdl__gfx__Rect vsdl__gfx__Rect;
typedef struct vsdl__audio__AudioData vsdl__audio__AudioData;
typedef struct vsdl__audio__AudioDevice vsdl__audio__AudioDevice;
typedef struct vsdl__audio__AudioSpec vsdl__audio__AudioSpec;
typedef struct time__StopWatchOptions time__StopWatchOptions;
typedef struct time__StopWatch time__StopWatch;
typedef struct time__Time time__Time;
typedef struct time__SystemTime time__SystemTime;
typedef struct os__File os__File;
typedef struct os__FileInfo os__FileInfo;
typedef struct os__FilePermission os__FilePermission;
typedef struct os__FileMode os__FileMode;
typedef struct os__Result os__Result;
typedef struct os__Uname os__Uname;
typedef struct os__Filetime os__Filetime;
typedef struct os__Win32finddata os__Win32finddata;
typedef struct os__ProcessInformation os__ProcessInformation;
typedef struct os__StartupInfo os__StartupInfo;
typedef struct os__SecurityAttributes os__SecurityAttributes;
typedef struct os__ExceptionRecord os__ExceptionRecord;
typedef struct os__ContextRecord os__ContextRecord;
typedef struct os__ExceptionPointers os__ExceptionPointers;
typedef struct vsdl__mixer__Chunk vsdl__mixer__Chunk;
typedef struct vsdl__mixer__Music vsdl__mixer__Music;
typedef struct rand__wyrand__WyRandRNG rand__wyrand__WyRandRNG;
typedef struct rand__PRNGConfigStruct rand__PRNGConfigStruct;
typedef struct sync__Subscription sync__Subscription;
typedef struct sync__Channel sync__Channel;
typedef struct sync__PoolProcessor sync__PoolProcessor;
typedef struct sync__PoolProcessorConfig sync__PoolProcessorConfig;
typedef struct sync__SResult sync__SResult;
typedef struct sync__IResult sync__IResult;
typedef struct sync__Mutex sync__Mutex;
typedef struct sync__RwMutex sync__RwMutex;
typedef struct sync__Semaphore sync__Semaphore;
typedef struct sync__Waiter sync__Waiter;
typedef struct sync__WaitGroup sync__WaitGroup;
typedef struct vsdl__events__EventSystem vsdl__events__EventSystem;
typedef struct vsdl__events__Keysym vsdl__events__Keysym;
typedef union vsdl__events__Event vsdl__events__Event;
typedef struct vsdl__events__CommonEvent vsdl__events__CommonEvent;
typedef struct vsdl__events__DisplayEvent vsdl__events__DisplayEvent;
typedef struct vsdl__events__WindowEvent vsdl__events__WindowEvent;
typedef struct vsdl__events__KeyboardEvent vsdl__events__KeyboardEvent;
typedef struct vsdl__events__TextEditingEvent vsdl__events__TextEditingEvent;
typedef struct vsdl__events__TextInputEvent vsdl__events__TextInputEvent;
typedef struct vsdl__events__MouseMotionEvent vsdl__events__MouseMotionEvent;
typedef struct vsdl__events__MouseButtonEvent vsdl__events__MouseButtonEvent;
typedef struct vsdl__events__MouseWheelEvent vsdl__events__MouseWheelEvent;
typedef struct vsdl__events__JoyAxisEvent vsdl__events__JoyAxisEvent;
typedef struct vsdl__events__JoyBallEvent vsdl__events__JoyBallEvent;
typedef struct vsdl__events__JoyHatEvent vsdl__events__JoyHatEvent;
typedef struct vsdl__events__JoyButtonEvent vsdl__events__JoyButtonEvent;
typedef struct vsdl__events__JoyDeviceEvent vsdl__events__JoyDeviceEvent;
typedef struct vsdl__events__ControllerAxisEvent vsdl__events__ControllerAxisEvent;
typedef struct vsdl__events__ControllerButtonEvent vsdl__events__ControllerButtonEvent;
typedef struct vsdl__events__ControllerDeviceEvent vsdl__events__ControllerDeviceEvent;
typedef struct vsdl__events__AudioDeviceEvent vsdl__events__AudioDeviceEvent;
typedef struct vsdl__events__TouchFingerEvent vsdl__events__TouchFingerEvent;
typedef struct vsdl__events__MultiGestureEvent vsdl__events__MultiGestureEvent;
typedef struct vsdl__events__DollarGestureEvent vsdl__events__DollarGestureEvent;
typedef struct vsdl__events__DropEvent vsdl__events__DropEvent;
typedef struct vsdl__events__SensorEvent vsdl__events__SensorEvent;
typedef struct vsdl__events__QuitEvent vsdl__events__QuitEvent;
typedef struct vsdl__events__OSEvent vsdl__events__OSEvent;
typedef struct vsdl__events__UserEvent vsdl__events__UserEvent;
typedef struct vsdl__events__SysWMEvent vsdl__events__SysWMEvent;
typedef struct varg_voidptr varg_voidptr;
typedef struct varg_vsdl__gfx__Window varg_vsdl__gfx__Window;
typedef struct varg_vsdl__gfx__WindowFlags varg_vsdl__gfx__WindowFlags;
typedef struct varg_vsdl__audio__AudioChangeFlags varg_vsdl__audio__AudioChangeFlags;
typedef struct varg_string varg_string;
typedef struct varg_int varg_int;
typedef struct varg_vsdl__mixer__MixerFlags varg_vsdl__mixer__MixerFlags;
typedef struct varg_vsdl__events__EventCategory varg_vsdl__events__EventCategory;

// V typedefs2:
typedef struct Option_int Option_int;
typedef struct Option_vsdl__RWops_ptr Option_vsdl__RWops_ptr;
typedef struct Option_vsdl__gfx__Cursor Option_vsdl__gfx__Cursor;
typedef struct Option_vsdl__gfx__Display Option_vsdl__gfx__Display;
typedef struct Option_vsdl__gfx__Surface_ptr Option_vsdl__gfx__Surface_ptr;
typedef struct Option_vsdl__gfx__GLContext Option_vsdl__gfx__GLContext;
typedef struct Option_vsdl__gfx__Window Option_vsdl__gfx__Window;
typedef struct Option_void Option_void;
typedef struct Option_vsdl__gfx__Texture Option_vsdl__gfx__Texture;
typedef struct Option_vsdl__gfx__Renderer Option_vsdl__gfx__Renderer;
typedef struct Option_vsdl__gfx__SDL_vulkanSurface Option_vsdl__gfx__SDL_vulkanSurface;
typedef struct Option_multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer Option_multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer;
typedef struct Option_vsdl__audio__AudioData_ptr Option_vsdl__audio__AudioData_ptr;
typedef struct Option_time__Time Option_time__Time;
typedef struct Option_string Option_string;
typedef struct Option_array_byte Option_array_byte;
typedef struct Option_FILE_ptr Option_FILE_ptr;
typedef struct Option_array_string Option_array_string;
typedef struct Option_bool Option_bool;
typedef struct Option_array_ustring Option_array_ustring;
typedef struct Option_os__File Option_os__File;
typedef struct Option_os__Result Option_os__Result;
typedef struct Option_vsdl__mixer__Chunk_ptr Option_vsdl__mixer__Chunk_ptr;

// V cheaders:
// Generated by the V compiler
#include <inttypes.h>

//================================== builtin types ================================*/
typedef int64_t i64;
typedef int16_t i16;
typedef int8_t i8;
typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t byte;
typedef uint32_t rune;
typedef float f32;
typedef double f64;
typedef int64_t any_int;
typedef double any_float;
typedef unsigned char* byteptr;
typedef void* voidptr;
typedef char* charptr;
typedef struct array array;
typedef struct map map;
typedef array array_string;
typedef array array_int;
typedef array array_byte;
typedef array array_f32;
typedef array array_f64;
typedef array array_u16;
typedef array array_u32;
typedef array array_u64;
typedef map map_int;
typedef map map_string;
typedef byte array_fixed_byte_300 [300];
typedef byte array_fixed_byte_400 [400];

typedef struct sync__Channel* chan;

#ifndef __cplusplus
	#ifndef bool
		typedef int bool;
		#define true 1
		#define false 0
	#endif
#endif


// c_headers
typedef int (*qsort_callback_func)(const void*, const void*);
#include <stdio.h>  // TODO remove all these includes, define all function signatures and types manually
#include <stdlib.h>

#ifdef __cplusplus
	#include <utility>
	#define _MOV std::move
#else
	#define _MOV
#endif

#ifndef _WIN32
	#if defined __has_include
		#if __has_include (<execinfo.h>)
			#include <execinfo.h>
		#else
			// Most probably musl OR __ANDROID__ ...
			int backtrace (void **__array, int __size) { return 0; }
			char **backtrace_symbols (void *const *__array, int __size){ return 0; }
			void backtrace_symbols_fd (void *const *__array, int __size, int __fd){}
		#endif
	#endif
#endif

//#include "fns.h"
#include <signal.h>
#include <stdarg.h> // for va_list
#include <string.h> // memcpy

#if INTPTR_MAX == INT32_MAX
	#define TARGET_IS_32BIT 1
#elif INTPTR_MAX == INT64_MAX
	#define TARGET_IS_64BIT 1
#else
	#error "The environment is not 32 or 64-bit."
#endif

#if defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __BIG_ENDIAN || defined(__BIG_ENDIAN__) || defined(__ARMEB__) || defined(__THUMBEB__) || defined(__AARCH64EB__) || defined(_MIBSEB) || defined(__MIBSEB) || defined(__MIBSEB__)
	#define TARGET_ORDER_IS_BIG
#elif defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __LITTLE_ENDIAN || defined(__LITTLE_ENDIAN__) || defined(__ARMEL__) || defined(__THUMBEL__) || defined(__AARCH64EL__) || defined(_MIPSEL) || defined(__MIPSEL) || defined(__MIPSEL__) || defined(_M_AMD64) || defined(_M_X64) || defined(_M_IX86)
	#define TARGET_ORDER_IS_LITTLE
#else
	#error "Unknown architecture endianness"
#endif

#ifndef _WIN32
	#include <ctype.h>
	#include <locale.h> // tolower
	#include <sys/time.h>
	#include <unistd.h> // sleep
	extern char **environ;
#endif

#if defined(__CYGWIN__) && !defined(_WIN32)
	#error Cygwin is not supported, please use MinGW or Visual Studio.
#endif

#ifdef __linux__
	#include <sys/types.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __FreeBSD__
	#include <sys/types.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __DragonFly__
	#include <sys/types.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __OpenBSD__
	#include <sys/types.h>
	#include <sys/resource.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __NetBSD__
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __sun
	#include <sys/types.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif


#define EMPTY_STRUCT_DECLARATION
#define EMPTY_STRUCT_INITIALIZATION 0
// Due to a tcc bug, the length of an array needs to be specified, but GCC crashes if it is...
#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[])
#define TCCSKIP(x) x

#define __NOINLINE __attribute__((noinline))
#define __IRQHANDLER __attribute__((interrupt))

#if defined(__x86_64__)
#define __V_amd64  1
#endif
#if defined(__aarch64__) || defined(__arm64__)
#define __V_aarch64  1
#endif

// Using just __GNUC__ for detecting gcc, is not reliable because other compilers define it too:
#ifdef __GNUC__
	#define __V_GCC__
#endif
#ifdef __TINYC__
	#undef __V_GCC__
#endif
#ifdef __cplusplus
	#undef __V_GCC__
#endif
#ifdef __clang__
	#undef __V_GCC__
#endif
#ifdef _MSC_VER
	#undef __V_GCC__
#endif

#ifdef __TINYC__
	#undef EMPTY_STRUCT_DECLARATION
	#undef EMPTY_STRUCT_INITIALIZATION
	#define EMPTY_STRUCT_DECLARATION char _dummy
	#define EMPTY_STRUCT_INITIALIZATION 0
	#undef EMPTY_ARRAY_OF_ELEMS
	#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[n])
	#undef __NOINLINE
	#undef __IRQHANDLER
	// tcc does not support inlining at all
	#define __NOINLINE
	#define __IRQHANDLER
	#undef TCCSKIP
	#define TCCSKIP(x)
	// #include <byteswap.h>
#endif

// for __offset_of
#ifndef __offsetof
	#define __offsetof(s,memb) ((size_t)((char *)&((s *)0)->memb - (char *)0))
#endif

#define OPTION_CAST(x) (x)

#ifndef V64_PRINTFORMAT
	#ifdef PRIx64
		#define V64_PRINTFORMAT "0x%"PRIx64
	#elif defined(__WIN32__)
		#define V64_PRINTFORMAT "0x%I64x"
	#elif defined(__linux__) && defined(__LP64__)
		#define V64_PRINTFORMAT "0x%lx"
	#else
		#define V64_PRINTFORMAT "0x%llx"
	#endif
#endif


#ifdef _WIN32
	#define WINVER 0x0600
	#ifdef _WIN32_WINNT
		#undef _WIN32_WINNT
	#endif
	#define _WIN32_WINNT 0x0600
	#define WIN32_LEAN_AND_MEAN
	#ifndef _UNICODE
	#define _UNICODE
	#endif
	#ifndef UNICODE
	#define UNICODE
	#endif
	#include <windows.h>

	#include <io.h> // _waccess
	#include <direct.h> // _wgetcwd
	//#include <WinSock2.h>

	#ifdef _MSC_VER
		// On MSVC these are the same (as long as /volatile:ms is passed)
		#define _Atomic volatile

		// MSVC cannot parse some things properly
		#undef EMPTY_STRUCT_DECLARATION
		#undef OPTION_CAST

		#define EMPTY_STRUCT_DECLARATION int ____dummy_variable
		#define OPTION_CAST(x)
		#undef __NOINLINE
		#undef __IRQHANDLER
		#define __NOINLINE __declspec(noinline)
		#define __IRQHANDLER __declspec(naked)

		#include <dbghelp.h>
		#pragma comment(lib, "Dbghelp.lib")

		extern wchar_t **_wenviron;
	#elif !defined(SRWLOCK_INIT)
		// these seem to be missing on Windows tcc
		typedef struct SRWLOCK { void* SRWLOCK; } SRWLOCK;
		void InitializeSRWLock(void*);
		void AcquireSRWLockShared(void*);
		void AcquireSRWLockExclusive(void*);
		void ReleaseSRWLockShared(void*);
		void ReleaseSRWLockExclusive(void*);
	#endif
#else
	#include <pthread.h>
	#ifndef PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP
		// musl does not have that
		#define pthread_rwlockattr_setkind_np(a, b)
	#endif
#endif

// g_live_info is used by live.info()
void* g_live_info = NULL;

//============================== HELPER C MACROS =============================*/
//#define tos4(s, slen) ((string){.str=(s), .len=(slen)})
#define _SLIT(s) ((string){.str=(byteptr)(s), .len=(strlen(s))})
#define _PUSH_MANY(arr, val, tmp, tmp_typ) {tmp_typ tmp = (val); array_push_many(arr, tmp.data, tmp.len);}
#define _IN(typ, val, arr) array_##typ##_contains(arr, val)
#define _IN_MAP(val, m) map_exists(m, val)

// these macros have corresponding implementations in builtin/int.v with different signedness
#define array_i8_contains(a, b) array_byte_contains(a, (byte)(b))
#define array_i16_contains(a, b) array_u16_contains(a, (u16)(b))
#define array_u32_contains(a, b) array_int_contains(a, (int)(b))
#define array_i64_contains(a, b) array_u64_contains(a, (u64)(b))
#define array_rune_contains(a, b) array_int_contains(a, (int)(b))
#define array_f32_contains(a, b) array_int_contains(a, *(int*)&((f32[]){(b)}))
#define array_f64_contains(a, b) array_u64_contains(a, *(u64*)&((f64[]){(b)}))
#ifdef TARGET_IS_64BIT
#define array_voidptr_contains(a, b) array_u64_contains(a, (u64)(b))
#else
#define array_voidptr_contains(a, b) array_int_contains(a, (int)(b))
#endif

// unsigned/signed comparisons
static inline bool _us32_gt(uint32_t a, int32_t b) { return a > INT32_MAX || (int32_t)a > b; }
static inline bool _us32_ge(uint32_t a, int32_t b) { return a >= INT32_MAX || (int32_t)a >= b; }
static inline bool _us32_eq(uint32_t a, int32_t b) { return a <= INT32_MAX && (int32_t)a == b; }
static inline bool _us32_ne(uint32_t a, int32_t b) { return a > INT32_MAX || (int32_t)a != b; }
static inline bool _us32_le(uint32_t a, int32_t b) { return a <= INT32_MAX && (int32_t)a <= b; }
static inline bool _us32_lt(uint32_t a, int32_t b) { return a < INT32_MAX && (int32_t)a < b; }
static inline bool _us64_gt(uint64_t a, int64_t b) { return a > INT64_MAX || (int64_t)a > b; }
static inline bool _us64_ge(uint64_t a, int64_t b) { return a >= INT64_MAX || (int64_t)a >= b; }
static inline bool _us64_eq(uint64_t a, int64_t b) { return a <= INT64_MAX && (int64_t)a == b; }
static inline bool _us64_ne(uint64_t a, int64_t b) { return a > INT64_MAX || (int64_t)a != b; }
static inline bool _us64_le(uint64_t a, int64_t b) { return a <= INT64_MAX && (int64_t)a <= b; }
static inline bool _us64_lt(uint64_t a, int64_t b) { return a < INT64_MAX && (int64_t)a < b; }

#if defined(__MINGW32__) || defined(__MINGW64__) || (defined(_WIN32) && defined(__TINYC__))
	#undef PRId64
	#undef PRIi64
	#undef PRIo64
	#undef PRIu64
	#undef PRIx64
	#undef PRIX64
	#define PRId64 "lld"
	#define PRIi64 "lli"
	#define PRIo64 "llo"
	#define PRIu64 "llu"
	#define PRIx64 "llx"
	#define PRIX64 "llX"
#endif

//================================== GLOBALS =================================*/
//byte g_str_buf[1024];
byte* g_str_buf;
int load_so(byteptr);
void reload_so();
void _vinit();
void _vcleanup();
#define sigaction_size sizeof(sigaction);
#define _ARR_LEN(a) ( (sizeof(a)) / (sizeof(a[0])) )

// ============== wyhash ==============
//Author: Wang Yi
#ifndef wyhash_version_gamma
	#define wyhash_version_gamma
	#define WYHASH_CONDOM 0
	#include <stdint.h>
	#include <string.h>
	#if defined(_MSC_VER) && defined(_M_X64)
		#include <intrin.h>
		#pragma intrinsic(_umul128)
	#endif

	//const uint64_t _wyp0=0xa0761d6478bd642full, _wyp1=0xe7037ed1a0b428dbull;
	#define _wyp0 ((uint64_t)0xa0761d6478bd642full)
	#define _wyp1 ((uint64_t)0xe7037ed1a0b428dbull)

	#if defined(__GNUC__) || defined(__INTEL_COMPILER) || defined(__clang__) || defined(__TINYC__)
		#define _likely_(x) __builtin_expect(x, 1)
		#define _unlikely_(x) __builtin_expect((x), 0)
	#else
		#define _likely_(x) (x)
		#define _unlikely_(x) (x)
	#endif

	#if defined(TARGET_ORDER_IS_LITTLE)
		#define WYHASH_LITTLE_ENDIAN 1
	#elif defined(TARGET_ORDER_IS_BIG)
		#define WYHASH_LITTLE_ENDIAN 0
	#endif

	#if (WYHASH_LITTLE_ENDIAN)
		static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return v;}
		static inline uint64_t _wyr4(const uint8_t *p) { unsigned v; memcpy(&v, p, 4); return v;}
	#else
		#if defined(__GNUC__) || defined(__INTEL_COMPILER) || defined(__clang__)
			static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return __builtin_bswap64(v);}
			static inline uint64_t _wyr4(const uint8_t *p) { unsigned v; memcpy(&v, p, 4); return __builtin_bswap32(v);}
		#elif defined(_MSC_VER)
			static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return _byteswap_uint64(v);}
			static inline uint64_t _wyr4(const uint8_t *p) { unsigned v; memcpy(&v, p, 4); return _byteswap_ulong(v);}
		#elif defined(__TINYC__)
			static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return bswap_64(v);}
			static inline uint64_t _wyr4(const uint8_t *p) { unsigned v; memcpy(&v, p, 4); return bswap_32(v);}
		#endif
	#endif

	static inline uint64_t _wyr3(const uint8_t *p, unsigned k) { return (((uint64_t)p[0]) << 16) | (((uint64_t)p[k >> 1]) << 8) | p[k - 1];}
	static inline uint64_t _wyrotr(uint64_t v, unsigned k) { return (v >> k) | (v << (64 - k));}
	static inline void _wymix128(uint64_t A, uint64_t B, uint64_t *C, uint64_t *D){
		A^=*C;	B^=*D;
	#ifdef UNOFFICIAL_WYHASH_32BIT
		uint64_t hh=(A>>32)*(B>>32), hl=(A>>32)*(unsigned)B, lh=(unsigned)A*(B>>32), ll=(uint64_t)(unsigned)A*(unsigned)B;
		*C=_wyrotr(hl,32)^hh; *D=_wyrotr(lh,32)^ll;
	#else
		#ifdef __SIZEOF_INT128__
			__uint128_t r=A; r*=B; *C=(uint64_t)r; *D=(uint64_t)(r>>64);
		#elif defined(_MSC_VER) && defined(_M_X64)
			A=_umul128(A,B,&B); *C=A; *D=B;
		#else
			uint64_t ha=A>>32, hb=B>>32, la=(uint32_t)A, lb=(uint32_t)B, hi, lo;
			uint64_t rh=ha*hb, rm0=ha*lb, rm1=hb*la, rl=la*lb, t=rl+(rm0<<32), c=t<rl;
			lo=t+(rm1<<32); c+=lo<t; hi=rh+(rm0>>32)+(rm1>>32)+c;
			*C=lo;	*D=hi;
		#endif
	#endif
	}
	static inline uint64_t wyhash(const void *key, uint64_t len, uint64_t seed){
		const uint8_t *p=(const uint8_t *)key;
		uint64_t i=len, see1=seed;
		start:
		if (_likely_(i<=16)) {
	#ifndef	WYHASH_CONDOM
			uint64_t shift = (i<8)*((8-i)<<3);
			//WARNING: intended reading outside buffer, trading for speed.
			_wymix128((_wyr8(p)<<shift)^_wyp0, (_wyr8(p+i-8)>>shift)^_wyp1, &seed, &see1);
	#else
			if (_likely_(i<=8)) {
				if (_likely_(i>=4)) _wymix128(_wyr4(p)^_wyp0,_wyr4(p+i-4)^_wyp1, &seed, &see1);
				else if (_likely_(i)) _wymix128(_wyr3(p,i)^_wyp0,_wyp1, &seed, &see1);
				else _wymix128(_wyp0,_wyp1, &seed, &see1);
			}
			else _wymix128(_wyr8(p)^_wyp0,_wyr8(p+i-8)^_wyp1, &seed, &see1);
	#endif
			_wymix128(len,_wyp0, &seed, &see1);
			return	seed^see1;
		}
		_wymix128(_wyr8(p)^_wyp0,_wyr8(p+8)^_wyp1, &seed, &see1);
		i-=16;	p+=16;	goto start;
	}
	static inline uint64_t wyhash64(uint64_t A, uint64_t B){
		_wymix128(_wyp0,_wyp1,&A,&B);
		_wymix128(0,0,&A,&B);
		return	A^B;
	}
	static inline uint64_t wyrand(uint64_t *seed){
		*seed+=_wyp0;
		uint64_t	a=0, b=0;
		_wymix128(*seed,*seed^_wyp1,&a,&b);
		return	a^b;
	}
	static inline double wy2u01(uint64_t r) {
		const double _wynorm=1.0/(1ull<<52);
		return (r>>12)*_wynorm;
	}
	static inline double wy2gau(uint64_t r) {
		const double _wynorm=1.0/(1ull<<20);
		return ((r&0x1fffff)+((r>>21)&0x1fffff)+((r>>42)&0x1fffff))*_wynorm-3.0;
	}
#endif


// V includes:
// added by module `builtin`:
#include <float.h>
// added by module `vsdl`:
#include "SDL.h"
// added by module `vsdl`:
#include "SDL_vulkan.h"
// added by module `time`:
#include <time.h>
// added by module `time`:
#include <time.h>
// added by module `os`:
#include <sys/stat.h> // #include <signal.h>
// added by module `os`:
#include <errno.h>
// added by module `os`:
#include <winsock2.h>
// added by module `os`:
#include <process.h>
// added by module `vsdl.mixer`:
#include "mixer/SDL_mixer.h"
// added by module `sync`:
#include <atomic.h>

// Enum definitions:
typedef enum {
	strconv__Char_parse_state_start, // 
	strconv__Char_parse_state_norm_char, // +1
	strconv__Char_parse_state_field_char, // +2
	strconv__Char_parse_state_pad_ch, // +3
	strconv__Char_parse_state_len_set_start, // +4
	strconv__Char_parse_state_len_set_in, // +5
	strconv__Char_parse_state_check_type, // +6
	strconv__Char_parse_state_check_float, // +7
	strconv__Char_parse_state_check_float_in, // +8
	strconv__Char_parse_state_reset_params, // +9
} strconv__Char_parse_state;

typedef enum {
	strconv__Align_text_right = 0, // 0
	strconv__Align_text_left, // 0+1
	strconv__Align_text_center, // 0+2
} strconv__Align_text;

typedef enum {
	ChanState_success, // 
	ChanState_not_ready, // +1
	ChanState_closed, // +2
} ChanState;

typedef enum {
	vsdl__RWWhence_start, // 
	vsdl__RWWhence_current, // +1
	vsdl__RWWhence_end, // +2
} vsdl__RWWhence;

typedef enum {
	vsdl__gfx__BlendMode_none = 0x00000000, // 0x00000000
	vsdl__gfx__BlendMode_blend = 0x00000001, // 0x00000001
	vsdl__gfx__BlendMode_add = 0x00000002, // 0x00000002
	vsdl__gfx__BlendMode_mod = 0x00000004, // 0x00000004
	vsdl__gfx__BlendMode_mul = 0x00000008, // 0x00000008
	vsdl__gfx__BlendMode_invalid = 0x7FFFFFFF, // 0x7FFFFFFF
} vsdl__gfx__BlendMode;

typedef enum {
	vsdl__gfx__CursorMode_query = -1, // -1
	vsdl__gfx__CursorMode_disable = 0, // 0
	vsdl__gfx__CursorMode_enable = 1, // 1
} vsdl__gfx__CursorMode;

typedef enum {
	vsdl__gfx__CursorType_arrow, // 
	vsdl__gfx__CursorType_ibeam, // +1
	vsdl__gfx__CursorType_wait, // +2
	vsdl__gfx__CursorType_crosshair, // +3
	vsdl__gfx__CursorType_waitarrow, // +4
	vsdl__gfx__CursorType_sizenwse, // +5
	vsdl__gfx__CursorType_sizenews, // +6
	vsdl__gfx__CursorType_sizewe, // +7
	vsdl__gfx__CursorType_sizens, // +8
	vsdl__gfx__CursorType_sizeall, // +9
	vsdl__gfx__CursorType_block, // +10
	vsdl__gfx__CursorType_hand, // +11
} vsdl__gfx__CursorType;

typedef enum {
	vsdl__gfx__FullscreenMode_windowed = 0, // 0
	vsdl__gfx__FullscreenMode_fullscreen = 1, // 1
	vsdl__gfx__FullscreenMode_fullscreen_desktop = 4097, // 4097
} vsdl__gfx__FullscreenMode;

typedef enum {
	vsdl__gfx__GLAttr_red_size, // 
	vsdl__gfx__GLAttr_green_size, // +1
	vsdl__gfx__GLAttr_blue_size, // +2
	vsdl__gfx__GLAttr_alpha_size, // +3
	vsdl__gfx__GLAttr_buffer_size, // +4
	vsdl__gfx__GLAttr_doublebuffer, // +5
	vsdl__gfx__GLAttr_depth_size, // +6
	vsdl__gfx__GLAttr_stencil_size, // +7
	vsdl__gfx__GLAttr_accum_red_size, // +8
	vsdl__gfx__GLAttr_accum_green_size, // +9
	vsdl__gfx__GLAttr_accum_blue_size, // +10
	vsdl__gfx__GLAttr_accum_alpha_size, // +11
	vsdl__gfx__GLAttr_stereo, // +12
	vsdl__gfx__GLAttr_multisamplebuffers, // +13
	vsdl__gfx__GLAttr_multisamplesamples, // +14
	vsdl__gfx__GLAttr_accelerated_visual, // +15
	vsdl__gfx__GLAttr_retained_backing, // +16
	vsdl__gfx__GLAttr_context_major_version, // +17
	vsdl__gfx__GLAttr_context_minor_version, // +18
	vsdl__gfx__GLAttr_context_egl, // +19
	vsdl__gfx__GLAttr_context_flags, // +20
	vsdl__gfx__GLAttr_context_profile_mask, // +21
	vsdl__gfx__GLAttr_share_with_current_context, // +22
	vsdl__gfx__GLAttr_framebuffer_srgb_capable, // +23
	vsdl__gfx__GLAttr_context_release_behavior, // +24
	vsdl__gfx__GLAttr_context_reset_notification, // +25
	vsdl__gfx__GLAttr_context_no_error, // +26
} vsdl__gfx__GLAttr;

typedef enum {
	vsdl__gfx__MessageBoxFlags_none = 0x00000000, // 0x00000000
	vsdl__gfx__MessageBoxFlags_error = 0x00000010, // 0x00000010
	vsdl__gfx__MessageBoxFlags_warning = 0x00000020, // 0x00000020
	vsdl__gfx__MessageBoxFlags_information = 0x00000040, // 0x00000040
	vsdl__gfx__MessageBoxFlags_buttons_left_to_right = 0x00000080, // 0x00000080
	vsdl__gfx__MessageBoxFlags_buttons_right_to_left = 0x00000100, // 0x00000100
} vsdl__gfx__MessageBoxFlags;

typedef enum {
	vsdl__gfx__MessageBoxButtonFlags_none = 0x00000000, // 0x00000000
	vsdl__gfx__MessageBoxButtonFlags_return_key = 0x00000001, // 0x00000001
	vsdl__gfx__MessageBoxButtonFlags_escape_key = 0x00000002, // 0x00000002
} vsdl__gfx__MessageBoxButtonFlags;

typedef enum {
	vsdl__gfx__PixelFormats_unknown = 0, // 0
	vsdl__gfx__PixelFormats_index1lsb = 286261504, // 286261504
	vsdl__gfx__PixelFormats_index1msb = 287310080, // 287310080
	vsdl__gfx__PixelFormats_index4lsb = 303039488, // 303039488
	vsdl__gfx__PixelFormats_index4msb = 304088064, // 304088064
	vsdl__gfx__PixelFormats_index8 = 318769153, // 318769153
	vsdl__gfx__PixelFormats_rgb332 = 336660481, // 336660481
	vsdl__gfx__PixelFormats_rgb444 = 353504258, // 353504258
	vsdl__gfx__PixelFormats_bgr444 = 357698562, // 357698562
	vsdl__gfx__PixelFormats_rgb555 = 353570562, // 353570562
	vsdl__gfx__PixelFormats_bgr555 = 357764866, // 357764866
	vsdl__gfx__PixelFormats_argb4444 = 355602434, // 355602434
	vsdl__gfx__PixelFormats_rgba4444 = 356651010, // 356651010
	vsdl__gfx__PixelFormats_abgr4444 = 359796738, // 359796738
	vsdl__gfx__PixelFormats_bgra4444 = 360845314, // 360845314
	vsdl__gfx__PixelFormats_argb1555 = 355667970, // 355667970
	vsdl__gfx__PixelFormats_rgba5551 = 356782082, // 356782082
	vsdl__gfx__PixelFormats_abgr1555 = 359862274, // 359862274
	vsdl__gfx__PixelFormats_bgra5551 = 360976386, // 360976386
	vsdl__gfx__PixelFormats_rgb565 = 353701890, // 353701890
	vsdl__gfx__PixelFormats_bgr565 = 357896194, // 357896194
	vsdl__gfx__PixelFormats_rgb24 = 386930691, // 386930691
	vsdl__gfx__PixelFormats_bgr24 = 390076419, // 390076419
	vsdl__gfx__PixelFormats_rgb888 = 370546692, // 370546692
	vsdl__gfx__PixelFormats_rgbx8888 = 371595268, // 371595268
	vsdl__gfx__PixelFormats_bgr888 = 374740996, // 374740996
	vsdl__gfx__PixelFormats_bgrx8888 = 375789572, // 375789572
	vsdl__gfx__PixelFormats_argb2101010 = 372711428, // 372711428
	vsdl__gfx__PixelFormats_rgba32 = 376840196, // 376840196
	vsdl__gfx__PixelFormats_argb32 = 377888772, // 377888772
	vsdl__gfx__PixelFormats_bgra32 = 372645892, // 372645892
	vsdl__gfx__PixelFormats_abgr32 = 373694468, // 373694468
	vsdl__gfx__PixelFormats_yv12 = 842094169, // 842094169
	vsdl__gfx__PixelFormats_iyuv = 1448433993, // 1448433993
	vsdl__gfx__PixelFormats_yuy2 = 844715353, // 844715353
	vsdl__gfx__PixelFormats_uyvy = 1498831189, // 1498831189
	vsdl__gfx__PixelFormats_yvyu = 1431918169, // 1431918169
	vsdl__gfx__PixelFormats_nv12 = 842094158, // 842094158
	vsdl__gfx__PixelFormats_nv21 = 825382478, // 825382478
	vsdl__gfx__PixelFormats_external_oes = 542328143, // 542328143
} vsdl__gfx__PixelFormats;

typedef enum {
	vsdl__gfx__RendererFlip_none = 0, // 0
	vsdl__gfx__RendererFlip_horizontal = 1, // 1
	vsdl__gfx__RendererFlip_vertical = 2, // 2
} vsdl__gfx__RendererFlip;

typedef enum {
	vsdl__gfx__WindowFlags_fullscreen = 0x00000001, // 0x00000001
	vsdl__gfx__WindowFlags_opengl = 0x00000002, // 0x00000002
	vsdl__gfx__WindowFlags_shown = 0x00000004, // 0x00000004
	vsdl__gfx__WindowFlags_hidden = 0x00000008, // 0x00000008
	vsdl__gfx__WindowFlags_borderless = 0x00000010, // 0x00000010
	vsdl__gfx__WindowFlags_resizable = 0x00000020, // 0x00000020
	vsdl__gfx__WindowFlags_minimized = 0x00000040, // 0x00000040
	vsdl__gfx__WindowFlags_maximized = 0x00000080, // 0x00000080
	vsdl__gfx__WindowFlags_input_grabbed = 0x00000100, // 0x00000100
	vsdl__gfx__WindowFlags_input_focus = 0x00000200, // 0x00000200
	vsdl__gfx__WindowFlags_mouse_focus = 0x00000400, // 0x00000400
	vsdl__gfx__WindowFlags_fullscreen_desktop = 0x00001001, // 0x00001001
	vsdl__gfx__WindowFlags_foreign = 0x00000800, // 0x00000800
	vsdl__gfx__WindowFlags_allow_highdpi = 0x00002000, // 0x00002000
	vsdl__gfx__WindowFlags_mouse_capture = 0x00004000, // 0x00004000
	vsdl__gfx__WindowFlags_always_on_top = 0x00008000, // 0x00008000
	vsdl__gfx__WindowFlags_skip_taskbar = 0x00010000, // 0x00010000
	vsdl__gfx__WindowFlags_utility = 0x00020000, // 0x00020000
	vsdl__gfx__WindowFlags_tooltip = 0x00040000, // 0x00040000
	vsdl__gfx__WindowFlags_popup_menu = 0x00080000, // 0x00080000
	vsdl__gfx__WindowFlags_vulkan = 0x10000000, // 0x10000000
} vsdl__gfx__WindowFlags;

typedef enum {
	vsdl__audio__AudioChangeFlags_frequency = 0x0001, // 0x0001
	vsdl__audio__AudioChangeFlags_format = 0x0002, // 0x0002
	vsdl__audio__AudioChangeFlags_channels = 0x0004, // 0x0004
	vsdl__audio__AudioChangeFlags_samples = 0x0008, // 0x0008
	vsdl__audio__AudioChangeFlags_any = 0x000F, // 0x000F
} vsdl__audio__AudioChangeFlags;

typedef enum {
	vsdl__audio__AudioFormat_unknown = 0x0000, // 0x0000
	vsdl__audio__AudioFormat_u8 = 0x0008, // 0x0008
	vsdl__audio__AudioFormat_s8 = 0x8008, // 0x8008
	vsdl__audio__AudioFormat_u16lsb = 0x0010, // 0x0010
	vsdl__audio__AudioFormat_s16lsb = 0x8010, // 0x8010
	vsdl__audio__AudioFormat_u16msb = 0x1010, // 0x1010
	vsdl__audio__AudioFormat_s16msb = 0x9010, // 0x9010
	vsdl__audio__AudioFormat_s32lsb = 0x8020, // 0x8020
	vsdl__audio__AudioFormat_s32msb = 0x9020, // 0x9020
	vsdl__audio__AudioFormat_f32lsb = 0x8120, // 0x8120
	vsdl__audio__AudioFormat_f32msb = 0x9120, // 0x9120
} vsdl__audio__AudioFormat;

typedef enum {
	vsdl__audio__AudioStatus_stopped, // 
	vsdl__audio__AudioStatus_playing, // +1
	vsdl__audio__AudioStatus_paused, // +2
} vsdl__audio__AudioStatus;

typedef enum {
	time__FormatTime_hhmm12, // 
	time__FormatTime_hhmm24, // +1
	time__FormatTime_hhmmss12, // +2
	time__FormatTime_hhmmss24, // +3
	time__FormatTime_hhmmss24_milli, // +4
	time__FormatTime_hhmmss24_micro, // +5
	time__FormatTime_no_time, // +6
} time__FormatTime;

typedef enum {
	time__FormatDate_ddmmyy, // 
	time__FormatDate_ddmmyyyy, // +1
	time__FormatDate_mmddyy, // +2
	time__FormatDate_mmddyyyy, // +3
	time__FormatDate_mmmd, // +4
	time__FormatDate_mmmdd, // +5
	time__FormatDate_mmmddyyyy, // +6
	time__FormatDate_no_date, // +7
	time__FormatDate_yyyymmdd, // +8
} time__FormatDate;

typedef enum {
	time__FormatDelimiter_dot, // 
	time__FormatDelimiter_hyphen, // +1
	time__FormatDelimiter_slash, // +2
	time__FormatDelimiter_space, // +3
	time__FormatDelimiter_no_delimiter, // +4
} time__FormatDelimiter;

typedef enum {
	os__FileType_regular, // 
	os__FileType_directory, // +1
	os__FileType_character_device, // +2
	os__FileType_block_device, // +3
	os__FileType_fifo, // +4
	os__FileType_symbolic_link, // +5
	os__FileType_socket, // +6
} os__FileType;

typedef enum {
	vsdl__mixer__MixerFlags_flac = 0x0001, // 0x0001
	vsdl__mixer__MixerFlags_mod = 0x0002, // 0x0002
	vsdl__mixer__MixerFlags_mp3 = 0x0008, // 0x0008
	vsdl__mixer__MixerFlags_ogg = 0x0010, // 0x0010
	vsdl__mixer__MixerFlags_mid = 0x0020, // 0x0020
	vsdl__mixer__MixerFlags_opus = 0x0040, // 0x0040
} vsdl__mixer__MixerFlags;

typedef enum {
	vsdl__mixer__Format_default = 0x0000, // 0x0000
	vsdl__mixer__Format_u8 = 0x0008, // 0x0008
	vsdl__mixer__Format_s8 = 0x8008, // 0x8008
	vsdl__mixer__Format_u16lsb = 0x0010, // 0x0010
	vsdl__mixer__Format_s16lsb = 0x8010, // 0x8010
	vsdl__mixer__Format_u16msb = 0x1010, // 0x1010
	vsdl__mixer__Format_s16msb = 0x9010, // 0x9010
	vsdl__mixer__Format_s32lsb = 0x8020, // 0x8020
	vsdl__mixer__Format_s32msb = 0x9020, // 0x9020
	vsdl__mixer__Format_f32lsb = 0x8120, // 0x8120
	vsdl__mixer__Format_f32msb = 0x9120, // 0x9120
} vsdl__mixer__Format;

typedef enum {
	vsdl__mixer__MusicType_none, // 
	vsdl__mixer__MusicType_cmd, // +1
	vsdl__mixer__MusicType_wav, // +2
	vsdl__mixer__MusicType_mod, // +3
	vsdl__mixer__MusicType_mid, // +4
	vsdl__mixer__MusicType_ogg, // +5
	vsdl__mixer__MusicType_mp3, // +6
	vsdl__mixer__MusicType_mp3_mad_unused, // +7
	vsdl__mixer__MusicType_flac, // +8
	vsdl__mixer__MusicType_modplug_unused, // +9
	vsdl__mixer__MusicType_opus, // +10
} vsdl__mixer__MusicType;

typedef enum {
	vsdl__mixer__Fading_no_fading, // 
	vsdl__mixer__Fading_fade_out, // +1
	vsdl__mixer__Fading_fade_in, // +2
} vsdl__mixer__Fading;

typedef enum {
	sync__BufferElemStat_unused = 0, // 0
	sync__BufferElemStat_writing, // 0+1
	sync__BufferElemStat_written, // 0+2
	sync__BufferElemStat_reading, // 0+3
} sync__BufferElemStat;

typedef enum {
	sync__Direction_pop, // 
	sync__Direction_push, // +1
} sync__Direction;

typedef enum {
	sync__MutexState_broken, // 
	sync__MutexState_waiting, // +1
	sync__MutexState_released, // +2
	sync__MutexState_abandoned, // +3
	sync__MutexState_destroyed, // +4
} sync__MutexState;

typedef enum {
	vsdl__events__EventType_first = 0x000, // 0x000
	vsdl__events__EventType_quit = 0x100, // 0x100
	vsdl__events__EventType_app_terminating = 0x101, // 0x101
	vsdl__events__EventType_app_lowmemory = 0x102, // 0x102
	vsdl__events__EventType_app_willenterbackground = 0x103, // 0x103
	vsdl__events__EventType_app_didenterbackground = 0x104, // 0x104
	vsdl__events__EventType_app_willenterforeground = 0x105, // 0x105
	vsdl__events__EventType_app_didenterforeground = 0x106, // 0x106
	vsdl__events__EventType_displayevent = 0x150, // 0x150
	vsdl__events__EventType_windowevent = 0x200, // 0x200
	vsdl__events__EventType_syswmevent = 0x201, // 0x201
	vsdl__events__EventType_keydown = 0x300, // 0x300
	vsdl__events__EventType_keyup = 0x301, // 0x301
	vsdl__events__EventType_textediting = 0x302, // 0x302
	vsdl__events__EventType_textinput = 0x303, // 0x303
	vsdl__events__EventType_keymapchanged = 0x304, // 0x304
	vsdl__events__EventType_mousemotion = 0x400, // 0x400
	vsdl__events__EventType_mousebuttondown = 0x401, // 0x401
	vsdl__events__EventType_mousebuttonup = 0x402, // 0x402
	vsdl__events__EventType_mousewheel = 0x403, // 0x403
	vsdl__events__EventType_joyaxismotion = 0x600, // 0x600
	vsdl__events__EventType_joyballmotion = 0x601, // 0x601
	vsdl__events__EventType_joyhatmotion = 0x602, // 0x602
	vsdl__events__EventType_joybuttondown = 0x603, // 0x603
	vsdl__events__EventType_joybuttonup = 0x604, // 0x604
	vsdl__events__EventType_joydeviceadded = 0x605, // 0x605
	vsdl__events__EventType_joydeviceremoved = 0x606, // 0x606
	vsdl__events__EventType_controlleraxismotion = 0x650, // 0x650
	vsdl__events__EventType_controlleraxisbuttondown = 0x651, // 0x651
	vsdl__events__EventType_controlleraxisbuttonup = 0x652, // 0x652
	vsdl__events__EventType_controllerdeviceadded = 0x653, // 0x653
	vsdl__events__EventType_controllerdeviceremoved = 0x654, // 0x654
	vsdl__events__EventType_controllerdeviceremapped = 0x655, // 0x655
	vsdl__events__EventType_fingerdown = 0x700, // 0x700
	vsdl__events__EventType_fingerup = 0x701, // 0x701
	vsdl__events__EventType_fingermotion = 0x702, // 0x702
	vsdl__events__EventType_dollargesture = 0x800, // 0x800
	vsdl__events__EventType_dollarrecord = 0x801, // 0x801
	vsdl__events__EventType_multigesture = 0x802, // 0x802
	vsdl__events__EventType_clipboardupdate = 0x900, // 0x900
	vsdl__events__EventType_dropfile = 0x1000, // 0x1000
	vsdl__events__EventType_droptext = 0x1001, // 0x1001
	vsdl__events__EventType_dropbegin = 0x1002, // 0x1002
	vsdl__events__EventType_dropcomplete = 0x1003, // 0x1003
	vsdl__events__EventType_audiodeviceadded = 0x1100, // 0x1100
	vsdl__events__EventType_audiodeviceremoved = 0x1101, // 0x1101
	vsdl__events__EventType_sensorupdate = 0x1200, // 0x1200
	vsdl__events__EventType_render_targets_reset = 0x2000, // 0x2000
	vsdl__events__EventType_render_device_reset = 0x2001, // 0x2001
	vsdl__events__EventType_lastevent = 0xFFFF, // 0xFFFF
} vsdl__events__EventType;

typedef enum {
	vsdl__events__EventCategory_app = 0x0001, // 0x0001
	vsdl__events__EventCategory_display = 0x0002, // 0x0002
	vsdl__events__EventCategory_window = 0x0004, // 0x0004
	vsdl__events__EventCategory_system = 0x0008, // 0x0008
	vsdl__events__EventCategory_key = 0x0010, // 0x0010
	vsdl__events__EventCategory_text = 0x0020, // 0x0020
	vsdl__events__EventCategory_mouse = 0x0040, // 0x0040
	vsdl__events__EventCategory_joystick = 0x0080, // 0x0080
	vsdl__events__EventCategory_controller = 0x0100, // 0x0100
	vsdl__events__EventCategory_touch = 0x0200, // 0x0200
	vsdl__events__EventCategory_clipboard = 0x0400, // 0x0400
	vsdl__events__EventCategory_drop = 0x0800, // 0x0800
	vsdl__events__EventCategory_audio = 0x1000, // 0x1000
	vsdl__events__EventCategory_sensor = 0x2000, // 0x2000
	vsdl__events__EventCategory_renderer = 0x4000, // 0x4000
	vsdl__events__EventCategory_all = 0xFFFF, // 0xFFFF
} vsdl__events__EventCategory;

typedef enum {
	vsdl__events__KeyCode_key_unknown = 0, // 0
	vsdl__events__KeyCode_key_return = 13, // 13
	vsdl__events__KeyCode_key_escape = 27, // 27
	vsdl__events__KeyCode_key_backspace = 8, // 8
	vsdl__events__KeyCode_key_tab = 9, // 9
	vsdl__events__KeyCode_key_space = 32, // 32
	vsdl__events__KeyCode_key_exclaim = 33, // 33
	vsdl__events__KeyCode_key_quotedbl = 34, // 34
	vsdl__events__KeyCode_key_hash = 35, // 35
	vsdl__events__KeyCode_key_percent = 36, // 36
	vsdl__events__KeyCode_key_dollar = 37, // 37
	vsdl__events__KeyCode_key_ampersand = 38, // 38
	vsdl__events__KeyCode_key_quote = 39, // 39
	vsdl__events__KeyCode_key_leftparen = 40, // 40
	vsdl__events__KeyCode_key_rightparen = 41, // 41
	vsdl__events__KeyCode_key_asterisk = 42, // 42
	vsdl__events__KeyCode_key_plus = 43, // 43
	vsdl__events__KeyCode_key_comma = 44, // 44
	vsdl__events__KeyCode_key_minus = 45, // 45
	vsdl__events__KeyCode_key_period = 46, // 46
	vsdl__events__KeyCode_key_slash = 47, // 47
	vsdl__events__KeyCode_key_0 = 48, // 48
	vsdl__events__KeyCode_key_1 = 49, // 49
	vsdl__events__KeyCode_key_2 = 50, // 50
	vsdl__events__KeyCode_key_3 = 51, // 51
	vsdl__events__KeyCode_key_4 = 52, // 52
	vsdl__events__KeyCode_key_5 = 53, // 53
	vsdl__events__KeyCode_key_6 = 54, // 54
	vsdl__events__KeyCode_key_7 = 55, // 55
	vsdl__events__KeyCode_key_8 = 56, // 56
	vsdl__events__KeyCode_key_9 = 57, // 57
	vsdl__events__KeyCode_key_colon = 58, // 58
	vsdl__events__KeyCode_key_semicolon = 59, // 59
	vsdl__events__KeyCode_key_less = 60, // 60
	vsdl__events__KeyCode_key_equals = 61, // 61
	vsdl__events__KeyCode_key_greater = 62, // 62
	vsdl__events__KeyCode_key_question = 63, // 63
	vsdl__events__KeyCode_key_at = 64, // 64
	vsdl__events__KeyCode_key_leftbracket = 91, // 91
	vsdl__events__KeyCode_key_backslash = 92, // 92
	vsdl__events__KeyCode_key_rightbracket = 93, // 93
	vsdl__events__KeyCode_key_caret = 94, // 94
	vsdl__events__KeyCode_key_underscore = 95, // 95
	vsdl__events__KeyCode_key_backquote = 96, // 96
	vsdl__events__KeyCode_key_a = 97, // 97
	vsdl__events__KeyCode_key_b = 98, // 98
	vsdl__events__KeyCode_key_c = 99, // 99
	vsdl__events__KeyCode_key_d = 100, // 100
	vsdl__events__KeyCode_key_e = 101, // 101
	vsdl__events__KeyCode_key_f = 102, // 102
	vsdl__events__KeyCode_key_g = 103, // 103
	vsdl__events__KeyCode_key_h = 104, // 104
	vsdl__events__KeyCode_key_i = 105, // 105
	vsdl__events__KeyCode_key_j = 106, // 106
	vsdl__events__KeyCode_key_k = 107, // 107
	vsdl__events__KeyCode_key_l = 108, // 108
	vsdl__events__KeyCode_key_m = 109, // 109
	vsdl__events__KeyCode_key_n = 110, // 110
	vsdl__events__KeyCode_key_o = 111, // 111
	vsdl__events__KeyCode_key_p = 112, // 112
	vsdl__events__KeyCode_key_q = 113, // 113
	vsdl__events__KeyCode_key_r = 114, // 114
	vsdl__events__KeyCode_key_s = 115, // 115
	vsdl__events__KeyCode_key_t = 116, // 116
	vsdl__events__KeyCode_key_u = 117, // 117
	vsdl__events__KeyCode_key_v = 118, // 118
	vsdl__events__KeyCode_key_w = 119, // 119
	vsdl__events__KeyCode_key_x = 120, // 120
	vsdl__events__KeyCode_key_y = 121, // 121
	vsdl__events__KeyCode_key_z = 122, // 122
	vsdl__events__KeyCode_key_printscreen = 1073741894, // 1073741894
	vsdl__events__KeyCode_key_scrolllock = 1073741895, // 1073741895
	vsdl__events__KeyCode_key_pause = 1073741896, // 1073741896
	vsdl__events__KeyCode_key_insert = 1073741897, // 1073741897
	vsdl__events__KeyCode_key_home = 1073741898, // 1073741898
	vsdl__events__KeyCode_key_pageup = 1073741899, // 1073741899
	vsdl__events__KeyCode_key_delete = 127, // 127
	vsdl__events__KeyCode_key_end = 1073741901, // 1073741901
	vsdl__events__KeyCode_key_pagedown = 1073741902, // 1073741902
	vsdl__events__KeyCode_key_right = 1073741903, // 1073741903
	vsdl__events__KeyCode_key_left = 1073741904, // 1073741904
	vsdl__events__KeyCode_key_down = 1073741905, // 1073741905
	vsdl__events__KeyCode_key_up = 1073741906, // 1073741906
} vsdl__events__KeyCode;

typedef enum {
	vsdl__events__ScanCode_code_unknown = 0, // 0
	vsdl__events__ScanCode_code_a = 4, // 4
	vsdl__events__ScanCode_code_b = 5, // 5
	vsdl__events__ScanCode_code_c = 6, // 6
	vsdl__events__ScanCode_code_d = 7, // 7
	vsdl__events__ScanCode_code_e = 8, // 8
	vsdl__events__ScanCode_code_f = 9, // 9
	vsdl__events__ScanCode_code_g = 10, // 10
	vsdl__events__ScanCode_code_h = 11, // 11
	vsdl__events__ScanCode_code_i = 12, // 12
	vsdl__events__ScanCode_code_j = 13, // 13
	vsdl__events__ScanCode_code_k = 14, // 14
	vsdl__events__ScanCode_code_l = 15, // 15
	vsdl__events__ScanCode_code_m = 16, // 16
	vsdl__events__ScanCode_code_n = 17, // 17
	vsdl__events__ScanCode_code_o = 18, // 18
	vsdl__events__ScanCode_code_p = 19, // 19
	vsdl__events__ScanCode_code_q = 20, // 20
	vsdl__events__ScanCode_code_r = 21, // 21
	vsdl__events__ScanCode_code_s = 22, // 22
	vsdl__events__ScanCode_code_t = 23, // 23
	vsdl__events__ScanCode_code_u = 24, // 24
	vsdl__events__ScanCode_code_v = 25, // 25
	vsdl__events__ScanCode_code_w = 26, // 26
	vsdl__events__ScanCode_code_x = 27, // 27
	vsdl__events__ScanCode_code_y = 28, // 28
	vsdl__events__ScanCode_code_z = 29, // 29
	vsdl__events__ScanCode_code_1 = 30, // 30
	vsdl__events__ScanCode_code_2 = 31, // 31
	vsdl__events__ScanCode_code_3 = 32, // 32
	vsdl__events__ScanCode_code_4 = 33, // 33
	vsdl__events__ScanCode_code_5 = 34, // 34
	vsdl__events__ScanCode_code_6 = 35, // 35
	vsdl__events__ScanCode_code_7 = 36, // 36
	vsdl__events__ScanCode_code_8 = 37, // 37
	vsdl__events__ScanCode_code_9 = 38, // 38
	vsdl__events__ScanCode_code_0 = 39, // 39
	vsdl__events__ScanCode_code_return = 40, // 40
	vsdl__events__ScanCode_code_escape = 41, // 41
	vsdl__events__ScanCode_code_backspace = 42, // 42
	vsdl__events__ScanCode_code_tab = 43, // 43
	vsdl__events__ScanCode_code_space = 44, // 44
	vsdl__events__ScanCode_code_minus = 45, // 45
	vsdl__events__ScanCode_code_equals = 46, // 46
	vsdl__events__ScanCode_code_leftbracket = 47, // 47
	vsdl__events__ScanCode_code_rightbracket = 48, // 48
	vsdl__events__ScanCode_code_backslash = 49, // 49
	vsdl__events__ScanCode_code_nonushash = 50, // 50
	vsdl__events__ScanCode_code_semicolon = 51, // 51
	vsdl__events__ScanCode_code_apostrophe = 52, // 52
	vsdl__events__ScanCode_code_grave = 53, // 53
	vsdl__events__ScanCode_code_comma = 54, // 54
	vsdl__events__ScanCode_code_period = 55, // 55
	vsdl__events__ScanCode_code_slash = 56, // 56
	vsdl__events__ScanCode_code_capslock = 57, // 57
	vsdl__events__ScanCode_code_f1 = 58, // 58
	vsdl__events__ScanCode_code_f2 = 59, // 59
	vsdl__events__ScanCode_code_f3 = 60, // 60
	vsdl__events__ScanCode_code_f4 = 61, // 61
	vsdl__events__ScanCode_code_f5 = 62, // 62
	vsdl__events__ScanCode_code_f6 = 63, // 63
	vsdl__events__ScanCode_code_f7 = 64, // 64
	vsdl__events__ScanCode_code_f8 = 65, // 65
	vsdl__events__ScanCode_code_f9 = 66, // 66
	vsdl__events__ScanCode_code_f10 = 67, // 67
	vsdl__events__ScanCode_code_f11 = 68, // 68
	vsdl__events__ScanCode_code_f12 = 69, // 69
	vsdl__events__ScanCode_code_printscreen = 70, // 70
	vsdl__events__ScanCode_code_scrolllock = 71, // 71
	vsdl__events__ScanCode_code_pause = 72, // 72
	vsdl__events__ScanCode_code_insert = 73, // 73
	vsdl__events__ScanCode_code_home = 74, // 74
	vsdl__events__ScanCode_code_pageup = 75, // 75
	vsdl__events__ScanCode_code_delete = 76, // 76
	vsdl__events__ScanCode_code_end = 77, // 77
	vsdl__events__ScanCode_code_pagedown = 78, // 78
	vsdl__events__ScanCode_code_right = 79, // 79
	vsdl__events__ScanCode_code_left = 80, // 80
	vsdl__events__ScanCode_code_down = 81, // 81
	vsdl__events__ScanCode_code_up = 82, // 82
	vsdl__events__ScanCode_code_numlockclear = 83, // 83
	vsdl__events__ScanCode_code_kp_divide = 84, // 84
	vsdl__events__ScanCode_code_kp_multiply = 85, // 85
	vsdl__events__ScanCode_code_kp_minus = 86, // 86
	vsdl__events__ScanCode_code_kp_plus = 87, // 87
	vsdl__events__ScanCode_code_kp_enter = 88, // 88
	vsdl__events__ScanCode_code_kp_1 = 89, // 89
	vsdl__events__ScanCode_code_kp_2 = 90, // 90
	vsdl__events__ScanCode_code_kp_3 = 91, // 91
	vsdl__events__ScanCode_code_kp_4 = 92, // 92
	vsdl__events__ScanCode_code_kp_5 = 93, // 93
	vsdl__events__ScanCode_code_kp_6 = 94, // 94
	vsdl__events__ScanCode_code_kp_7 = 95, // 95
	vsdl__events__ScanCode_code_kp_8 = 96, // 96
	vsdl__events__ScanCode_code_kp_9 = 97, // 97
	vsdl__events__ScanCode_code_kp_0 = 98, // 98
	vsdl__events__ScanCode_code_kp_period = 99, // 99
	vsdl__events__ScanCode_code_nonusbackslash = 100, // 100
	vsdl__events__ScanCode_code_application = 101, // 101
	vsdl__events__ScanCode_code_power = 102, // 102
	vsdl__events__ScanCode_code_kp_equals = 103, // 103
	vsdl__events__ScanCode_code_f13 = 104, // 104
	vsdl__events__ScanCode_code_f14 = 105, // 105
	vsdl__events__ScanCode_code_f15 = 106, // 106
	vsdl__events__ScanCode_code_f16 = 107, // 107
	vsdl__events__ScanCode_code_f17 = 108, // 108
	vsdl__events__ScanCode_code_f18 = 109, // 109
	vsdl__events__ScanCode_code_f19 = 110, // 110
	vsdl__events__ScanCode_code_f20 = 111, // 111
	vsdl__events__ScanCode_code_f21 = 112, // 112
	vsdl__events__ScanCode_code_f22 = 113, // 113
	vsdl__events__ScanCode_code_f23 = 114, // 114
	vsdl__events__ScanCode_code_f24 = 115, // 115
	vsdl__events__ScanCode_code_execute = 116, // 116
	vsdl__events__ScanCode_code_help = 117, // 117
	vsdl__events__ScanCode_code_menu = 118, // 118
	vsdl__events__ScanCode_code_select = 119, // 119
	vsdl__events__ScanCode_code_stop = 120, // 120
	vsdl__events__ScanCode_code_again = 121, // 121
	vsdl__events__ScanCode_code_undo = 122, // 122
	vsdl__events__ScanCode_code_cut = 123, // 123
	vsdl__events__ScanCode_code_copy = 124, // 124
	vsdl__events__ScanCode_code_paste = 125, // 125
	vsdl__events__ScanCode_code_find = 126, // 126
	vsdl__events__ScanCode_code_mute = 127, // 127
	vsdl__events__ScanCode_code_volumeup = 128, // 128
	vsdl__events__ScanCode_code_volumedown = 129, // 129
	vsdl__events__ScanCode_code_kp_comma = 133, // 133
	vsdl__events__ScanCode_code_kp_equalsas400 = 134, // 134
	vsdl__events__ScanCode_code_international1 = 135, // 135
	vsdl__events__ScanCode_code_international2 = 136, // 136
	vsdl__events__ScanCode_code_international3 = 137, // 137
	vsdl__events__ScanCode_code_international4 = 138, // 138
	vsdl__events__ScanCode_code_international5 = 139, // 139
	vsdl__events__ScanCode_code_international6 = 140, // 140
	vsdl__events__ScanCode_code_international7 = 141, // 141
	vsdl__events__ScanCode_code_international8 = 142, // 142
	vsdl__events__ScanCode_code_international9 = 143, // 143
	vsdl__events__ScanCode_code_lang1 = 144, // 144
	vsdl__events__ScanCode_code_lang2 = 145, // 145
	vsdl__events__ScanCode_code_lang3 = 146, // 146
	vsdl__events__ScanCode_code_lang4 = 147, // 147
	vsdl__events__ScanCode_code_lang5 = 148, // 148
	vsdl__events__ScanCode_code_lang6 = 149, // 149
	vsdl__events__ScanCode_code_lang7 = 150, // 150
	vsdl__events__ScanCode_code_lang8 = 151, // 151
	vsdl__events__ScanCode_code_lang9 = 152, // 152
	vsdl__events__ScanCode_code_alterase = 153, // 153
	vsdl__events__ScanCode_code_sysreq = 154, // 154
	vsdl__events__ScanCode_code_cancel = 155, // 155
	vsdl__events__ScanCode_code_clear = 156, // 156
	vsdl__events__ScanCode_code_prior = 157, // 157
	vsdl__events__ScanCode_code_return2 = 158, // 158
	vsdl__events__ScanCode_code_separator = 159, // 159
	vsdl__events__ScanCode_code_out = 160, // 160
	vsdl__events__ScanCode_code_oper = 161, // 161
	vsdl__events__ScanCode_code_clearagain = 162, // 162
	vsdl__events__ScanCode_code_crsel = 163, // 163
	vsdl__events__ScanCode_code_exsel = 164, // 164
	vsdl__events__ScanCode_code_kp_00 = 176, // 176
	vsdl__events__ScanCode_code_kp_000 = 177, // 177
	vsdl__events__ScanCode_code_thousandsseparator = 178, // 178
	vsdl__events__ScanCode_code_decimalseparator = 179, // 179
	vsdl__events__ScanCode_code_currencyunit = 180, // 180
	vsdl__events__ScanCode_code_currencysubunit = 181, // 181
	vsdl__events__ScanCode_code_kp_leftparen = 182, // 182
	vsdl__events__ScanCode_code_kp_rightparen = 183, // 183
	vsdl__events__ScanCode_code_kp_leftbrace = 184, // 184
	vsdl__events__ScanCode_code_kp_rightbrace = 185, // 185
	vsdl__events__ScanCode_code_kp_tab = 186, // 186
	vsdl__events__ScanCode_code_kp_backspace = 187, // 187
	vsdl__events__ScanCode_code_kp_a = 188, // 188
	vsdl__events__ScanCode_code_kp_b = 189, // 189
	vsdl__events__ScanCode_code_kp_c = 190, // 190
	vsdl__events__ScanCode_code_kp_d = 191, // 191
	vsdl__events__ScanCode_code_kp_e = 192, // 192
	vsdl__events__ScanCode_code_kp_f = 193, // 193
	vsdl__events__ScanCode_code_kp_xor = 194, // 194
	vsdl__events__ScanCode_code_kp_power = 195, // 195
	vsdl__events__ScanCode_code_kp_percent = 196, // 196
	vsdl__events__ScanCode_code_kp_less = 197, // 197
	vsdl__events__ScanCode_code_kp_greater = 198, // 198
	vsdl__events__ScanCode_code_kp_ampersand = 199, // 199
	vsdl__events__ScanCode_code_kp_dblampersand = 200, // 200
	vsdl__events__ScanCode_code_kp_verticalbar = 201, // 201
	vsdl__events__ScanCode_code_kp_dblverticalbar = 202, // 202
	vsdl__events__ScanCode_code_kp_colon = 203, // 203
	vsdl__events__ScanCode_code_kp_hash = 204, // 204
	vsdl__events__ScanCode_code_kp_space = 205, // 205
	vsdl__events__ScanCode_code_kp_at = 206, // 206
	vsdl__events__ScanCode_code_kp_exclam = 207, // 207
	vsdl__events__ScanCode_code_kp_memstore = 208, // 208
	vsdl__events__ScanCode_code_kp_memrecall = 209, // 209
	vsdl__events__ScanCode_code_kp_memclear = 210, // 210
	vsdl__events__ScanCode_code_kp_memadd = 211, // 211
	vsdl__events__ScanCode_code_kp_memsubtract = 212, // 212
	vsdl__events__ScanCode_code_kp_memmultiply = 213, // 213
	vsdl__events__ScanCode_code_kp_memdivide = 214, // 214
	vsdl__events__ScanCode_code_kp_plusminus = 215, // 215
	vsdl__events__ScanCode_code_kp_clear = 216, // 216
	vsdl__events__ScanCode_code_kp_clearentry = 217, // 217
	vsdl__events__ScanCode_code_kp_binary = 218, // 218
	vsdl__events__ScanCode_code_kp_octal = 219, // 219
	vsdl__events__ScanCode_code_kp_decimal = 220, // 220
	vsdl__events__ScanCode_code_kp_hexadecimal = 221, // 221
	vsdl__events__ScanCode_code_lctrl = 224, // 224
	vsdl__events__ScanCode_code_lshift = 225, // 225
	vsdl__events__ScanCode_code_lalt = 226, // 226
	vsdl__events__ScanCode_code_lgui = 227, // 227
	vsdl__events__ScanCode_code_rctrl = 228, // 228
	vsdl__events__ScanCode_code_rshift = 229, // 229
	vsdl__events__ScanCode_code_ralt = 230, // 230
	vsdl__events__ScanCode_code_rgui = 231, // 231
	vsdl__events__ScanCode_code_mode = 257, // 257
	vsdl__events__ScanCode_code_audionext = 258, // 258
	vsdl__events__ScanCode_code_audioprev = 259, // 259
	vsdl__events__ScanCode_code_audiostop = 260, // 260
	vsdl__events__ScanCode_code_audioplay = 261, // 261
	vsdl__events__ScanCode_code_audiomute = 262, // 262
	vsdl__events__ScanCode_code_mediaselect = 263, // 263
	vsdl__events__ScanCode_code_www = 264, // 264
	vsdl__events__ScanCode_code_mail = 265, // 265
	vsdl__events__ScanCode_code_calculator = 266, // 266
	vsdl__events__ScanCode_code_computer = 267, // 267
	vsdl__events__ScanCode_code_ac_search = 268, // 268
	vsdl__events__ScanCode_code_ac_home = 269, // 269
	vsdl__events__ScanCode_code_ac_back = 270, // 270
	vsdl__events__ScanCode_code_ac_forward = 271, // 271
	vsdl__events__ScanCode_code_ac_stop = 272, // 272
	vsdl__events__ScanCode_code_ac_refresh = 273, // 273
	vsdl__events__ScanCode_code_ac_bookmarks = 274, // 274
	vsdl__events__ScanCode_code_brightnessdown = 275, // 275
	vsdl__events__ScanCode_code_brightnessup = 276, // 276
	vsdl__events__ScanCode_code_displayswitch = 277, // 277
	vsdl__events__ScanCode_code_kbdillumtoggle = 278, // 278
	vsdl__events__ScanCode_code_kbdillumdown = 279, // 279
	vsdl__events__ScanCode_code_kbdillumup = 280, // 280
	vsdl__events__ScanCode_code_eject = 281, // 281
	vsdl__events__ScanCode_code_sleep = 282, // 282
	vsdl__events__ScanCode_code_app1 = 283, // 283
	vsdl__events__ScanCode_code_app2 = 284, // 284
	vsdl__events__ScanCode_code_audiorewind = 285, // 285
	vsdl__events__ScanCode_code_audiofastforward = 286, // 286
	vsdl__events__ScanCode_code_num_scancodes = 512, // 512
} vsdl__events__ScanCode;


// V type definitions:
struct string {
	byteptr str;
	int len;
	int is_lit;
};

struct array {
	int element_size;
	voidptr data;
	int len;
	int cap;
};

struct DenseArray {
	int value_bytes;
	u32 cap;
	u32 len;
	u32 deletes;
	string* keys;
	byteptr values;
};

struct map {
	int value_bytes;
	u32 cap;
	byte cached_hashbits;
	byte shift;
	DenseArray key_values;
	u32* metas;
	u32 extra_metas;
	int len;
};

struct Option {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	array_fixed_byte_400 data;
};

typedef map map_string_string;
typedef map map_string_int;
typedef map_string_string map_string;
typedef map_string_int map_int;
typedef array array_string;
typedef array array_byte;
typedef array array_int;
typedef array array_rune;
typedef array array_char;
typedef int (*anon_fn_7_7_7)(int,int);
typedef array array_voidptr;
typedef void (*FnExitCb)();
typedef array array_MethodArgs;
typedef int (*VectoredExceptionHandler)(ExceptionPointers*);
typedef array array_u16;
typedef array array_u64;
typedef array array_RepIndex;
typedef byte (*anon_fn_9_9)(byte);
typedef bool (*anon_fn_9_16)(byte);
typedef _Interface hash__Hasher;
typedef _Interface hash__Hash32er;
typedef _Interface hash__Hash64er;
typedef i64 (*vsdl__OpsSizeCallback)(voidptr);
typedef i64 (*vsdl__OpsSeekCallback)(voidptr,i64,int);
typedef u32 (*vsdl__OpsReadCallback)(voidptr,byteptr,u32,u32);
typedef u32 (*vsdl__OpsWriteCallback)(voidptr,voidptr,u32,u32);
typedef int (*vsdl__OpsCloseCallback)(voidptr);
typedef chan chan_vsdl__events__Event;
typedef array array_chan_vsdl__events__Event;
typedef map map_string_array_chan_vsdl__events__Event;
typedef array array_vsdl__gfx__MessageBoxButton;
typedef struct SDL_Color vsdl__gfx__Color;
typedef array array_vsdl__gfx__Color;
typedef void (*vsdl__gfx__IPhoneAnimationCallback)(voidptr);
typedef void (*vsdl__gfx__WindowsMessageCallback)(voidptr,voidptr,u32,u64,i64);
typedef array array_vsdl__gfx__Point;
typedef array array_vsdl__gfx__Rect;
typedef array array_vsdl__gfx__MessageBoxColor;
typedef voidptr vsdl__gfx__SDL_vulkanInstance;
typedef voidptr vsdl__gfx__SDL_vulkanSurface;
typedef array array_charptr;
typedef void (*vsdl__mixer__EffectCallback)(int,voidptr,int,voidptr);
typedef void (*vsdl__mixer__EffectDoneCallback)(int,voidptr);
typedef array array_sync__Channel_ptr;
typedef array array_sync__Direction;
typedef i64 time__Duration;
typedef array array_sync__Subscription;
typedef voidptr (*sync__ThreadCB)(sync__PoolProcessor*,int,int);
typedef array array_sync__SResult;
typedef array array_sync__IResult;
typedef voidptr sync__MHANDLE;
typedef voidptr sync__SHANDLE;
typedef array array_vsdl__audio__AudioDevice;
typedef void (*vsdl__audio__AudioCallback)(voidptr,byte*,int);
typedef map map_string_vsdl__audio__AudioData_ptr;
typedef array array_u32;
typedef array array_ustring;
typedef array array_T;
typedef void (*anon_fn_18_1)(string);
typedef voidptr os__HANDLE;
typedef u32 (*os__VectoredExceptionHandler)(ExceptionPointers*);
typedef array array_strconv__Uint128;
typedef array array_f64;
// builtin types:
//------------------ #endbuiltin
struct ContextRecord {
EMPTY_STRUCT_DECLARATION;
};

struct ExceptionPointers {
	ExceptionRecord* exception_record;
	ContextRecord* context_record;
};

typedef string array_fixed_string_11 [11];
struct sync__SResult {
	string s;
};

struct os__Uname {
	string sysname;
	string nodename;
	string release;
	string version;
	string machine;
};

struct os__ContextRecord {
EMPTY_STRUCT_DECLARATION;
};

struct os__ExceptionPointers {
	ExceptionRecord* exception_record;
	ContextRecord* context_record;
};

struct ustring {
	string s;
	array_int runes;
	int len;
};

struct VAssertMetaInfo {
	string fpath;
	int line_nr;
	string fn_name;
	string src;
	string op;
	string llabel;
	string rlabel;
	string lvalue;
	string rvalue;
};

struct MethodArgs {
	int typ;
};

struct FunctionData {
	string name;
	array_string attrs;
	array_MethodArgs args;
	int return_type;
	int typ;
};

struct FieldData {
	string name;
	array_string attrs;
	bool is_pub;
	bool is_mut;
	int typ;
};

typedef u64 array_fixed_u64_2 [2];
typedef char array_fixed_char_254 [254];
struct Line64 {
	u32 f_size_of_struct;
	voidptr f_key;
	u32 f_line_number;
	byteptr f_file_name;
	u64 f_address;
};

struct ExceptionRecord {
	u32 code;
	u32 flags;
	ExceptionRecord* record;
	voidptr address;
	u32 param_count;
};

struct OptionBase {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
};

typedef byte array_fixed_byte_400 [400];
struct SortedMap {
	int value_bytes;
	mapnode* root;
	int len;
};

typedef voidptr array_fixed_voidptr_11 [11];
struct RepIndex {
	int idx;
	int val_idx;
};

struct strings__Builder {
	array_byte buf;
	int str_calls;
	int len;
	int initial_size;
};

union strconv__Float64u {
	f64 f;
	u64 u;
};

struct strconv__PrepNumber {
	bool negative;
	int exponent;
	u64 mantissa;
};

struct strconv__Dec32 {
	u32 m;
	int e;
};

union strconv__Uf32 {
	f32 f;
	u32 u;
};

struct strconv__Uint128 {
	u64 lo;
	u64 hi;
};

struct strconv__Dec64 {
	u64 m;
	int e;
};

union strconv__Uf64 {
	f64 f;
	u64 u;
};

struct strconv__BF_param {
	byte pad_ch;
	int len0;
	int len1;
	bool positive;
	bool sign_flag;
	strconv__Align_text allign;
	bool rm_tail_zero;
};

struct vsdl__RWops {
	vsdl__OpsSizeCallback size_cb;
	vsdl__OpsSeekCallback seek_cb;
	vsdl__OpsReadCallback read_cb;
	vsdl__OpsWriteCallback write_cb;
	vsdl__OpsCloseCallback close_cb;
	u32 type;
};

struct vsdl__events__EventSystem {
	map_string_array_chan_vsdl__events__Event channels;
	u32 delay;
	bool running;
	bool test;
};

struct vsdl__events__Keysym {
	vsdl__events__ScanCode code;
	vsdl__events__KeyCode key;
	u16 mod;
	u32 unused;
};

struct vsdl__events__CommonEvent {
	vsdl__events__EventType type;
	u32 timestamp;
};

struct vsdl__events__DisplayEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	u32 display;
	byte event;
	byte padding1;
	byte padding2;
	byte padding3;
	int data1;
};

struct vsdl__events__WindowEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	u32 window_id;
	byte event;
	byte padding1;
	byte padding2;
	byte padding3;
	int data1;
	int data2;
};

struct vsdl__events__MouseMotionEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	u32 window_id;
	u32 which;
	u32 state;
	int x;
	int y;
	int xrel;
	int yrel;
};

struct vsdl__events__MouseButtonEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	u32 window_id;
	u32 which;
	byte button;
	byte state;
	byte clicks;
	byte padding1;
	int x;
	int y;
};

struct vsdl__events__MouseWheelEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	u32 window_id;
	u32 which;
	int x;
	int y;
	u32 direction;
};

struct vsdl__events__JoyAxisEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	int which;
	byte axis;
	byte padding1;
	byte padding2;
	byte padding3;
	i16 value;
	u16 padding4;
};

struct vsdl__events__JoyBallEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	int which;
	byte ball;
	byte padding1;
	byte padding2;
	byte padding3;
	i16 xrel;
	i16 yrel;
};

struct vsdl__events__JoyHatEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	int which;
	byte hat;
	byte value;
	byte padding1;
	byte padding2;
};

struct vsdl__events__JoyButtonEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	int which;
	byte button;
	byte state;
	byte padding1;
	byte padding2;
};

struct vsdl__events__JoyDeviceEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	int which;
};

struct vsdl__events__ControllerAxisEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	int which;
	byte axis;
	byte padding1;
	byte padding2;
	byte padding3;
	i16 value;
	u16 padding4;
};

struct vsdl__events__ControllerButtonEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	int which;
	byte button;
	byte state;
	byte padding1;
	byte padding2;
};

struct vsdl__events__ControllerDeviceEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	int which;
};

struct vsdl__events__AudioDeviceEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	u32 which;
	byte iscapture;
	byte padding1;
	byte padding2;
	byte padding3;
};

struct vsdl__events__QuitEvent {
	vsdl__events__EventType type;
	u32 timestamp;
};

struct vsdl__events__UserEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	u32 window_id;
	int code;
	voidptr data1;
	voidptr data2;
};

struct vsdl__events__SysWMEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	voidptr msg;
};

struct vsdl__events__TouchFingerEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	i64 touch_id;
	i64 finger_id;
	f32 x;
	f32 y;
	f32 dx;
	f32 dy;
	f32 pressure;
	u32 window_id;
};

struct vsdl__events__MultiGestureEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	i64 touch_id;
	f32 d_theta;
	f32 d_dist;
	f32 x;
	f32 y;
	u16 num_fingers;
	u16 padding;
};

struct vsdl__events__DollarGestureEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	i64 touch_id;
	i64 gesture_id;
	u32 num_fingers;
	f32 v_error;
	f32 x;
	f32 y;
};

struct vsdl__events__DropEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	charptr file;
	u32 window_id;
};

typedef byte array_fixed_byte_56 [56];
typedef i8 array_fixed_i8_32 [32];
typedef f32 array_fixed_f32_6 [6];
struct vsdl__events__OSEvent {
	vsdl__events__EventType type;
	u32 timestamp;
};

struct vsdl__gfx__Cursor {
	voidptr ptr;
};

struct vsdl__gfx__Display {
	u32 format;
	int w;
	int h;
	int refresh_rate;
	voidptr driverdata;
};

struct vsdl__gfx__Window {
	voidptr ptr;
};

struct vsdl__gfx__GLContext {
	voidptr ptr;
};

struct vsdl__gfx__Texture {
	int h;
	voidptr ptr;
	int w;
};

struct vsdl__gfx__MessageBoxButton {
	vsdl__gfx__MessageBoxButtonFlags flag;
	int id;
	voidptr text;
};

struct vsdl__gfx__MessageBoxColorScheme {
	array_vsdl__gfx__MessageBoxColor colors;
};

struct vsdl__gfx__MessageBox {
	vsdl__gfx__MessageBoxFlags flags;
	voidptr window;
	charptr title;
	charptr message;
	int numbuttons;
	voidptr buttons;
	voidptr color_scheme;
};

struct vsdl__gfx__Palette {
	int n_colors;
	vsdl__gfx__Color colors;
	u32 version;
	int refcount;
};

struct vsdl__gfx__Rect {
	int x;
	int y;
	int w;
	int h;
};

struct vsdl__gfx__Point {
	int x;
	int y;
};

struct vsdl__gfx__Renderer {
	voidptr ptr;
};

struct vsdl__gfx__MessageBoxColor {
	byte r;
	byte g;
	byte b;
};

typedef byte array_fixed_byte_2 [2];
struct vsdl__mixer__Chunk {
	int allocated;
	byteptr abuf;
	u32 alen;
	byte volume;
};

struct vsdl__mixer__Music {
	voidptr ptr;
};

struct sync__Semaphore {
	sync__SHANDLE sem;
};

struct time__StopWatch {
	u64 elapsed;
	u64 start;
	u64 end;
};

struct sync__Mutex {
	sync__MHANDLE mx;
	sync__MutexState state;
	i64 cycle_wait;
	i64 cycle_woken;
	u32 reader_sem;
	u32 writer_sem;
};

struct sync__WaitGroup {
	int task_count;
	sync__Mutex* task_count_mutex;
	sync__Waiter* wait_blocker;
};

struct sync__PoolProcessor {
	voidptr thread_cb;
	int njobs;
	array_voidptr items;
	array_voidptr results;
	int ntask;
	sync__Mutex* ntask_mtx;
	sync__WaitGroup* waitgroup;
	voidptr shared_context;
	array_voidptr thread_contexts;
};

struct sync__PoolProcessorConfig {
	int maxjobs;
	sync__ThreadCB callback;
};

struct sync__IResult {
	int i;
};

struct sync__RwMutex {
	SRWLOCK mx;
};

struct sync__Waiter {
	sync__MHANDLE event;
};

struct vsdl__audio__AudioSpec {
	int freq;
	vsdl__audio__AudioFormat format;
	byte channels;
	byte silence;
	u16 samples;
	u32 size;
	voidptr callback;
	voidptr userdata;
};

struct time__Time {
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int microsecond;
	u64 v_unix;
};

struct time__StopWatchOptions {
	bool auto_start;
};

struct time__SystemTime {
	u16 year;
	u16 month;
	u16 day_of_week;
	u16 day;
	u16 hour;
	u16 minute;
	u16 second;
	u16 millisecond;
};

struct rand__PRNGConfigStruct {
	array_u32 seed;
};

struct rand__wyrand__WyRandRNG {
	u64 state;
	bool has_extra;
	u32 extra;
};

struct os__File {
	voidptr cfile;
	int fd;
	bool is_opened;
};

struct os__FileInfo {
	string name;
	int size;
};

struct os__FilePermission {
	bool read;
	bool write;
	bool execute;
};

struct os__Result {
	int exit_code;
	string output;
};

struct os__Filetime {
	u32 dw_low_date_time;
	u32 dw_high_date_time;
};

typedef u16 array_fixed_u16_260 [260];
typedef u16 array_fixed_u16_14 [14];
struct os__ProcessInformation {
	voidptr h_process;
	voidptr h_thread;
	u32 dw_process_id;
	u32 dw_thread_id;
};

struct os__StartupInfo {
	u32 cb;
	u16* lp_reserved;
	u16* lp_desktop;
	u16* lp_title;
	u32 dw_x;
	u32 dw_y;
	u32 dw_x_size;
	u32 dw_y_size;
	u32 dw_x_count_chars;
	u32 dw_y_count_chars;
	u32 dw_fill_attributes;
	u32 dw_flags;
	u16 w_show_window;
	u16 cb_reserved2;
	byteptr lp_reserved2;
	voidptr h_std_input;
	voidptr h_std_output;
	voidptr h_std_error;
};

struct os__SecurityAttributes {
	u32 n_length;
	voidptr lp_security_descriptor;
	bool b_inherit_handle;
};

struct os__ExceptionRecord {
	u32 code;
	u32 flags;
	ExceptionRecord* record;
	voidptr address;
	u32 param_count;
};

typedef byte array_fixed_byte_26 [26];
typedef byte array_fixed_byte_256 [256];
typedef byte array_fixed_byte_4096 [4096];
typedef u16 array_fixed_u16_32768 [32768];
struct SymbolInfo {
	u32 f_size_of_struct;
	u32 f_type_index;
	array_fixed_u64_2 f_reserved;
	u32 f_index;
	u32 f_size;
	u64 f_mod_base;
	u32 f_flags;
	u64 f_value;
	u64 f_address;
	u32 f_register;
	u32 f_scope;
	u32 f_tag;
	u32 f_name_len;
	u32 f_max_name_len;
	byte f_name;
};

struct mapnode {
	voidptr* children;
	int len;
	array_fixed_string_11 keys;
	array_fixed_voidptr_11 values;
};

struct vsdl__events__KeyboardEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	u32 window_id;
	byte state;
	byte repeat;
	byte padding2;
	byte padding3;
	vsdl__events__Keysym input;
};

struct vsdl__events__TextEditingEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	u32 window_id;
	array_fixed_i8_32 text;
	int start;
	int length;
};

struct vsdl__events__TextInputEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	u32 window_id;
	array_fixed_i8_32 text;
};

struct vsdl__events__SensorEvent {
	vsdl__events__EventType type;
	u32 timestamp;
	int which;
	array_fixed_f32_6 data;
};

struct vsdl__gfx__Surface {
	u32 flags;
	vsdl__gfx__PixelFormat* format;
	int w;
	int h;
	int pitch;
	voidptr pixels;
	voidptr userdata;
	int locked;
	voidptr lock_data;
	vsdl__gfx__Rect clip_rect;
	voidptr blit_map;
	int refcount;
};

struct vsdl__gfx__PixelFormat {
	u32 format;
	vsdl__gfx__Palette* palette;
	byte bits_per_pixel;
	byte bytes_per_pixe;
	array_fixed_byte_2 padding;
	u32 r_mask;
	u32 g_mask;
	u32 b_mask;
	u32 a_mask;
	byte r_loss;
	byte g_loss;
	byte b_loss;
	byte a_loss;
	byte r_shift;
	byte g_shift;
	byte b_shift;
	byte a_shift;
	int refcount;
	vsdl__gfx__PixelFormat* next;
};

struct vsdl__audio__AudioDevice {
	voidptr ptr;
	vsdl__audio__AudioSpec spec;
	map_string_vsdl__audio__AudioData_ptr queue;
	int index;
	string name;
};

struct sync__Subscription {
	sync__Semaphore sem;
	sync__Subscription** prev;
	sync__Subscription* nxt;
};

struct sync__Channel {
	sync__Semaphore writesem;
	sync__Semaphore readsem;
	sync__Semaphore writesem_im;
	sync__Semaphore readsem_im;
	byteptr ringbuf;
	byteptr statusbuf;
	u32 objsize;
	atomic_uintptr_t write_adr;
	atomic_uintptr_t read_adr;
	atomic_uintptr_t adr_read;
	atomic_uintptr_t adr_written;
	u32 write_free;
	u32 read_avail;
	u32 buf_elem_write_idx;
	u32 buf_elem_read_idx;
	sync__Subscription* write_subscriber;
	sync__Subscription* read_subscriber;
	u16 write_sub_mtx;
	u16 read_sub_mtx;
	u16 closed;
	u32 cap;
};

struct vsdl__audio__AudioData {
	bool copy;
	vsdl__audio__AudioDevice* device;
	u32 len;
	bool loop;
	string path;
	u32 pos;
	byte* ptr;
	vsdl__audio__AudioSpec spec;
	vsdl__audio__AudioStatus status;
	i8 volume;
};

struct os__FileMode {
	os__FileType typ;
	os__FilePermission owner;
	os__FilePermission group;
	os__FilePermission others;
};

struct os__Win32finddata {
	u32 dw_file_attributes;
	os__Filetime ft_creation_time;
	os__Filetime ft_last_access_time;
	os__Filetime ft_last_write_time;
	u32 n_file_size_high;
	u32 n_file_size_low;
	u32 dw_reserved0;
	u32 dw_reserved1;
	array_fixed_u16_260 c_file_name;
	array_fixed_u16_14 c_alternate_file_name;
	u32 dw_file_type;
	u32 dw_creator_type;
	u16 w_finder_flags;
};

struct SymbolInfoContainer {
	SymbolInfo syminfo;
	array_fixed_char_254 f_name_rest;
};

union vsdl__events__Event {
	vsdl__events__EventType type;
	vsdl__events__CommonEvent common;
	vsdl__events__DisplayEvent display;
	vsdl__events__WindowEvent window;
	vsdl__events__KeyboardEvent key;
	vsdl__events__TextEditingEvent edit;
	vsdl__events__TextInputEvent text;
	vsdl__events__MouseMotionEvent motion;
	vsdl__events__MouseButtonEvent button;
	vsdl__events__MouseWheelEvent wheel;
	vsdl__events__JoyAxisEvent jaxis;
	vsdl__events__JoyBallEvent jball;
	vsdl__events__JoyHatEvent jhat;
	vsdl__events__JoyButtonEvent jbutton;
	vsdl__events__JoyDeviceEvent jdevice;
	vsdl__events__ControllerAxisEvent caxis;
	vsdl__events__ControllerButtonEvent cbutton;
	vsdl__events__ControllerDeviceEvent cdevice;
	vsdl__events__AudioDeviceEvent adevice;
	vsdl__events__SensorEvent sensor;
	vsdl__events__QuitEvent quit;
	vsdl__events__UserEvent user;
	vsdl__events__SysWMEvent syswm;
	vsdl__events__TouchFingerEvent tfinger;
	vsdl__events__MultiGestureEvent mgesture;
	vsdl__events__DollarGestureEvent dgesture;
	vsdl__events__DropEvent drop;
	array_fixed_byte_56 padding_;
};

// multi return structs
typedef struct {
	u32 arg0;
	u32 arg1;
} multi_return_u32_u32;

typedef struct {
	u32 arg0;
	u32 arg1;
	u32 arg2;
} multi_return_u32_u32_u32;

typedef struct {
	int arg0;
	strconv__PrepNumber arg1;
} multi_return_int_strconv__PrepNumber;

typedef struct {
	u64 arg0;
	int arg1;
} multi_return_u64_int;

typedef struct {
	strconv__Dec32 arg0;
	bool arg1;
} multi_return_strconv__Dec32_bool;

typedef struct {
	strconv__Dec64 arg0;
	bool arg1;
} multi_return_strconv__Dec64_bool;

typedef struct {
	array_byte arg0;
	u32 arg1;
} multi_return_array_byte_u32;

typedef struct {
	int arg0;
	int arg1;
} multi_return_int_int;

typedef struct {
	f32 arg0;
	f32 arg1;
} multi_return_f32_f32;

typedef struct {
	byte arg0;
	byte arg1;
	byte arg2;
} multi_return_byte_byte_byte;

typedef struct {
	byte arg0;
	byte arg1;
	byte arg2;
	byte arg3;
} multi_return_byte_byte_byte_byte;

typedef struct {
	bool arg0;
	int arg1;
	u32 arg2;
	u32 arg3;
	u32 arg4;
	u32 arg5;
} multi_return_bool_int_u32_u32_u32_u32;

typedef struct {
	bool arg0;
	int arg1;
	int arg2;
	int arg3;
	int arg4;
} multi_return_bool_int_int_int_int;

typedef struct {
	bool arg0;
	vsdl__gfx__Rect arg1;
} multi_return_bool_vsdl__gfx__Rect;

typedef struct {
	vsdl__gfx__Window arg0;
	vsdl__gfx__Renderer arg1;
} multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer;

typedef struct {
	int arg0;
	int arg1;
	int arg2;
	int arg3;
} multi_return_int_int_int_int;

typedef struct {
	u64 arg0;
	u64 arg1;
} multi_return_u64_u64;

typedef struct {
	int arg0;
	int arg1;
	int arg2;
} multi_return_int_int_int;

typedef struct {
	int arg0;
	bool arg1;
} multi_return_int_bool;

typedef struct {
	any_int arg0;
	any_int arg1;
} multi_return_any_int_any_int;

string strings__Builder_str_no_ptr(strings__Builder it); // auto no_ptr version
string time__FormatTime_str(time__FormatTime it); // auto
string time__FormatDate_str(time__FormatDate it); // auto

typedef struct thread_arg_sync__process_in_thread {
	sync__PoolProcessor* arg1;
	int arg2;
} thread_arg_sync__process_in_thread;
void* sync__process_in_thread_thread_wrapper(thread_arg_sync__process_in_thread *arg);
// variadic structs
struct varg_voidptr {
	int len;
	voidptr args[0];
};

struct varg_vsdl__gfx__Window {
	int len;
	vsdl__gfx__Window args[1];
};

struct varg_vsdl__gfx__WindowFlags {
	int len;
	vsdl__gfx__WindowFlags args[1];
};

struct varg_vsdl__audio__AudioChangeFlags {
	int len;
	vsdl__audio__AudioChangeFlags args[0];
};

struct varg_string {
	int len;
	string args[1];
};

struct varg_int {
	int len;
	int args[1];
};

struct varg_vsdl__mixer__MixerFlags {
	int len;
	vsdl__mixer__MixerFlags args[0];
};

struct varg_vsdl__events__EventCategory {
	int len;
	vsdl__events__EventCategory args[0];
};


// V Option_xxx definitions:
struct Option_int {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(int)];
};

struct Option_vsdl__RWops_ptr {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(vsdl__RWops*)];
};

struct Option_vsdl__gfx__Cursor {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(vsdl__gfx__Cursor)];
};

struct Option_vsdl__gfx__Display {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(vsdl__gfx__Display)];
};

struct Option_vsdl__gfx__Surface_ptr {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(vsdl__gfx__Surface*)];
};

struct Option_vsdl__gfx__GLContext {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(vsdl__gfx__GLContext)];
};

struct Option_vsdl__gfx__Window {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(vsdl__gfx__Window)];
};

struct Option_void {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(int)];
};

struct Option_vsdl__gfx__Texture {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(vsdl__gfx__Texture)];
};

struct Option_vsdl__gfx__Renderer {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(vsdl__gfx__Renderer)];
};

struct Option_vsdl__gfx__SDL_vulkanSurface {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(vsdl__gfx__SDL_vulkanSurface)];
};

struct Option_multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer)];
};

struct Option_vsdl__audio__AudioData_ptr {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(vsdl__audio__AudioData*)];
};

struct Option_time__Time {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(time__Time)];
};

struct Option_string {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(string)];
};

struct Option_array_byte {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(array_byte)];
};

struct Option_FILE_ptr {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(FILE*)];
};

struct Option_array_string {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(array_string)];
};

struct Option_bool {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(bool)];
};

struct Option_array_ustring {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(array_ustring)];
};

struct Option_os__File {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(os__File)];
};

struct Option_os__Result {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(os__Result)];
};

struct Option_vsdl__mixer__Chunk_ptr {
	bool ok;
	bool is_none;
	string v_error;
	int ecode;
	byte data[sizeof(vsdl__mixer__Chunk*)];
};


// V json forward decls:

// V definitions:
void _STR_PRINT_ARG(const char*, char**, int*, int*, int, ...);
string _STR(const char*, int, ...);
string _STR_TMP(const char*, ...);
// end of definitions #endif
strings__Builder strings__new_builder(int initial_size);
void strings__Builder_write_bytes(strings__Builder* b, byteptr bytes, int howmany);
void strings__Builder_write_b(strings__Builder* b, byte data);
void strings__Builder_write(strings__Builder* b, string s);
void strings__Builder_go_back(strings__Builder* b, int n);
static string strings__bytes2string(array_byte b);
string strings__Builder_cut_last(strings__Builder* b, int n);
void strings__Builder_go_back_to(strings__Builder* b, int pos);
void strings__Builder_writeln(strings__Builder* b, string s);
string strings__Builder_last_n(strings__Builder* b, int n);
string strings__Builder_after(strings__Builder* b, int n);
string strings__Builder_str(strings__Builder* b);
void strings__Builder_free(strings__Builder* b);
int strings__levenshtein_distance(string a, string b);
f32 strings__levenshtein_distance_percentage(string a, string b);
f32 strings__dice_coefficient(string s1, string s2);
string strings__repeat(byte c, int n);
string strings__repeat_string(string s, int n);
u64 _const_hash__wyp0; // inited later
u64 _const_hash__wyp1; // inited later
u64 _const_hash__wyp2; // inited later
u64 _const_hash__wyp3; // inited later
u64 _const_hash__wyp4; // inited later
u64 hash__wyhash_c(byteptr key, u64 len, u64 seed);
u64 hash__sum64_string(string key, u64 seed);
u64 hash__sum64(array_byte key, u64 seed);
static u64 hash__wyhash64(byteptr key, u64 len, u64 seed_);
static u64 hash__wyrotr(u64 v, u32 k);
u64 hash__wymum(u64 a, u64 b);
static u64 hash__wyr3(byteptr p, u64 k);
static u64 hash__wyr4(byteptr p);
static u64 hash__wyr8(byteptr p);
u32 _const_math__bits__de_bruijn32; // inited later
array_byte _const_math__bits__de_bruijn32tab; // inited later
u64 _const_math__bits__de_bruijn64; // inited later
array_byte _const_math__bits__de_bruijn64tab; // inited later
u64 _const_math__bits__m0; // inited later
u64 _const_math__bits__m1; // inited later
u64 _const_math__bits__m2; // inited later
u64 _const_math__bits__m3; // inited later
u64 _const_math__bits__m4; // inited later
u32 _const_math__bits__max_u32; // inited later
u64 _const_math__bits__max_u64; // inited later
int math__bits__leading_zeros_8(byte x);
int math__bits__leading_zeros_16(u16 x);
int math__bits__leading_zeros_32(u32 x);
int math__bits__leading_zeros_64(u64 x);
int math__bits__trailing_zeros_8(byte x);
int math__bits__trailing_zeros_16(u16 x);
int math__bits__trailing_zeros_32(u32 x);
int math__bits__trailing_zeros_64(u64 x);
int math__bits__ones_count_8(byte x);
int math__bits__ones_count_16(u16 x);
int math__bits__ones_count_32(u32 x);
int math__bits__ones_count_64(u64 x);
byte math__bits__rotate_left_8(byte x, int k);
u16 math__bits__rotate_left_16(u16 x, int k);
u32 math__bits__rotate_left_32(u32 x, int k);
u64 math__bits__rotate_left_64(u64 x, int k);
byte math__bits__reverse_8(byte x);
u16 math__bits__reverse_16(u16 x);
u32 math__bits__reverse_32(u32 x);
u64 math__bits__reverse_64(u64 x);
u16 math__bits__reverse_bytes_16(u16 x);
u32 math__bits__reverse_bytes_32(u32 x);
u64 math__bits__reverse_bytes_64(u64 x);
int math__bits__len_8(byte x);
int math__bits__len_16(u16 x);
int math__bits__len_32(u32 x);
int math__bits__len_64(u64 x);
multi_return_u32_u32 math__bits__add_32(u32 x, u32 y, u32 carry);
multi_return_u64_u64 math__bits__add_64(u64 x, u64 y, u64 carry);
multi_return_u32_u32 math__bits__sub_32(u32 x, u32 y, u32 borrow);
multi_return_u64_u64 math__bits__sub_64(u64 x, u64 y, u64 borrow);
u64 _const_math__bits__two32; // inited later
u64 _const_math__bits__mask32; // inited later
string _const_math__bits__overflow_error; // a string literal, inited later
string _const_math__bits__divide_error; // a string literal, inited later
multi_return_u32_u32 math__bits__mul_32(u32 x, u32 y);
multi_return_u64_u64 math__bits__mul_64(u64 x, u64 y);
multi_return_u32_u32 math__bits__div_32(u32 hi, u32 lo, u32 y);
multi_return_u64_u64 math__bits__div_64(u64 hi, u64 lo, u64 y1);
u32 math__bits__rem_32(u32 hi, u32 lo, u32 y);
u64 math__bits__rem_64(u64 hi, u64 lo, u64 y);
array_byte _const_math__bits__ntz_8_tab; // inited later
array_byte _const_math__bits__pop_8_tab; // inited later
array_byte _const_math__bits__rev_8_tab; // inited later
array_byte _const_math__bits__len_8_tab; // inited later
static multi_return_u32_u32_u32 strconv__lsr96(u32 s2, u32 s1, u32 s0);
static multi_return_u32_u32_u32 strconv__lsl96(u32 s2, u32 s1, u32 s0);
static multi_return_u32_u32_u32 strconv__add96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0);
static multi_return_u32_u32_u32 strconv__sub96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0);
#define _const_strconv__digits 18
u64 _const_strconv__double_plus_zero; // inited later
u64 _const_strconv__double_minus_zero; // inited later
u64 _const_strconv__double_plus_infinity; // inited later
u64 _const_strconv__double_minus_infinity; // inited later
#define _const_strconv__fsm_a 0
#define _const_strconv__fsm_b 1
#define _const_strconv__fsm_c 2
#define _const_strconv__fsm_d 3
#define _const_strconv__fsm_e 4
#define _const_strconv__fsm_f 5
#define _const_strconv__fsm_g 6
#define _const_strconv__fsm_h 7
#define _const_strconv__fsm_i 8
#define _const_strconv__fsm_stop 9
#define _const_strconv__parser_ok 0
#define _const_strconv__parser_pzero 1
#define _const_strconv__parser_mzero 2
#define _const_strconv__parser_pinf 3
#define _const_strconv__parser_minf 4
#define _const_strconv__c_dpoint '.'
#define _const_strconv__c_plus '+'
#define _const_strconv__c_minus '-'
#define _const_strconv__c_zero '0'
#define _const_strconv__c_nine '9'
u32 _const_strconv__c_ten; // inited later
static bool strconv__is_digit(byte x);
static bool strconv__is_space(byte x);
static bool strconv__is_exp(byte x);
static multi_return_int_strconv__PrepNumber strconv__parser(string s);
static u64 strconv__converter(strconv__PrepNumber* pn);
f64 strconv__atof64(string s);
f64 strconv__atof_quick(string s);
array_u64 _const_strconv__pos_exp; // inited later
array_u64 _const_strconv__neg_exp; // inited later
#define _const_strconv__int_size 32
u64 _const_strconv__max_u64; // inited later
byte strconv__byte_to_lower(byte c);
u64 strconv__common_parse_uint(string s, int _base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit);
multi_return_u64_int strconv__common_parse_uint2(string s, int _base, int _bit_size);
u64 strconv__parse_uint(string s, int _base, int _bit_size);
i64 strconv__common_parse_int(string _s, int base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit);
i64 strconv__parse_int(string _s, int base, int _bit_size);
int strconv__atoi(string s);
static bool strconv__underscore_ok(string s);
array_u32 _const_strconv__ten_pow_table_32; // inited later
u32 _const_strconv__mantbits32; // inited later
u32 _const_strconv__expbits32; // inited later
#define _const_strconv__bias32 127
#define _const_strconv__maxexp32 255
string strconv__Dec32_get_string_32(strconv__Dec32 d, bool neg, int i_n_digit, int i_pad_digit);
static multi_return_strconv__Dec32_bool strconv__f32_to_decimal_exact_int(u32 i_mant, u32 exp);
strconv__Dec32 strconv__f32_to_decimal(u32 mant, u32 exp);
string strconv__f32_to_str(f32 f, int n_digit);
string strconv__f32_to_str_pad(f32 f, int n_digit);
array_u64 _const_strconv__ten_pow_table_64; // inited later
u32 _const_strconv__mantbits64; // inited later
u32 _const_strconv__expbits64; // inited later
#define _const_strconv__bias64 1023
#define _const_strconv__maxexp64 2047
static string strconv__Dec64_get_string_64(strconv__Dec64 d, bool neg, int i_n_digit, int i_pad_digit);
static multi_return_strconv__Dec64_bool strconv__f64_to_decimal_exact_int(u64 i_mant, u64 exp);
static strconv__Dec64 strconv__f64_to_decimal(u64 mant, u64 exp);
string strconv__f64_to_str(f64 f, int n_digit);
string strconv__f64_to_str_pad(f64 f, int n_digit);
array_f64 _const_strconv__dec_round; // inited later
string strconv__f64_to_str_lnd(f64 f, int dec_digit);
string strconv__format_str(string s, strconv__BF_param p);
string strconv__format_dec(u64 d, strconv__BF_param p);
string strconv__format_fl(f64 f, strconv__BF_param p);
string strconv__format_es(f64 f, strconv__BF_param p);
string strconv__remove_tail_zeros(string s);
void strconv__v_printf(string str, varg_voidptr pt);
string strconv__v_sprintf(string str, varg_voidptr pt);
static void strconv__v_sprintf_panic(int idx, int len);
static f64 strconv__fabs(f64 x);
string strconv__ftoa_64(f64 f);
string strconv__ftoa_long_64(f64 f);
string strconv__ftoa_32(f32 f);
string strconv__ftoa_long_32(f32 f);
#define _const_strconv__pow5_num_bits_32 61
#define _const_strconv__pow5_inv_num_bits_32 59
#define _const_strconv__pow5_num_bits_64 121
#define _const_strconv__pow5_inv_num_bits_64 122
array_u64 _const_strconv__powers_of_10; // inited later
array_u64 _const_strconv__pow5_split_32; // inited later
array_u64 _const_strconv__pow5_inv_split_32; // inited later
array_strconv__Uint128 _const_strconv__pow5_split_64; // inited later
array_strconv__Uint128 _const_strconv__pow5_inv_split_64; // inited later
static void strconv__assert1(bool t, string msg);
static int strconv__bool_to_int(bool b);
static u32 strconv__bool_to_u32(bool b);
static u64 strconv__bool_to_u64(bool b);
static string strconv__get_string_special(bool neg, bool expZero, bool mantZero);
static int strconv__decimal_len_32(u32 u);
static u32 strconv__mul_shift_32(u32 m, u64 mul, int ishift);
static u32 strconv__mul_pow5_invdiv_pow2(u32 m, u32 q, int j);
static u32 strconv__mul_pow5_div_pow2(u32 m, u32 i, int j);
static u32 strconv__pow5_factor_32(u32 i_v);
static bool strconv__multiple_of_power_of_five_32(u32 v, u32 p);
static bool strconv__multiple_of_power_of_two_32(u32 v, u32 p);
static u32 strconv__log10_pow2(int e);
static u32 strconv__log10_pow5(int e);
static int strconv__pow5_bits(int e);
static int strconv__decimal_len_64(u64 u);
static u64 strconv__shift_right_128(strconv__Uint128 v, int shift);
static u64 strconv__mul_shift_64(u64 m, strconv__Uint128 mul, int shift);
static u32 strconv__pow5_factor_64(u64 v_i);
static bool strconv__multiple_of_power_of_five_64(u64 v, u32 p);
static bool strconv__multiple_of_power_of_two_64(u64 v, u32 p);
string strconv__f32_to_str_l(f64 f);
string strconv__f64_to_str_l(f64 f);
static array __new_array(int mylen, int cap, int elm_size);
static array __new_array_with_default(int mylen, int cap, int elm_size, voidptr val);
static array __new_array_with_array_default(int mylen, int cap, int elm_size, array val);
static array new_array_from_c_array(int len, int cap, int elm_size, voidptr c_array);
static array new_array_from_c_array_no_alloc(int len, int cap, int elm_size, voidptr c_array);
static void array_ensure_cap(array* a, int required);
array array_repeat(array a, int count);
void array_sort_with_compare(array* a, voidptr compare);
void array_insert(array* a, int i, voidptr val);
void array_insert_many(array* a, int i, voidptr val, int size);
void array_prepend(array* a, voidptr val);
void array_prepend_many(array* a, voidptr val, int size);
void array_delete(array* a, int i);
void array_clear(array* a);
void array_trim(array* a, int index);
static voidptr array_get_unsafe(array a, int i);
static voidptr array_get(array a, int i);
voidptr array_first(array a);
voidptr array_last(array a);
voidptr array_pop(array* a);
static array array_slice(array a, int start, int _end);
static array array_slice2(array a, int start, int _end, bool end_max);
static array array_clone_static(array a);
array array_clone(array* a);
static array array_slice_clone(array* a, int start, int _end);
static void array_set_unsafe(array* a, int i, voidptr val);
static void array_set(array* a, int i, voidptr val);
static void array_push(array* a, voidptr val);
void array_push_many(array* a3, voidptr val, int size);
void array_reverse_in_place(array* a);
array array_reverse(array a);
void array_free(array* a);
string array_string_str(array_string a);
string array_byte_hex(array_byte b);
int copy(array_byte dst, array_byte src);
static int compare_ints(int* a, int* b);
static int compare_ints_reverse(int* a, int* b);
static int compare_floats(f64* a, f64* b);
static int compare_floats_reverse(f64* a, f64* b);
void array_int_sort(array_int* a);
int array_string_index(array_string a, string v);
int array_int_index(array_int a, int v);
int array_byte_index(array_byte a, byte v);
int array_rune_index(array_rune a, rune v);
int array_char_index(array_char a, char v);
int array_int_reduce(array_int a, int (*iter)(int accum, int curr), int accum_start);
bool array_string_eq(array_string a1, array_string a2);
int compare_i64(i64* a, i64* b);
int compare_f64(f64* a, f64* b);
int compare_f32(f32* a, f32* b);
array_voidptr array_pointers(array a);
byteptr g_m2_buf; // global
byteptr g_m2_ptr; // global
void v_exit(int code);
bool isnil(voidptr v);
void print_backtrace();
static void panic_debug(int line_no, string file, string mod, string fn_name, string s);
void v_panic(string s);
void eprintln(string s);
void eprint(string s);
void print(string s);
string _const_new_line_character; // a string literal, inited later
void println(string s);
i64 total_m = 0; // global
int nr_mallocs = 0; // global
byteptr v_malloc(int n);
byteptr v_realloc(byteptr b, u32 n);
byteptr v_calloc(int n);
byteptr vcalloc(int n);
void v_free(voidptr ptr);
voidptr memdup(voidptr src, int sz);
static void v_ptr_free(voidptr ptr);
int is_atty(int fd);
static voidptr __as_cast(voidptr obj, int obj_type, int expected_type);
static void __print_assert_failure(VAssertMetaInfo* i);
#define _const_symopt_undname 0x00000002
#define _const_symopt_deferred_loads 0x00000004
#define _const_symopt_no_cpp 0x00000008
#define _const_symopt_load_lines 0x00000010
#define _const_symopt_include_32bit_modules 0x00002000
#define _const_symopt_allow_zero_address 0x01000000
#define _const_symopt_debug 0x80000000
u32 g_original_codepage = 0; // global
static void restore_codepage();
static void builtin_init();
static bool print_backtrace_skipping_top_frames(int skipframes);
static bool print_backtrace_skipping_top_frames_msvc(int skipframes);
static bool print_backtrace_skipping_top_frames_mingw(int skipframes);
static bool print_backtrace_skipping_top_frames_tcc(int skipframes);
static void add_vectored_exception_handler(VectoredExceptionHandler handler);
static int __stdcall  unhandled_exception_handler(ExceptionPointers* e);
static void add_unhandled_exception_handler();
static void break_if_debugger_attached();
int proc_pidpath(int , voidptr , int );
void chan_close(chan ch);
ChanState chan_try_pop(chan ch, voidptr obj);
ChanState chan_try_push(chan ch, voidptr obj);
string f64_str(f64 x);
string any_float_str(any_float d);
string f64_strsci(f64 x, int digit_num);
string f64_strlong(f64 x);
string f32_str(f32 x);
string f32_strsci(f32 x, int digit_num);
string f32_strlong(f32 x);
f32 f32_abs(f32 a);
static f64 f64_abs(f64 a);
f32 f32_max(f32 a, f32 b);
f32 f32_min(f32 a, f32 b);
f64 f64_max(f64 a, f64 b);
static f64 f64_min(f64 a, f64 b);
bool f32_eq_epsilon(f32 a, f32 b);
bool f64_eq_epsilon(f64 a, f64 b);
string ptr_str(voidptr ptr);
string _const_digit_pairs; // a string literal, inited later
string int_str_l(int nn, int max);
string i8_str(i8 n);
string i16_str(i16 n);
string u16_str(u16 n);
string int_str(int n);
string u32_str(u32 nn);
string any_int_str(any_int n);
string i64_str(i64 nn);
string u64_str(u64 nn);
string bool_str(bool b);
static string u64_to_hex(u64 nn, byte len);
static string u64_to_hex_no_leading_zeros(u64 nn, byte len);
string byte_hex(byte nn);
string i8_hex(i8 nn);
string u16_hex(u16 nn);
string i16_hex(i16 nn);
string u32_hex(u32 nn);
string int_hex(int nn);
string int_hex2(int n);
string u64_hex(u64 nn);
string i64_hex(i64 nn);
string any_int_hex(any_int nn);
string voidptr_str(voidptr nn);
string byteptr_str(byteptr nn);
string byte_str(byte b);
string byte_str_escaped(byte b);
bool array_byte_contains(array_byte a, byte val);
bool array_u16_contains(array_u16 a, u16 val);
static bool array_int_contains(array_int ar, int val);
bool array_u64_contains(array_u64 a, u64 val);
#define _const_hashbits 24
#define _const_max_cached_hashbits 16
#define _const_init_log_capicity 5
int _const_init_capicity; // inited later
#define _const_max_load_factor 0.8
int _const_init_cap; // inited later
#define _const_extra_metas_inc 4
u32 _const_hash_mask; // inited later
u32 _const_probe_inc; // inited later
static bool fast_string_eq(string a, string b);
static DenseArray new_dense_array(int value_bytes);
static u32 DenseArray_push(DenseArray* d, string key, voidptr value);
static voidptr DenseArray_get(DenseArray d, int i);
static void DenseArray_zeros_to_end(DenseArray* d);
static map new_map_1(int value_bytes);
static map new_map_init(int n, int value_bytes, string* keys, voidptr values);
static multi_return_u32_u32 map_key_to_index(map* m, string key);
static multi_return_u32_u32 map_meta_less(map* m, u32 _index, u32 _metas);
static void map_meta_greater(map* m, u32 _index, u32 _metas, u32 kvi);
static void map_ensure_extra_metas(map* m, u32 probe_count);
static void map_set(map* m, string k, voidptr value);
static void map_expand(map* m);
static void map_rehash(map* m);
static void map_cached_rehash(map* m, u32 old_cap);
static voidptr map_get_and_set(map* m, string key, voidptr zero);
static voidptr map_get(map m, string key, voidptr zero);
static bool map_exists(map m, string key);
void map_delete(map* m, string key);
array_string map_keys(map* m);
DenseArray DenseArray_clone(DenseArray d);
map map_clone(map m);
void map_free(map* m);
string OptionBase_str(OptionBase o);
static void opt_ok2(voidptr data, OptionBase* option, int size);
string Option_str(Option o);
static Option opt_ok(voidptr data, int size);
static Option opt_none();
Option v_error(string s);
Option error_with_code(string s, int code);
string rune_str(rune c);
bool byte_is_capital(byte c);
array_byte array_byte_clone(array_byte b);
string array_byte_bytestr(array_byte b);
static string bytes2string(array_byte b);
#define _const_degree 6
int _const_mid_index; // inited later
int _const_max_len; // inited later
u32 _const_children_bytes; // inited later
static SortedMap new_sorted_map(int n, int value_bytes);
static SortedMap new_sorted_map_init(int n, int value_bytes, string* keys, voidptr values);
static mapnode* new_node();
static void SortedMap_set(SortedMap* m, string key, voidptr value);
static void mapnode_split_child(mapnode* n, int child_index, mapnode* y);
static bool SortedMap_get(SortedMap m, string key, voidptr out);
static bool SortedMap_exists(SortedMap m, string key);
static int mapnode_find_key(mapnode* n, string k);
static bool mapnode_remove_key(mapnode* n, string k);
static void mapnode_remove_from_leaf(mapnode* n, int idx);
static void mapnode_remove_from_non_leaf(mapnode* n, int idx);
static void mapnode_fill(mapnode* n, int idx);
static void mapnode_borrow_from_prev(mapnode* n, int idx);
static void mapnode_borrow_from_next(mapnode* n, int idx);
static void mapnode_merge(mapnode* n, int idx);
void SortedMap_delete(SortedMap* m, string key);
static int mapnode_subkeys(mapnode* n, array_string* keys, int at);
array_string SortedMap_keys(SortedMap* m);
static void mapnode_free(mapnode* n);
void SortedMap_free(SortedMap* m);
void SortedMap_print(SortedMap m);
int vstrlen(byteptr s);
string tos(byteptr s, int len);
string tos_clone(byteptr s);
string tos2(byteptr s);
string tos3(charptr s);
string tos_lit(charptr s);
string byteptr_vstring(byteptr bp);
string byteptr_vstring_with_len(byteptr bp, int len);
static string string_clone_static(string a);
string string_clone(string a);
string cstring_to_vstring(byteptr cstr);
string string_replace_once(string s, string rep, string with);
string string_replace(string s, string rep, string with);
static int compare_rep_index(RepIndex* a, RepIndex* b);
static void array_RepIndex_sort2(array_RepIndex* a);
string string_replace_each(string s, array_string vals);
bool string_bool(string s);
int string_int(string s);
i64 string_i64(string s);
i8 string_i8(string s);
i16 string_i16(string s);
f32 string_f32(string s);
f64 string_f64(string s);
u16 string_u16(string s);
u32 string_u32(string s);
u64 string_u64(string s);
static bool string_eq(string s, string a);
static bool string_ne(string s, string a);
static bool string_lt(string s, string a);
static bool string_le(string s, string a);
static bool string_gt(string s, string a);
static bool string_ge(string s, string a);
static string string_add(string s, string a);
array_string string_split(string s, string delim);
array_string string_split_nth(string s, string delim, int nth);
array_string string_split_into_lines(string s);
static string string_left(string s, int n);
static string string_right(string s, int n);
static string string_substr2(string s, int start, int _end, bool end_max);
string string_substr(string s, int start, int end);
int string_index_old(string s, string p);
Option_int string_index(string s, string p);
static int string_index_kmp(string s, string p);
int string_index_any(string s, string chars);
Option_int string_last_index(string s, string p);
int string_index_after(string s, string p, int start);
int string_index_byte(string s, byte c);
int string_last_index_byte(string s, byte c);
int string_count(string s, string substr);
bool string_contains(string s, string substr);
bool string_contains_any(string s, string chars);
bool string_contains_any_substr(string s, array_string substrs);
bool string_starts_with(string s, string p);
bool string_ends_with(string s, string p);
string string_to_lower(string s);
bool string_is_lower(string s);
string string_to_upper(string s);
bool string_is_upper(string s);
string string_capitalize(string s);
bool string_is_capital(string s);
string string_title(string s);
bool string_is_title(string s);
string string_find_between(string s, string start, string end);
static bool array_string_contains(array_string ar, string val);
bool byte_is_space(byte c);
string string_trim_space(string s);
string string_trim(string s, string cutset);
string string_trim_left(string s, string cutset);
string string_trim_right(string s, string cutset);
string string_trim_prefix(string s, string str);
string string_trim_suffix(string s, string str);
int compare_strings(string* a, string* b);
static int compare_strings_by_len(string* a, string* b);
static int compare_lower_strings(string* a, string* b);
void array_string_sort(array_string* s);
void array_string_sort_ignore_case(array_string* s);
void array_string_sort_by_len(array_string* s);
string string_str(string s);
string ustring_str(ustring s);
ustring string_ustring(string s);
array_int g_ustring_runes; // global
ustring string_ustring_tmp(string s);
static bool ustring_eq(ustring u, ustring a);
static bool ustring_ne(ustring u, ustring a);
static bool ustring_lt(ustring u, ustring a);
static bool ustring_le(ustring u, ustring a);
static bool ustring_gt(ustring u, ustring a);
static bool ustring_ge(ustring u, ustring a);
ustring ustring_add(ustring u, ustring a);
int ustring_index_after(ustring u, ustring p, int start);
int ustring_count(ustring u, ustring substr);
string ustring_substr(ustring u, int _start, int _end);
string ustring_left(ustring u, int pos);
string ustring_right(ustring u, int pos);
static byte string_at(string s, int idx);
string ustring_at(ustring u, int idx);
static void ustring_free(ustring* u);
bool byte_is_digit(byte c);
bool byte_is_hex_digit(byte c);
bool byte_is_oct_digit(byte c);
bool byte_is_bin_digit(byte c);
bool byte_is_letter(byte c);
void string_free(string* s);
string string_all_before(string s, string dot);
string string_all_before_last(string s, string dot);
string string_all_after(string s, string dot);
string string_all_after_last(string s, string dot);
string string_after(string s, string dot);
string string_after_char(string s, byte dot);
string array_string_join(array_string a, string del);
string array_string_join_lines(array_string s);
string string_reverse(string s);
string string_limit(string s, int max);
bool byte_is_white(byte c);
int string_hash(string s);
array_byte string_bytes(string s);
string string_repeat(string s, int count);
array_string string_fields(string s);
string string_map(string s, byte (*func)(byte ));
string string_filter(string s, bool (*func)(byte b));
string string_strip_margin(string s);
string string_strip_margin_custom(string s, byte del);
int utf8_char_len(byte b);
string utf32_to_str(u32 code);
string utf32_to_str_no_malloc(u32 code, voidptr buf);
int string_utf32_code(string _rune);
#define _const_cp_utf8 65001
u16* string_to_wide(string _str);
string string_from_wide(u16* _wstr);
string string_from_wide2(u16* _wstr, int len);
static int utf8_len(byte c);
static int utf8_str_len(string s);
static int utf8_str_visible_length(string s);
int utf8_getchar();
int vsdl__RWops_close(vsdl__RWops* ops);
Option_vsdl__RWops_ptr vsdl__rw_from_const_mem(voidptr stream, int size);
Option_vsdl__RWops_ptr vsdl__rw_from_file(string file, string mode);
Option_vsdl__RWops_ptr vsdl__rw_from_fp(voidptr fp, bool autoclose);
Option_vsdl__RWops_ptr vsdl__rw_from_mem(voidptr stream, int size);
multi_return_array_byte_u32 vsdl__RWops_read(vsdl__RWops* ops, u32 size, u32 max);
i16 vsdl__RWops_read_be_16(vsdl__RWops* ops);
int vsdl__RWops_read_be_32(vsdl__RWops* ops);
i64 vsdl__RWops_read_be_64(vsdl__RWops* ops);
i16 vsdl__RWops_read_le_16(vsdl__RWops* ops);
int vsdl__RWops_read_le_32(vsdl__RWops* ops);
i64 vsdl__RWops_read_le_64(vsdl__RWops* ops);
byte vsdl__RWops_read_u8(vsdl__RWops* ops);
i64 vsdl__RWops_seek(vsdl__RWops* ops, i64 offset, vsdl__RWWhence whence);
i64 vsdl__RWops_tell(vsdl__RWops* ops);
u32 vsdl__RWops_write(vsdl__RWops* ops, array_byte data, u32 size, u32 num);
bool vsdl__RWops_write_be_16(vsdl__RWops* ops, i16 data);
bool vsdl__RWops_write_be_32(vsdl__RWops* ops, int data);
bool vsdl__RWops_write_be_64(vsdl__RWops* ops, i64 data);
bool vsdl__RWops_write_le_16(vsdl__RWops* ops, i16 data);
bool vsdl__RWops_write_le_32(vsdl__RWops* ops, int data);
bool vsdl__RWops_write_le_64(vsdl__RWops* ops, i64 data);
bool vsdl__RWops_write_u8(vsdl__RWops* ops, byte data);
static void vsdl__init();
void vsdl__delay(u32 ms);
u32 vsdl__get_ticks();
void vsdl__quit();
static string vsdl__serror(string text);
Option_vsdl__gfx__Cursor vsdl__gfx__create_cursor(byte color, byte mask, int w, int h, int hot_x, int hot_y);
Option_vsdl__gfx__Cursor vsdl__gfx__create_system_cursor(vsdl__gfx__CursorType cursor_type);
void vsdl__gfx__Cursor_free(vsdl__gfx__Cursor* cursor);
Option_vsdl__gfx__Cursor vsdl__gfx__get_cursor();
void vsdl__gfx__set_cursor(vsdl__gfx__Cursor cursor);
vsdl__gfx__CursorMode vsdl__gfx__show_cursor(vsdl__gfx__CursorMode mode);
Option_vsdl__gfx__Display vsdl__gfx__get_display(int index);
int vsdl__gfx__get_displays_count();
int vsdl__gfx__get_display_modes(int display);
static void vsdl__gfx__init();
Option_vsdl__gfx__Surface_ptr vsdl__gfx__load_bmp(string path);
static string vsdl__gfx__serror(string text);
Option_vsdl__gfx__GLContext vsdl__gfx__Window_create_gl_context(vsdl__gfx__Window window);
void vsdl__gfx__GLContext_destroy(vsdl__gfx__GLContext* context);
multi_return_int_int vsdl__gfx__Window_get_gl_drawsize(vsdl__gfx__Window window);
multi_return_f32_f32 vsdl__gfx__Texture_gl_bind_texture(vsdl__gfx__Texture texture);
bool vsdl__gfx__gl_extension_supported(string extension);
int vsdl__gfx__gl_get_attribute(vsdl__gfx__GLAttr attribute);
Option_vsdl__gfx__GLContext vsdl__gfx__gl_get_current_context();
Option_vsdl__gfx__Window vsdl__gfx__gl_get_current_window();
voidptr vsdl__gfx__gl_get_procaddr(string proc);
int vsdl__gfx__gl_get_swap_interval();
Option_void vsdl__gfx__gl_load_library(string path);
void vsdl__gfx__gl_reset_attributes();
void vsdl__gfx__gl_set_attribute(vsdl__gfx__GLAttr attribute, int value);
void vsdl__gfx__gl_set_swap_interval(int interval);
void vsdl__gfx__Texture_gl_unbind_texture(vsdl__gfx__Texture texture);
void vsdl__gfx__gl_unload_library();
bool vsdl__gfx__Window_set_gl_context(vsdl__gfx__Window window, vsdl__gfx__GLContext context);
void vsdl__gfx__Window_swap_gl(vsdl__gfx__Window window);
void vsdl__gfx__Window_show_message(vsdl__gfx__Window window, string title, string message, vsdl__gfx__MessageBoxFlags flag);
int vsdl__gfx__Window_show_message_custom(vsdl__gfx__Window window, string title, string message, vsdl__gfx__MessageBoxFlags flag, array_vsdl__gfx__MessageBoxButton buttons, vsdl__gfx__MessageBoxColorScheme scheme);
Option_void vsdl__gfx__show_message(string title, string message, vsdl__gfx__MessageBoxFlags flag, varg_vsdl__gfx__Window window);
int vsdl__gfx__show_message_custom(string title, string message, vsdl__gfx__MessageBoxFlags flag, array_vsdl__gfx__MessageBoxButton buttons, vsdl__gfx__MessageBoxColorScheme* scheme, varg_vsdl__gfx__Window window);
u16 vsdl__gfx__calculate_gamma_ramp(f32 gamma);
void vsdl__gfx__PixelFormat_free(vsdl__gfx__PixelFormat* format);
void vsdl__gfx__Palette_free(vsdl__gfx__Palette* palette);
multi_return_byte_byte_byte vsdl__gfx__PixelFormat_get_rgb(vsdl__gfx__PixelFormat* format, u32 pixel);
multi_return_byte_byte_byte_byte vsdl__gfx__PixelFormat_get_rgba(vsdl__gfx__PixelFormat* format, u32 pixel);
u32 vsdl__gfx__PixelFormat_map_rgb(vsdl__gfx__PixelFormat* format, byte r, byte g, byte b);
u32 vsdl__gfx__PixelFormat_map_rgba(vsdl__gfx__PixelFormat* format, byte r, byte g, byte b, byte a);
vsdl__gfx__PixelFormats vsdl__gfx__masks_to_pixel_formats(int bpp, u32 rmask, u32 gmask, u32 bmask, u32 amask);
vsdl__gfx__PixelFormat* vsdl__gfx__new_pixel_format(u32 format);
vsdl__gfx__Palette* vsdl__gfx__new_palette(int num_colors);
multi_return_bool_int_u32_u32_u32_u32 vsdl__gfx__pixel_formats_to_masks(vsdl__gfx__PixelFormats format);
int vsdl__gfx__Palette_set_colors(vsdl__gfx__Palette* palette, array_vsdl__gfx__Color colors, int first, int total);
int vsdl__gfx__PixelFormat_set_palette(vsdl__gfx__PixelFormat* format, vsdl__gfx__Palette* palette);
int vsdl__gfx__iphone_animation_callback(vsdl__gfx__Window window, int interval, vsdl__gfx__IPhoneAnimationCallback callback, voidptr param);
void vsdl__gfx__iphone_set_event_pump(bool enabled);
multi_return_int_int vsdl__gfx__dxgi_get_output(int display);
void vsdl__gfx__set_windows_hook(vsdl__gfx__WindowsMessageCallback callback, voidptr data);
multi_return_bool_int_int_int_int vsdl__gfx__Rect_clip_line_segment(vsdl__gfx__Rect rect, int x1, int y1, int x2, int y2);
multi_return_bool_vsdl__gfx__Rect vsdl__gfx__enclose_points(array_vsdl__gfx__Point points, vsdl__gfx__Rect clip);
multi_return_bool_vsdl__gfx__Rect vsdl__gfx__Rect_enclose_points(vsdl__gfx__Rect rect, array_vsdl__gfx__Point points);
bool vsdl__gfx__Rect_eq(vsdl__gfx__Rect rect, vsdl__gfx__Rect rect_b);
multi_return_bool_vsdl__gfx__Rect vsdl__gfx__Rect_get_intersection(vsdl__gfx__Rect rect, vsdl__gfx__Rect rect_b);
bool vsdl__gfx__Rect_has_area(vsdl__gfx__Rect rect);
bool vsdl__gfx__Rect_has_point(vsdl__gfx__Rect rect, vsdl__gfx__Point point);
bool vsdl__gfx__Rect_intersects(vsdl__gfx__Rect rect, vsdl__gfx__Rect rect_b);
vsdl__gfx__Rect vsdl__gfx__Rect__plus(vsdl__gfx__Rect rect, vsdl__gfx__Rect rect_b);
void vsdl__gfx__Renderer_clear(vsdl__gfx__Renderer renderer);
int vsdl__gfx__Renderer_copy(vsdl__gfx__Renderer renderer, vsdl__gfx__Texture texture, vsdl__gfx__Rect src_rect, vsdl__gfx__Rect dst_rect);
int vsdl__gfx__Renderer_copy_ex(vsdl__gfx__Renderer renderer, vsdl__gfx__Texture texture, vsdl__gfx__Rect src_rect, vsdl__gfx__Rect dst_rect, f64 angle, vsdl__gfx__Point center, vsdl__gfx__RendererFlip flip);
Option_vsdl__gfx__Texture vsdl__gfx__Renderer_create_texture(vsdl__gfx__Renderer renderer, vsdl__gfx__PixelFormats format, int access, int width, int height);
void vsdl__gfx__Renderer_destroy(vsdl__gfx__Renderer* renderer);
int vsdl__gfx__Renderer_draw_line(vsdl__gfx__Renderer renderer, vsdl__gfx__Point point1, vsdl__gfx__Point point2);
int vsdl__gfx__Renderer_draw_lines(vsdl__gfx__Renderer renderer, array_vsdl__gfx__Point points);
int vsdl__gfx__Renderer_draw_point(vsdl__gfx__Renderer renderer, vsdl__gfx__Point point);
int vsdl__gfx__Renderer_draw_points(vsdl__gfx__Renderer renderer, array_vsdl__gfx__Point points);
int vsdl__gfx__Renderer_draw_rect(vsdl__gfx__Renderer renderer, vsdl__gfx__Rect rect);
int vsdl__gfx__Renderer_draw_rects(vsdl__gfx__Renderer renderer, array_vsdl__gfx__Rect rects);
int vsdl__gfx__Renderer_draw_fill_rect(vsdl__gfx__Renderer renderer, vsdl__gfx__Rect rect);
int vsdl__gfx__Renderer_draw_fill_rects(vsdl__gfx__Renderer renderer, array_vsdl__gfx__Rect rects);
void vsdl__gfx__Renderer_fill(vsdl__gfx__Renderer renderer, vsdl__gfx__Color color);
vsdl__gfx__Color vsdl__gfx__Renderer_get_draw_color(vsdl__gfx__Renderer renderer);
Option_vsdl__gfx__Texture vsdl__gfx__Renderer_get_render_target(vsdl__gfx__Renderer renderer);
multi_return_f32_f32 vsdl__gfx__Renderer_get_scale(vsdl__gfx__Renderer renderer);
void vsdl__gfx__Renderer_present(vsdl__gfx__Renderer renderer);
int vsdl__gfx__Renderer_render(vsdl__gfx__Renderer renderer, vsdl__gfx__Texture texture, vsdl__gfx__Rect rect);
void vsdl__gfx__Renderer_set_blend_mode(vsdl__gfx__Renderer renderer, vsdl__gfx__BlendMode mode);
void vsdl__gfx__Renderer_set_draw_color(vsdl__gfx__Renderer renderer, vsdl__gfx__Color color);
void vsdl__gfx__Renderer_set_target(vsdl__gfx__Renderer renderer, vsdl__gfx__Texture texture);
void vsdl__gfx__Renderer_set_scale(vsdl__gfx__Renderer renderer, f32 scale_x, f32 scale_y);
void vsdl__gfx__Renderer_set_viewport(vsdl__gfx__Renderer renderer, vsdl__gfx__Rect rect);
Option_vsdl__gfx__Surface_ptr vsdl__gfx__create_surface(int width, int height, int depth, vsdl__gfx__Color color);
Option_vsdl__gfx__Surface_ptr vsdl__gfx__create_surface_from(voidptr data, int width, int height, int depth, int pitch, vsdl__gfx__Color color);
void vsdl__gfx__Surface_blit_to(vsdl__gfx__Surface* surface, vsdl__gfx__Surface* dst_surface, vsdl__gfx__Rect* src_rect, vsdl__gfx__Rect* dst_rect);
void vsdl__gfx__Surface_blit_scaled_to(vsdl__gfx__Surface* surface, vsdl__gfx__Surface* dst_surface, vsdl__gfx__Rect* src_rect, vsdl__gfx__Rect* dst_rect);
Option_vsdl__gfx__Surface_ptr vsdl__gfx__Surface_convert(vsdl__gfx__Surface* surface, vsdl__gfx__PixelFormat* format, u32 flags);
Option_vsdl__gfx__Renderer vsdl__gfx__Surface_create_renderer(vsdl__gfx__Surface* surface);
Option_vsdl__gfx__Texture vsdl__gfx__Surface_create_texture(vsdl__gfx__Surface* surface, vsdl__gfx__Renderer renderer);
void vsdl__gfx__Surface_fill(vsdl__gfx__Surface* surface, vsdl__gfx__Color color);
void vsdl__gfx__Surface_fill_rect(vsdl__gfx__Surface* surface, vsdl__gfx__Rect rect, vsdl__gfx__Color color);
u32 vsdl__gfx__Surface_format_color(vsdl__gfx__Surface* surface, vsdl__gfx__Color color);
void vsdl__gfx__Surface_free(vsdl__gfx__Surface* surface);
u32 vsdl__gfx__Surface_get_flags(vsdl__gfx__Surface* surface);
vsdl__gfx__PixelFormat* vsdl__gfx__Surface_get_format(vsdl__gfx__Surface* surface);
int vsdl__gfx__Surface_get_height(vsdl__gfx__Surface* surface);
int vsdl__gfx__Surface_get_pitch(vsdl__gfx__Surface* surface);
vsdl__gfx__Rect vsdl__gfx__Surface_get_rect(vsdl__gfx__Surface* surface);
int vsdl__gfx__Surface_get_width(vsdl__gfx__Surface* surface);
int vsdl__gfx__Surface_set_color_key(vsdl__gfx__Surface* surface, bool enable, u32 color);
void vsdl__gfx__Texture_free(vsdl__gfx__Texture texture);
byte vsdl__gfx__Texture_get_alpha(vsdl__gfx__Texture texture);
vsdl__gfx__BlendMode vsdl__gfx__Texture_get_blend_mode(vsdl__gfx__Texture texture);
vsdl__gfx__Color vsdl__gfx__Texture_get_color_mod(vsdl__gfx__Texture texture);
int vsdl__gfx__Texture_get_height(vsdl__gfx__Texture texture);
int vsdl__gfx__Texture_get_width(vsdl__gfx__Texture texture);
void vsdl__gfx__Texture_query(vsdl__gfx__Texture texture, u32* format, int* access, int* w, int* h);
int vsdl__gfx__Texture_render(vsdl__gfx__Texture texture, vsdl__gfx__Renderer renderer, vsdl__gfx__Rect rect);
int vsdl__gfx__Texture_set_alpha(vsdl__gfx__Texture texture, byte alpha);
int vsdl__gfx__Texture_set_blend_mode(vsdl__gfx__Texture texture, vsdl__gfx__BlendMode mode);
int vsdl__gfx__Texture_set_color_mod(vsdl__gfx__Texture texture, vsdl__gfx__Color color);
void vsdl__gfx__Texture_update(vsdl__gfx__Texture texture, vsdl__gfx__Rect rect, voidptr pixels, int pitch);
Option_vsdl__gfx__SDL_vulkanSurface vsdl__gfx__Window_create_vulkan_surface(vsdl__gfx__Window window, vsdl__gfx__SDL_vulkanInstance instance);
multi_return_int_int vsdl__gfx__Window_get_vulkan_drawsize(vsdl__gfx__Window window);
array_string vsdl__gfx__Window_get_vulkan_extensions(vsdl__gfx__Window window);
Option_void vsdl__gfx__vulkan_load(string path);
voidptr vsdl__gfx__vulkan_get_procaddr();
void vsdl__gfx__vulkan_unload();
Option_vsdl__gfx__Renderer vsdl__gfx__Window_create_renderer(vsdl__gfx__Window window, int index, u32 flags);
Option_vsdl__gfx__Window vsdl__gfx__create_window(string title, int x, int y, int width, int height, varg_vsdl__gfx__WindowFlags flags);
Option_multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer vsdl__gfx__create_window_and_renderer(string title, int x, int y, int width, int height, varg_vsdl__gfx__WindowFlags flags);
void vsdl__gfx__Window_destroy(vsdl__gfx__Window* window);
void vsdl__gfx__Window_focus(vsdl__gfx__Window window);
Option_vsdl__gfx__Window vsdl__gfx__get_active_window();
multi_return_int_int_int_int vsdl__gfx__Window_get_border_size(vsdl__gfx__Window window);
f32 vsdl__gfx__Window_get_brightness(vsdl__gfx__Window window);
voidptr vsdl__gfx__Window_get_data(vsdl__gfx__Window window, string name);
Option_vsdl__gfx__Display vsdl__gfx__Window_get_display(vsdl__gfx__Window window);
u32 vsdl__gfx__Window_get_id(vsdl__gfx__Window window);
int vsdl__gfx__Window_get_index(vsdl__gfx__Window window);
u32 vsdl__gfx__Window_get_flags(vsdl__gfx__Window window);
multi_return_int_int vsdl__gfx__Window_get_maximum_size(vsdl__gfx__Window window);
multi_return_int_int vsdl__gfx__Window_get_minimum_size(vsdl__gfx__Window window);
f32 vsdl__gfx__Window_get_opacity(vsdl__gfx__Window window);
vsdl__gfx__PixelFormats vsdl__gfx__Window_get_pixel_format(vsdl__gfx__Window window);
vsdl__gfx__Point vsdl__gfx__Window_get_position(vsdl__gfx__Window window);
multi_return_int_int vsdl__gfx__Window_get_size(vsdl__gfx__Window window);
Option_vsdl__gfx__Surface_ptr vsdl__gfx__Window_get_surface(vsdl__gfx__Window window);
string vsdl__gfx__Window_get_title(vsdl__gfx__Window window);
Option_vsdl__gfx__Window vsdl__gfx__get_window_from_id(u32 id);
bool vsdl__gfx__Window_has_focus(vsdl__gfx__Window window);
void vsdl__gfx__Window_maximize(vsdl__gfx__Window window);
void vsdl__gfx__Window_minimize(vsdl__gfx__Window window);
void vsdl__gfx__Window_restore(vsdl__gfx__Window window);
int vsdl__gfx__Window_set_display(vsdl__gfx__Window window, vsdl__gfx__Display display);
void vsdl__gfx__Window_set_border(vsdl__gfx__Window window, bool bordered);
int vsdl__gfx__Window_set_brightness(vsdl__gfx__Window window, f32 brightness);
voidptr vsdl__gfx__Window_set_data(vsdl__gfx__Window window, string name, voidptr data);
void vsdl__gfx__Window_set_focus(vsdl__gfx__Window window, bool focus);
int vsdl__gfx__Window_set_fullscreen(vsdl__gfx__Window window, vsdl__gfx__FullscreenMode fullscreen);
void vsdl__gfx__Window_set_icon(vsdl__gfx__Window window, vsdl__gfx__Surface* icon);
void vsdl__gfx__Window_set_maximum_size(vsdl__gfx__Window window, int w, int h);
void vsdl__gfx__Window_set_minimum_size(vsdl__gfx__Window window, int w, int h);
void vsdl__gfx__Window_set_modal_for(vsdl__gfx__Window window, vsdl__gfx__Window parent);
int vsdl__gfx__Window_set_opacity(vsdl__gfx__Window window, f32 opacity);
void vsdl__gfx__Window_set_position(vsdl__gfx__Window window, vsdl__gfx__Point position);
void vsdl__gfx__Window_set_resizable(vsdl__gfx__Window window, bool resizable);
void vsdl__gfx__Window_update(vsdl__gfx__Window window);
static void vsdl__audio__init();
Option_void vsdl__audio__initialize_driver(string driver);
array_vsdl__audio__AudioDevice vsdl__audio__get_devices();
array_string vsdl__audio__get_drivers();
int vsdl__audio__get_device_count();
string vsdl__audio__get_device_name(int index);
void vsdl__audio__quit();
static string vsdl__audio__serror(string text);
void vsdl__audio__AudioDevice_close(vsdl__audio__AudioDevice* device);
u32 vsdl__audio__AudioDevice_dequeue(vsdl__audio__AudioDevice* device, vsdl__audio__AudioData data);
void vsdl__audio__AudioDevice_empty(vsdl__audio__AudioDevice* device);
vsdl__audio__AudioStatus vsdl__audio__AudioDevice_get_status(vsdl__audio__AudioDevice* device);
u32 vsdl__audio__AudioDevice_get_queue_size(vsdl__audio__AudioDevice* device);
void vsdl__audio__AudioDevice_lock_callback(vsdl__audio__AudioDevice* device);
Option_void vsdl__audio__AudioDevice_open(vsdl__audio__AudioDevice* device, vsdl__audio__AudioSpec spec, varg_vsdl__audio__AudioChangeFlags flags);
void vsdl__audio__AudioDevice_pause(vsdl__audio__AudioDevice* device);
vsdl__audio__AudioData* vsdl__audio__AudioDevice_play(vsdl__audio__AudioDevice* device, vsdl__audio__AudioData data, i8 volume);
Option_void vsdl__audio__AudioDevice_queue(vsdl__audio__AudioDevice* device, vsdl__audio__AudioData data);
void vsdl__audio__AudioDevice_unlock_callback(vsdl__audio__AudioDevice* device);
void vsdl__audio__AudioDevice_unpause(vsdl__audio__AudioDevice* device);
static void vsdl__audio__play(vsdl__audio__AudioDevice* device, byte* stream, int len);
Option_vsdl__audio__AudioData_ptr vsdl__audio__load_wav(string path);
bool vsdl__audio__AudioData_get_loop(vsdl__audio__AudioData* data);
f32 vsdl__audio__AudioData_get_pos(vsdl__audio__AudioData* data);
u32 vsdl__audio__AudioData_get_pos_byte(vsdl__audio__AudioData* data);
u32 vsdl__audio__AudioData_get_remaining(vsdl__audio__AudioData* data);
vsdl__audio__AudioSpec vsdl__audio__AudioData_get_spec(vsdl__audio__AudioData* data);
i8 vsdl__audio__AudioData_get_volume(vsdl__audio__AudioData* data);
bool vsdl__audio__AudioData_free(vsdl__audio__AudioData* data);
void vsdl__audio__AudioData_set_loop(vsdl__audio__AudioData* data, bool loop);
void vsdl__audio__AudioData_set_pos(vsdl__audio__AudioData* data, f32 pos);
void vsdl__audio__AudioData_set_pos_byte(vsdl__audio__AudioData* data, u32 pos);
void vsdl__audio__AudioData_set_volume(vsdl__audio__AudioData* data, i8 volume);
string time__Time_format(time__Time t);
string time__Time_format_ss(time__Time t);
string time__Time_format_ss_milli(time__Time t);
string time__Time_format_ss_micro(time__Time t);
string time__Time_hhmm(time__Time t);
string time__Time_hhmmss(time__Time t);
string time__Time_hhmm12(time__Time t);
string time__Time_ymmdd(time__Time t);
string time__Time_ddmmy(time__Time t);
string time__Time_md(time__Time t);
string time__Time_clean(time__Time t);
string time__Time_clean12(time__Time t);
string time__Time_get_fmt_time_str(time__Time t, time__FormatTime fmt_time);
string time__Time_get_fmt_date_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatDate fmt_date);
string time__Time_get_fmt_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatTime fmt_time, time__FormatDate fmt_date);
string time__Time_utc_string(time__Time t);
bool time__Time_eq(time__Time t1, time__Time t2);
bool time__Time_ne(time__Time t1, time__Time t2);
bool time__Time_lt(time__Time t1, time__Time t2);
bool time__Time_le(time__Time t1, time__Time t2);
bool time__Time_gt(time__Time t1, time__Time t2);
bool time__Time_ge(time__Time t1, time__Time t2);
Option_time__Time time__parse(string s);
Option_time__Time time__parse_rfc2822(string s);
Option_time__Time time__parse_iso8601(string s);
time__StopWatch time__new_stopwatch(time__StopWatchOptions opts);
void time__StopWatch_start(time__StopWatch* t);
void time__StopWatch_restart(time__StopWatch* t);
void time__StopWatch_stop(time__StopWatch* t);
void time__StopWatch_pause(time__StopWatch* t);
time__Duration time__StopWatch_elapsed(time__StopWatch t);
string _const_time__days_string; // a string literal, inited later
array_int _const_time__month_days; // inited later
string _const_time__months_string; // a string literal, inited later
i64 _const_time__absolute_zero_year; // inited later
#define _const_time__seconds_per_minute 60
int _const_time__seconds_per_hour; // inited later
int _const_time__seconds_per_day; // inited later
int _const_time__seconds_per_week; // inited later
int _const_time__days_per_400_years; // inited later
int _const_time__days_per_100_years; // inited later
int _const_time__days_per_4_years; // inited later
array_int _const_time__days_before; // inited later
array_string _const_time__long_days; // inited later
time__Time time__now();
time__Time time__utc();
string time__Time_smonth(time__Time t);
time__Time time__new_time(time__Time t);
int time__Time_unix_time(time__Time t);
u64 time__Time_unix_time_milli(time__Time t);
time__Time time__Time_add_seconds(time__Time t, int seconds);
time__Time time__Time_add_days(time__Time t, int days);
static int time__since(time__Time t);
string time__Time_relative(time__Time t);
string time__Time_relative_short(time__Time t);
int time__day_of_week(int y, int m, int d);
int time__Time_day_of_week(time__Time t);
string time__Time_weekday_str(time__Time t);
string time__Time_long_weekday_str(time__Time t);
i64 time__ticks();
void time__sleep(int seconds);
void time__sleep_ms(int milliseconds);
void time__usleep(int microseconds);
bool time__is_leap_year(int year);
Option_int time__days_in_month(int month, int year);
string time__Time_str(time__Time t);
static time__Time time__convert_ctime(struct tm t, int microsecond);
time__Duration _const_time__nanosecond; // inited later
i64 _const_time__microsecond; // inited later
i64 _const_time__millisecond; // inited later
i64 _const_time__second; // inited later
i64 _const_time__minute; // inited later
i64 _const_time__hour; // inited later
time__Duration _const_time__infinite; // inited later
i64 time__Duration_nanoseconds(time__Duration d);
i64 time__Duration_microseconds(time__Duration d);
i64 time__Duration_milliseconds(time__Duration d);
f64 time__Duration_seconds(time__Duration d);
f64 time__Duration_minutes(time__Duration d);
f64 time__Duration_hours(time__Duration d);
u64 _const_time__start_time; // inited later
u64 _const_time__freq_time; // inited later
int _const_time__start_local_time; // inited later
static int time__make_unix_time(struct tm t);
static u64 time__init_win_time_freq();
static u64 time__init_win_time_start();
u64 time__sys_mono_now();
static u64 time__vpc_now();
static int time__local_as_unix_time();
static time__Time time__to_local_time(time__Time t);
static time__Time time__win_now();
static time__Time time__win_utc();
int time__SystemTime_unix_time(time__SystemTime st);
time__Time time__darwin_now();
time__Time time__linux_now();
time__Time time__solaris_now();
time__Time time__darwin_utc();
time__Time time__linux_utc();
time__Time time__solaris_utc();
time__Time time__unix(int abs);
time__Time time__unix2(int abs, int microsecond);
static multi_return_int_int_int time__calculate_date_from_offset(int day_offset_);
static multi_return_int_int_int time__calculate_time_from_offset(int second_offset_);
#define _const_os__s_ifmt 0xF000
#define _const_os__s_ifdir 0x4000
#define _const_os__s_iflnk 0xa000
#define _const_os__s_ixusr 0100
#define _const_os__s_ixgrp 0010
#define _const_os__s_ixoth 0001
int _const_os__std_input_handle; // inited later
int _const_os__std_output_handle; // inited later
int _const_os__std_error_handle; // inited later
#define _const_os__success 0x0000
#define _const_os__error_insufficient_buffer 0x0082
#define _const_os__handle_generic_read 0x80000000
#define _const_os__handle_open_existing 0x00000003
#define _const_os__file_share_read 0x01
#define _const_os__file_share_write 0x02
#define _const_os__file_share_delete 0x04
#define _const_os__file_notify_change_file_name 0x01
#define _const_os__file_notify_change_dir_name 0x02
#define _const_os__file_notify_change_attributes 0x04
#define _const_os__file_notify_change_size 0x08
#define _const_os__file_notify_change_last_write 0x10
#define _const_os__file_notify_change_last_access 0x20
#define _const_os__file_notify_change_creation 0x40
#define _const_os__file_notify_change_security 0x80
#define _const_os__file_action_added 0x01
#define _const_os__file_action_removed 0x02
#define _const_os__file_action_modified 0x03
#define _const_os__file_action_renamed_old_name 0x04
#define _const_os__file_action_renamed_new_name 0x05
#define _const_os__file_attr_readonly 0x00000001
#define _const_os__file_attr_hidden 0x00000002
#define _const_os__file_attr_system 0x00000004
#define _const_os__file_attr_directory 0x00000010
#define _const_os__file_attr_archive 0x00000020
#define _const_os__file_attr_device 0x00000040
#define _const_os__file_attr_normal 0x00000080
#define _const_os__file_attr_temporary 0x00000100
#define _const_os__file_attr_sparse_file 0x00000200
#define _const_os__file_attr_reparse_point 0x00000400
#define _const_os__file_attr_compressed 0x00000800
#define _const_os__file_attr_offline 0x00001000
#define _const_os__file_attr_not_content_indexed 0x00002000
#define _const_os__file_attr_encrypted 0x00004000
#define _const_os__file_attr_integrity_stream 0x00008000
#define _const_os__file_attr_virtual 0x00010000
#define _const_os__file_attr_no_scrub_data 0x00020000
#define _const_os__file_type_unknown 0x00
#define _const_os__file_type_disk 0x01
#define _const_os__file_type_char 0x02
#define _const_os__file_type_pipe 0x03
int _const_os__file_invalid_file_id; // inited later
voidptr _const_os__invalid_handle_value; // inited later
#define _const_os__enable_echo_input 0x0004
#define _const_os__enable_extended_flags 0x0080
#define _const_os__enable_insert_mode 0x0020
#define _const_os__enable_line_input 0x0002
#define _const_os__enable_mouse_input 0x0010
#define _const_os__enable_processed_input 0x0001
#define _const_os__enable_quick_edit_mode 0x0040
#define _const_os__enable_window_input 0x0008
#define _const_os__enable_virtual_terminal_input 0x0200
#define _const_os__enable_processed_output 0x01
#define _const_os__enable_wrap_at_eol_output 0x02
#define _const_os__enable_virtual_terminal_processing 0x04
#define _const_os__disable_newline_auto_return 0x08
#define _const_os__enable_lvb_grid_worldwide 0x10
#define _const_os__o_rdonly 0x0000
#define _const_os__o_wronly 0x0001
#define _const_os__o_rdwr 0x0002
#define _const_os__o_append 0x0008
#define _const_os__o_create 0x0100
#define _const_os__o_binary 0x8000
#define _const_os__o_trunc 0x0200
#define _const_os__o_excl 0x0400
#define _const_os__o_sync 0x0000
#define _const_os__o_noctty 0x0000
#define _const_os__o_nonblock 0x0000
#define _const_os__status_access_violation 0xC0000005
#define _const_os__status_in_page_error 0xC0000006
#define _const_os__status_invalid_handle 0xC0000008
#define _const_os__status_invalid_parameter 0xC000000D
#define _const_os__status_no_memory 0xC0000017
#define _const_os__status_illegal_instruction 0xC000001D
#define _const_os__status_noncontinuable_exception 0xC0000025
#define _const_os__status_invalid_disposition 0xC0000026
#define _const_os__status_array_bounds_exceeded 0xC000008C
#define _const_os__status_float_denormal_operand 0xC000008D
#define _const_os__status_float_divide_by_zero 0xC000008E
#define _const_os__status_float_inexact_result 0xC000008F
#define _const_os__status_float_invalid_operation 0xC0000090
#define _const_os__status_float_overflow 0xC0000091
#define _const_os__status_float_stack_check 0xC0000092
#define _const_os__status_float_underflow 0xC0000093
#define _const_os__status_integer_divide_by_zero 0xC0000094
#define _const_os__status_integer_overflow 0xC0000095
#define _const_os__status_privileged_instruction 0xC0000096
#define _const_os__status_stack_overflow 0xC00000FD
#define _const_os__status_dll_not_found 0xC0000135
#define _const_os__status_ordinal_not_found 0xC0000138
#define _const_os__status_entrypoint_not_found 0xC0000139
#define _const_os__status_control_c_exit 0xC000013A
#define _const_os__status_dll_init_failed 0xC0000142
#define _const_os__status_float_multiple_faults 0xC00002B4
#define _const_os__status_float_multiple_traps 0xC00002B5
#define _const_os__status_reg_nat_consumption 0xC00002C9
#define _const_os__status_heap_corruption 0xC0000374
#define _const_os__status_stack_buffer_overrun 0xC0000409
#define _const_os__status_invalid_cruntime_parameter 0xC0000417
#define _const_os__status_assertion_failure 0xC0000420
voidptr _const_os__hkey_local_machine; // inited later
voidptr _const_os__hkey_current_user; // inited later
#define _const_os__key_query_value 0x0001
#define _const_os__key_set_value 0x0002
#define _const_os__key_enumerate_sub_keys 0x0008
#define _const_os__key_wow64_32key 0x0200
voidptr _const_os__hwnd_broadcast; // inited later
#define _const_os__wm_settingchange 0x001A
#define _const_os__smto_abortifhung 0x0002
string os__getenv(string key);
int os__setenv(string name, string value, bool overwrite);
int os__unsetenv(string name);
map_string_string os__environ();
bool os__File_is_opened(os__File f);
Option_int os__File_write(os__File* f, string s);
Option_int os__File_writeln(os__File* f, string s);
int os__File_write_bytes(os__File* f, voidptr data, int size);
int os__File_write_bytes_at(os__File* f, voidptr data, int size, int pos);
array_byte os__File_read_bytes(os__File* f, int size);
array_byte os__File_read_bytes_at(os__File* f, int size, int pos);
Option_int os__File_read_bytes_into(os__File* f, int pos, array_byte* buf);
void os__File_flush(os__File* f);
os__File os__open_stdin();
Option_string os__File_get_line(os__File* f);
os__FileMode os__inode(string path);
array_string _const_os__args; // inited later
#define _const_os__max_path_len 4096
Option_array_byte os__read_bytes(string path);
Option_string os__read_file(string path);
int os__file_size(string path);
void os__mv(string src, string dst);
Option_void os__cp(string src, string dst);
Option_void os__cp_r(string osource_path, string odest_path, bool overwrite);
Option_void os__cp_all(string src, string dst, bool overwrite);
Option_void os__mv_by_cp(string source, string target);
Option_FILE_ptr os__vfopen(string path, string mode);
int os__fileno(voidptr cfile);
Option_array_string os__read_lines(string path);
static Option_array_ustring os__read_ulines(string path);
Option_os__File os__open_append(string path);
Option_os__File os__open_file(string path, string mode, varg_int options);
static voidptr os__vpopen(string path);
static multi_return_int_bool os__posix_wait4_to_exit_status(int waitret);
string os__posix_get_error_msg(int code);
static int os__vpclose(voidptr f);
int os__system(string cmd);
string os__sigint_to_signal_name(int si);
#define _const_os__f_ok 0
#define _const_os__x_ok 1
#define _const_os__w_ok 2
#define _const_os__r_ok 4
bool os__exists(string path);
bool os__is_executable(string path);
bool os__is_writable(string path);
bool os__is_readable(string path);
bool os__file_exists(string _path);
Option_void os__rm(string path);
Option_void os__rmdir(string path);
void os__rmdir_recursive(string path);
Option_void os__rmdir_all(string path);
bool os__is_dir_empty(string path);
static void os__print_c_errno();
string os__file_ext(string path);
string os__dir(string path);
string os__base(string path);
string os__file_name(string path);
string os__input(string prompt);
string os__get_line();
string os__get_raw_line();
array_byte os__get_raw_stdin();
array_string os__get_lines();
string os__get_lines_joined();
string os__user_os();
string os__home_dir();
Option_void os__write_file(string path, string text);
Option_void os__write_file_array(string path, array buffer);
void os__on_segfault(voidptr f);
string os__executable();
static string os__executable_fallback();
Option_string os__find_abs_path_of_executable(string exepath);
bool os__exists_in_system_path(string prog);
bool os__dir_exists(string path);
bool os__is_dir(string path);
bool os__is_file(string path);
bool os__is_link(string path);
void os__chdir(string path);
string os__getwd();
string os__real_path(string fpath);
bool os__is_abs_path(string path);
string os__join_path(string base, varg_string dirs);
array_string os__walk_ext(string path, string ext);
void os__walk(string path, void (*f)(string path));
void os__signal(int signum, voidptr handler);
int os__fork();
int os__wait();
int os__file_last_mod_unix(string path);
void os__log(string s);
void os__flush_stdout();
void os__flush();
Option_void os__mkdir_all(string path);
string os__cache_dir();
string os__temp_dir();
void os__chmod(string path, int mode);
string _const_os__wd_at_startup; // inited later
string os__resource_abs_path(string path);
Option_os__File os__open(string path);
Option_os__File os__create(string path);
string _const_os__path_separator; // a string literal, inited later
string _const_os__path_delimiter; // a string literal, inited later
static array_string os__init_os_args_wide(int argc, byteptr* argv);
Option_array_string os__ls(string path);
Option_bool os__mkdir(string path);
os__HANDLE os__get_file_handle(string path);
Option_string os__get_module_filename(os__HANDLE handle);
#define _const_os__format_message_allocate_buffer 0x00000100
#define _const_os__format_message_argument_array 0x00002000
#define _const_os__format_message_from_hmodule 0x00000800
#define _const_os__format_message_from_string 0x00000400
#define _const_os__format_message_from_system 0x00001000
#define _const_os__format_message_ignore_inserts 0x00000200
#define _const_os__sublang_neutral 0x00
#define _const_os__sublang_default 0x01
int _const_os__lang_neutral; // inited later
#define _const_os__max_error_code 15841
static voidptr os__ptr_win_get_error_msg(u32 code);
string os__get_error_msg(int code);
Option_os__Result os__exec(string cmd);
Option_bool os__symlink(string origin, string target);
void os__File_close(os__File* f);
void os__add_vectored_exception_handler(bool first, VectoredExceptionHandler handler);
bool os__debugger_present();
os__Uname os__uname();
Option_bool os__is_writable_folder(string folder);
int os__getpid();
int vsdl__mixer__channels_allocate(int count);
int vsdl__mixer__channel_fade_in(int channel, vsdl__mixer__Chunk* chunk, int loops, int ms);
int vsdl__mixer__channel_fade_in_timed(int channel, vsdl__mixer__Chunk* chunk, int loops, int ms, int time);
void vsdl__mixer__channel_pause(int channel);
int vsdl__mixer__channel_play(int channel, vsdl__mixer__Chunk* chunk, int loops);
int vsdl__mixer__channel_play_timed(int channel, vsdl__mixer__Chunk* chunk, int loops, int time);
void vsdl__mixer__channel_resume(int channel);
int vsdl__mixer__channel_volume(int index, byte volume);
void vsdl__mixer__Chunk_free(vsdl__mixer__Chunk* chunk);
int vsdl__mixer__Chunk_fade_in(vsdl__mixer__Chunk* chunk, int channel, int loop, int ms);
int vsdl__mixer__Chunk_fade_in_timed(vsdl__mixer__Chunk* chunk, int channel, int loop, int ms, int time);
string vsdl__mixer__get_chunk_decoder(int index);
int vsdl__mixer__get_num_chunk_decoders();
Option_vsdl__mixer__Chunk_ptr vsdl__mixer__load(string path);
Option_vsdl__mixer__Chunk_ptr vsdl__mixer__load_rw(vsdl__RWops* ops, bool autofree);
int vsdl__mixer__Chunk_play(vsdl__mixer__Chunk* chunk, int channel, int loops);
int vsdl__mixer__Chunk_play_timed(vsdl__mixer__Chunk* chunk, int channel, int loops, int time);
int vsdl__mixer__Chunk_set_volume(vsdl__mixer__Chunk* chunk, byte volume);
int vsdl__mixer__init(varg_vsdl__mixer__MixerFlags flags);
void vsdl__mixer__close();
void vsdl__mixer__quit();
Option_int vsdl__mixer__open(int frequency, vsdl__mixer__Format format, int channels, int buffer_size);
Option_int vsdl__mixer__open_device(vsdl__audio__AudioDevice device, int frequency, vsdl__mixer__Format format, int channels, int buffer_size, int allowed_changes);
static string vsdl__mixer__serror(string text);
int runtime__nr_jobs();
bool runtime__is_32bit();
bool runtime__is_64bit();
bool runtime__is_little_endian();
bool runtime__is_big_endian();
int runtime__nr_cpus();
u64 _const_rand__util__lower_mask; // inited later
#define _const_rand__util__max_u32 0xFFFFFFFF
#define _const_rand__util__max_u64 0xFFFFFFFFFFFFFFFF
f32 _const_rand__util__max_u32_as_f32; // inited later
f64 _const_rand__util__max_u64_as_f64; // inited later
u32 _const_rand__util__u31_mask; // inited later
u64 _const_rand__util__u63_mask; // inited later
static u32 rand__util__nr_next(u32 prev);
array_u32 rand__util__time_seed_array(int count);
u32 rand__util__time_seed_32();
u64 rand__util__time_seed_64();
u64 _const_rand__wyrand__wyp0; // inited later
u64 _const_rand__wyrand__wyp1; // inited later
void rand__wyrand__WyRandRNG_seed(rand__wyrand__WyRandRNG* rng, array_u32 seed_data);
u32 rand__wyrand__WyRandRNG_u32(rand__wyrand__WyRandRNG* rng);
u64 rand__wyrand__WyRandRNG_u64(rand__wyrand__WyRandRNG* rng);
u32 rand__wyrand__WyRandRNG_u32n(rand__wyrand__WyRandRNG* rng, u32 max);
u64 rand__wyrand__WyRandRNG_u64n(rand__wyrand__WyRandRNG* rng, u64 max);
u32 rand__wyrand__WyRandRNG_u32_in_range(rand__wyrand__WyRandRNG* rng, u32 min, u32 max);
u64 rand__wyrand__WyRandRNG_u64_in_range(rand__wyrand__WyRandRNG* rng, u64 min, u64 max);
int rand__wyrand__WyRandRNG_int(rand__wyrand__WyRandRNG* rng);
i64 rand__wyrand__WyRandRNG_i64(rand__wyrand__WyRandRNG* rng);
int rand__wyrand__WyRandRNG_int31(rand__wyrand__WyRandRNG* rng);
i64 rand__wyrand__WyRandRNG_int63(rand__wyrand__WyRandRNG* rng);
int rand__wyrand__WyRandRNG_intn(rand__wyrand__WyRandRNG* rng, int max);
i64 rand__wyrand__WyRandRNG_i64n(rand__wyrand__WyRandRNG* rng, i64 max);
int rand__wyrand__WyRandRNG_int_in_range(rand__wyrand__WyRandRNG* rng, int min, int max);
i64 rand__wyrand__WyRandRNG_i64_in_range(rand__wyrand__WyRandRNG* rng, i64 min, i64 max);
f32 rand__wyrand__WyRandRNG_f32(rand__wyrand__WyRandRNG* rng);
f64 rand__wyrand__WyRandRNG_f64(rand__wyrand__WyRandRNG* rng);
f32 rand__wyrand__WyRandRNG_f32n(rand__wyrand__WyRandRNG* rng, f32 max);
f64 rand__wyrand__WyRandRNG_f64n(rand__wyrand__WyRandRNG* rng, f64 max);
f32 rand__wyrand__WyRandRNG_f32_in_range(rand__wyrand__WyRandRNG* rng, f32 min, f32 max);
f64 rand__wyrand__WyRandRNG_f64_in_range(rand__wyrand__WyRandRNG* rng, f64 min, f64 max);
rand__wyrand__WyRandRNG* default_rng; // global
static void rand__init();
rand__wyrand__WyRandRNG* rand__new_default(rand__PRNGConfigStruct config);
void rand__seed(array_u32 seed);
u32 rand__u32();
u64 rand__u64();
u32 rand__u32n(u32 max);
u64 rand__u64n(u64 max);
u32 rand__u32_in_range(u32 min, u32 max);
u64 rand__u64_in_range(u64 min, u64 max);
int rand__int();
int rand__intn(int max);
int rand__int_in_range(int min, int max);
int rand__int31();
i64 rand__i64();
i64 rand__i64n(i64 max);
i64 rand__i64_in_range(i64 min, i64 max);
i64 rand__int63();
f32 rand__f32();
f64 rand__f64();
f32 rand__f32n(f32 max);
f64 rand__f64n(f64 max);
f32 rand__f32_in_range(f32 min, f32 max);
f64 rand__f64_in_range(f64 min, f64 max);
string _const_rand__chars; // a string literal, inited later
string rand__string(int len);
string rand__uuid_v4();
string _const_rand__ulid_encoding; // a string literal, inited later
string rand__ulid();
string rand__ulid_at_millisecond(u64 unix_time_milli);
#define _const_sync__spinloops 750
#define _const_sync__spinloops_sem 4000
static sync__Channel* sync__new_channel_st(u32 n, u32 st);
void sync__Channel_close(sync__Channel* ch);
int sync__Channel_len(sync__Channel* ch);
void sync__Channel_push(sync__Channel* ch, voidptr src);
ChanState sync__Channel_try_push(sync__Channel* ch, voidptr src);
static ChanState sync__Channel_try_push_priv(sync__Channel* ch, voidptr src, bool no_block);
bool sync__Channel_pop(sync__Channel* ch, voidptr dest);
ChanState sync__Channel_try_pop(sync__Channel* ch, voidptr dest);
static ChanState sync__Channel_try_pop_priv(sync__Channel* ch, voidptr dest, bool no_block);
int sync__channel_select(array_sync__Channel_ptr* channels, array_sync__Direction dir, array_voidptr* objrefs, time__Duration timeout);
voidptr _const_sync__no_result; // inited later
sync__PoolProcessor* sync__new_pool_processor(sync__PoolProcessorConfig context);
void sync__PoolProcessor_set_max_jobs(sync__PoolProcessor* pool, int njobs);
void sync__PoolProcessor_work_on_pointers(sync__PoolProcessor* pool, array_voidptr items);
static void sync__process_in_thread(sync__PoolProcessor* pool, int task_id);
string sync__PoolProcessor_get_string_item(sync__PoolProcessor* pool, int idx);
int sync__PoolProcessor_get_int_item(sync__PoolProcessor* pool, int idx);
void sync__PoolProcessor_set_shared_context(sync__PoolProcessor* pool, voidptr context);
voidptr sync__PoolProcessor_get_shared_context(sync__PoolProcessor* pool);
void sync__PoolProcessor_set_thread_context(sync__PoolProcessor* pool, int idx, voidptr context);
voidptr sync__PoolProcessor_get_thread_context(sync__PoolProcessor* pool, int idx);
void sync__PoolProcessor_work_on_items_s(sync__PoolProcessor* pool, array_string items);
void sync__PoolProcessor_work_on_items_i(sync__PoolProcessor* pool, array_int items);
array_sync__SResult sync__PoolProcessor_get_results_s(sync__PoolProcessor* pool);
array_sync__IResult sync__PoolProcessor_get_results_i(sync__PoolProcessor* pool);
sync__Mutex* sync__new_mutex();
sync__RwMutex* sync__new_rwmutex();
void sync__Mutex_m_lock(sync__Mutex* m);
void sync__Mutex_unlock(sync__Mutex* m);
void sync__RwMutex_r_lock(sync__RwMutex* m);
void sync__RwMutex_w_lock(sync__RwMutex* m);
void sync__RwMutex_r_unlock(sync__RwMutex* m);
void sync__RwMutex_w_unlock(sync__RwMutex* m);
void sync__Mutex_destroy(sync__Mutex* m);
sync__Semaphore sync__new_semaphore();
sync__Semaphore sync__new_semaphore_init(u32 n);
void sync__Semaphore_post(sync__Semaphore s);
void sync__Semaphore_wait(sync__Semaphore s);
bool sync__Semaphore_try_wait(sync__Semaphore s);
bool sync__Semaphore_timed_wait(sync__Semaphore s, time__Duration timeout);
bool sync__Semaphore_destroy(sync__Semaphore s);
void sync__Waiter_wait(sync__Waiter* w);
void sync__Waiter_stop(sync__Waiter* w);
sync__Waiter* sync__new_waiter();
sync__WaitGroup* sync__new_waitgroup();
void sync__WaitGroup_add(sync__WaitGroup* wg, int delta);
void sync__WaitGroup_done(sync__WaitGroup* wg);
void sync__WaitGroup_wait(sync__WaitGroup* wg);
vsdl__events__EventSystem* _const_vsdl__events__system; // inited later
static void vsdl__events__init();
void vsdl__events__add_watcher(chan_vsdl__events__Event ch, varg_vsdl__events__EventCategory flags);
chan_vsdl__events__Event vsdl__events__create_watcher(int cap, varg_vsdl__events__EventCategory flags);
u32 vsdl__events__get_delay();
void vsdl__events__loop();
int vsdl__events__poll_events(vsdl__events__Event* event);
bool vsdl__events__run();
void vsdl__events__set_delay(u32 delay);
void vsdl__events__quit();
static void vsdl__events__EventSystem_run(vsdl__events__EventSystem* system);
static void vsdl__events__trigger_event(string category, vsdl__events__Event event);
static void main__main();

// V gowrappers:
void* sync__process_in_thread_thread_wrapper(thread_arg_sync__process_in_thread *arg) {
	sync__process_in_thread(arg->arg1, arg->arg2);
	return 0;
}

// V option typedefs:
typedef struct {
			int  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_int;
typedef struct {
			vsdl__RWops*  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_vsdl__RWops_ptr;
typedef struct {
			vsdl__gfx__Cursor  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_vsdl__gfx__Cursor;
typedef struct {
			vsdl__gfx__Display  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_vsdl__gfx__Display;
typedef struct {
			vsdl__gfx__Surface*  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_vsdl__gfx__Surface_ptr;
typedef struct {
			vsdl__gfx__GLContext  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_vsdl__gfx__GLContext;
typedef struct {
			vsdl__gfx__Window  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_vsdl__gfx__Window;
typedef struct {
			void*  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_void;
typedef struct {
			vsdl__gfx__Texture  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_vsdl__gfx__Texture;
typedef struct {
			vsdl__gfx__Renderer  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_vsdl__gfx__Renderer;
typedef struct {
			vsdl__gfx__SDL_vulkanSurface  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_vsdl__gfx__SDL_vulkanSurface;
typedef struct {
			multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer;
typedef struct {
			vsdl__audio__AudioData*  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_vsdl__audio__AudioData_ptr;
typedef struct {
			time__Time  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_time__Time;
typedef struct {
			string  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_string;
typedef struct {
			array_byte  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_array_byte;
typedef struct {
			FILE*  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_FILE_ptr;
typedef struct {
			array_string  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_array_string;
typedef struct {
			bool  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_bool;
typedef struct {
			array_ustring  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_array_ustring;
typedef struct {
			os__File  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_os__File;
typedef struct {
			os__Result  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_os__Result;
typedef struct {
			vsdl__mixer__Chunk*  data;
			string error;
			int    ecode;
			bool   ok;
			bool   is_none;
		} Option2_vsdl__mixer__Chunk_ptr;

// V channel code:

static inline vsdl__events__Event __chan_vsdl__events__Event_popval(chan_vsdl__events__Event ch) {
	vsdl__events__Event val;
	sync__Channel_try_pop_priv(ch, &val, false);
	return val;
}

static inline void __chan_vsdl__events__Event_pushval(chan_vsdl__events__Event ch, vsdl__events__Event val) {
	sync__Channel_try_push_priv(ch, &val, false);
}

// V stringliterals:

// >> string literal consts
void vinit_string_literals(){
	_const_math__bits__overflow_error = tos_lit("Overflow Error");
	_const_math__bits__divide_error = tos_lit("Divide Error");
	_const_new_line_character = tos_lit("\n");
	_const_digit_pairs = tos_lit("00102030405060708090011121314151617181910212223242526272829203132333435363738393041424344454647484940515253545556575859506162636465666768696071727374757677787970818283848586878889809192939495969798999");
	_const_time__days_string = tos_lit("MonTueWedThuFriSatSun");
	_const_time__months_string = tos_lit("JanFebMarAprMayJunJulAugSepOctNovDec");
	_const_os__path_separator = tos_lit("\\");
	_const_os__path_delimiter = tos_lit(";");
	_const_rand__chars = tos_lit("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	_const_rand__ulid_encoding = tos_lit("0123456789ABCDEFGHJKMNPQRSTVWXYZ");
}
// << string literal consts


// V auto str functions:
string strings__Builder_str_no_ptr(strings__Builder it){ return strings__Builder_str(&it); }
string time__FormatTime_str(time__FormatTime it) { /* gen_str_for_enum */
	switch(it) {
		case time__FormatTime_hhmm12: return tos_lit("hhmm12");
		case time__FormatTime_hhmm24: return tos_lit("hhmm24");
		case time__FormatTime_hhmmss12: return tos_lit("hhmmss12");
		case time__FormatTime_hhmmss24: return tos_lit("hhmmss24");
		case time__FormatTime_hhmmss24_milli: return tos_lit("hhmmss24_milli");
		case time__FormatTime_hhmmss24_micro: return tos_lit("hhmmss24_micro");
		case time__FormatTime_no_time: return tos_lit("no_time");
		default: return tos_lit("unknown enum value");
	}
}
string time__FormatDate_str(time__FormatDate it) { /* gen_str_for_enum */
	switch(it) {
		case time__FormatDate_ddmmyy: return tos_lit("ddmmyy");
		case time__FormatDate_ddmmyyyy: return tos_lit("ddmmyyyy");
		case time__FormatDate_mmddyy: return tos_lit("mmddyy");
		case time__FormatDate_mmddyyyy: return tos_lit("mmddyyyy");
		case time__FormatDate_mmmd: return tos_lit("mmmd");
		case time__FormatDate_mmmdd: return tos_lit("mmmdd");
		case time__FormatDate_mmmddyyyy: return tos_lit("mmmddyyyy");
		case time__FormatDate_no_date: return tos_lit("no_date");
		case time__FormatDate_yyyymmdd: return tos_lit("yyyymmdd");
		default: return tos_lit("unknown enum value");
	}
}

// V out

// >> typeof() support for sum types
// << typeof() support for sum types


void _STR_PRINT_ARG(const char *fmt, char** refbufp, int *nbytes, int *memsize, int guess, ...) {
	va_list args;
	va_start(args, guess);
	// NB: (*memsize - *nbytes) === how much free space is left at the end of the current buffer refbufp
	// *memsize === total length of the buffer refbufp
	// *nbytes === already occupied bytes of buffer refbufp
	// guess === how many bytes were taken during the current vsnprintf run
	for(;;) {
		if (guess < *memsize - *nbytes) {
			guess = vsnprintf(*refbufp + *nbytes, *memsize - *nbytes, fmt, args);
			if (guess < *memsize - *nbytes) { // result did fit into buffer
				*nbytes += guess;
				break;
			}
		}
		// increase buffer (somewhat exponentially)
		*memsize += (*memsize + *memsize) / 3 + guess;
		*refbufp = (char*)realloc((void*)*refbufp, *memsize);
	}
	va_end(args);
}

string _STR(const char *fmt, int nfmts, ...) {
	va_list argptr;
	int memsize = 128;
	int nbytes = 0;
	char* buf = (char*)malloc(memsize);
	va_start(argptr, nfmts);
	for (int i=0; i<nfmts; ++i) {
		int k = strlen(fmt);
		bool is_fspec = false;
		for (int j=0; j<k; ++j) {
			if (fmt[j] == '%') {
				j++;
				if (fmt[j] != '%') {
					is_fspec = true;
					break;
				}
			}
		}
		if (is_fspec) {
			char f = fmt[k-1];
			char fup = f & 0xdf; // toupper
			bool l = fmt[k-2] == 'l';
			bool ll = l && fmt[k-3] == 'l';
			if (f == 'u' || fup == 'X' || f == 'o' || f == 'd' || f == 'c') { // int...
				if (ll) _STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k+16, va_arg(argptr, long long));
				else if (l) _STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k+10, va_arg(argptr, long));
				else _STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k+8, va_arg(argptr, int));
			} else if (fup >= 'E' && fup <= 'G') { // floating point
				_STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k+10, va_arg(argptr, double));
			} else if (f == 'p') {
				_STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k+14, va_arg(argptr, void*));
			} else if (f == 's') { // v string
				string s = va_arg(argptr, string);
				if (fmt[k-4] == '*') { // %*.*s
					int fwidth = va_arg(argptr, int);
					if (fwidth < 0)
						fwidth -= (s.len - utf8_str_visible_length(s));
					else
						fwidth += (s.len - utf8_str_visible_length(s));
					_STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k+s.len-4, fwidth, s.len, s.str);
				} else { // %.*s
					_STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k+s.len-4, s.len, s.str);
				}
			} else {
				//v_panic(tos3('Invaid format specifier'));
			}
		} else {
			_STR_PRINT_ARG(fmt, &buf, &nbytes, &memsize, k);
		}
		fmt += k+1;
	}
	va_end(argptr);
	buf[nbytes] = 0;
	buf = (char*)realloc((void*)buf, nbytes+1);
#ifdef DEBUG_ALLOC
	//puts('_STR:');
	puts(buf);
#endif
#if _VAUTOFREE
	//g_cur_str = (byteptr)buf;
#endif
	return tos2((byteptr)buf);
}

string _STR_TMP(const char *fmt, ...) {
	va_list argptr;
	va_start(argptr, fmt);
	size_t len = vsnprintf(0, 0, fmt, argptr) + 1;
	va_end(argptr);
	va_start(argptr, fmt);
	vsprintf((char *)g_str_buf, fmt, argptr);
	va_end(argptr);

#ifdef DEBUG_ALLOC
	//puts('_STR_TMP:');
	//puts(g_str_buf);
#endif
	string res = tos(g_str_buf,  len);
	res.is_lit = 1;
	return res;

} // endof _STR_TMP


strings__Builder strings__new_builder(int initial_size) {
	return (strings__Builder){.buf = __new_array_with_default(0, initial_size, sizeof(byte), 0),.str_calls = 0,.len = 0,.initial_size = initial_size,};
}

void strings__Builder_write_bytes(strings__Builder* b, byteptr bytes, int howmany) {
	array_push_many(&b->buf, bytes, howmany);
	b->len += howmany;
}

void strings__Builder_write_b(strings__Builder* b, byte data) {
	array_push(&b->buf, _MOV((byte[]){ data }));
	b->len++;
}

// Attr: [inline]
inline void strings__Builder_write(strings__Builder* b, string s) {
	if ((s).len == 0) {
		return;
	}
	array_push_many(&b->buf, s.str, s.len);
	b->len += s.len;
}

void strings__Builder_go_back(strings__Builder* b, int n) {
	array_trim(&b->buf, b->buf.len - n);
	b->len -= n;
}

static string strings__bytes2string(array_byte b) {
	array_byte copy = array_clone(&b);
	array_push(&copy, _MOV((byte[]){ ((byte)('\0')) }));
	string res = tos(copy.data, copy.len - 1);
	return res;
}

string strings__Builder_cut_last(strings__Builder* b, int n) {
	string res = strings__bytes2string(array_slice(b->buf, b->len - n, b->buf.len));
	array_trim(&b->buf, b->buf.len - n);
	b->len -= n;
	return res;
}

void strings__Builder_go_back_to(strings__Builder* b, int pos) {
	array_trim(&b->buf, pos);
	b->len = pos;
}

// Attr: [inline]
inline void strings__Builder_writeln(strings__Builder* b, string s) {
	array_push_many(&b->buf, s.str, s.len);
	array_push(&b->buf, _MOV((byte[]){ '\n' }));
	b->len += s.len + 1;
}

string strings__Builder_last_n(strings__Builder* b, int n) {
	if (n > b->len) {
		return tos_lit("");
	}
	return strings__bytes2string(array_slice(b->buf, b->len - n, b->buf.len));
}

string strings__Builder_after(strings__Builder* b, int n) {
	if (n >= b->len) {
		return tos_lit("");
	}
	return strings__bytes2string(array_slice(b->buf, n, b->buf.len));
}

string strings__Builder_str(strings__Builder* b) {
	b->str_calls++;
	if (b->str_calls > 1) {
		v_panic(string_add(tos_lit("builder.str() should be called just once.\n"), tos_lit("If you want to reuse a builder, call b.free() first.")));
	}
	array_push(&b->buf, _MOV((byte[]){ '\0' }));
	string s = tos(b->buf.data, b->len);
	int bis = b->initial_size;
	b->buf = __new_array_with_default(0, bis, sizeof(byte), 0);
	b->len = 0;
	return s;
}

void strings__Builder_free(strings__Builder* b) {
	v_free(b->buf.data);
	b->len = 0;
	b->str_calls = 0;
}

int strings__levenshtein_distance(string a, string b) {
	array_int f = array_repeat(new_array_from_c_array(1, 1, sizeof(int), _MOV((int[1]){0})), b.len + 1);
	for (int j = 0; j < f.len; ++j) {
		array_set(&f, j, &(int[]) { j });
	}
	for (int _t5 = 0; _t5 < a.len; ++_t5) {
		byte ca = a.str[_t5];
		int j = 1;
		int fj1 = (*(int*)array_get(f, 0));
		(*(int*)array_get(f, 0))++;
		for (int _t6 = 0; _t6 < b.len; ++_t6) {
			byte cb = b.str[_t6];
			int mn = ((*(int*)array_get(f, j)) + 1 <= (*(int*)array_get(f, j - 1)) + 1 ? ((*(int*)array_get(f, j)) + 1) : ((*(int*)array_get(f, j - 1)) + 1));
			if (cb != ca) {
				mn = (mn <= fj1 + 1 ? (mn) : (fj1 + 1));
			} else {
				mn = (mn <= fj1 ? (mn) : (fj1));
			}
			fj1 = (*(int*)array_get(f, j));
			array_set(&f, j, &(int[]) { mn });
			j++;
		}
	}
	return (*(int*)array_get(f, f.len - 1));
}

f32 strings__levenshtein_distance_percentage(string a, string b) {
	int d = strings__levenshtein_distance(a, b);
	int l = (a.len >= b.len ? (a.len) : (b.len));
	return (1.00 - ((f32)(d)) / ((f32)(l))) * 100.00;
}

f32 strings__dice_coefficient(string s1, string s2) {
	if (s1.len == 0 || s2.len == 0) {
		return 0.0;
	}
	if (string_eq(s1, s2)) {
		return 1.0;
	}
	if (s1.len < 2 || s2.len < 2) {
		return 0.0;
	}
	string a = (s1.len > s2.len ? (s1) : (s2));
	string b = (string_eq(a, s1) ? (s2) : (s1));
	map_string_int first_bigrams = new_map_1(sizeof(int));
	for (int i = 0; i < a.len - 1; ++i) {
		string bigram = string_substr(a, i, i + 2);
		int q = (_IN_MAP(bigram, first_bigrams) ? ((*(int*)map_get(first_bigrams, bigram, &(int[]){ 0 })) + 1) : (1));
		map_set(&first_bigrams, bigram, &(int[]) { q });
	}
	int intersection_size = 0;
	for (int i = 0; i < b.len - 1; ++i) {
		string bigram = string_substr(b, i, i + 2);
		int count = (_IN_MAP(bigram, first_bigrams) ? ((*(int*)map_get(first_bigrams, bigram, &(int[]){ 0 }))) : (0));
		if (count > 0) {
			map_set(&first_bigrams, bigram, &(int[]) { count - 1 });
			intersection_size++;
		}
	}
	return (2.0 * ((f32)(intersection_size))) / (((f32)(a.len)) + ((f32)(b.len)) - 2);
}

string strings__repeat(byte c, int n) {
	if (n <= 0) {
		return tos_lit("");
	}
	byteptr bytes = v_malloc(n + 1);
	{ // Unsafe block
		memset(bytes, c, n);
		bytes[n] = '0';
	}
	return byteptr_vstring_with_len(bytes, n);
}

string strings__repeat_string(string s, int n) {
	if (n <= 0 || s.len == 0) {
		return tos_lit("");
	}
	int slen = s.len;
	int blen = slen * n;
	byteptr bytes = v_malloc(blen + 1);
	for (int bi = 0; bi < n; ++bi) {
		int bislen = bi * slen;
		for (int si = 0; si < slen; ++si) {
			{ // Unsafe block
				bytes[bislen + si] = string_at(s, si);
			}
		}
	}
	{ // Unsafe block
		bytes[blen] = '0';
	}
	return byteptr_vstring_with_len(bytes, blen);
}

// Attr: [inline]
inline u64 hash__wyhash_c(byteptr key, u64 len, u64 seed) {
	return wyhash(key, len, seed);
}

// Attr: [inline]
inline u64 hash__sum64_string(string key, u64 seed) {
	return hash__wyhash64(key.str, ((u64)(key.len)), seed);
}

// Attr: [inline]
inline u64 hash__sum64(array_byte key, u64 seed) {
	return hash__wyhash64(((byteptr)(key.data)), ((u64)(key.len)), seed);
}

// Attr: [inline]
inline static u64 hash__wyhash64(byteptr key, u64 len, u64 seed_) {
	if (len == 0) {
		return 0;
	}
	byteptr p = key;
	u64 seed = seed_;
	u64 i = (len & 63);
	u64 _t7 = i;
		seed = ((_t7 <= 3)) ? (hash__wymum(((hash__wyr3(p, i) ^ seed) ^ _const_hash__wyp0), (seed ^ _const_hash__wyp1))) : ((_t7 >= 4 && _t7 <= 8)) ? (hash__wymum(((hash__wyr4(p) ^ seed) ^ _const_hash__wyp0), ((hash__wyr4(p + i - 4) ^ seed) ^ _const_hash__wyp1))) : ((_t7 >= 9 && _t7 <= 16)) ? (hash__wymum(((hash__wyr8(p) ^ seed) ^ _const_hash__wyp0), ((hash__wyr8(p + i - 8) ^ seed) ^ _const_hash__wyp1))) : ((_t7 >= 17 && _t7 <= 24)) ? ((hash__wymum(((hash__wyr8(p) ^ seed) ^ _const_hash__wyp0), ((hash__wyr8(p + 8) ^ seed) ^ _const_hash__wyp1)) ^ hash__wymum(((hash__wyr8(p + i - 8) ^ seed) ^ _const_hash__wyp2), (seed ^ _const_hash__wyp3)))) : ((_t7 >= 25 && _t7 <= 32)) ? ((hash__wymum(((hash__wyr8(p) ^ seed) ^ _const_hash__wyp0), ((hash__wyr8(p + 8) ^ seed) ^ _const_hash__wyp1)) ^ hash__wymum(((hash__wyr8(p + 16) ^ seed) ^ _const_hash__wyp2), ((hash__wyr8(p + i - 8) ^ seed) ^ _const_hash__wyp3)))) : ((((hash__wymum(((hash__wyr8(p) ^ seed) ^ _const_hash__wyp0), ((hash__wyr8(p + 8) ^ seed) ^ _const_hash__wyp1)) ^ hash__wymum(((hash__wyr8(p + 16) ^ seed) ^ _const_hash__wyp2), ((hash__wyr8(p + 24) ^ seed) ^ _const_hash__wyp3))) ^ hash__wymum(((hash__wyr8(p + i - 32) ^ seed) ^ _const_hash__wyp1), ((hash__wyr8(p + i - 24) ^ seed) ^ _const_hash__wyp2))) ^ hash__wymum(((hash__wyr8(p + i - 16) ^ seed) ^ _const_hash__wyp3), ((hash__wyr8(p + i - 8) ^ seed) ^ _const_hash__wyp0))));
	if (i == len) {
		return hash__wymum(seed, (len ^ _const_hash__wyp4));
	}
	u64 see1 = seed;
	u64 see2 = seed;
	u64 see3 = seed;
	{ // Unsafe block
		p = p + i;
		for (i = len - i; i >= 64; i -= 64) {
			seed = hash__wymum(((hash__wyr8(p) ^ seed) ^ _const_hash__wyp0), ((hash__wyr8(p + 8) ^ seed) ^ _const_hash__wyp1));
			see1 = hash__wymum(((hash__wyr8(p + 16) ^ see1) ^ _const_hash__wyp2), ((hash__wyr8(p + 24) ^ see1) ^ _const_hash__wyp3));
			see2 = hash__wymum(((hash__wyr8(p + 32) ^ see2) ^ _const_hash__wyp1), ((hash__wyr8(p + 40) ^ see2) ^ _const_hash__wyp2));
			see3 = hash__wymum(((hash__wyr8(p + 48) ^ see3) ^ _const_hash__wyp3), ((hash__wyr8(p + 56) ^ see3) ^ _const_hash__wyp0));
			p = p + 64;
		}
	}
	return hash__wymum(((seed ^ see1) ^ see2), ((see3 ^ len) ^ _const_hash__wyp4));
}

// Attr: [inline]
inline static u64 hash__wyrotr(u64 v, u32 k) {
	return ((v >> k) | (v << (64 - k)));
}

// Attr: [inline]
inline u64 hash__wymum(u64 a, u64 b) {
	u32 mask32 = ((u32)(4294967295U));
	u64 x0 = (a & mask32);
	u64 x1 = a >> 32;
	u64 y0 = (b & mask32);
	u64 y1 = b >> 32;
	u64 w0 = x0 * y0;
	u64 t = x1 * y0 + (w0 >> 32);
	u64 w1 = (t & mask32);
	u64 w2 = t >> 32;
	w1 += x0 * y1;
	u64 hi = x1 * y1 + w2 + (w1 >> 32);
	u64 lo = a * b;
	return (hi ^ lo);
}

// Attr: [inline]
inline static u64 hash__wyr3(byteptr p, u64 k) {
	{ // Unsafe block
		return (((((u64)(p[0])) << 16) | (((u64)(p[k >> 1])) << 8)) | ((u64)(p[k - 1])));
	}
}

// Attr: [inline]
inline static u64 hash__wyr4(byteptr p) {
	{ // Unsafe block
		return (((((u32)(p[0])) | (((u32)(p[1])) << ((u32)(8U)))) | (((u32)(p[2])) << ((u32)(16U)))) | (((u32)(p[3])) << ((u32)(24U))));
	}
}

// Attr: [inline]
inline static u64 hash__wyr8(byteptr p) {
	{ // Unsafe block
		return (((((((((u64)(p[0])) | (((u64)(p[1])) << 8)) | (((u64)(p[2])) << 16)) | (((u64)(p[3])) << 24)) | (((u64)(p[4])) << 32)) | (((u64)(p[5])) << 40)) | (((u64)(p[6])) << 48)) | (((u64)(p[7])) << 56));
	}
}

int math__bits__leading_zeros_8(byte x) {
	return 8 - math__bits__len_8(x);
}

int math__bits__leading_zeros_16(u16 x) {
	return 16 - math__bits__len_16(x);
}

int math__bits__leading_zeros_32(u32 x) {
	return 32 - math__bits__len_32(x);
}

int math__bits__leading_zeros_64(u64 x) {
	return 64 - math__bits__len_64(x);
}

int math__bits__trailing_zeros_8(byte x) {
	return ((int)((*(byte*)array_get(_const_math__bits__ntz_8_tab, x))));
}

int math__bits__trailing_zeros_16(u16 x) {
	if (x == 0) {
		return 16;
	}
	return ((int)((*(byte*)array_get(_const_math__bits__de_bruijn32tab, ((u32)((x & -x))) * _const_math__bits__de_bruijn32 >> (32 - 5)))));
}

int math__bits__trailing_zeros_32(u32 x) {
	if (x == 0) {
		return 32;
	}
	return ((int)((*(byte*)array_get(_const_math__bits__de_bruijn32tab, ((x & -x)) * _const_math__bits__de_bruijn32 >> (32 - 5)))));
}

int math__bits__trailing_zeros_64(u64 x) {
	if (x == 0) {
		return 64;
	}
	return ((int)((*(byte*)array_get(_const_math__bits__de_bruijn64tab, ((x & -x)) * _const_math__bits__de_bruijn64 >> (64 - 6)))));
}

int math__bits__ones_count_8(byte x) {
	return ((int)((*(byte*)array_get(_const_math__bits__pop_8_tab, x))));
}

int math__bits__ones_count_16(u16 x) {
	return ((int)((*(byte*)array_get(_const_math__bits__pop_8_tab, x >> 8)) + (*(byte*)array_get(_const_math__bits__pop_8_tab, (x & ((u16)(0xffU)))))));
}

int math__bits__ones_count_32(u32 x) {
	return ((int)((*(byte*)array_get(_const_math__bits__pop_8_tab, x >> 24)) + (*(byte*)array_get(_const_math__bits__pop_8_tab, (x >> 16 & 0xff))) + (*(byte*)array_get(_const_math__bits__pop_8_tab, (x >> 8 & 0xff))) + (*(byte*)array_get(_const_math__bits__pop_8_tab, (x & ((u32)(0xffU)))))));
}

int math__bits__ones_count_64(u64 x) {
	u64 y = ((x >> ((u64)(1U)) & ((_const_math__bits__m0 & _const_math__bits__max_u64)))) + ((x & ((_const_math__bits__m0 & _const_math__bits__max_u64))));
	y = ((y >> ((u64)(2U)) & ((_const_math__bits__m1 & _const_math__bits__max_u64)))) + ((y & ((_const_math__bits__m1 & _const_math__bits__max_u64))));
	y = (((y >> 4) + y) & ((_const_math__bits__m2 & _const_math__bits__max_u64)));
	y += y >> 8;
	y += y >> 16;
	y += y >> 32;
	return (((int)(y)) & ((1 << 7) - 1));
}

// Attr: [inline]
inline byte math__bits__rotate_left_8(byte x, int k) {
	byte n = ((byte)(8));
	byte s = (((byte)(k)) & (n - ((byte)(1))));
	return (((x << s) | (x >> (n - s))));
}

// Attr: [inline]
inline u16 math__bits__rotate_left_16(u16 x, int k) {
	u16 n = ((u16)(16U));
	u16 s = (((u16)(k)) & (n - ((u16)(1U))));
	return (((x << s) | (x >> (n - s))));
}

// Attr: [inline]
inline u32 math__bits__rotate_left_32(u32 x, int k) {
	u32 n = ((u32)(32U));
	u32 s = (((u32)(k)) & (n - ((u32)(1U))));
	return (((x << s) | (x >> (n - s))));
}

// Attr: [inline]
inline u64 math__bits__rotate_left_64(u64 x, int k) {
	u64 n = ((u64)(64U));
	u64 s = (((u64)(k)) & (n - ((u64)(1U))));
	return (((x << s) | (x >> (n - s))));
}

// Attr: [inline]
inline byte math__bits__reverse_8(byte x) {
	return (*(byte*)array_get(_const_math__bits__rev_8_tab, x));
}

// Attr: [inline]
inline u16 math__bits__reverse_16(u16 x) {
	return (((u16)((*(byte*)array_get(_const_math__bits__rev_8_tab, x >> 8)))) | (((u16)((*(byte*)array_get(_const_math__bits__rev_8_tab, (x & ((u16)(0xffU))))))) << 8));
}

// Attr: [inline]
inline u32 math__bits__reverse_32(u32 x) {
	u64 y = ((((x >> ((u32)(1U)) & ((_const_math__bits__m0 & _const_math__bits__max_u32)))) | (((x & ((_const_math__bits__m0 & _const_math__bits__max_u32)))) << 1)));
	y = ((((y >> ((u32)(2U)) & ((_const_math__bits__m1 & _const_math__bits__max_u32)))) | (((y & ((_const_math__bits__m1 & _const_math__bits__max_u32)))) << ((u32)(2U)))));
	y = ((((y >> ((u32)(4U)) & ((_const_math__bits__m2 & _const_math__bits__max_u32)))) | (((y & ((_const_math__bits__m2 & _const_math__bits__max_u32)))) << ((u32)(4U)))));
	return math__bits__reverse_bytes_32(((u32)(y)));
}

// Attr: [inline]
inline u64 math__bits__reverse_64(u64 x) {
	u64 y = ((((x >> ((u64)(1U)) & ((_const_math__bits__m0 & _const_math__bits__max_u64)))) | (((x & ((_const_math__bits__m0 & _const_math__bits__max_u64)))) << 1)));
	y = ((((y >> ((u64)(2U)) & ((_const_math__bits__m1 & _const_math__bits__max_u64)))) | (((y & ((_const_math__bits__m1 & _const_math__bits__max_u64)))) << 2)));
	y = ((((y >> ((u64)(4U)) & ((_const_math__bits__m2 & _const_math__bits__max_u64)))) | (((y & ((_const_math__bits__m2 & _const_math__bits__max_u64)))) << 4)));
	return math__bits__reverse_bytes_64(y);
}

// Attr: [inline]
inline u16 math__bits__reverse_bytes_16(u16 x) {
	return ((x >> 8) | (x << 8));
}

// Attr: [inline]
inline u32 math__bits__reverse_bytes_32(u32 x) {
	u64 y = ((((x >> ((u32)(8U)) & ((_const_math__bits__m3 & _const_math__bits__max_u32)))) | (((x & ((_const_math__bits__m3 & _const_math__bits__max_u32)))) << ((u32)(8U)))));
	return ((u32)(((y >> 16) | (y << 16))));
}

// Attr: [inline]
inline u64 math__bits__reverse_bytes_64(u64 x) {
	u64 y = ((((x >> ((u64)(8U)) & ((_const_math__bits__m3 & _const_math__bits__max_u64)))) | (((x & ((_const_math__bits__m3 & _const_math__bits__max_u64)))) << ((u64)(8U)))));
	y = ((((y >> ((u64)(16U)) & ((_const_math__bits__m4 & _const_math__bits__max_u64)))) | (((y & ((_const_math__bits__m4 & _const_math__bits__max_u64)))) << ((u64)(16U)))));
	return ((y >> 32) | (y << 32));
}

int math__bits__len_8(byte x) {
	return ((int)((*(byte*)array_get(_const_math__bits__len_8_tab, x))));
}

int math__bits__len_16(u16 x) {
	u16 y = x;
	int n = 0;
	if (y >= 1 << 8) {
		y >>= 8;
		n = 8;
	}
	return n + ((int)((*(byte*)array_get(_const_math__bits__len_8_tab, y))));
}

int math__bits__len_32(u32 x) {
	u32 y = x;
	int n = 0;
	if (y >= (1 << 16)) {
		y >>= 16;
		n = 16;
	}
	if (y >= (1 << 8)) {
		y >>= 8;
		n += 8;
	}
	return n + ((int)((*(byte*)array_get(_const_math__bits__len_8_tab, y))));
}

int math__bits__len_64(u64 x) {
	u64 y = x;
	int n = 0;
	if (y >= ((u64)(1U)) << ((u64)(32U))) {
		y >>= 32;
		n = 32;
	}
	if (y >= ((u64)(1U)) << ((u64)(16U))) {
		y >>= 16;
		n += 16;
	}
	if (y >= ((u64)(1U)) << ((u64)(8U))) {
		y >>= 8;
		n += 8;
	}
	return n + ((int)((*(byte*)array_get(_const_math__bits__len_8_tab, y))));
}

multi_return_u32_u32 math__bits__add_32(u32 x, u32 y, u32 carry) {
	u64 sum64 = ((u64)(x)) + ((u64)(y)) + ((u64)(carry));
	u32 sum = ((u32)(sum64));
	u32 carry_out = ((u32)(sum64 >> 32));
	return (multi_return_u32_u32){.arg0=sum, .arg1=carry_out};
}

multi_return_u64_u64 math__bits__add_64(u64 x, u64 y, u64 carry) {
	u64 sum = x + y + carry;
	u64 carry_out = ((((x & y)) | ((((x | y)) & ~sum)))) >> 63;
	return (multi_return_u64_u64){.arg0=sum, .arg1=carry_out};
}

multi_return_u32_u32 math__bits__sub_32(u32 x, u32 y, u32 borrow) {
	u32 diff = x - y - borrow;
	u32 borrow_out = ((((~x & y)) | ((~((x ^ y)) & diff)))) >> 31;
	return (multi_return_u32_u32){.arg0=diff, .arg1=borrow_out};
}

multi_return_u64_u64 math__bits__sub_64(u64 x, u64 y, u64 borrow) {
	u64 diff = x - y - borrow;
	u64 borrow_out = ((((~x & y)) | ((~((x ^ y)) & diff)))) >> 63;
	return (multi_return_u64_u64){.arg0=diff, .arg1=borrow_out};
}

multi_return_u32_u32 math__bits__mul_32(u32 x, u32 y) {
	u64 tmp = ((u64)(x)) * ((u64)(y));
	u32 hi = ((u32)(tmp >> 32));
	u32 lo = ((u32)(tmp));
	return (multi_return_u32_u32){.arg0=hi, .arg1=lo};
}

multi_return_u64_u64 math__bits__mul_64(u64 x, u64 y) {
	u64 x0 = (x & _const_math__bits__mask32);
	u64 x1 = x >> 32;
	u64 y0 = (y & _const_math__bits__mask32);
	u64 y1 = y >> 32;
	u64 w0 = x0 * y0;
	u64 t = x1 * y0 + (w0 >> 32);
	u64 w1 = (t & _const_math__bits__mask32);
	u64 w2 = t >> 32;
	w1 += x0 * y1;
	u64 hi = x1 * y1 + w2 + (w1 >> 32);
	u64 lo = x * y;
	return (multi_return_u64_u64){.arg0=hi, .arg1=lo};
}

multi_return_u32_u32 math__bits__div_32(u32 hi, u32 lo, u32 y) {
	if (y != 0 && y <= hi) {
		v_panic(_const_math__bits__overflow_error);
	}
	u64 z = ((((u64)(hi)) << 32) | ((u64)(lo)));
	u32 quo = ((u32)(z / ((u64)(y))));
	u32 rem = ((u32)(z % ((u64)(y))));
	return (multi_return_u32_u32){.arg0=quo, .arg1=rem};
}

multi_return_u64_u64 math__bits__div_64(u64 hi, u64 lo, u64 y1) {
	u64 y = y1;
	if (y == 0) {
		v_panic(_const_math__bits__overflow_error);
	}
	if (y <= hi) {
		v_panic(_const_math__bits__overflow_error);
	}
	u32 s = ((u32)(math__bits__leading_zeros_64(y)));
	y <<= s;
	u64 yn1 = y >> 32;
	u64 yn0 = (y & _const_math__bits__mask32);
	u64 un32 = ((hi << s) | (lo >> (64 - s)));
	u64 un10 = lo << s;
	u64 un1 = un10 >> 32;
	u64 un0 = (un10 & _const_math__bits__mask32);
	u64 q1 = un32 / yn1;
	u64 rhat = un32 - q1 * yn1;
	for (;;) {
		if (!(q1 >= _const_math__bits__two32 || q1 * yn0 > _const_math__bits__two32 * rhat + un1)) break;
		q1--;
		rhat += yn1;
		if (rhat >= _const_math__bits__two32) {
			break;
		}
	}
	u64 un21 = un32 * _const_math__bits__two32 + un1 - q1 * y;
	u64 q0 = un21 / yn1;
	rhat = un21 - q0 * yn1;
	for (;;) {
		if (!(q0 >= _const_math__bits__two32 || q0 * yn0 > _const_math__bits__two32 * rhat + un0)) break;
		q0--;
		rhat += yn1;
		if (rhat >= _const_math__bits__two32) {
			break;
		}
	}
	return (multi_return_u64_u64){.arg0=q1 * _const_math__bits__two32 + q0, .arg1=(un21 * _const_math__bits__two32 + un0 - q0 * y) >> s};
}

u32 math__bits__rem_32(u32 hi, u32 lo, u32 y) {
	return ((u32)((((((u64)(hi)) << 32) | ((u64)(lo)))) % ((u64)(y))));
}

u64 math__bits__rem_64(u64 hi, u64 lo, u64 y) {
	multi_return_u64_u64 mr_15086 = math__bits__div_64(hi % y, lo, y);
	u64 rem = mr_15086.arg1;
	return rem;
}

static multi_return_u32_u32_u32 strconv__lsr96(u32 s2, u32 s1, u32 s0) {
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	r0 = ((s0 >> 1) | (((s1 & ((u32)(1U)))) << 31));
	r1 = ((s1 >> 1) | (((s2 & ((u32)(1U)))) << 31));
	r2 = s2 >> 1;
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

static multi_return_u32_u32_u32 strconv__lsl96(u32 s2, u32 s1, u32 s0) {
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	r2 = ((s2 << 1) | (((s1 & (((u32)(1U)) << 31))) >> 31));
	r1 = ((s1 << 1) | (((s0 & (((u32)(1U)) << 31))) >> 31));
	r0 = s0 << 1;
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

static multi_return_u32_u32_u32 strconv__add96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0) {
	u64 w = ((u64)(0U));
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	w = ((u64)(s0)) + ((u64)(d0));
	r0 = ((u32)(w));
	w >>= 32;
	w += ((u64)(s1)) + ((u64)(d1));
	r1 = ((u32)(w));
	w >>= 32;
	w += ((u64)(s2)) + ((u64)(d2));
	r2 = ((u32)(w));
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

static multi_return_u32_u32_u32 strconv__sub96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0) {
	u64 w = ((u64)(0U));
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	w = ((u64)(s0)) - ((u64)(d0));
	r0 = ((u32)(w));
	w >>= 32;
	w += ((u64)(s1)) - ((u64)(d1));
	r1 = ((u32)(w));
	w >>= 32;
	w += ((u64)(s2)) - ((u64)(d2));
	r2 = ((u32)(w));
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

static bool strconv__is_digit(byte x) {
	return (x >= _const_strconv__c_zero && x <= _const_strconv__c_nine) == true;
}

static bool strconv__is_space(byte x) {
	return (x == '\t' || x == '\n' || x == '\v' || x == '\f' || x == '\r' || x == ' ');
}

static bool strconv__is_exp(byte x) {
	return (x == 'E' || x == 'e') == true;
}

static multi_return_int_strconv__PrepNumber strconv__parser(string s) {
	int state = _const_strconv__fsm_a;
	int digx = 0;
	byte c = ((byte)(' '));
	int result = _const_strconv__parser_ok;
	bool expneg = false;
	int expexp = 0;
	int i = 0;
	strconv__PrepNumber pn = (strconv__PrepNumber){.negative = 0,.exponent = 0,.mantissa = 0,};
	for (;;) {
		if (!(state != _const_strconv__fsm_stop)) break;
		int _t8 = state;
		if (_t8 == _const_strconv__fsm_a) {
			if (strconv__is_space(c) == true) {
				c = string_at(s, i);
				i++;
			} else {
				state = _const_strconv__fsm_b;
			}
		} else if (_t8 == _const_strconv__fsm_b) {
			state = _const_strconv__fsm_c;
			if (c == _const_strconv__c_plus) {
				c = string_at(s, i);
				i++;
			} else if (c == _const_strconv__c_minus) {
				pn.negative = true;
				c = string_at(s, i);
				i++;
			} else if (strconv__is_digit(c)) {
			} else if (c == _const_strconv__c_dpoint) {
			} else {
				state = _const_strconv__fsm_stop;
			}
		} else if (_t8 == _const_strconv__fsm_c) {
			if (c == _const_strconv__c_zero) {
				c = string_at(s, i++);
			} else if (c == _const_strconv__c_dpoint) {
				c = string_at(s, i++);
				state = _const_strconv__fsm_d;
			} else {
				state = _const_strconv__fsm_e;
			}
		} else if (_t8 == _const_strconv__fsm_d) {
			if (c == _const_strconv__c_zero) {
				c = string_at(s, i++);
				if (pn.exponent > -2147483647) {
					pn.exponent--;
				}
			} else {
				state = _const_strconv__fsm_f;
			}
		} else if (_t8 == _const_strconv__fsm_e) {
			if (strconv__is_digit(c)) {
				if (digx < _const_strconv__digits) {
					pn.mantissa *= 10;
					pn.mantissa += ((u64)(c - _const_strconv__c_zero));
					digx++;
				} else if (pn.exponent < 2147483647) {
					pn.exponent++;
				}
				c = string_at(s, i++);
			} else if (c == _const_strconv__c_dpoint) {
				c = string_at(s, i++);
				state = _const_strconv__fsm_f;
			} else {
				state = _const_strconv__fsm_f;
			}
		} else if (_t8 == _const_strconv__fsm_f) {
			if (strconv__is_digit(c)) {
				if (digx < _const_strconv__digits) {
					pn.mantissa *= 10;
					pn.mantissa += ((u64)(c - _const_strconv__c_zero));
					pn.exponent--;
					digx++;
				}
				c = string_at(s, i++);
			} else if (strconv__is_exp(c)) {
				c = string_at(s, i++);
				state = _const_strconv__fsm_g;
			} else {
				state = _const_strconv__fsm_g;
			}
		} else if (_t8 == _const_strconv__fsm_g) {
			if (c == _const_strconv__c_plus) {
				c = string_at(s, i++);
			} else if (c == _const_strconv__c_minus) {
				expneg = true;
				c = string_at(s, i++);
			}
			state = _const_strconv__fsm_h;
		} else if (_t8 == _const_strconv__fsm_h) {
			if (c == _const_strconv__c_zero) {
				c = string_at(s, i++);
			} else {
				state = _const_strconv__fsm_i;
			}
		} else if (_t8 == _const_strconv__fsm_i) {
			if (strconv__is_digit(c)) {
				if (expexp < 214748364) {
					expexp *= 10;
					expexp += ((int)(c - _const_strconv__c_zero));
				}
				c = string_at(s, i++);
			} else {
				state = _const_strconv__fsm_stop;
			}
		} else {
		};
		if (i >= s.len) {
			state = _const_strconv__fsm_stop;
		}
	}
	if (expneg) {
		expexp = -expexp;
	}
	pn.exponent += expexp;
	if (pn.mantissa == 0) {
		if (pn.negative) {
			result = _const_strconv__parser_mzero;
		} else {
			result = _const_strconv__parser_pzero;
		}
	} else if (pn.exponent > 309) {
		if (pn.negative) {
			result = _const_strconv__parser_minf;
		} else {
			result = _const_strconv__parser_pinf;
		}
	} else if (pn.exponent < -328) {
		if (pn.negative) {
			result = _const_strconv__parser_mzero;
		} else {
			result = _const_strconv__parser_pzero;
		}
	}
	return (multi_return_int_strconv__PrepNumber){.arg0=result, .arg1=pn};
}

static u64 strconv__converter(strconv__PrepNumber* pn) {
	int binexp = 92;
	u32 s2 = ((u32)(0U));
	u32 s1 = ((u32)(0U));
	u32 s0 = ((u32)(0U));
	u32 q2 = ((u32)(0U));
	u32 q1 = ((u32)(0U));
	u32 q0 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r0 = ((u32)(0U));
	u32 mask28 = ((u32)(0xF << 28));
	u64 result = ((u64)(0U));
	s0 = ((u32)((pn->mantissa & ((u64)(0x00000000FFFFFFFFU)))));
	s1 = ((u32)(pn->mantissa >> 32));
	s2 = ((u32)(0U));
	for (;;) {
		if (!(pn->exponent > 0)) break;
		multi_return_u32_u32_u32 mr_6953 = strconv__lsl96(s2, s1, s0);
		q2 = mr_6953.arg0;
		q1 = mr_6953.arg1;
		q0 = mr_6953.arg2;
		multi_return_u32_u32_u32 mr_6997 = strconv__lsl96(q2, q1, q0);
		r2 = mr_6997.arg0;
		r1 = mr_6997.arg1;
		r0 = mr_6997.arg2;
		multi_return_u32_u32_u32 mr_7051 = strconv__lsl96(r2, r1, r0);
		s2 = mr_7051.arg0;
		s1 = mr_7051.arg1;
		s0 = mr_7051.arg2;
		multi_return_u32_u32_u32 mr_7105 = strconv__add96(s2, s1, s0, q2, q1, q0);
		s2 = mr_7105.arg0;
		s1 = mr_7105.arg1;
		s0 = mr_7105.arg2;
		pn->exponent--;
		for (;;) {
			if (!(((s2 & mask28)) != 0)) break;
			multi_return_u32_u32_u32 mr_7226 = strconv__lsr96(s2, s1, s0);
			q2 = mr_7226.arg0;
			q1 = mr_7226.arg1;
			q0 = mr_7226.arg2;
			binexp++;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	for (;;) {
		if (!(pn->exponent < 0)) break;
		for (;;) {
			if (!(!(((s2 & (((u32)(1U)) << 31))) != 0))) break;
			multi_return_u32_u32_u32 mr_7369 = strconv__lsl96(s2, s1, s0);
			q2 = mr_7369.arg0;
			q1 = mr_7369.arg1;
			q0 = mr_7369.arg2;
			binexp--;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
		q2 = s2 / _const_strconv__c_ten;
		r1 = s2 % _const_strconv__c_ten;
		r2 = ((s1 >> 8) | (r1 << 24));
		q1 = r2 / _const_strconv__c_ten;
		r1 = r2 % _const_strconv__c_ten;
		r2 = (((((s1 & ((u32)(0xFFU)))) << 16) | (s0 >> 16)) | (r1 << 24));
		r0 = r2 / _const_strconv__c_ten;
		r1 = r2 % _const_strconv__c_ten;
		q1 = ((q1 << 8) | (((r0 & ((u32)(0x00FF0000U)))) >> 16));
		q0 = r0 << 16;
		r2 = (((s0 & ((u32)(0xFFFFU)))) | (r1 << 16));
		q0 |= r2 / _const_strconv__c_ten;
		s2 = q2;
		s1 = q1;
		s0 = q0;
		pn->exponent++;
	}
	if (s2 != 0 || s1 != 0 || s0 != 0) {
		for (;;) {
			if (!(((s2 & mask28)) == 0)) break;
			multi_return_u32_u32_u32 mr_8028 = strconv__lsl96(s2, s1, s0);
			q2 = mr_8028.arg0;
			q1 = mr_8028.arg1;
			q0 = mr_8028.arg2;
			binexp--;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	int nbit = 7;
	u32 check_round_bit = ((u32)(1U)) << ((u32)(nbit));
	u32 check_round_mask = ((u32)(0xFFFFFFFFU)) << ((u32)(nbit));
	if (((s1 & check_round_bit)) != 0) {
		if (((s1 & ~check_round_mask)) != 0) {
			multi_return_u32_u32_u32 mr_9101 = strconv__add96(s2, s1, s0, 0, check_round_bit, 0);
			s2 = mr_9101.arg0;
			s1 = mr_9101.arg1;
			s0 = mr_9101.arg2;
		} else {
			if (((s1 & (check_round_bit << ((u32)(1U))))) != 0) {
				multi_return_u32_u32_u32 mr_9291 = strconv__add96(s2, s1, s0, 0, check_round_bit, 0);
				s2 = mr_9291.arg0;
				s1 = mr_9291.arg1;
				s0 = mr_9291.arg2;
			}
		}
		s1 = (s1 & check_round_mask);
		s0 = ((u32)(0U));
		if ((s2 & (mask28 << ((u32)(1U)))) != 0) {
			multi_return_u32_u32_u32 mr_9491 = strconv__lsr96(s2, s1, s0);
			q2 = mr_9491.arg0;
			q1 = mr_9491.arg1;
			q0 = mr_9491.arg2;
			binexp--;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	binexp += 1023;
	if (binexp > 2046) {
		if (pn->negative) {
			result = _const_strconv__double_minus_infinity;
		} else {
			result = _const_strconv__double_plus_infinity;
		}
	} else if (binexp < 1) {
		if (pn->negative) {
			result = _const_strconv__double_minus_zero;
		} else {
			result = _const_strconv__double_plus_zero;
		}
	} else if (s2 != 0) {
		u64 q = ((u64)(0U));
		u64 binexs2 = ((u64)(binexp)) << 52;
		q = (((((u64)((s2 & ~mask28))) << 24) | ((((u64)(s1)) + ((u64)(128U))) >> 8)) | binexs2);
		if (pn->negative) {
			q |= (((u64)(1U)) << 63);
		}
		result = q;
	}
	return result;
}

f64 strconv__atof64(string s) {
	strconv__PrepNumber pn = (strconv__PrepNumber){.negative = 0,.exponent = 0,.mantissa = 0,};
	int res_parsing = 0;
	strconv__Float64u res = (strconv__Float64u){
#ifndef __cplusplus
0
#endif
};
	multi_return_int_strconv__PrepNumber mr_10496 = strconv__parser(string_add(s, tos_lit(" ")));
	res_parsing = mr_10496.arg0;
	pn = mr_10496.arg1;
	int _t9 = res_parsing;
	if (_t9 == _const_strconv__parser_ok) {
		res.u = strconv__converter((voidptr)&/*qq*/pn);
	} else if (_t9 == _const_strconv__parser_pzero) {
		res.u = _const_strconv__double_plus_zero;
	} else if (_t9 == _const_strconv__parser_mzero) {
		res.u = _const_strconv__double_minus_zero;
	} else if (_t9 == _const_strconv__parser_pinf) {
		res.u = _const_strconv__double_plus_infinity;
	} else if (_t9 == _const_strconv__parser_minf) {
		res.u = _const_strconv__double_minus_infinity;
	} else {
	};
	return res.f;
}

f64 strconv__atof_quick(string s) {
	strconv__Float64u f = (strconv__Float64u){
#ifndef __cplusplus
0
#endif
};
	f64 sign = ((f64)(1.0));
	int i = 0;
	for (;;) {
		if (!(i < s.len && string_at(s, i) == ' ')) break;
		i++;
	}
	if (i < s.len) {
		if (string_at(s, i) == '-') {
			sign = -1.0;
			i++;
		} else if (string_at(s, i) == '+') {
			i++;
		}
	}
	if (string_at(s, i) == 'i' && i + 2 < s.len && string_at(s, i + 1) == 'n' && string_at(s, i + 2) == 'f') {
		if (sign > 0.0) {
			f.u = _const_strconv__double_plus_infinity;
		} else {
			f.u = _const_strconv__double_minus_infinity;
		}
		return f.f;
	}
	for (;;) {
		if (!(i < s.len && string_at(s, i) == '0')) break;
		i++;
		if (i >= s.len) {
			if (sign > 0.0) {
				f.u = _const_strconv__double_plus_zero;
			} else {
				f.u = _const_strconv__double_minus_zero;
			}
			return f.f;
		}
	}
	for (;;) {
		if (!(i < s.len && (string_at(s, i) >= '0' && string_at(s, i) <= '9'))) break;
		f.f *= ((f64)(10.0));
		f.f += ((f64)(string_at(s, i) - '0'));
		i++;
	}
	if (i < s.len && string_at(s, i) == '.') {
		i++;
		f64 frac_mul = ((f64)(0.1));
		for (;;) {
			if (!(i < s.len && (string_at(s, i) >= '0' && string_at(s, i) <= '9'))) break;
			f.f += ((f64)(string_at(s, i) - '0')) * frac_mul;
			frac_mul *= ((f64)(0.1));
			i++;
		}
	}
	if (i < s.len && (string_at(s, i) == 'e' || string_at(s, i) == 'E')) {
		i++;
		int exp = 0;
		int exp_sign = 1;
		if (i < s.len) {
			if (string_at(s, i) == '-') {
				exp_sign = -1;
				i++;
			} else if (string_at(s, i) == '+') {
				i++;
			}
		}
		for (;;) {
			if (!(i < s.len && string_at(s, i) == '0')) break;
			i++;
		}
		for (;;) {
			if (!(i < s.len && (string_at(s, i) >= '0' && string_at(s, i) <= '9'))) break;
			exp *= 10;
			exp += ((int)(string_at(s, i) - '0'));
			i++;
		}
		if (exp_sign == 1) {
			if (exp > _const_strconv__pos_exp.len) {
				if (sign > 0) {
					f.u = _const_strconv__double_plus_infinity;
				} else {
					f.u = _const_strconv__double_minus_infinity;
				}
				return f.f;
			}
			strconv__Float64u tmp_mul = (strconv__Float64u){.u = (*(u64*)array_get(_const_strconv__pos_exp, exp)),};
			f.f = f.f * tmp_mul.f;
		} else {
			if (exp > _const_strconv__neg_exp.len) {
				if (sign > 0) {
					f.u = _const_strconv__double_plus_zero;
				} else {
					f.u = _const_strconv__double_minus_zero;
				}
				return f.f;
			}
			strconv__Float64u tmp_mul = (strconv__Float64u){.u = (*(u64*)array_get(_const_strconv__neg_exp, exp)),};
			f.f = f.f * tmp_mul.f;
		}
	}
	f.f = f.f * sign;
	return f.f;
}

byte strconv__byte_to_lower(byte c) {
	return (c | ('x' - 'X'));
}

u64 strconv__common_parse_uint(string s, int _base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit) {
	multi_return_u64_int mr_816 = strconv__common_parse_uint2(s, _base, _bit_size);
	u64 result = mr_816.arg0;
	int v_error = mr_816.arg1;
	if (v_error != 0) {
		if (v_error > 0 && (error_on_non_digit || error_on_high_digit)) {
			return ((u64)(0U));
		}
	}
	return result;
}

multi_return_u64_int strconv__common_parse_uint2(string s, int _base, int _bit_size) {
	int bit_size = _bit_size;
	int base = _base;
	if (s.len < 1 || !strconv__underscore_ok(s)) {
		return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=1};
	}
	bool base0 = base == 0;
	int start_index = 0;
	if (2 <= base && base <= 36) {
	} else if (base == 0) {
		base = 10;
		if (string_at(s, 0) == '0') {
			if (s.len >= 3 && strconv__byte_to_lower(string_at(s, 1)) == 'b') {
				base = 2;
				start_index += 2;
			} else if (s.len >= 3 && strconv__byte_to_lower(string_at(s, 1)) == 'o') {
				base = 8;
				start_index += 2;
			} else if (s.len >= 3 && strconv__byte_to_lower(string_at(s, 1)) == 'x') {
				base = 16;
				start_index += 2;
			} else if (s.len >= 2 && (string_at(s, 1) >= '0' && string_at(s, 1) <= '9')) {
				base = 10;
				start_index++;
			} else {
				base = 8;
				start_index++;
			}
		}
	} else {
		return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=-1};
	}
	if (bit_size == 0) {
		bit_size = _const_strconv__int_size;
	} else if (bit_size < 0 || bit_size > 64) {
		return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=-2};
	}
	u64 cutoff = _const_strconv__max_u64 / ((u64)(base)) + ((u64)(1U));
	u64 max_val = (bit_size == 64 ? (_const_strconv__max_u64) : ((((u64)(1U)) << ((u64)(bit_size))) - ((u64)(1U))));
	bool underscores = false;
	u64 n = ((u64)(0U));
	for (int i = start_index; i < s.len; ++i) {
		byte c = string_at(s, i);
		byte cl = strconv__byte_to_lower(c);
		byte d = ((byte)(0));
		if (c == '_' && base0) {
			underscores = true;
			continue;
		} else if ('0' <= c && c <= '9') {
			d = c - '0';
		} else if ('a' <= cl && cl <= 'z') {
			d = cl - 'a' + 10;
		} else {
			return (multi_return_u64_int){.arg0=n, .arg1=i + 1};
		}
		if (d >= ((byte)(base))) {
			return (multi_return_u64_int){.arg0=n, .arg1=i + 1};
		}
		if (n >= cutoff) {
			return (multi_return_u64_int){.arg0=max_val, .arg1=-3};
		}
		n *= ((u64)(base));
		u64 n1 = n + ((u64)(d));
		if (n1 < n || n1 > max_val) {
			return (multi_return_u64_int){.arg0=max_val, .arg1=-3};
		}
		n = n1;
	}
	return (multi_return_u64_int){.arg0=n, .arg1=0};
}

u64 strconv__parse_uint(string s, int _base, int _bit_size) {
	return strconv__common_parse_uint(s, _base, _bit_size, true, true);
}

i64 strconv__common_parse_int(string _s, int base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit) {
	string s = _s;
	int bit_size = _bit_size;
	if (s.len < 1) {
		return ((i64)(0));
	}
	bool neg = false;
	if (string_at(s, 0) == '+') {
		s = string_substr(s, 1, s.len);
	} else if (string_at(s, 0) == '-') {
		neg = true;
		s = string_substr(s, 1, s.len);
	}
	u64 un = strconv__common_parse_uint(s, base, bit_size, error_on_non_digit, error_on_high_digit);
	if (un == 0) {
		return ((i64)(0));
	}
	if (bit_size == 0) {
		bit_size = _const_strconv__int_size;
	}
	u64 cutoff = ((u64)(1U)) << ((u64)(bit_size - 1));
	if (!neg && un >= cutoff) {
		return ((i64)(cutoff - ((u64)(1U))));
	}
	if (neg && un > cutoff) {
		return -((i64)(cutoff));
	}
	return (neg ? (-((i64)(un))) : (((i64)(un))));
}

i64 strconv__parse_int(string _s, int base, int _bit_size) {
	return strconv__common_parse_int(_s, base, _bit_size, true, true);
}

int strconv__atoi(string s) {
	if ((_const_strconv__int_size == 32 && (0 < s.len && s.len < 10)) || (_const_strconv__int_size == 64 && (0 < s.len && s.len < 19))) {
		int start_idx = 0;
		if (string_at(s, 0) == '-' || string_at(s, 0) == '+') {
			start_idx++;
			if (s.len - start_idx < 1) {
				return 0;
			}
		}
		int n = 0;
		for (int i = start_idx; i < s.len; ++i) {
			rune ch = string_at(s, i) - '0';
			if (ch > 9) {
				return 0;
			}
			n = n * 10 + ((int)(ch));
		}
		return (string_at(s, 0) == '-' ? (-n) : (n));
	}
	i64 int64 = strconv__parse_int(s, 10, 0);
	return ((int)(int64));
}

static bool strconv__underscore_ok(string s) {
	rune saw = '^';
	int i = 0;
	if (s.len >= 1 && (string_at(s, 0) == '-' || string_at(s, 0) == '+')) {
		i++;
	}
	bool hex = false;
	if (s.len - i >= 2 && string_at(s, i) == '0' && (strconv__byte_to_lower(string_at(s, i + 1)) == 'b' || strconv__byte_to_lower(string_at(s, i + 1)) == 'o' || strconv__byte_to_lower(string_at(s, i + 1)) == 'x')) {
		saw = '0';
		hex = strconv__byte_to_lower(string_at(s, i + 1)) == 'x';
		i += 2;
	}
	for (; i < s.len; i++) {
		if (('0' <= string_at(s, i) && string_at(s, i) <= '9') || (hex && 'a' <= strconv__byte_to_lower(string_at(s, i)) && strconv__byte_to_lower(string_at(s, i)) <= 'f')) {
			saw = '0';
			continue;
		}
		if (string_at(s, i) == '_') {
			if (saw != '0') {
				return false;
			}
			saw = '_';
			continue;
		}
		if (saw == '_') {
			return false;
		}
		saw = '!';
	}
	return saw != '_';
}

string strconv__Dec32_get_string_32(strconv__Dec32 d, bool neg, int i_n_digit, int i_pad_digit) {
	int n_digit = i_n_digit + 1;
	int pad_digit = i_pad_digit + 1;
	u32 out = d.m;
	int out_len = strconv__decimal_len_32(out);
	int out_len_original = out_len;
	int fw_zeros = 0;
	if (pad_digit > out_len) {
		fw_zeros = pad_digit - out_len;
	}
	array_byte buf = __new_array_with_default(((int)(out_len + 5 + 1 + 1)), 0, sizeof(byte), 0);
	int i = 0;
	if (neg) {
		array_set(&buf, i, &(byte[]) { '-' });
		i++;
	}
	int disp = 0;
	if (out_len <= 1) {
		disp = 1;
	}
	if (n_digit < out_len) {
		out += (*(u32*)array_get(_const_strconv__ten_pow_table_32, out_len - n_digit - 1)) * 5;
		out /= (*(u32*)array_get(_const_strconv__ten_pow_table_32, out_len - n_digit));
		out_len = n_digit;
	}
	int y = i + out_len;
	int x = 0;
	for (;;) {
		if (!(x < (out_len - disp - 1))) break;
		array_set(&buf, y - x, &(byte[]) { '0' + ((byte)(out % 10)) });
		out /= 10;
		i++;
		x++;
	}
	if (out_len >= 1) {
		array_set(&buf, y - x, &(byte[]) { '.' });
		x++;
		i++;
	}
	if (y - x >= 0) {
		array_set(&buf, y - x, &(byte[]) { '0' + ((byte)(out % 10)) });
		i++;
	}
	for (;;) {
		if (!(fw_zeros > 0)) break;
		array_set(&buf, i++, &(byte[]) { '0' });
		fw_zeros--;
	}
	array_set(&buf, i, &(byte[]) { 'e' });
	i++;
	int exp = d.e + out_len_original - 1;
	if (exp < 0) {
		array_set(&buf, i, &(byte[]) { '-' });
		i++;
		exp = -exp;
	} else {
		array_set(&buf, i, &(byte[]) { '+' });
		i++;
	}
	int d1 = exp % 10;
	int d0 = exp / 10;
	array_set(&buf, i, &(byte[]) { '0' + ((byte)(d0)) });
	i++;
	array_set(&buf, i, &(byte[]) { '0' + ((byte)(d1)) });
	i++;
	array_set(&buf, i, &(byte[]) { 0 });
	return tos(((byteptr)(&(*(byte*)array_get(buf, 0)))), i);
}

static multi_return_strconv__Dec32_bool strconv__f32_to_decimal_exact_int(u32 i_mant, u32 exp) {
	strconv__Dec32 d = (strconv__Dec32){.m = 0,.e = 0,};
	u32 e = exp - _const_strconv__bias32;
	if (e > _const_strconv__mantbits32) {
		return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=false};
	}
	u32 shift = _const_strconv__mantbits32 - e;
	u32 mant = (i_mant | 0x00800000);
	d.m = mant >> shift;
	if ((d.m << shift) != mant) {
		return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=false};
	}
	for (;;) {
		if (!((d.m % 10) == 0)) break;
		d.m /= 10;
		d.e++;
	}
	return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=true};
}

strconv__Dec32 strconv__f32_to_decimal(u32 mant, u32 exp) {
	int e2 = 0;
	u32 m2 = ((u32)(0U));
	if (exp == 0) {
		e2 = 1 - _const_strconv__bias32 - ((int)(_const_strconv__mantbits32)) - 2;
		m2 = mant;
	} else {
		e2 = ((int)(exp)) - _const_strconv__bias32 - ((int)(_const_strconv__mantbits32)) - 2;
		m2 = ((((u32)(1U)) << _const_strconv__mantbits32) | mant);
	}
	bool even = ((m2 & 1)) == 0;
	bool accept_bounds = even;
	u32 mv = ((u32)(4 * m2));
	u32 mp = ((u32)(4 * m2 + 2));
	u32 mm_shift = strconv__bool_to_u32(mant != 0 || exp <= 1);
	u32 mm = ((u32)(4 * m2 - 1 - mm_shift));
	u32 vr = ((u32)(0U));
	u32 vp = ((u32)(0U));
	u32 vm = ((u32)(0U));
	int e10 = 0;
	bool vm_is_trailing_zeros = false;
	bool vr_is_trailing_zeros = false;
	byte last_removed_digit = ((byte)(0));
	if (e2 >= 0) {
		u32 q = strconv__log10_pow2(e2);
		e10 = ((int)(q));
		int k = _const_strconv__pow5_inv_num_bits_32 + strconv__pow5_bits(((int)(q))) - 1;
		int i = -e2 + ((int)(q)) + k;
		vr = strconv__mul_pow5_invdiv_pow2(mv, q, i);
		vp = strconv__mul_pow5_invdiv_pow2(mp, q, i);
		vm = strconv__mul_pow5_invdiv_pow2(mm, q, i);
		if (q != 0 && (vp - 1) / 10 <= vm / 10) {
			int l = _const_strconv__pow5_inv_num_bits_32 + strconv__pow5_bits(((int)(q - 1))) - 1;
			last_removed_digit = ((byte)(strconv__mul_pow5_invdiv_pow2(mv, q - 1, -e2 + ((int)(q - 1)) + l) % 10));
		}
		if (q <= 9) {
			if (mv % 5 == 0) {
				vr_is_trailing_zeros = strconv__multiple_of_power_of_five_32(mv, q);
			} else if (accept_bounds) {
				vm_is_trailing_zeros = strconv__multiple_of_power_of_five_32(mm, q);
			} else if (strconv__multiple_of_power_of_five_32(mp, q)) {
				vp--;
			}
		}
	} else {
		u32 q = strconv__log10_pow5(-e2);
		e10 = ((int)(q)) + e2;
		int i = -e2 - ((int)(q));
		int k = strconv__pow5_bits(i) - _const_strconv__pow5_num_bits_32;
		int j = ((int)(q)) - k;
		vr = strconv__mul_pow5_div_pow2(mv, ((u32)(i)), j);
		vp = strconv__mul_pow5_div_pow2(mp, ((u32)(i)), j);
		vm = strconv__mul_pow5_div_pow2(mm, ((u32)(i)), j);
		if (q != 0 && ((vp - 1) / 10) <= vm / 10) {
			j = ((int)(q)) - 1 - (strconv__pow5_bits(i + 1) - _const_strconv__pow5_num_bits_32);
			last_removed_digit = ((byte)(strconv__mul_pow5_div_pow2(mv, ((u32)(i + 1)), j) % 10));
		}
		if (q <= 1) {
			vr_is_trailing_zeros = true;
			if (accept_bounds) {
				vm_is_trailing_zeros = mm_shift == 1;
			} else {
				vp--;
			}
		} else if (q < 31) {
			vr_is_trailing_zeros = strconv__multiple_of_power_of_two_32(mv, q - 1);
		}
	}
	int removed = 0;
	u32 out = ((u32)(0U));
	if (vm_is_trailing_zeros || vr_is_trailing_zeros) {
		for (;;) {
			if (!(vp / 10 > vm / 10)) break;
			vm_is_trailing_zeros = vm_is_trailing_zeros && (vm % 10) == 0;
			vr_is_trailing_zeros = vr_is_trailing_zeros && (last_removed_digit == 0);
			last_removed_digit = ((byte)(vr % 10));
			vr /= 10;
			vp /= 10;
			vm /= 10;
			removed++;
		}
		if (vm_is_trailing_zeros) {
			for (;;) {
				if (!(vm % 10 == 0)) break;
				vr_is_trailing_zeros = vr_is_trailing_zeros && (last_removed_digit == 0);
				last_removed_digit = ((byte)(vr % 10));
				vr /= 10;
				vp /= 10;
				vm /= 10;
				removed++;
			}
		}
		if (vr_is_trailing_zeros && (last_removed_digit == 5) && (vr % 2) == 0) {
			last_removed_digit = 4;
		}
		out = vr;
		if ((vr == vm && (!accept_bounds || !vm_is_trailing_zeros)) || last_removed_digit >= 5) {
			out++;
		}
	} else {
		for (;;) {
			if (!(vp / 10 > vm / 10)) break;
			last_removed_digit = ((byte)(vr % 10));
			vr /= 10;
			vp /= 10;
			vm /= 10;
			removed++;
		}
		out = vr + strconv__bool_to_u32(vr == vm || last_removed_digit >= 5);
	}
	return (strconv__Dec32){.m = out,.e = e10 + removed,};
}

string strconv__f32_to_str(f32 f, int n_digit) {
	strconv__Uf32 u1 = (strconv__Uf32){
#ifndef __cplusplus
0
#endif
};
	u1.f = f;
	u32 u = u1.u;
	bool neg = (u >> (_const_strconv__mantbits32 + _const_strconv__expbits32)) != 0;
	u32 mant = (u & ((((u32)(1U)) << _const_strconv__mantbits32) - ((u32)(1U))));
	u32 exp = ((u >> _const_strconv__mantbits32) & ((((u32)(1U)) << _const_strconv__expbits32) - ((u32)(1U))));
	if ((exp == _const_strconv__maxexp32) || (exp == 0 && mant == 0)) {
		return strconv__get_string_special(neg, exp == 0, mant == 0);
	}
	multi_return_strconv__Dec32_bool mr_8133 = strconv__f32_to_decimal_exact_int(mant, exp);
	strconv__Dec32 d = mr_8133.arg0;
	bool ok = mr_8133.arg1;
	if (!ok) {
		d = strconv__f32_to_decimal(mant, exp);
	}
	return strconv__Dec32_get_string_32(d, neg, n_digit, 0);
}

string strconv__f32_to_str_pad(f32 f, int n_digit) {
	strconv__Uf32 u1 = (strconv__Uf32){
#ifndef __cplusplus
0
#endif
};
	u1.f = f;
	u32 u = u1.u;
	bool neg = (u >> (_const_strconv__mantbits32 + _const_strconv__expbits32)) != 0;
	u32 mant = (u & ((((u32)(1U)) << _const_strconv__mantbits32) - ((u32)(1U))));
	u32 exp = ((u >> _const_strconv__mantbits32) & ((((u32)(1U)) << _const_strconv__expbits32) - ((u32)(1U))));
	if ((exp == _const_strconv__maxexp32) || (exp == 0 && mant == 0)) {
		return strconv__get_string_special(neg, exp == 0, mant == 0);
	}
	multi_return_strconv__Dec32_bool mr_8841 = strconv__f32_to_decimal_exact_int(mant, exp);
	strconv__Dec32 d = mr_8841.arg0;
	bool ok = mr_8841.arg1;
	if (!ok) {
		d = strconv__f32_to_decimal(mant, exp);
	}
	return strconv__Dec32_get_string_32(d, neg, n_digit, n_digit);
}

static string strconv__Dec64_get_string_64(strconv__Dec64 d, bool neg, int i_n_digit, int i_pad_digit) {
	int n_digit = i_n_digit + 1;
	int pad_digit = i_pad_digit + 1;
	u64 out = d.m;
	int d_exp = d.e;
	int out_len = strconv__decimal_len_64(out);
	int out_len_original = out_len;
	int fw_zeros = 0;
	if (pad_digit > out_len) {
		fw_zeros = pad_digit - out_len;
	}
	array_byte buf = __new_array_with_default((out_len + 6 + 1 + 1 + fw_zeros), 0, sizeof(byte), 0);
	int i = 0;
	if (neg) {
		array_set(&buf, i, &(byte[]) { '-' });
		i++;
	}
	int disp = 0;
	if (out_len <= 1) {
		disp = 1;
	}
	if (n_digit < out_len) {
		out += (*(u64*)array_get(_const_strconv__ten_pow_table_64, out_len - n_digit - 1)) * 5;
		out /= (*(u64*)array_get(_const_strconv__ten_pow_table_64, out_len - n_digit));
		if (d.m / (*(u64*)array_get(_const_strconv__ten_pow_table_64, out_len - n_digit)) < out) {
			d_exp++;
			n_digit++;
		}
		out_len = n_digit;
	}
	int y = i + out_len;
	int x = 0;
	for (;;) {
		if (!(x < (out_len - disp - 1))) break;
		array_set(&buf, y - x, &(byte[]) { '0' + ((byte)(out % 10)) });
		out /= 10;
		i++;
		x++;
	}
	if (out_len >= 1) {
		array_set(&buf, y - x, &(byte[]) { '.' });
		x++;
		i++;
	}
	if (y - x >= 0) {
		array_set(&buf, y - x, &(byte[]) { '0' + ((byte)(out % 10)) });
		i++;
	}
	for (;;) {
		if (!(fw_zeros > 0)) break;
		array_set(&buf, i++, &(byte[]) { '0' });
		fw_zeros--;
	}
	array_set(&buf, i, &(byte[]) { 'e' });
	i++;
	int exp = d_exp + out_len_original - 1;
	if (exp < 0) {
		array_set(&buf, i, &(byte[]) { '-' });
		i++;
		exp = -exp;
	} else {
		array_set(&buf, i, &(byte[]) { '+' });
		i++;
	}
	int d2 = exp % 10;
	exp /= 10;
	int d1 = exp % 10;
	int d0 = exp / 10;
	if (d0 > 0) {
		array_set(&buf, i, &(byte[]) { '0' + ((byte)(d0)) });
		i++;
	}
	array_set(&buf, i, &(byte[]) { '0' + ((byte)(d1)) });
	i++;
	array_set(&buf, i, &(byte[]) { '0' + ((byte)(d2)) });
	i++;
	array_set(&buf, i, &(byte[]) { 0 });
	return tos(((byteptr)(&(*(byte*)array_get(buf, 0)))), i);
}

static multi_return_strconv__Dec64_bool strconv__f64_to_decimal_exact_int(u64 i_mant, u64 exp) {
	strconv__Dec64 d = (strconv__Dec64){.m = 0,.e = 0,};
	u64 e = exp - _const_strconv__bias64;
	if (e > _const_strconv__mantbits64) {
		return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=false};
	}
	u64 shift = _const_strconv__mantbits64 - e;
	u64 mant = (i_mant | ((u64)(0x0010000000000000U)));
	d.m = mant >> shift;
	if ((d.m << shift) != mant) {
		return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=false};
	}
	for (;;) {
		if (!((d.m % 10) == 0)) break;
		d.m /= 10;
		d.e++;
	}
	return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=true};
}

static strconv__Dec64 strconv__f64_to_decimal(u64 mant, u64 exp) {
	int e2 = 0;
	u64 m2 = ((u64)(0U));
	if (exp == 0) {
		e2 = 1 - _const_strconv__bias64 - ((int)(_const_strconv__mantbits64)) - 2;
		m2 = mant;
	} else {
		e2 = ((int)(exp)) - _const_strconv__bias64 - ((int)(_const_strconv__mantbits64)) - 2;
		m2 = ((((u64)(1U)) << _const_strconv__mantbits64) | mant);
	}
	bool even = ((m2 & 1)) == 0;
	bool accept_bounds = even;
	u64 mv = ((u64)(4 * m2));
	u64 mm_shift = strconv__bool_to_u64(mant != 0 || exp <= 1);
	u64 vr = ((u64)(0U));
	u64 vp = ((u64)(0U));
	u64 vm = ((u64)(0U));
	int e10 = 0;
	bool vm_is_trailing_zeros = false;
	bool vr_is_trailing_zeros = false;
	if (e2 >= 0) {
		u32 q = strconv__log10_pow2(e2) - strconv__bool_to_u32(e2 > 3);
		e10 = ((int)(q));
		int k = _const_strconv__pow5_inv_num_bits_64 + strconv__pow5_bits(((int)(q))) - 1;
		int i = -e2 + ((int)(q)) + k;
		strconv__Uint128 mul = (*(strconv__Uint128*)array_get(_const_strconv__pow5_inv_split_64, q));
		vr = strconv__mul_shift_64(((u64)(4U)) * m2, mul, i);
		vp = strconv__mul_shift_64(((u64)(4U)) * m2 + ((u64)(2U)), mul, i);
		vm = strconv__mul_shift_64(((u64)(4U)) * m2 - ((u64)(1U)) - mm_shift, mul, i);
		if (q <= 21) {
			if (mv % 5 == 0) {
				vr_is_trailing_zeros = strconv__multiple_of_power_of_five_64(mv, q);
			} else if (accept_bounds) {
				vm_is_trailing_zeros = strconv__multiple_of_power_of_five_64(mv - 1 - mm_shift, q);
			} else if (strconv__multiple_of_power_of_five_64(mv + 2, q)) {
				vp--;
			}
		}
	} else {
		u32 q = strconv__log10_pow5(-e2) - strconv__bool_to_u32(-e2 > 1);
		e10 = ((int)(q)) + e2;
		int i = -e2 - ((int)(q));
		int k = strconv__pow5_bits(i) - _const_strconv__pow5_num_bits_64;
		int j = ((int)(q)) - k;
		strconv__Uint128 mul = (*(strconv__Uint128*)array_get(_const_strconv__pow5_split_64, i));
		vr = strconv__mul_shift_64(((u64)(4U)) * m2, mul, j);
		vp = strconv__mul_shift_64(((u64)(4U)) * m2 + ((u64)(2U)), mul, j);
		vm = strconv__mul_shift_64(((u64)(4U)) * m2 - ((u64)(1U)) - mm_shift, mul, j);
		if (q <= 1) {
			vr_is_trailing_zeros = true;
			if (accept_bounds) {
				vm_is_trailing_zeros = (mm_shift == 1);
			} else {
				vp--;
			}
		} else if (q < 63) {
			vr_is_trailing_zeros = strconv__multiple_of_power_of_two_64(mv, q - 1);
		}
	}
	int removed = 0;
	byte last_removed_digit = ((byte)(0));
	u64 out = ((u64)(0U));
	if (vm_is_trailing_zeros || vr_is_trailing_zeros) {
		for (;;) {
			u64 vp_div_10 = vp / 10;
			u64 vm_div_10 = vm / 10;
			if (vp_div_10 <= vm_div_10) {
				break;
			}
			u64 vm_mod_10 = vm % 10;
			u64 vr_div_10 = vr / 10;
			u64 vr_mod_10 = vr % 10;
			vm_is_trailing_zeros = vm_is_trailing_zeros && vm_mod_10 == 0;
			vr_is_trailing_zeros = vr_is_trailing_zeros && (last_removed_digit == 0);
			last_removed_digit = ((byte)(vr_mod_10));
			vr = vr_div_10;
			vp = vp_div_10;
			vm = vm_div_10;
			removed++;
		}
		if (vm_is_trailing_zeros) {
			for (;;) {
				u64 vm_div_10 = vm / 10;
				u64 vm_mod_10 = vm % 10;
				if (vm_mod_10 != 0) {
					break;
				}
				u64 vp_div_10 = vp / 10;
				u64 vr_div_10 = vr / 10;
				u64 vr_mod_10 = vr % 10;
				vr_is_trailing_zeros = vr_is_trailing_zeros && (last_removed_digit == 0);
				last_removed_digit = ((byte)(vr_mod_10));
				vr = vr_div_10;
				vp = vp_div_10;
				vm = vm_div_10;
				removed++;
			}
		}
		if (vr_is_trailing_zeros && (last_removed_digit == 5) && (vr % 2) == 0) {
			last_removed_digit = 4;
		}
		out = vr;
		if ((vr == vm && (!accept_bounds || !vm_is_trailing_zeros)) || last_removed_digit >= 5) {
			out++;
		}
	} else {
		bool round_up = false;
		for (;;) {
			if (!(vp / 100 > vm / 100)) break;
			round_up = (vr % 100) >= 50;
			vr /= 100;
			vp /= 100;
			vm /= 100;
			removed += 2;
		}
		for (;;) {
			if (!(vp / 10 > vm / 10)) break;
			round_up = (vr % 10) >= 5;
			vr /= 10;
			vp /= 10;
			vm /= 10;
			removed++;
		}
		out = vr + strconv__bool_to_u64(vr == vm || round_up);
	}
	return (strconv__Dec64){.m = out,.e = e10 + removed,};
}

string strconv__f64_to_str(f64 f, int n_digit) {
	strconv__Uf64 u1 = (strconv__Uf64){
#ifndef __cplusplus
0
#endif
};
	u1.f = f;
	u64 u = u1.u;
	bool neg = (u >> (_const_strconv__mantbits64 + _const_strconv__expbits64)) != 0;
	u64 mant = (u & ((((u64)(1U)) << _const_strconv__mantbits64) - ((u64)(1U))));
	u64 exp = ((u >> _const_strconv__mantbits64) & ((((u64)(1U)) << _const_strconv__expbits64) - ((u64)(1U))));
	if ((exp == _const_strconv__maxexp64) || (exp == 0 && mant == 0)) {
		return strconv__get_string_special(neg, exp == 0, mant == 0);
	}
	multi_return_strconv__Dec64_bool mr_9883 = strconv__f64_to_decimal_exact_int(mant, exp);
	strconv__Dec64 d = mr_9883.arg0;
	bool ok = mr_9883.arg1;
	if (!ok) {
		d = strconv__f64_to_decimal(mant, exp);
	}
	return strconv__Dec64_get_string_64(d, neg, n_digit, 0);
}

string strconv__f64_to_str_pad(f64 f, int n_digit) {
	strconv__Uf64 u1 = (strconv__Uf64){
#ifndef __cplusplus
0
#endif
};
	u1.f = f;
	u64 u = u1.u;
	bool neg = (u >> (_const_strconv__mantbits64 + _const_strconv__expbits64)) != 0;
	u64 mant = (u & ((((u64)(1U)) << _const_strconv__mantbits64) - ((u64)(1U))));
	u64 exp = ((u >> _const_strconv__mantbits64) & ((((u64)(1U)) << _const_strconv__expbits64) - ((u64)(1U))));
	if ((exp == _const_strconv__maxexp64) || (exp == 0 && mant == 0)) {
		return strconv__get_string_special(neg, exp == 0, mant == 0);
	}
	multi_return_strconv__Dec64_bool mr_10619 = strconv__f64_to_decimal_exact_int(mant, exp);
	strconv__Dec64 d = mr_10619.arg0;
	bool ok = mr_10619.arg1;
	if (!ok) {
		d = strconv__f64_to_decimal(mant, exp);
	}
	return strconv__Dec64_get_string_64(d, neg, n_digit, n_digit);
}

string strconv__f64_to_str_lnd(f64 f, int dec_digit) {
	string s = strconv__f64_to_str(f + (*(f64*)array_get(_const_strconv__dec_round, dec_digit)), 18);
	if (s.len > 2 && (string_at(s, 0) == 'n' || string_at(s, 1) == 'i')) {
		return s;
	}
	bool m_sgn_flag = false;
	int sgn = 1;
	array_fixed_byte_26 b = {0};
	int d_pos = 1;
	int i = 0;
	int i1 = 0;
	int exp = 0;
	int exp_sgn = 1;
	int dot_res_sp = -1;
	for (int _t10 = 0; _t10 < s.len; ++_t10) {
		byte c = s.str[_t10];
		if (c == '-') {
			sgn = -1;
			i++;
		} else if (c == '+') {
			sgn = 1;
			i++;
		} else if (c >= '0' && c <= '9') {
			b[i1++] = c;
			i++;
		} else if (c == '.') {
			if (sgn > 0) {
				d_pos = i;
			} else {
				d_pos = i - 1;
			}
			i++;
		} else if (c == 'e') {
			i++;
			break;
		} else {
			return tos_lit("[Float conversion error!!]");
		}
	}
	b[i1] = 0;
	if (string_at(s, i) == '-') {
		exp_sgn = -1;
		i++;
	} else if (string_at(s, i) == '+') {
		exp_sgn = 1;
		i++;
	}
	for (int _t11 = 0; _t11 < string_substr(s, i, s.len).len; ++_t11) {
		byte c = string_substr(s, i, s.len).str[_t11];
		exp = exp * 10 + ((int)(c - '0'));
	}
	array_byte res = __new_array_with_default(exp + 32, 0, sizeof(byte), &(byte[]){0});
	int r_i = 0;
	if (sgn == 1) {
		if (m_sgn_flag) {
			array_set(&res, r_i++, &(byte[]) { '+' });
		}
	} else {
		array_set(&res, r_i++, &(byte[]) { '-' });
	}
	i = 0;
	if (exp_sgn >= 0) {
		for (;;) {
			if (!(b[i] != 0)) break;
			array_set(&res, r_i++, &(byte[]) { b[i] });
			i++;
			if (i >= d_pos && exp >= 0) {
				if (exp == 0) {
					dot_res_sp = r_i;
					array_set(&res, r_i++, &(byte[]) { '.' });
				}
				exp--;
			}
		}
		for (;;) {
			if (!(exp >= 0)) break;
			array_set(&res, r_i++, &(byte[]) { '0' });
			exp--;
		}
	} else {
		bool dot_p = true;
		for (;;) {
			if (!(exp > 0)) break;
			array_set(&res, r_i++, &(byte[]) { '0' });
			exp--;
			if (dot_p) {
				dot_res_sp = r_i;
				array_set(&res, r_i++, &(byte[]) { '.' });
				dot_p = false;
			}
		}
		for (;;) {
			if (!(b[i] != 0)) break;
			array_set(&res, r_i++, &(byte[]) { b[i] });
			i++;
		}
	}
	if (dot_res_sp >= 0) {
		if ((r_i - dot_res_sp) > dec_digit) {
			r_i = dot_res_sp + dec_digit + 1;
		}
		array_set(&res, r_i, &(byte[]) { 0 });
		return tos(res.data, r_i);
	} else {
		if (dec_digit > 0) {
			int c = 0;
			array_set(&res, r_i++, &(byte[]) { '.' });
			for (;;) {
				if (!(c < dec_digit)) break;
				array_set(&res, r_i++, &(byte[]) { '0' });
				c++;
			}
			array_set(&res, r_i, &(byte[]) { 0 });
		}
		return tos(res.data, r_i);
	}
}

string strconv__format_str(string s, strconv__BF_param p) {
	int dif = p.len0 - s.len;
	if (dif <= 0) {
		return s;
	}
	strings__Builder res = strings__new_builder(s.len + dif);
	if (p.allign == strconv__Align_text_right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	strings__Builder_write(&res, s);
	if (p.allign == strconv__Align_text_left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	return strings__Builder_str(&res);
}

string strconv__format_dec(u64 d, strconv__BF_param p) {
	string s = tos_lit("");
	strings__Builder res = strings__new_builder(20);
	int sign_len_diff = 0;
	if (p.pad_ch == '0') {
		if (p.positive) {
			if (p.sign_flag) {
				strings__Builder_write_b(&res, '+');
				sign_len_diff = -1;
			}
		} else {
			strings__Builder_write_b(&res, '-');
			sign_len_diff = -1;
		}
		s = u64_str(d);
	} else {
		if (p.positive) {
			if (p.sign_flag) {
				s = string_add(tos_lit("+"), u64_str(d));
			} else {
				s = u64_str(d);
			}
		} else {
			s = string_add(tos_lit("-"), u64_str(d));
		}
	}
	int dif = p.len0 - s.len + sign_len_diff;
	if (p.allign == strconv__Align_text_right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	strings__Builder_write(&res, s);
	if (p.allign == strconv__Align_text_left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	return strings__Builder_str(&res);
}

string strconv__format_fl(f64 f, strconv__BF_param p) {
	string s = tos_lit("");
	string fs = strconv__f64_to_str_lnd((f >= 0.0 ? (f) : (-f)), p.len1);
	if (string_at(fs, 0) == '[') {
		return fs;
	}
	if (p.rm_tail_zero) {
		fs = strconv__remove_tail_zeros(fs);
	}
	strings__Builder res = strings__new_builder((p.len0 > fs.len ? (p.len0) : (fs.len)));
	int sign_len_diff = 0;
	if (p.pad_ch == '0') {
		if (p.positive) {
			if (p.sign_flag) {
				strings__Builder_write_b(&res, '+');
				sign_len_diff = -1;
			}
		} else {
			strings__Builder_write_b(&res, '-');
			sign_len_diff = -1;
		}
		s = fs;
	} else {
		if (p.positive) {
			if (p.sign_flag) {
				s = string_add(tos_lit("+"), fs);
			} else {
				s = fs;
			}
		} else {
			s = string_add(tos_lit("-"), fs);
		}
	}
	int dif = p.len0 - s.len + sign_len_diff;
	if (p.allign == strconv__Align_text_right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	strings__Builder_write(&res, s);
	if (p.allign == strconv__Align_text_left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	return strings__Builder_str(&res);
}

string strconv__format_es(f64 f, strconv__BF_param p) {
	string s = tos_lit("");
	string fs = strconv__f64_to_str_pad((f > 0 ? (f) : (-f)), p.len1);
	if (p.rm_tail_zero) {
		fs = strconv__remove_tail_zeros(fs);
	}
	strings__Builder res = strings__new_builder((p.len0 > fs.len ? (p.len0) : (fs.len)));
	int sign_len_diff = 0;
	if (p.pad_ch == '0') {
		if (p.positive) {
			if (p.sign_flag) {
				strings__Builder_write_b(&res, '+');
				sign_len_diff = -1;
			}
		} else {
			strings__Builder_write_b(&res, '-');
			sign_len_diff = -1;
		}
		s = fs;
	} else {
		if (p.positive) {
			if (p.sign_flag) {
				s = string_add(tos_lit("+"), fs);
			} else {
				s = fs;
			}
		} else {
			s = string_add(tos_lit("-"), fs);
		}
	}
	int dif = p.len0 - s.len + sign_len_diff;
	if (p.allign == strconv__Align_text_right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	strings__Builder_write(&res, s);
	if (p.allign == strconv__Align_text_left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_b(&res, p.pad_ch);
		}
	}
	return strings__Builder_str(&res);
}

string strconv__remove_tail_zeros(string s) {
	int i = 0;
	int last_zero_start = -1;
	int dot_pos = -1;
	bool in_decimal = false;
	byte prev_ch = ((byte)(0));
	for (;;) {
		if (!(i < s.len)) break;
		byte ch = s.str[i];
		if (ch == '.') {
			in_decimal = true;
			dot_pos = i;
		} else if (in_decimal) {
			if (ch == '0' && prev_ch != '0') {
				last_zero_start = i;
			} else if (ch >= '1' && ch <= '9') {
				last_zero_start = -1;
			} else if (ch == 'e') {
				break;
			}
		}
		prev_ch = ch;
		i++;
	}
	string tmp = tos_lit("");
	if (last_zero_start > 0) {
		if (last_zero_start == dot_pos + 1) {
			tmp = string_add(string_substr(s, 0, dot_pos), string_substr(s, i, s.len));
		} else {
			tmp = string_add(string_substr(s, 0, last_zero_start), string_substr(s, i, s.len));
		}
	} else {
		tmp = s;
	}
	if (tmp.str[tmp.len - 1] == '.') {
		return string_substr(tmp, 0, tmp.len - 1);
	}
	return tmp;
}

void strconv__v_printf(string str, varg_voidptr pt) {
	print(strconv__v_sprintf(str, pt));
}

string strconv__v_sprintf(string str, varg_voidptr pt) {
	strings__Builder res = strings__new_builder(pt.len * 16);
	int i = 0;
	int p_index = 0;
	bool sign = false;
	strconv__Align_text allign = strconv__Align_text_right;
	int len0 = -1;
	int len1 = -1;
	int def_len1 = 6;
	byte pad_ch = ((byte)(' '));
	bool th_separator = false;
	rune ch1 = '0';
	rune ch2 = '0';
	strconv__Char_parse_state status = strconv__Char_parse_state_norm_char;
	for (;;) {
		if (!(i < str.len)) break;
		if (status == strconv__Char_parse_state_reset_params) {
			sign = false;
			allign = strconv__Align_text_right;
			len0 = -1;
			len1 = -1;
			pad_ch = ' ';
			th_separator = false;
			status = strconv__Char_parse_state_norm_char;
			ch1 = '0';
			ch2 = '0';
			continue;
		}
		byte ch = string_at(str, i);
		if (ch != '%' && status == strconv__Char_parse_state_norm_char) {
			strings__Builder_write_b(&res, ch);
			i++;
			continue;
		}
		if (ch == '%' && status == strconv__Char_parse_state_norm_char) {
			status = strconv__Char_parse_state_field_char;
			i++;
			continue;
		}
		if (ch == 'c' && status == strconv__Char_parse_state_field_char) {
			strconv__v_sprintf_panic(p_index, pt.len);
			byte d1 = *(((byte*)(pt.args[p_index])));
			strings__Builder_write_b(&res, d1);
			status = strconv__Char_parse_state_reset_params;
			p_index++;
			i++;
			continue;
		}
		if (ch == 'p' && status == strconv__Char_parse_state_field_char) {
			strconv__v_sprintf_panic(p_index, pt.len);
			strings__Builder_write(&res, tos_lit("0x"));
			strings__Builder_write(&res, ptr_str(pt.args[p_index]));
			status = strconv__Char_parse_state_reset_params;
			p_index++;
			i++;
			continue;
		}
		if (status == strconv__Char_parse_state_field_char) {
			rune fc_ch1 = '0';
			rune fc_ch2 = '0';
			if ((i + 1) < str.len) {
				fc_ch1 = string_at(str, i + 1);
				if ((i + 2) < str.len) {
					fc_ch2 = string_at(str, i + 2);
				}
			}
			if (ch == '+') {
				sign = true;
				i++;
				continue;
			} else if (ch == '-') {
				allign = strconv__Align_text_left;
				i++;
				continue;
			} else if ((ch == '0' || ch == ' ')) {
				if (allign == strconv__Align_text_right) {
					pad_ch = ch;
				}
				i++;
				continue;
			} else if (ch == '\'') {
				th_separator = true;
				i++;
				continue;
			} else if (ch == '.' && fc_ch1 >= '1' && fc_ch1 <= '9') {
				status = strconv__Char_parse_state_check_float;
				i++;
				continue;
			} else if (ch == '.' && fc_ch1 == '*' && fc_ch2 == 's') {
				strconv__v_sprintf_panic(p_index, pt.len);
				int len = *(((int*)(pt.args[p_index])));
				p_index++;
				strconv__v_sprintf_panic(p_index, pt.len);
				string s = *(((string*)(pt.args[p_index])));
				s = string_substr(s, 0, len);
				p_index++;
				strings__Builder_write(&res, s);
				status = strconv__Char_parse_state_reset_params;
				i += 3;
				continue;
			}
			status = strconv__Char_parse_state_len_set_start;
			continue;
		}
		if (status == strconv__Char_parse_state_len_set_start) {
			if (ch >= '1' && ch <= '9') {
				len0 = ((int)(ch - '0'));
				status = strconv__Char_parse_state_len_set_in;
				i++;
				continue;
			}
			if (ch == '.') {
				status = strconv__Char_parse_state_check_float;
				i++;
				continue;
			}
			status = strconv__Char_parse_state_check_type;
			continue;
		}
		if (status == strconv__Char_parse_state_len_set_in) {
			if (ch >= '0' && ch <= '9') {
				len0 *= 10;
				len0 += ((int)(ch - '0'));
				i++;
				continue;
			}
			if (ch == '.') {
				status = strconv__Char_parse_state_check_float;
				i++;
				continue;
			}
			status = strconv__Char_parse_state_check_type;
			continue;
		}
		if (status == strconv__Char_parse_state_check_float) {
			if (ch >= '0' && ch <= '9') {
				len1 = ((int)(ch - '0'));
				status = strconv__Char_parse_state_check_float_in;
				i++;
				continue;
			}
			status = strconv__Char_parse_state_check_type;
			continue;
		}
		if (status == strconv__Char_parse_state_check_float_in) {
			if (ch >= '0' && ch <= '9') {
				len1 *= 10;
				len1 += ((int)(ch - '0'));
				i++;
				continue;
			}
			status = strconv__Char_parse_state_check_type;
			continue;
		}
		if (status == strconv__Char_parse_state_check_type) {
			if (ch == 'l') {
				if (ch1 == '0') {
					ch1 = 'l';
					i++;
					continue;
				} else {
					ch2 = 'l';
					i++;
					continue;
				}
			} else if (ch == 'h') {
				if (ch1 == '0') {
					ch1 = 'h';
					i++;
					continue;
				} else {
					ch2 = 'h';
					i++;
					continue;
				}
			} else if ((ch == 'd' || ch == 'i')) {
				u64 d1 = ((u64)(0U));
				bool positive = true;
				rune _t12 = ch1;
				if (_t12 == 'h') {
					if (ch2 == 'h') {
						strconv__v_sprintf_panic(p_index, pt.len);
						i8 x = *(((i8*)(pt.args[p_index])));
						positive = (x >= 0 ? (true) : (false));
						d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
					} else {
						i16 x = *(((i16*)(pt.args[p_index])));
						positive = (x >= 0 ? (true) : (false));
						d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
					}
				} else if (_t12 == 'l') {
					strconv__v_sprintf_panic(p_index, pt.len);
					i64 x = *(((i64*)(pt.args[p_index])));
					positive = (x >= 0 ? (true) : (false));
					d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
				} else {
					strconv__v_sprintf_panic(p_index, pt.len);
					int x = *(((int*)(pt.args[p_index])));
					positive = (x >= 0 ? (true) : (false));
					d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
				};
				strings__Builder_write(&res, strconv__format_dec(d1, (strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = positive,
					.sign_flag = sign,
					.allign = allign,
					.rm_tail_zero = 0,
				}));
				status = strconv__Char_parse_state_reset_params;
				p_index++;
				i++;
				ch1 = '0';
				ch2 = '0';
				continue;
			} else if (ch == 'u') {
				u64 d1 = ((u64)(0U));
				bool positive = true;
				strconv__v_sprintf_panic(p_index, pt.len);
				rune _t13 = ch1;
				if (_t13 == 'h') {
					if (ch2 == 'h') {
						d1 = ((u64)(*(((byte*)(pt.args[p_index])))));
					} else {
						d1 = ((u64)(*(((u16*)(pt.args[p_index])))));
					}
				} else if (_t13 == 'l') {
					d1 = ((u64)(*(((u64*)(pt.args[p_index])))));
				} else {
					d1 = ((u64)(*(((u32*)(pt.args[p_index])))));
				};
				strings__Builder_write(&res, strconv__format_dec(d1, (strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = positive,
					.sign_flag = sign,
					.allign = allign,
					.rm_tail_zero = 0,
				}));
				status = strconv__Char_parse_state_reset_params;
				p_index++;
				i++;
				continue;
			} else if ((ch == 'x' || ch == 'X')) {
				strconv__v_sprintf_panic(p_index, pt.len);
				string s = tos_lit("");
				rune _t14 = ch1;
				if (_t14 == 'h') {
					if (ch2 == 'h') {
						i8 x = *(((i8*)(pt.args[p_index])));
						s = i8_hex(x);
					} else {
						i16 x = *(((i16*)(pt.args[p_index])));
						s = i16_hex(x);
					}
				} else if (_t14 == 'l') {
					i64 x = *(((i64*)(pt.args[p_index])));
					s = i64_hex(x);
				} else {
					int x = *(((int*)(pt.args[p_index])));
					s = int_hex(x);
				};
				if (ch == 'X') {
					s = string_to_upper(s);
				}
				strings__Builder_write(&res, strconv__format_str(s, (strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = true,
					.sign_flag = false,
					.allign = allign,
					.rm_tail_zero = 0,
				}));
				status = strconv__Char_parse_state_reset_params;
				p_index++;
				i++;
				continue;
			}
			if ((ch == 'f' || ch == 'F')) {
				strconv__v_sprintf_panic(p_index, pt.len);
				f64 x = *(((f64*)(pt.args[p_index])));
				bool positive = x >= ((f64)(0.0));
				len1 = (len1 >= 0 ? (len1) : (def_len1));
				string s = strconv__format_fl(((f64)(x)), (strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = len1,
					.positive = positive,
					.sign_flag = sign,
					.allign = allign,
					.rm_tail_zero = 0,
				});
				strings__Builder_write(&res, (ch == 'F' ? (string_to_upper(s)) : (s)));
				status = strconv__Char_parse_state_reset_params;
				p_index++;
				i++;
				continue;
			} else if ((ch == 'e' || ch == 'E')) {
				strconv__v_sprintf_panic(p_index, pt.len);
				f64 x = *(((f64*)(pt.args[p_index])));
				bool positive = x >= ((f64)(0.0));
				len1 = (len1 >= 0 ? (len1) : (def_len1));
				string s = strconv__format_es(((f64)(x)), (strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = len1,
					.positive = positive,
					.sign_flag = sign,
					.allign = allign,
					.rm_tail_zero = 0,
				});
				strings__Builder_write(&res, (ch == 'E' ? (string_to_upper(s)) : (s)));
				status = strconv__Char_parse_state_reset_params;
				p_index++;
				i++;
				continue;
			} else if ((ch == 'g' || ch == 'G')) {
				strconv__v_sprintf_panic(p_index, pt.len);
				f64 x = *(((f64*)(pt.args[p_index])));
				bool positive = x >= ((f64)(0.0));
				string s = tos_lit("");
				f64 tx = strconv__fabs(x);
				if (tx < 999999.0 && tx >= 0.00001) {
					len1 = (len1 >= 0 ? (len1 + 1) : (def_len1));
					s = strconv__format_fl(x, (strconv__BF_param){
						.pad_ch = pad_ch,
						.len0 = len0,
						.len1 = len1,
						.positive = positive,
						.sign_flag = sign,
						.allign = allign,
						.rm_tail_zero = true,
					});
				} else {
					len1 = (len1 >= 0 ? (len1 + 1) : (def_len1));
					s = strconv__format_es(x, (strconv__BF_param){
						.pad_ch = pad_ch,
						.len0 = len0,
						.len1 = len1,
						.positive = positive,
						.sign_flag = sign,
						.allign = allign,
						.rm_tail_zero = true,
					});
				}
				strings__Builder_write(&res, (ch == 'G' ? (string_to_upper(s)) : (s)));
				status = strconv__Char_parse_state_reset_params;
				p_index++;
				i++;
				continue;
			} else if (ch == 's') {
				strconv__v_sprintf_panic(p_index, pt.len);
				string s1 = *(((string*)(pt.args[p_index])));
				pad_ch = ' ';
				strings__Builder_write(&res, strconv__format_str(s1, (strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = true,
					.sign_flag = false,
					.allign = allign,
					.rm_tail_zero = 0,
				}));
				status = strconv__Char_parse_state_reset_params;
				p_index++;
				i++;
				continue;
			}
		}
		status = strconv__Char_parse_state_reset_params;
		p_index++;
		i++;
	}
	if (p_index != pt.len) {
		v_panic(_STR("%"PRId32"\000 %% conversion specifiers, but given %"PRId32"\000 args", 3, p_index, pt.len));
	}
	return strings__Builder_str(&res);
}

// Attr: [inline]
inline static void strconv__v_sprintf_panic(int idx, int len) {
	if (idx >= len) {
		v_panic(_STR("%"PRId32"\000 %% conversion specifiers, but given only %"PRId32"\000 args", 3, idx + 1, len));
	}
}

static f64 strconv__fabs(f64 x) {
	if (x < 0.0) {
		return -x;
	}
	return x;
}

// Attr: [inline]
inline string strconv__ftoa_64(f64 f) {
	return strconv__f64_to_str(f, 17);
}

// Attr: [inline]
inline string strconv__ftoa_long_64(f64 f) {
	return strconv__f64_to_str_l(f);
}

// Attr: [inline]
inline string strconv__ftoa_32(f32 f) {
	return strconv__f32_to_str(f, 8);
}

// Attr: [inline]
inline string strconv__ftoa_long_32(f32 f) {
	return strconv__f32_to_str_l(f);
}

static void strconv__assert1(bool t, string msg) {
	if (!t) {
		v_panic(msg);
	}
}

// Attr: [inline]
inline static int strconv__bool_to_int(bool b) {
	if (b) {
		return 1;
	}
	return 0;
}

// Attr: [inline]
inline static u32 strconv__bool_to_u32(bool b) {
	if (b) {
		return ((u32)(1U));
	}
	return ((u32)(0U));
}

// Attr: [inline]
inline static u64 strconv__bool_to_u64(bool b) {
	if (b) {
		return ((u64)(1U));
	}
	return ((u64)(0U));
}

static string strconv__get_string_special(bool neg, bool expZero, bool mantZero) {
	if (!mantZero) {
		return tos_lit("nan");
	}
	if (!expZero) {
		if (neg) {
			return tos_lit("-inf");
		} else {
			return tos_lit("+inf");
		}
	}
	if (neg) {
		return tos_lit("-0e+00");
	}
	return tos_lit("0e+00");
}

static int strconv__decimal_len_32(u32 u) {
	strconv__assert1(u < 1000000000, tos_lit("too big"));
	if (u >= 100000000) {
		return 9;
	} else if (u >= 10000000) {
		return 8;
	} else if (u >= 1000000) {
		return 7;
	} else if (u >= 100000) {
		return 6;
	} else if (u >= 10000) {
		return 5;
	} else if (u >= 1000) {
		return 4;
	} else if (u >= 100) {
		return 3;
	} else if (u >= 10) {
		return 2;
	}
	return 1;
}

static u32 strconv__mul_shift_32(u32 m, u64 mul, int ishift) {
	multi_return_u64_u64 mr_1854 = math__bits__mul_64(((u64)(m)), mul);
	u64 hi = mr_1854.arg0;
	u64 lo = mr_1854.arg1;
	u64 shifted_sum = (lo >> ((u64)(ishift))) + (hi << ((u64)(64 - ishift)));
	strconv__assert1(shifted_sum <= 2147483647, tos_lit("shiftedSum <= math.max_u32"));
	return ((u32)(shifted_sum));
}

static u32 strconv__mul_pow5_invdiv_pow2(u32 m, u32 q, int j) {
	return strconv__mul_shift_32(m, (*(u64*)array_get(_const_strconv__pow5_inv_split_32, q)), j);
}

static u32 strconv__mul_pow5_div_pow2(u32 m, u32 i, int j) {
	return strconv__mul_shift_32(m, (*(u64*)array_get(_const_strconv__pow5_split_32, i)), j);
}

static u32 strconv__pow5_factor_32(u32 i_v) {
	u32 v = i_v;
	for (u32 n = ((u32)(0U)); ; n++) {
		u32 q = v / 5;
		u32 r = v % 5;
		if (r != 0) {
			return n;
		}
		v = q;
	}
	return v;
}

static bool strconv__multiple_of_power_of_five_32(u32 v, u32 p) {
	return strconv__pow5_factor_32(v) >= p;
}

static bool strconv__multiple_of_power_of_two_32(u32 v, u32 p) {
	return ((u32)(math__bits__trailing_zeros_32(v))) >= p;
}

static u32 strconv__log10_pow2(int e) {
	strconv__assert1(e >= 0, tos_lit("e >= 0"));
	strconv__assert1(e <= 1650, tos_lit("e <= 1650"));
	return (((u32)(e)) * 78913) >> 18;
}

static u32 strconv__log10_pow5(int e) {
	strconv__assert1(e >= 0, tos_lit("e >= 0"));
	strconv__assert1(e <= 2620, tos_lit("e <= 2620"));
	return (((u32)(e)) * 732923) >> 20;
}

static int strconv__pow5_bits(int e) {
	strconv__assert1(e >= 0, tos_lit("e >= 0"));
	strconv__assert1(e <= 3528, tos_lit("e <= 3528"));
	return ((int)(((((u32)(e)) * 1217359) >> 19) + 1));
}

static int strconv__decimal_len_64(u64 u) {
	int log2 = 64 - math__bits__leading_zeros_64(u) - 1;
	int t = (log2 + 1) * 1233 >> 12;
	return t - strconv__bool_to_int(u < (*(u64*)array_get(_const_strconv__powers_of_10, t))) + 1;
}

static u64 strconv__shift_right_128(strconv__Uint128 v, int shift) {
	strconv__assert1(shift < 64, tos_lit("shift < 64"));
	return ((v.hi << ((u64)(64 - shift))) | (v.lo >> ((u32)(shift))));
}

static u64 strconv__mul_shift_64(u64 m, strconv__Uint128 mul, int shift) {
	multi_return_u64_u64 mr_4387 = math__bits__mul_64(m, mul.hi);
	u64 hihi = mr_4387.arg0;
	u64 hilo = mr_4387.arg1;
	multi_return_u64_u64 mr_4425 = math__bits__mul_64(m, mul.lo);
	u64 lohi = mr_4425.arg0;
	strconv__Uint128 sum = (strconv__Uint128){.lo = lohi + hilo,.hi = hihi,};
	if (sum.lo < lohi) {
		sum.hi++;
	}
	return strconv__shift_right_128(sum, shift - 64);
}

static u32 strconv__pow5_factor_64(u64 v_i) {
	u64 v = v_i;
	for (u32 n = ((u32)(0U)); ; n++) {
		u64 q = v / 5;
		u64 r = v % 5;
		if (r != 0) {
			return n;
		}
		v = q;
	}
	return ((u32)(0U));
}

static bool strconv__multiple_of_power_of_five_64(u64 v, u32 p) {
	return strconv__pow5_factor_64(v) >= p;
}

static bool strconv__multiple_of_power_of_two_64(u64 v, u32 p) {
	return ((u32)(math__bits__trailing_zeros_64(v))) >= p;
}

string strconv__f32_to_str_l(f64 f) {
	return strconv__f64_to_str_l(((f32)(f)));
}

string strconv__f64_to_str_l(f64 f) {
	string s = strconv__f64_to_str(f, 18);
	if (s.len > 2 && (string_at(s, 0) == 'n' || string_at(s, 1) == 'i')) {
		return s;
	}
	bool m_sgn_flag = false;
	int sgn = 1;
	array_fixed_byte_26 b = {0};
	int d_pos = 1;
	int i = 0;
	int i1 = 0;
	int exp = 0;
	int exp_sgn = 1;
	for (int _t15 = 0; _t15 < s.len; ++_t15) {
		byte c = s.str[_t15];
		if (c == '-') {
			sgn = -1;
			i++;
		} else if (c == '+') {
			sgn = 1;
			i++;
		} else if (c >= '0' && c <= '9') {
			b[i1++] = c;
			i++;
		} else if (c == '.') {
			if (sgn > 0) {
				d_pos = i;
			} else {
				d_pos = i - 1;
			}
			i++;
		} else if (c == 'e') {
			i++;
			break;
		} else {
			return tos_lit("Float conversion error!!");
		}
	}
	b[i1] = 0;
	if (string_at(s, i) == '-') {
		exp_sgn = -1;
		i++;
	} else if (string_at(s, i) == '+') {
		exp_sgn = 1;
		i++;
	}
	for (int _t16 = 0; _t16 < string_substr(s, i, s.len).len; ++_t16) {
		byte c = string_substr(s, i, s.len).str[_t16];
		exp = exp * 10 + ((int)(c - '0'));
	}
	array_byte res = __new_array_with_default(exp + 32, 0, sizeof(byte), &(byte[]){0});
	int r_i = 0;
	if (sgn == 1) {
		if (m_sgn_flag) {
			array_set(&res, r_i++, &(byte[]) { '+' });
		}
	} else {
		array_set(&res, r_i++, &(byte[]) { '-' });
	}
	i = 0;
	if (exp_sgn >= 0) {
		for (;;) {
			if (!(b[i] != 0)) break;
			array_set(&res, r_i++, &(byte[]) { b[i] });
			i++;
			if (i >= d_pos && exp >= 0) {
				if (exp == 0) {
					array_set(&res, r_i++, &(byte[]) { '.' });
				}
				exp--;
			}
		}
		for (;;) {
			if (!(exp >= 0)) break;
			array_set(&res, r_i++, &(byte[]) { '0' });
			exp--;
		}
	} else {
		bool dot_p = true;
		for (;;) {
			if (!(exp > 0)) break;
			array_set(&res, r_i++, &(byte[]) { '0' });
			exp--;
			if (dot_p) {
				array_set(&res, r_i++, &(byte[]) { '.' });
				dot_p = false;
			}
		}
		for (;;) {
			if (!(b[i] != 0)) break;
			array_set(&res, r_i++, &(byte[]) { b[i] });
			i++;
		}
	}
	array_set(&res, r_i, &(byte[]) { 0 });
	return tos(res.data, r_i);
}

static array __new_array(int mylen, int cap, int elm_size) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = (array){.element_size = elm_size,.data = vcalloc(cap_ * elm_size),.len = mylen,.cap = cap_,};
	return arr;
}

static array __new_array_with_default(int mylen, int cap, int elm_size, voidptr val) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = (array){.element_size = elm_size,.data = vcalloc(cap_ * elm_size),.len = mylen,.cap = cap_,};
	if (val != 0) {
		for (int i = 0; i < arr.len; ++i) {
			array_set_unsafe(&arr, i, val);
		}
	}
	return arr;
}

static array __new_array_with_array_default(int mylen, int cap, int elm_size, array val) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = (array){.element_size = elm_size,.data = vcalloc(cap_ * elm_size),.len = mylen,.cap = cap_,};
	for (int i = 0; i < arr.len; ++i) {
		array val_clone = array_clone(&val);
		array_set_unsafe(&arr, i, &val_clone);
	}
	return arr;
}

static array new_array_from_c_array(int len, int cap, int elm_size, voidptr c_array) {
	int cap_ = (cap < len ? (len) : (cap));
	array arr = (array){.element_size = elm_size,.data = vcalloc(cap_ * elm_size),.len = len,.cap = cap_,};
	memcpy(arr.data, c_array, len * elm_size);
	return arr;
}

static array new_array_from_c_array_no_alloc(int len, int cap, int elm_size, voidptr c_array) {
	array arr = (array){.element_size = elm_size,.data = c_array,.len = len,.cap = cap,};
	return arr;
}

// Attr: [inline]
inline static void array_ensure_cap(array* a, int required) {
	if (required <= a->cap) {
		return;
	}
	int cap = (a->cap == 0 ? (2) : (a->cap * 2));
	for (;;) {
		if (!(required > cap)) break;
		cap *= 2;
	}
	if (a->cap == 0) {
		a->data = vcalloc(cap * a->element_size);
	} else {
		a->data = v_realloc(a->data, ((u32)(cap * a->element_size)));
	}
	a->cap = cap;
}

array array_repeat(array a, int count) {
	if (count < 0) {
		v_panic(_STR("array.repeat: count is negative: %"PRId32"", 1, count));
	}
	int size = count * a.len * a.element_size;
	if (size == 0) {
		size = a.element_size;
	}
	array arr = (array){.element_size = a.element_size,.data = vcalloc(size),.len = count * a.len,.cap = count * a.len,};
	for (int i = 0; i < count; ++i) {
		if (a.len > 0 && _us32_eq(/*SizeOfType*/ sizeof(struct array),a.element_size)) {
			array ary = (array){.element_size = 0,.data = 0,.len = 0,.cap = 0,};
			memcpy(&ary, a.data, /*SizeOfType*/ sizeof(struct array));
			array ary_clone = array_clone(&ary);
			memcpy(array_get_unsafe(arr, i * a.len), &ary_clone, a.len * a.element_size);
		} else {
			memcpy(array_get_unsafe(arr, i * a.len), ((byteptr)(a.data)), a.len * a.element_size);
		}
	}
	return arr;
}

void array_sort_with_compare(array* a, voidptr compare) {
	qsort(a->data, a->len, a->element_size, compare);
}

void array_insert(array* a, int i, voidptr val) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i > a->len) {
			v_panic(_STR("array.insert: index out of range (i == %"PRId32"\000, a.len == %"PRId32"\000)", 3, i, a->len));
		}
	}
	#endif
	array_ensure_cap(a, a->len + 1);
	{ // Unsafe block
		memmove(array_get_unsafe(/*rec*/*a, i + 1), array_get_unsafe(/*rec*/*a, i), (a->len - i) * a->element_size);
		array_set_unsafe(a, i, val);
	}
	a->len++;
}

void array_insert_many(array* a, int i, voidptr val, int size) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i > a->len) {
			v_panic(_STR("array.insert_many: index out of range (i == %"PRId32"\000, a.len == %"PRId32"\000)", 3, i, a->len));
		}
	}
	#endif
	array_ensure_cap(a, a->len + size);
	int elem_size = a->element_size;
	{ // Unsafe block
		voidptr iptr = array_get_unsafe(/*rec*/*a, i);
		memmove(array_get_unsafe(/*rec*/*a, i + size), iptr, (a->len - i) * elem_size);
		memcpy(iptr, val, size * elem_size);
	}
	a->len += size;
}

void array_prepend(array* a, voidptr val) {
	array_insert(a, 0, val);
}

void array_prepend_many(array* a, voidptr val, int size) {
	array_insert_many(a, 0, val, size);
}

void array_delete(array* a, int i) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= a->len) {
			v_panic(_STR("array.delete: index out of range (i == %"PRId32"\000, a.len == %"PRId32"\000)", 3, i, a->len));
		}
	}
	#endif
	memmove(array_get_unsafe(/*rec*/*a, i), array_get_unsafe(/*rec*/*a, i + 1), (a->len - i - 1) * a->element_size);
	a->len--;
}

void array_clear(array* a) {
	a->len = 0;
}

void array_trim(array* a, int index) {
	if (index < a->len) {
		a->len = index;
	}
}

// Attr: [inline]
// Attr: [unsafe]
inline static voidptr array_get_unsafe(array a, int i) {
	{ // Unsafe block
		return ((byteptr)(a.data)) + i * a.element_size;
	}
}

static voidptr array_get(array a, int i) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= a.len) {
			v_panic(_STR("array.get: index out of range (i == %"PRId32"\000, a.len == %"PRId32"\000)", 3, i, a.len));
		}
	}
	#endif
	{ // Unsafe block
		return ((byteptr)(a.data)) + i * a.element_size;
	}
}

voidptr array_first(array a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a.len == 0) {
			v_panic(tos_lit("array.first: array is empty"));
		}
	}
	#endif
	return a.data;
}

voidptr array_last(array a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a.len == 0) {
			v_panic(tos_lit("array.last: array is empty"));
		}
	}
	#endif
	{ // Unsafe block
		return ((byteptr)(a.data)) + (a.len - 1) * a.element_size;
	}
}

voidptr array_pop(array* a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a->len == 0) {
			v_panic(tos_lit("array.pop: array is empty"));
		}
	}
	#endif
	int new_len = a->len - 1;
	byteptr last_elem = ((byteptr)(a->data)) + (new_len) * a->element_size;
	a->len = new_len;
	return memdup(last_elem, a->element_size);
}

static array array_slice(array a, int start, int _end) {
	int end = _end;
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (start > end) {
			v_panic(_STR("array.slice: invalid slice index (%"PRId32"\000 > %"PRId32"\000)", 3, start, end));
		}
		if (end > a.len) {
			v_panic(_STR("array.slice: slice bounds out of range (%"PRId32"\000 >= %"PRId32"\000)", 3, end, a.len));
		}
		if (start < 0) {
			v_panic(_STR("array.slice: slice bounds out of range (%"PRId32"\000 < 0)", 2, start));
		}
	}
	#endif
	byteptr data = ((byteptr)(0));
	{ // Unsafe block
		data = ((byteptr)(a.data)) + start * a.element_size;
	}
	int l = end - start;
	array res = (array){.element_size = a.element_size,.data = data,.len = l,.cap = l,};
	return res;
}

static array array_slice2(array a, int start, int _end, bool end_max) {
	int end = (end_max ? (a.len) : (_end));
	return array_slice(a, start, end);
}

static array array_clone_static(array a) {
	return array_clone(&a);
}

array array_clone(array* a) {
	int size = a->cap * a->element_size;
	if (size == 0) {
		size++;
	}
	array arr = (array){.element_size = a->element_size,.data = vcalloc(size),.len = a->len,.cap = a->cap,};
	if (_us32_eq(/*SizeOfType*/ sizeof(struct array),a->element_size)) {
		for (int i = 0; i < a->len; ++i) {
			array ar = (array){.element_size = 0,.data = 0,.len = 0,.cap = 0,};
			memcpy(&ar, array_get_unsafe(/*rec*/*a, i), /*SizeOfType*/ sizeof(struct array));
			array ar_clone = array_clone(&ar);
			array_set_unsafe(&arr, i, &ar_clone);
		}
	} else {
		memcpy(((byteptr)(arr.data)), a->data, a->cap * a->element_size);
	}
	return arr;
}

static array array_slice_clone(array* a, int start, int _end) {
	int end = _end;
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (start > end) {
			v_panic(_STR("array.slice: invalid slice index (%"PRId32"\000 > %"PRId32"\000)", 3, start, end));
		}
		if (end > a->len) {
			v_panic(_STR("array.slice: slice bounds out of range (%"PRId32"\000 >= %"PRId32"\000)", 3, end, a->len));
		}
		if (start < 0) {
			v_panic(_STR("array.slice: slice bounds out of range (%"PRId32"\000 < 0)", 2, start));
		}
	}
	#endif
	byteptr data = ((byteptr)(0));
	{ // Unsafe block
		data = ((byteptr)(a->data)) + start * a->element_size;
	}
	int l = end - start;
	array res = (array){.element_size = a->element_size,.data = data,.len = l,.cap = l,};
	return array_clone(&res);
}

// Attr: [inline]
// Attr: [unsafe]
inline static void array_set_unsafe(array* a, int i, voidptr val) {
	memcpy(((byteptr)(a->data)) + a->element_size * i, val, a->element_size);
}

static void array_set(array* a, int i, voidptr val) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= a->len) {
			v_panic(_STR("array.set: index out of range (i == %"PRId32"\000, a.len == %"PRId32"\000)", 3, i, a->len));
		}
	}
	#endif
	memcpy(((byteptr)(a->data)) + a->element_size * i, val, a->element_size);
}

static void array_push(array* a, voidptr val) {
	array_ensure_cap(a, a->len + 1);
	memcpy(((byteptr)(a->data)) + a->element_size * a->len, val, a->element_size);
	a->len++;
}

void array_push_many(array* a3, voidptr val, int size) {
	if (a3->data == val) {
		array copy = array_clone(a3);
		array_ensure_cap(a3, a3->len + size);
		memcpy(array_get_unsafe(/*rec*/*a3, a3->len), copy.data, a3->element_size * size);
	} else {
		array_ensure_cap(a3, a3->len + size);
		memcpy(array_get_unsafe(/*rec*/*a3, a3->len), val, a3->element_size * size);
	}
	a3->len += size;
}

void array_reverse_in_place(array* a) {
	if (a->len < 2) {
		return;
	}
	{ // Unsafe block
		byteptr tmp_value = v_malloc(a->element_size);
		for (int i = 0; i < a->len / 2; ++i) {
			memcpy(tmp_value, ((byteptr)(a->data)) + i * a->element_size, a->element_size);
			memcpy(((byteptr)(a->data)) + i * a->element_size, ((byteptr)(a->data)) + (a->len - 1 - i) * a->element_size, a->element_size);
			memcpy(((byteptr)(a->data)) + (a->len - 1 - i) * a->element_size, tmp_value, a->element_size);
		}
		v_free(tmp_value);
	}
}

array array_reverse(array a) {
	if (a.len < 2) {
		return a;
	}
	array arr = (array){.element_size = a.element_size,.data = vcalloc(a.cap * a.element_size),.len = a.len,.cap = a.cap,};
	for (int i = 0; i < a.len; ++i) {
		array_set_unsafe(&arr, i, array_get_unsafe(a, a.len - 1 - i));
	}
	return arr;
}

// Attr: [unsafe]
void array_free(array* a) {
	#if defined(_VPREALLOC)
	{
	}
	#endif
	free(a->data);
}

string array_string_str(array_string a) {
	strings__Builder sb = strings__new_builder(a.len * 3);
	strings__Builder_write(&sb, tos_lit("["));
	for (int i = 0; i < a.len; ++i) {
		string val = (*(string*)array_get(a, i));
		strings__Builder_write(&sb, tos_lit("\'"));
		strings__Builder_write(&sb, val);
		strings__Builder_write(&sb, tos_lit("\'"));
		if (i < a.len - 1) {
			strings__Builder_write(&sb, tos_lit(", "));
		}
	}
	strings__Builder_write(&sb, tos_lit("]"));
	return strings__Builder_str(&sb);
}

string array_byte_hex(array_byte b) {
	byteptr hex = v_malloc(b.len * 2 + 1);
	int dst_i = 0;
	// FOR IN array
	array _t17 = b;
	for (int _t18 = 0; _t18 < _t17.len; ++_t18) {
		byte i = ((byte*)_t17.data)[_t18];
		byte n0 = i >> 4;
		{ // Unsafe block
			hex[dst_i++] = (n0 < 10 ? (n0 + '0') : (n0 + ((byte)(87))));
		}
		byte n1 = (i & 0xF);
		{ // Unsafe block
			hex[dst_i++] = (n1 < 10 ? (n1 + '0') : (n1 + ((byte)(87))));
		}
	}
	{ // Unsafe block
		hex[dst_i] = '\0';
		return tos(hex, dst_i);
	}
}

int copy(array_byte dst, array_byte src) {
	if (dst.len > 0 && src.len > 0) {
		int min = 0;
		min = (dst.len < src.len ? (dst.len) : (src.len));
		memcpy(((byteptr)(dst.data)), array_slice(src, 0, min).data, dst.element_size * min);
		return min;
	}
	return 0;
}

static int compare_ints(int* a, int* b) {
	if (*a < *b) {
		return -1;
	}
	if (*a > *b) {
		return 1;
	}
	return 0;
}

static int compare_ints_reverse(int* a, int* b) {
	if (*a > *b) {
		return -1;
	}
	if (*a < *b) {
		return 1;
	}
	return 0;
}

static int compare_floats(f64* a, f64* b) {
	if (*a < *b) {
		return -1;
	}
	if (*a > *b) {
		return 1;
	}
	return 0;
}

static int compare_floats_reverse(f64* a, f64* b) {
	if (*a > *b) {
		return -1;
	}
	if (*a < *b) {
		return 1;
	}
	return 0;
}

void array_int_sort(array_int* a) {
	array_sort_with_compare(a, compare_ints);
}

int array_string_index(array_string a, string v) {
	for (int i = 0; i < a.len; ++i) {
		if (string_eq((*(string*)array_get(a, i)), v)) {
			return i;
		}
	}
	return -1;
}

int array_int_index(array_int a, int v) {
	for (int i = 0; i < a.len; ++i) {
		if ((*(int*)array_get(a, i)) == v) {
			return i;
		}
	}
	return -1;
}

int array_byte_index(array_byte a, byte v) {
	for (int i = 0; i < a.len; ++i) {
		if ((*(byte*)array_get(a, i)) == v) {
			return i;
		}
	}
	return -1;
}

int array_rune_index(array_rune a, rune v) {
	for (int i = 0; i < a.len; ++i) {
		if ((*(rune*)array_get(a, i)) == v) {
			return i;
		}
	}
	return -1;
}

int array_char_index(array_char a, char v) {
	for (int i = 0; i < a.len; ++i) {
		if ((*(char*)array_get(a, i)) == v) {
			return i;
		}
	}
	return -1;
}

int array_int_reduce(array_int a, int (*iter)(int accum, int curr), int accum_start) {
	int accum_ = accum_start;
	// FOR IN array
	array _t19 = a;
	for (int _t20 = 0; _t20 < _t19.len; ++_t20) {
		int i = ((int*)_t19.data)[_t20];
		accum_ = iter(accum_, i);
	}
	return accum_;
}

bool array_string_eq(array_string a1, array_string a2) {
	if (a1.len != a2.len) {
		return false;
	}
	for (int i = 0; i < a1.len; ++i) {
		if (string_ne((*(string*)array_get(a1, i)), (*(string*)array_get(a2, i)))) {
			return false;
		}
	}
	return true;
}

int compare_i64(i64* a, i64* b) {
	if (*a < *b) {
		return -1;
	}
	if (*a > *b) {
		return 1;
	}
	return 0;
}

int compare_f64(f64* a, f64* b) {
	if (*a < *b) {
		return -1;
	}
	if (*a > *b) {
		return 1;
	}
	return 0;
}

int compare_f32(f32* a, f32* b) {
	if (*a < *b) {
		return -1;
	}
	if (*a > *b) {
		return 1;
	}
	return 0;
}

array_voidptr array_pointers(array a) {
	array_voidptr res = __new_array_with_default(0, 0, sizeof(voidptr), 0);
	for (int i = 0; i < a.len; ++i) {
		array_push(&res, _MOV((voidptr[]){ array_get_unsafe(a, i) }));
	}
	return res;
}

// TypeDecl
void v_exit(int code) {
	exit(code);
}

bool isnil(voidptr v) {
	return v == 0;
}

void print_backtrace() {
	print_backtrace_skipping_top_frames(2);
}

static void panic_debug(int line_no, string file, string mod, string fn_name, string s) {
	eprintln(tos_lit("================ V panic ================"));
	eprintln(_STR("   module: %.*s", 1, mod));
	eprintln(_STR(" function: %.*s\000()", 2, fn_name));
	eprintln(_STR("  message: %.*s", 1, s));
	eprintln(_STR("     file: %.*s", 1, file));
	eprintln(string_add(tos_lit("     line: "), int_str(line_no)));
	eprintln(tos_lit("========================================="));
	#if !defined(__TINYC__)
	{
	}
	#endif
	break_if_debugger_attached();
	exit(1);
}

void v_panic(string s) {
	eprintln(_STR("V panic: %.*s", 1, s));
	#if !defined(__TINYC__)
	{
	}
	#endif
	break_if_debugger_attached();
	exit(1);
}

void eprintln(string s) {
	if (s.str == 0) {
		eprintln(tos_lit("eprintln(NIL)"));
	}
	fflush(stdout);
	fflush(stderr);
	write(2, s.str, s.len);
	write(2, "\n", 1);
	fflush(stderr);
}

void eprint(string s) {
	if (s.str == 0) {
		eprintln(tos_lit("eprint(NIL)"));
	}
	fflush(stdout);
	fflush(stderr);
	write(2, s.str, s.len);
	fflush(stderr);
}

void print(string s) {
	write(1, s.str, s.len);
}

void println(string s) {
	#if defined(_WIN32)
	{
		print(s);
		print(_const_new_line_character);
	}
	#else
	{
	}
	#endif
}

// Attr: [unsafe]
byteptr v_malloc(int n) {
	if (n <= 0) {
		v_panic(tos_lit("malloc(<=0)"));
	}
	#if defined(_VPREALLOC)
	{
	}
	#else
	{
		byteptr ptr = malloc(n);
		if (ptr == 0) {
			v_panic(_STR("malloc(%"PRId32"\000) failed", 2, n));
		}
		return ptr;
	}
	#endif
}

// Attr: [unsafe]
byteptr v_realloc(byteptr b, u32 n) {
	#if defined(_VPREALLOC)
	{
	}
	#else
	{
		byteptr ptr = realloc(b, n);
		if (ptr == 0) {
			v_panic(_STR("realloc(%"PRIu32"\000) failed", 2, n));
		}
		return ptr;
	}
	#endif
}

// Attr: [unsafe]
byteptr v_calloc(int n) {
	return calloc(1, n);
}

// Attr: [unsafe]
byteptr vcalloc(int n) {
	if (n < 0) {
		v_panic(tos_lit("calloc(<=0)"));
	} else if (n == 0) {
		return ((byteptr)(0));
	}
	return calloc(1, n);
}

// Attr: [unsafe]
void v_free(voidptr ptr) {
	#if defined(_VPREALLOC)
	{
	}
	#endif
	free(ptr);
}

voidptr memdup(voidptr src, int sz) {
	if (sz == 0) {
		return vcalloc(1);
	}
	{ // Unsafe block
		byteptr mem = v_malloc(sz);
		return memcpy(mem, src, sz);
	}
}

static void v_ptr_free(voidptr ptr) {
	#if defined(_VPREALLOC)
	{
	}
	#endif
	free(ptr);
}

int is_atty(int fd) {
	#if defined(_WIN32)
	{
		u32 mode = ((u32)(0U));
		voidptr osfh = ((voidptr)(_get_osfhandle(fd)));
		GetConsoleMode(osfh, ((voidptr)(&mode)));
		return ((int)(mode));
	}
	#else
	{
	}
	#endif
}

static voidptr __as_cast(voidptr obj, int obj_type, int expected_type) {
	if (obj_type != expected_type) {
		v_panic(_STR("as cast: cannot cast %"PRId32"\000 to %"PRId32"", 2, obj_type, expected_type));
	}
	return obj;
}

static void __print_assert_failure(VAssertMetaInfo* i) {
	eprintln(_STR("%.*s\000:%"PRId32"\000: FAIL: fn %.*s\000: assert %.*s", 4, i->fpath, i->line_nr + 1, i->fn_name, i->src));
	if (i->op.len > 0 && string_ne(i->op, tos_lit("call"))) {
		eprintln(_STR("   left value: %.*s\000 = %.*s", 2, i->llabel, i->lvalue));
		if (string_eq(i->rlabel, i->rvalue)) {
			eprintln(_STR("  right value: %.*s", 1, i->rlabel));
		} else {
			eprintln(_STR("  right value: %.*s\000 = %.*s", 2, i->rlabel, i->rvalue));
		}
	}
}

static void restore_codepage() {
	SetConsoleOutputCP(g_original_codepage);
}

static void builtin_init() {
	g_original_codepage = GetConsoleOutputCP();
	SetConsoleOutputCP(CP_UTF8);
	atexit(restore_codepage);
	if (is_atty(1) > 0) {
		SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), (ENABLE_PROCESSED_OUTPUT | 0x0004));
		SetConsoleMode(GetStdHandle(STD_ERROR_HANDLE), (ENABLE_PROCESSED_OUTPUT | 0x0004));
		{ // Unsafe block
			setbuf(stdout, 0);
			setbuf(stderr, 0);
		}
	}
	add_unhandled_exception_handler();
}

static bool print_backtrace_skipping_top_frames(int skipframes) {
	#if defined(_MSC_VER)
	{
	}
	#endif
	#if defined(__TINYC__)
	{
		return print_backtrace_skipping_top_frames_tcc(skipframes);
	}
	#endif
	#if defined(__MINGW32__)
	{
	}
	#endif
	eprintln(tos_lit("print_backtrace_skipping_top_frames is not implemented"));
	return false;
}

static bool print_backtrace_skipping_top_frames_msvc(int skipframes) {
	#if defined(_MSC_VER)
	{
	}
	#else
	{
		eprintln(tos_lit("print_backtrace_skipping_top_frames_msvc must be called only when the compiler is msvc"));
		return false;
	}
	#endif
}

static bool print_backtrace_skipping_top_frames_mingw(int skipframes) {
	eprintln(tos_lit("print_backtrace_skipping_top_frames_mingw is not implemented"));
	return false;
}

static bool print_backtrace_skipping_top_frames_tcc(int skipframes) {
	#if defined(__TINYC__)
	{
		tcc_backtrace("Backtrace");
		return false;
	}
	#else
	{
	}
	#endif
}

// TypeDecl
static void add_vectored_exception_handler(VectoredExceptionHandler handler) {
	AddVectoredExceptionHandler(1, ((PVECTORED_EXCEPTION_HANDLER)(handler)));
}

// Attr: [windows_stdcall]
static int __stdcall  unhandled_exception_handler(ExceptionPointers* e) {
	u32 _t22 = e->exception_record->code;
	if (_t22 == 0x4001000A || _t22 == 0x40010006) {
		return 0;
	} else {
		println(_STR("Unhandled Exception 0x%"PRIX32"", 1, e->exception_record->code));
		print_backtrace_skipping_top_frames(5);
	};
	return 0;
}

static void add_unhandled_exception_handler() {
	add_vectored_exception_handler(((VectoredExceptionHandler)(((voidptr)(unhandled_exception_handler)))));
}

static void break_if_debugger_attached() {
	#if defined(__TINYC__)
	{
		{ // Unsafe block
			voidptr* ptr = ((voidptr*)(0));
			*ptr = 0;
		}
	}
	#else
	{
	}
	#endif
}

int proc_pidpath(int , voidptr , int );

// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
void chan_close(chan ch) {
}

ChanState chan_try_pop(chan ch, voidptr obj) {
	return ChanState_success;
}

ChanState chan_try_push(chan ch, voidptr obj) {
	return ChanState_success;
}

// Attr: [inline]
inline string f64_str(f64 x) {
	f64 abs_x = f64_abs(x);
	if (abs_x >= 0.0001 && abs_x < 1.0e6) {
		return strconv__f64_to_str_l(x);
	} else {
		return strconv__ftoa_64(x);
	}
}

// Attr: [inline]
inline string any_float_str(any_float d) {
	return f64_str(((f64)(d)));
}

// Attr: [inline]
inline string f64_strsci(f64 x, int digit_num) {
	int n_digit = digit_num;
	if (n_digit < 1) {
		n_digit = 1;
	} else if (n_digit > 17) {
		n_digit = 17;
	}
	return strconv__f64_to_str(x, n_digit);
}

// Attr: [inline]
inline string f64_strlong(f64 x) {
	return strconv__f64_to_str_l(x);
}

// Attr: [inline]
inline string f32_str(f32 x) {
	f32 abs_x = f32_abs(x);
	if (abs_x >= 0.0001 && abs_x < 1.0e6) {
		return strconv__f32_to_str_l(x);
	} else {
		return strconv__ftoa_32(x);
	}
}

// Attr: [inline]
inline string f32_strsci(f32 x, int digit_num) {
	int n_digit = digit_num;
	if (n_digit < 1) {
		n_digit = 1;
	} else if (n_digit > 8) {
		n_digit = 8;
	}
	return strconv__f32_to_str(x, n_digit);
}

// Attr: [inline]
inline string f32_strlong(f32 x) {
	return strconv__f32_to_str_l(x);
}

// Attr: [inline]
inline f32 f32_abs(f32 a) {
	return (a < 0 ? (-a) : (a));
}

// Attr: [inline]
inline static f64 f64_abs(f64 a) {
	return (a < 0 ? (-a) : (a));
}

// Attr: [inline]
inline f32 f32_max(f32 a, f32 b) {
	return (a > b ? (a) : (b));
}

// Attr: [inline]
inline f32 f32_min(f32 a, f32 b) {
	return (a < b ? (a) : (b));
}

// Attr: [inline]
inline f64 f64_max(f64 a, f64 b) {
	return (a > b ? (a) : (b));
}

// Attr: [inline]
inline static f64 f64_min(f64 a, f64 b) {
	return (a < b ? (a) : (b));
}

// Attr: [inline]
inline bool f32_eq_epsilon(f32 a, f32 b) {
	f32 hi = f32_max(f32_abs(a), f32_abs(b));
	f32 delta = f32_abs(a - b);
	if (hi > ((f32)(1.0))) {
		return delta <= hi * (4 * ((f32)(FLT_EPSILON)));
	} else {
		return (1 / (4 * ((f32)(FLT_EPSILON)))) * delta <= hi;
	}
}

// Attr: [inline]
inline bool f64_eq_epsilon(f64 a, f64 b) {
	f64 hi = f64_max(f64_abs(a), f64_abs(b));
	f64 delta = f64_abs(a - b);
	if (hi > 1.0) {
		return delta <= hi * (4 * ((f64)(DBL_EPSILON)));
	} else {
		return (1 / (4 * ((f64)(DBL_EPSILON)))) * delta <= hi;
	}
}

string ptr_str(voidptr ptr) {
	string buf1 = u64_hex(((u64)(ptr)));
	return buf1;
}

// Attr: [inline]
inline string int_str_l(int nn, int max) {
	i64 n = ((i64)(nn));
	int d = 0;
	if (n == 0) {
		return tos_lit("0");
	}
	byteptr buf = v_malloc(max + 1);
	bool is_neg = false;
	if (n < 0) {
		n = -n;
		is_neg = true;
	}
	int index = max;
	{ // Unsafe block
		buf[index--] = '\0';
	}
	for (;;) {
		if (!(n > 0)) break;
		int n1 = ((int)(n / 100));
		d = ((((int)(n)) - (n1 * 100)) << 1);
		n = n1;
		{ // Unsafe block
			buf[index--] = _const_digit_pairs.str[d++];
			buf[index--] = _const_digit_pairs.str[d];
		}
	}
	index++;
	if (d < 20) {
		index++;
	}
	if (is_neg) {
		index--;
		{ // Unsafe block
			buf[index] = '-';
		}
	}
	{ // Unsafe block
		memmove(buf, buf + index, (max - index) + 1);
		return tos(buf, (max - index));
	}
}

string i8_str(i8 n) {
	return int_str_l(((int)(n)), 5);
}

string i16_str(i16 n) {
	return int_str_l(((int)(n)), 7);
}

string u16_str(u16 n) {
	return int_str_l(((int)(n)), 7);
}

string int_str(int n) {
	return int_str_l(n, 12);
}

string u32_str(u32 nn) {
	u32 n = nn;
	u32 d = ((u32)(0U));
	if (n == 0) {
		return tos_lit("0");
	}
	int max = 12;
	byteptr buf = v_malloc(max + 1);
	int index = max;
	{ // Unsafe block
		buf[index--] = '\0';
	}
	for (;;) {
		if (!(n > 0)) break;
		u32 n1 = n / ((u32)(100U));
		d = ((n - (n1 * ((u32)(100U)))) << ((u32)(1U)));
		n = n1;
		{ // Unsafe block
			buf[index--] = string_at(_const_digit_pairs, d++);
			buf[index--] = string_at(_const_digit_pairs, d);
		}
	}
	index++;
	if (d < ((u32)(20U))) {
		index++;
	}
	{ // Unsafe block
		memmove(buf, buf + index, (max - index) + 1);
		return tos(buf, (max - index));
	}
}

// Attr: [inline]
inline string any_int_str(any_int n) {
	return i64_str(((i64)(n)));
}

string i64_str(i64 nn) {
	i64 n = nn;
	i64 d = ((i64)(0));
	if (n == 0) {
		return tos_lit("0");
	}
	int max = 20;
	byteptr buf = vcalloc(max + 1);
	bool is_neg = false;
	if (n < 0) {
		n = -n;
		is_neg = true;
	}
	int index = max;
	{ // Unsafe block
		buf[index--] = '\0';
	}
	for (;;) {
		if (!(n > 0)) break;
		i64 n1 = n / ((i64)(100));
		d = ((n - (n1 * ((i64)(100)))) << ((i64)(1)));
		n = n1;
		{ // Unsafe block
			buf[index--] = string_at(_const_digit_pairs, d++);
			buf[index--] = string_at(_const_digit_pairs, d);
		}
	}
	index++;
	if (d < ((i64)(20))) {
		index++;
	}
	if (is_neg) {
		index--;
		{ // Unsafe block
			buf[index] = '-';
		}
	}
	{ // Unsafe block
		memmove(buf, buf + index, (max - index) + 1);
		return tos(buf, (max - index));
	}
}

string u64_str(u64 nn) {
	u64 n = nn;
	u64 d = ((u64)(0U));
	if (n == 0) {
		return tos_lit("0");
	}
	int max = 20;
	byteptr buf = vcalloc(max + 1);
	int index = max;
	{ // Unsafe block
		buf[index--] = '\0';
	}
	for (;;) {
		if (!(n > 0)) break;
		u64 n1 = n / 100;
		d = ((n - (n1 * 100)) << 1);
		n = n1;
		{ // Unsafe block
			buf[index--] = string_at(_const_digit_pairs, d++);
			buf[index--] = string_at(_const_digit_pairs, d);
		}
	}
	index++;
	if (d < 20) {
		index++;
	}
	{ // Unsafe block
		memmove(buf, buf + index, (max - index) + 1);
		return tos(buf, (max - index));
	}
}

string bool_str(bool b) {
	if (b) {
		return tos_lit("true");
	}
	return tos_lit("false");
}

// Attr: [inline]
inline static string u64_to_hex(u64 nn, byte len) {
	u64 n = nn;
	array_fixed_byte_256 buf = {0};
	buf[len] = '\0';
	int i = 0;
	for (i = len - 1; i >= 0; i--) {
		byte d = ((byte)((n & 0xF)));
		rune x = (d < 10 ? (d + '0') : (d + 87));
		buf[i] = x;
		n = n >> 4;
	}
	return (string){.str = memdup((voidptr)&/*qq*/buf, len + 1), .len = len};
}

// Attr: [inline]
inline static string u64_to_hex_no_leading_zeros(u64 nn, byte len) {
	u64 n = nn;
	array_fixed_byte_256 buf = {0};
	buf[len] = '\0';
	int i = 0;
	for (i = len - 1; i >= 0; i--) {
		byte d = ((byte)((n & 0xF)));
		rune x = (d < 10 ? (d + '0') : (d + 87));
		buf[i] = x;
		n = n >> 4;
		if (n == 0) {
			break;
		}
	}
	int res_len = len - i;
	return (string){.str = memdup(&buf[i], res_len + 1), .len = res_len};
}

string byte_hex(byte nn) {
	if (nn == 0) {
		return tos_lit("00");
	}
	return u64_to_hex(nn, 2);
}

string i8_hex(i8 nn) {
	return byte_hex(((byte)(nn)));
}

string u16_hex(u16 nn) {
	if (nn == 0) {
		return tos_lit("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 4);
}

string i16_hex(i16 nn) {
	return u16_hex(((u16)(nn)));
}

string u32_hex(u32 nn) {
	if (nn == 0) {
		return tos_lit("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 8);
}

string int_hex(int nn) {
	return u32_hex(((u32)(nn)));
}

string int_hex2(int n) {
	return string_add(tos_lit("0x"), int_hex(n));
}

string u64_hex(u64 nn) {
	if (nn == 0) {
		return tos_lit("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 16);
}

string i64_hex(i64 nn) {
	return u64_hex(((u64)(nn)));
}

string any_int_hex(any_int nn) {
	return u64_hex(((u64)(nn)));
}

string voidptr_str(voidptr nn) {
	return u64_hex(((u64)(nn)));
}

string byteptr_str(byteptr nn) {
	return u64_hex(((u64)(nn)));
}

string byte_str(byte b) {
	string str = (string){.str = v_malloc(2), .len = 1};
	{ // Unsafe block
		str.str[0] = b;
		str.str[1] = '\0';
	}
	return str;
}

string byte_str_escaped(byte b) {
	byte _t23 = b;
		string str = (_t23 == 0) ? (string_add(tos_lit("`\\"), tos_lit("0`"))) : (_t23 == 7) ? (tos_lit("`\\a`")) : (_t23 == 8) ? (tos_lit("`\\b`")) : (_t23 == 9) ? (tos_lit("`\\t`")) : (_t23 == 10) ? (tos_lit("`\\n`")) : (_t23 == 11) ? (tos_lit("`\\v`")) : (_t23 == 12) ? (tos_lit("`\\f`")) : (_t23 == 13) ? (tos_lit("`\\r`")) : ((_t23 >= 32 && _t23 <= 126)) ? (byte_str(b)) : (string_add(tos_lit("0x"), byte_hex(b)));
	return str;
}

bool array_byte_contains(array_byte a, byte val) {
	// FOR IN array
	array _t24 = a;
	for (int _t25 = 0; _t25 < _t24.len; ++_t25) {
		byte aa = ((byte*)_t24.data)[_t25];
		if (aa == val) {
			return true;
		}
	}
	return false;
}

bool array_u16_contains(array_u16 a, u16 val) {
	// FOR IN array
	array _t26 = a;
	for (int _t27 = 0; _t27 < _t26.len; ++_t27) {
		u16 aa = ((u16*)_t26.data)[_t27];
		if (aa == val) {
			return true;
		}
	}
	return false;
}

static bool array_int_contains(array_int ar, int val) {
	// FOR IN array
	array _t28 = ar;
	for (int _t29 = 0; _t29 < _t28.len; ++_t29) {
		int s = ((int*)_t28.data)[_t29];
		if (s == val) {
			return true;
		}
	}
	return false;
}

bool array_u64_contains(array_u64 a, u64 val) {
	// FOR IN array
	array _t30 = a;
	for (int _t31 = 0; _t31 < _t30.len; ++_t31) {
		u64 aa = ((u64*)_t30.data)[_t31];
		if (aa == val) {
			return true;
		}
	}
	return false;
}

// Attr: [inline]
inline static bool fast_string_eq(string a, string b) {
	if (a.len != b.len) {
		return false;
	}
	{ // Unsafe block
		return memcmp(a.str, b.str, b.len) == 0;
	}
}

// Attr: [inline]
// Attr: [unsafe]
inline static DenseArray new_dense_array(int value_bytes) {
	int s8size = ((int)(8 * /*SizeOfType*/ sizeof(string)));
	return (DenseArray){
		.value_bytes = value_bytes,
		.cap = 8,
		.len = 0,
		.deletes = 0,
		.keys = ((string*)(v_malloc(s8size))),
		.values = v_malloc(8 * value_bytes),
	};
}

// Attr: [inline]
inline static u32 DenseArray_push(DenseArray* d, string key, voidptr value) {
	if (d->cap == d->len) {
		d->cap += d->cap >> 3;
		{ // Unsafe block
			byteptr x = v_realloc(((byteptr)(d->keys)), /*SizeOfType*/ sizeof(string) * d->cap);
			d->keys = ((string*)(x));
			d->values = v_realloc(((byteptr)(d->values)), ((u32)(d->value_bytes)) * d->cap);
		}
	}
	u32 push_index = d->len;
	{ // Unsafe block
		d->keys[push_index] = key;
		memcpy(d->values + push_index * ((u32)(d->value_bytes)), value, d->value_bytes);
	}
	d->len++;
	return push_index;
}

static voidptr DenseArray_get(DenseArray d, int i) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= ((int)(d.len))) {
			v_panic(_STR("DenseArray.get: index out of range (i == %"PRId32"\000, d.len == %"PRIu32"\000)", 3, i, d.len));
		}
	}
	#endif
	{ // Unsafe block
		return ((byteptr)(d.keys)) + i * ((int)(/*SizeOfType*/ sizeof(string)));
	}
}

static void DenseArray_zeros_to_end(DenseArray* d) {
	byteptr tmp_value = v_malloc(d->value_bytes);
	u32 count = ((u32)(0U));
	for (int i = 0; i < d->len; ++i) {
		if (d->keys[i].str != 0) {
			{ // Unsafe block
				string tmp_key = d->keys[count];
				d->keys[count] = d->keys[i];
				d->keys[i] = tmp_key;
			}
			{ // Unsafe block
				memcpy(tmp_value, d->values + count * ((u32)(d->value_bytes)), d->value_bytes);
				memcpy(d->values + count * ((u32)(d->value_bytes)), d->values + i * d->value_bytes, d->value_bytes);
				memcpy(d->values + i * d->value_bytes, tmp_value, d->value_bytes);
			}
			count++;
		}
	}
	v_free(tmp_value);
	d->deletes = 0;
	d->len = count;
	d->cap = (count < 8 ? (((u32)(8U))) : (count));
	{ // Unsafe block
		byteptr x = v_realloc(((byteptr)(d->keys)), /*SizeOfType*/ sizeof(string) * d->cap);
		d->keys = ((string*)(x));
		d->values = v_realloc(((byteptr)(d->values)), ((u32)(d->value_bytes)) * d->cap);
	}
}

static map new_map_1(int value_bytes) {
	int metasize = ((int)(/*SizeOfType*/ sizeof(u32) * (_const_init_capicity + _const_extra_metas_inc)));
	return (map){
		.value_bytes = value_bytes,
		.cap = _const_init_cap,
		.cached_hashbits = _const_max_cached_hashbits,
		.shift = _const_init_log_capicity,
		.key_values = new_dense_array(value_bytes),
		.metas = ((u32*)(vcalloc(metasize))),
		.extra_metas = _const_extra_metas_inc,
		.len = 0,
	};
}

static map new_map_init(int n, int value_bytes, string* keys, voidptr values) {
	map out = new_map_1(value_bytes);
	for (int i = 0; i < n; ++i) {
		map_set(&out, keys[i], ((byteptr)(values)) + i * value_bytes);
	}
	return out;
}

// Attr: [inline]
inline static multi_return_u32_u32 map_key_to_index(map* m, string key) {
	u64 hash = hash__wyhash_c(key.str, ((u64)(key.len)), 0);
	u64 index = (hash & m->cap);
	u64 meta = ((((hash >> m->shift) & _const_hash_mask)) | _const_probe_inc);
	return (multi_return_u32_u32){.arg0=((u32)(index)), .arg1=((u32)(meta))};
}

// Attr: [inline]
inline static multi_return_u32_u32 map_meta_less(map* m, u32 _index, u32 _metas) {
	u32 index = _index;
	u32 meta = _metas;
	for (;;) {
		if (!(meta < m->metas[index])) break;
		index += 2;
		meta += _const_probe_inc;
	}
	return (multi_return_u32_u32){.arg0=index, .arg1=meta};
}

// Attr: [inline]
inline static void map_meta_greater(map* m, u32 _index, u32 _metas, u32 kvi) {
	u32 meta = _metas;
	u32 index = _index;
	u32 kv_index = kvi;
	for (;;) {
		if (!(m->metas[index] != 0)) break;
		if (meta > m->metas[index]) {
			{ // Unsafe block
				u32 tmp_meta = m->metas[index];
				m->metas[index] = meta;
				meta = tmp_meta;
			}
			u32 tmp_index = m->metas[index + 1];
			{ // Unsafe block
				m->metas[index + 1] = kv_index;
			}
			kv_index = tmp_index;
		}
		index += 2;
		meta += _const_probe_inc;
	}
	{ // Unsafe block
		m->metas[index] = meta;
		m->metas[index + 1] = kv_index;
	}
	u32 probe_count = (meta >> _const_hashbits) - 1;
	map_ensure_extra_metas(m, probe_count);
}

// Attr: [inline]
inline static void map_ensure_extra_metas(map* m, u32 probe_count) {
	if ((probe_count << 1) == m->extra_metas) {
		m->extra_metas += _const_extra_metas_inc;
		u32 mem_size = (m->cap + 2 + m->extra_metas);
		{ // Unsafe block
			byteptr x = v_realloc(((byteptr)(m->metas)), /*SizeOfType*/ sizeof(u32) * mem_size);
			m->metas = ((u32*)(x));
			memset(m->metas + mem_size - _const_extra_metas_inc, 0, /*SizeOfType*/ sizeof(u32) * _const_extra_metas_inc);
		}
		if (probe_count == 252) {
			v_panic(tos_lit("Probe overflow"));
		}
	}
}

static void map_set(map* m, string k, voidptr value) {
	string key = string_clone(k);
	f32 load_factor = ((f32)(m->len << 1)) / ((f32)(m->cap));
	if (load_factor > _const_max_load_factor) {
		map_expand(m);
	}
	multi_return_u32_u32 mr_9346 = map_key_to_index(m, key);
	u32 index = mr_9346.arg0;
	u32 meta = mr_9346.arg1;
	multi_return_u32_u32 mr_9381 = map_meta_less(m, index, meta);
	index = mr_9381.arg0;
	meta = mr_9381.arg1;
	for (;;) {
		if (!(meta == m->metas[index])) break;
		u32 kv_index = m->metas[index + 1];
		if (fast_string_eq(key, m->key_values.keys[kv_index])) {
			memcpy(m->key_values.values + kv_index * ((u32)(m->value_bytes)), value, m->value_bytes);
			return;
		}
		index += 2;
		meta += _const_probe_inc;
	}
	u32 kv_index = DenseArray_push(&m->key_values, key, value);
	map_meta_greater(m, index, meta, kv_index);
	m->len++;
}

static void map_expand(map* m) {
	u32 old_cap = m->cap;
	m->cap = ((m->cap + 2) << 1) - 2;
	if (m->cached_hashbits == 0) {
		m->shift += _const_max_cached_hashbits;
		m->cached_hashbits = _const_max_cached_hashbits;
		map_rehash(m);
	} else {
		map_cached_rehash(m, old_cap);
		m->cached_hashbits--;
	}
}

static void map_rehash(map* m) {
	u32 meta_bytes = /*SizeOfType*/ sizeof(u32) * (m->cap + 2 + m->extra_metas);
	{ // Unsafe block
		byteptr x = v_realloc(((byteptr)(m->metas)), meta_bytes);
		m->metas = ((u32*)(x));
		memset(m->metas, 0, meta_bytes);
	}
	for (u32 i = ((u32)(0U)); i < m->key_values.len; i++) {
		if (m->key_values.keys[i].str == 0) {
			continue;
		}
		multi_return_u32_u32 mr_10778 = map_key_to_index(m, m->key_values.keys[i]);
		u32 index = mr_10778.arg0;
		u32 meta = mr_10778.arg1;
		multi_return_u32_u32 mr_10840 = map_meta_less(m, index, meta);
		index = mr_10840.arg0;
		meta = mr_10840.arg1;
		map_meta_greater(m, index, meta, i);
	}
}

static void map_cached_rehash(map* m, u32 old_cap) {
	u32* old_metas = m->metas;
	int metasize = ((int)(/*SizeOfType*/ sizeof(u32) * (m->cap + 2 + m->extra_metas)));
	m->metas = ((u32*)(vcalloc(metasize)));
	u32 old_extra_metas = m->extra_metas;
	for (u32 i = ((u32)(0U)); i <= old_cap + old_extra_metas; i += 2) {
		if (old_metas[i] == 0) {
			continue;
		}
		u32 old_meta = old_metas[i];
		u32 old_probe_count = ((old_meta >> _const_hashbits) - 1) << 1;
		u32 old_index = ((i - old_probe_count) & (m->cap >> 1));
		u32 index = (((old_index | (old_meta << m->shift))) & m->cap);
		u32 meta = (((old_meta & _const_hash_mask)) | _const_probe_inc);
		multi_return_u32_u32 mr_11597 = map_meta_less(m, index, meta);
		index = mr_11597.arg0;
		meta = mr_11597.arg1;
		u32 kv_index = old_metas[i + 1];
		map_meta_greater(m, index, meta, kv_index);
	}
	v_free(old_metas);
}

static voidptr map_get_and_set(map* m, string key, voidptr zero) {
	for (;;) {
		multi_return_u32_u32 mr_12043 = map_key_to_index(m, key);
		u32 index = mr_12043.arg0;
		u32 meta = mr_12043.arg1;
		for (;;) {
			if (meta == m->metas[index]) {
				u32 kv_index = m->metas[index + 1];
				if (fast_string_eq(key, m->key_values.keys[kv_index])) {
					{ // Unsafe block
						return ((voidptr)(m->key_values.values + kv_index * ((u32)(m->value_bytes))));
					}
				}
			}
			index += 2;
			meta += _const_probe_inc;
			if (meta > m->metas[index]) {
				break;
			}
		}
		map_set(m, key, zero);
	}
}

static voidptr map_get(map m, string key, voidptr zero) {
	multi_return_u32_u32 mr_12720 = map_key_to_index(&m, key);
	u32 index = mr_12720.arg0;
	u32 meta = mr_12720.arg1;
	for (;;) {
		if (meta == m.metas[index]) {
			u32 kv_index = m.metas[index + 1];
			if (fast_string_eq(key, m.key_values.keys[kv_index])) {
				{ // Unsafe block
					return ((voidptr)(m.key_values.values + kv_index * ((u32)(m.value_bytes))));
				}
			}
		}
		index += 2;
		meta += _const_probe_inc;
		if (meta > m.metas[index]) {
			break;
		}
	}
	return zero;
}

static bool map_exists(map m, string key) {
	multi_return_u32_u32 mr_13208 = map_key_to_index(&m, key);
	u32 index = mr_13208.arg0;
	u32 meta = mr_13208.arg1;
	for (;;) {
		if (meta == m.metas[index]) {
			u32 kv_index = m.metas[index + 1];
			if (fast_string_eq(key, m.key_values.keys[kv_index])) {
				return true;
			}
		}
		index += 2;
		meta += _const_probe_inc;
		if (meta > m.metas[index]) {
			break;
		}
	}
	return false;
}

void map_delete(map* m, string key) {
	multi_return_u32_u32 mr_13628 = map_key_to_index(m, key);
	u32 index = mr_13628.arg0;
	u32 meta = mr_13628.arg1;
	multi_return_u32_u32 mr_13663 = map_meta_less(m, index, meta);
	index = mr_13663.arg0;
	meta = mr_13663.arg1;
	for (;;) {
		if (!(meta == m->metas[index])) break;
		u32 kv_index = m->metas[index + 1];
		if (fast_string_eq(key, m->key_values.keys[kv_index])) {
			for (;;) {
				if (!((m->metas[index + 2] >> _const_hashbits) > 1)) break;
				{ // Unsafe block
					m->metas[index] = m->metas[index + 2] - _const_probe_inc;
					m->metas[index + 1] = m->metas[index + 3];
				}
				index += 2;
			}
			m->len--;
			{ // Unsafe block
				m->metas[index] = 0;
			}
			m->key_values.deletes++;
			{ // Unsafe block
				string_free(&m->key_values.keys[kv_index]);
				memset(&m->key_values.keys[kv_index], 0, /*SizeOfType*/ sizeof(string));
			}
			if (m->key_values.len <= 32) {
				return;
			}
			if (m->key_values.deletes >= (m->key_values.len >> 1)) {
				DenseArray_zeros_to_end(&m->key_values);
				map_rehash(m);
				m->key_values.deletes = 0;
			}
			return;
		}
		index += 2;
		meta += _const_probe_inc;
	}
}

array_string map_keys(map* m) {
	array_string keys = __new_array_with_default(m->len, 0, sizeof(string), &(string[]){tos_lit("")});
	int j = 0;
	for (u32 i = ((u32)(0U)); i < m->key_values.len; i++) {
		if (m->key_values.keys[i].str == 0) {
			continue;
		}
		array_set(&keys, j, &(string[]) { string_clone(m->key_values.keys[i]) });
		j++;
	}
	return keys;
}

// Attr: [unsafe]
DenseArray DenseArray_clone(DenseArray d) {
	int ksize = ((int)(d.cap * /*SizeOfType*/ sizeof(string)));
	int vsize = ((int)(d.cap * ((u32)(d.value_bytes))));
	DenseArray res = (DenseArray){
		.value_bytes = d.value_bytes,
		.cap = d.cap,
		.len = d.len,
		.deletes = d.deletes,
		.keys = ((string*)(v_malloc(ksize))),
		.values = ((byteptr)(v_malloc(vsize))),
	};
	{ // Unsafe block
		memcpy(res.keys, d.keys, ksize);
		memcpy(res.values, d.values, vsize);
	}
	return res;
}

// Attr: [unsafe]
map map_clone(map m) {
	int metasize = ((int)(/*SizeOfType*/ sizeof(u32) * (m.cap + 2 + m.extra_metas)));
	map res = (map){
		.value_bytes = m.value_bytes,
		.cap = m.cap,
		.cached_hashbits = m.cached_hashbits,
		.shift = m.shift,
		.key_values = DenseArray_clone(m.key_values),
		.metas = ((u32*)(v_malloc(metasize))),
		.extra_metas = m.extra_metas,
		.len = m.len,
	};
	memcpy(res.metas, m.metas, metasize);
	return res;
}

// Attr: [unsafe]
void map_free(map* m) {
	v_free(m->metas);
	for (u32 i = ((u32)(0U)); i < m->key_values.len; i++) {
		if (m->key_values.keys[i].str == 0) {
			continue;
		}
		string_free(&m->key_values.keys[i]);
	}
	{ // Unsafe block
		v_free(m->key_values.keys);
		v_free(m->key_values.values);
	}
}

string OptionBase_str(OptionBase o) {
	if (o.ok && !o.is_none) {
		return tos_lit("Option{ valid }");
	}
	if (o.is_none) {
		return tos_lit("Option{ none }");
	}
	return _STR("Option{ error: \"%.*s\000\" }", 2, o.v_error);
}

static void opt_ok2(voidptr data, OptionBase* option, int size) {
	{ // Unsafe block
		*option = (OptionBase){.ok = true,.is_none = 0,.v_error = (string){.str=(byteptr)""},.ecode = 0,};
		memcpy(((byteptr)(&option->ecode)) + /*SizeOfType*/ sizeof(int), data, size);
	}
}

string Option_str(Option o) {
	if (o.ok && !o.is_none) {
		return string_add(string_add(tos_lit("Option{ data: "), array_byte_hex(array_slice(new_array_from_c_array(_ARR_LEN(o.data), _ARR_LEN(o.data), sizeof(o.data[0]), o.data), 0, 32))), tos_lit(" }"));
	}
	if (o.is_none) {
		return tos_lit("Option{ none }");
	}
	return _STR("Option{ error: \"%.*s\000\" }", 2, o.v_error);
}

static Option opt_ok(voidptr data, int size) {
	if (size >= 400) {
		v_panic(_STR("option size too big: %"PRId32"\000 (max is 400), this is a temporary limit", 2, size));
	}
	Option res = (Option){.ok = true,.is_none = 0,.v_error = (string){.str=(byteptr)""},.ecode = 0,.data = {0},};
	memcpy(res.data, data, size);
	return res;
}

static Option opt_none() {
	return (Option){.ok = false,.is_none = true,.v_error = (string){.str=(byteptr)""},.ecode = 0,.data = {0},};
}

Option v_error(string s) {
	return (Option){.ok = false,.is_none = false,.v_error = s,.ecode = 0,.data = {0},};
}

Option error_with_code(string s, int code) {
	return (Option){.ok = false,.is_none = false,.v_error = s,.ecode = code,.data = {0},};
}

// TypeDecl
string rune_str(rune c) {
	return utf32_to_str(((u32)(c)));
}

bool byte_is_capital(byte c) {
	return c >= 'A' && c <= 'Z';
}

array_byte array_byte_clone(array_byte b) {
	array_byte res = __new_array_with_default(b.len, 0, sizeof(byte), 0);
	for (int i = 0; i < b.len; ++i) {
		array_set(&res, i, &(byte[]) { (*(byte*)array_get(b, i)) });
	}
	return res;
}

string array_byte_bytestr(array_byte b) {
	return bytes2string(b);
}

static string bytes2string(array_byte b) {
	array_byte copy = array_clone(&b);
	array_push(&copy, _MOV((byte[]){ '\0' }));
	string res = tos(copy.data, copy.len - 1);
	return res;
}

static SortedMap new_sorted_map(int n, int value_bytes) {
	return (SortedMap){.value_bytes = value_bytes,.root = new_node(),.len = 0,};
}

static SortedMap new_sorted_map_init(int n, int value_bytes, string* keys, voidptr values) {
	SortedMap out = new_sorted_map(n, value_bytes);
	for (int i = 0; i < n; ++i) {
		SortedMap_set(&out, keys[i], ((byteptr)(values)) + i * value_bytes);
	}
	return out;
}

static mapnode* new_node() {
	return (mapnode*)memdup(&(mapnode){.children = 0,.len = 0,.keys = {0},.values = {0},}, sizeof(mapnode));
}

static void SortedMap_set(SortedMap* m, string key, voidptr value) {
	mapnode* node = m->root;
	int child_index = 0;
	mapnode* parent = ((mapnode*)(0));
	for (;;) {
		if (node->len == _const_max_len) {
			if (isnil(parent)) {
				parent = new_node();
				m->root = parent;
			}
			mapnode_split_child(parent, child_index, node);
			if (string_eq(key, parent->keys[child_index])) {
				memcpy(parent->values[child_index], value, m->value_bytes);
				return;
			}
			if (string_lt(key, parent->keys[child_index])) {
				node = ((mapnode*)(parent->children[child_index]));
			} else {
				node = ((mapnode*)(parent->children[child_index + 1]));
			}
		}
		int i = 0;
		for (;;) {
			if (!(i < node->len && string_gt(key, node->keys[i]))) break;
			i++;
		}
		if (i != node->len && string_eq(key, node->keys[i])) {
			memcpy(node->values[i], value, m->value_bytes);
			return;
		}
		if (isnil(node->children)) {
			int j = node->len - 1;
			for (;;) {
				if (!(j >= 0 && string_lt(key, node->keys[j]))) break;
				node->keys[j + 1] = node->keys[j];
				node->values[j + 1] = node->values[j];
				j--;
			}
			node->keys[j + 1] = key;
			node->values[j + 1] = v_malloc(m->value_bytes);
			memcpy(node->values[j + 1], value, m->value_bytes);
			node->len++;
			m->len++;
			return;
		}
		parent = node;
		child_index = i;
		node = ((mapnode*)(node->children[child_index]));
	}
}

static void mapnode_split_child(mapnode* n, int child_index, mapnode* y) {
	mapnode* z = new_node();
	z->len = _const_mid_index;
	y->len = _const_mid_index;
	for (int j = _const_mid_index - 1; j >= 0; j--) {
		z->keys[j] = y->keys[j + _const_degree];
		z->values[j] = y->values[j + _const_degree];
	}
	if (!isnil(y->children)) {
		z->children = ((voidptr*)(v_malloc(((int)(_const_children_bytes)))));
		for (int jj = _const_degree - 1; jj >= 0; jj--) {
			{ // Unsafe block
				z->children[jj] = y->children[jj + _const_degree];
			}
		}
	}
	if (isnil(n->children)) {
		n->children = ((voidptr*)(v_malloc(((int)(_const_children_bytes)))));
	}
	{ // Unsafe block
		n->children[n->len + 1] = n->children[n->len];
	}
	for (int j = n->len; j > child_index; j--) {
		n->keys[j] = n->keys[j - 1];
		n->values[j] = n->values[j - 1];
		{ // Unsafe block
			n->children[j] = n->children[j - 1];
		}
	}
	n->keys[child_index] = y->keys[_const_mid_index];
	n->values[child_index] = y->values[_const_mid_index];
	{ // Unsafe block
		n->children[child_index] = ((voidptr)(y));
		n->children[child_index + 1] = ((voidptr)(z));
	}
	n->len++;
}

static bool SortedMap_get(SortedMap m, string key, voidptr out) {
	mapnode* node = m.root;
	for (;;) {
		int i = node->len - 1;
		for (;;) {
			if (!(i >= 0 && string_lt(key, node->keys[i]))) break;
			i--;
		}
		if (i != -1 && string_eq(key, node->keys[i])) {
			memcpy(out, node->values[i], m.value_bytes);
			return true;
		}
		if (isnil(node->children)) {
			break;
		}
		node = ((mapnode*)(node->children[i + 1]));
	}
	return false;
}

static bool SortedMap_exists(SortedMap m, string key) {
	if (isnil(m.root)) {
		return false;
	}
	mapnode* node = m.root;
	for (;;) {
		int i = node->len - 1;
		for (;;) {
			if (!(i >= 0 && string_lt(key, node->keys[i]))) break;
			i--;
		}
		if (i != -1 && string_eq(key, node->keys[i])) {
			return true;
		}
		if (isnil(node->children)) {
			break;
		}
		node = ((mapnode*)(node->children[i + 1]));
	}
	return false;
}

static int mapnode_find_key(mapnode* n, string k) {
	int idx = 0;
	for (;;) {
		if (!(idx < n->len && string_lt(n->keys[idx], k))) break;
		idx++;
	}
	return idx;
}

static bool mapnode_remove_key(mapnode* n, string k) {
	int idx = mapnode_find_key(n, k);
	if (idx < n->len && string_eq(n->keys[idx], k)) {
		if (isnil(n->children)) {
			mapnode_remove_from_leaf(n, idx);
		} else {
			mapnode_remove_from_non_leaf(n, idx);
		}
		return true;
	} else {
		if (isnil(n->children)) {
			return false;
		}
		bool flag = (idx == n->len ? (true) : (false));
		if (((mapnode*)(n->children[idx]))->len < _const_degree) {
			mapnode_fill(n, idx);
		}
		mapnode* node = ((mapnode*)(0));
		if (flag && idx > n->len) {
			node = ((mapnode*)(n->children[idx - 1]));
		} else {
			node = ((mapnode*)(n->children[idx]));
		}
		return mapnode_remove_key(node, k);
	}
}

static void mapnode_remove_from_leaf(mapnode* n, int idx) {
	for (int i = idx + 1; i < n->len; i++) {
		n->keys[i - 1] = n->keys[i];
		n->values[i - 1] = n->values[i];
	}
	n->len--;
}

static void mapnode_remove_from_non_leaf(mapnode* n, int idx) {
	string k = n->keys[idx];
	if (((mapnode*)(n->children[idx]))->len >= _const_degree) {
		mapnode* current = ((mapnode*)(n->children[idx]));
		for (;;) {
			if (!(!isnil(current->children))) break;
			current = ((mapnode*)(current->children[current->len]));
		}
		string predecessor = current->keys[current->len - 1];
		n->keys[idx] = predecessor;
		n->values[idx] = current->values[current->len - 1];
		mapnode* node = ((mapnode*)(n->children[idx]));
		mapnode_remove_key(node, predecessor);
	} else if (((mapnode*)(n->children[idx + 1]))->len >= _const_degree) {
		mapnode* current = ((mapnode*)(n->children[idx + 1]));
		for (;;) {
			if (!(!isnil(current->children))) break;
			current = ((mapnode*)(current->children[0]));
		}
		string successor = current->keys[0];
		n->keys[idx] = successor;
		n->values[idx] = current->values[0];
		mapnode* node = ((mapnode*)(n->children[idx + 1]));
		mapnode_remove_key(node, successor);
	} else {
		mapnode_merge(n, idx);
		mapnode* node = ((mapnode*)(n->children[idx]));
		mapnode_remove_key(node, k);
	}
}

static void mapnode_fill(mapnode* n, int idx) {
	if (idx != 0 && ((mapnode*)(n->children[idx - 1]))->len >= _const_degree) {
		mapnode_borrow_from_prev(n, idx);
	} else if (idx != n->len && ((mapnode*)(n->children[idx + 1]))->len >= _const_degree) {
		mapnode_borrow_from_next(n, idx);
	} else if (idx != n->len) {
		mapnode_merge(n, idx);
	} else {
		mapnode_merge(n, idx - 1);
	}
}

static void mapnode_borrow_from_prev(mapnode* n, int idx) {
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[idx - 1]));
	for (int i = child->len - 1; i >= 0; i--) {
		child->keys[i + 1] = child->keys[i];
		child->values[i + 1] = child->values[i];
	}
	if (!isnil(child->children)) {
		for (int i = child->len; i >= 0; i--) {
			{ // Unsafe block
				child->children[i + 1] = child->children[i];
			}
		}
	}
	child->keys[0] = n->keys[idx - 1];
	child->values[0] = n->values[idx - 1];
	if (!isnil(child->children)) {
		{ // Unsafe block
			child->children[0] = sibling->children[sibling->len];
		}
	}
	n->keys[idx - 1] = sibling->keys[sibling->len - 1];
	n->values[idx - 1] = sibling->values[sibling->len - 1];
	child->len++;
	sibling->len--;
}

static void mapnode_borrow_from_next(mapnode* n, int idx) {
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[idx + 1]));
	child->keys[child->len] = n->keys[idx];
	child->values[child->len] = n->values[idx];
	if (!isnil(child->children)) {
		{ // Unsafe block
			child->children[child->len + 1] = sibling->children[0];
		}
	}
	n->keys[idx] = sibling->keys[0];
	n->values[idx] = sibling->values[0];
	for (int i = 1; i < sibling->len; i++) {
		sibling->keys[i - 1] = sibling->keys[i];
		sibling->values[i - 1] = sibling->values[i];
	}
	if (!isnil(sibling->children)) {
		for (int i = 1; i <= sibling->len; i++) {
			{ // Unsafe block
				sibling->children[i - 1] = sibling->children[i];
			}
		}
	}
	child->len++;
	sibling->len--;
}

static void mapnode_merge(mapnode* n, int idx) {
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[idx + 1]));
	child->keys[_const_mid_index] = n->keys[idx];
	child->values[_const_mid_index] = n->values[idx];
	for (int i = 0; i < sibling->len; ++i) {
		child->keys[i + _const_degree] = sibling->keys[i];
		child->values[i + _const_degree] = sibling->values[i];
	}
	if (!isnil(child->children)) {
		for (int i = 0; i <= sibling->len; i++) {
			{ // Unsafe block
				child->children[i + _const_degree] = sibling->children[i];
			}
		}
	}
	for (int i = idx + 1; i < n->len; i++) {
		n->keys[i - 1] = n->keys[i];
		n->values[i - 1] = n->values[i];
	}
	for (int i = idx + 2; i <= n->len; i++) {
		{ // Unsafe block
			n->children[i - 1] = n->children[i];
		}
	}
	child->len += sibling->len + 1;
	n->len--;
}

void SortedMap_delete(SortedMap* m, string key) {
	if (m->root->len == 0) {
		return;
	}
	bool removed = mapnode_remove_key(m->root, key);
	if (removed) {
		m->len--;
	}
	if (m->root->len == 0) {
		if (isnil(m->root->children)) {
			return;
		} else {
			m->root = ((mapnode*)(m->root->children[0]));
		}
	}
}

static int mapnode_subkeys(mapnode* n, array_string* keys, int at) {
	int position = at;
	if (!isnil(n->children)) {
		for (int i = 0; i < n->len; ++i) {
			mapnode* child = ((mapnode*)(n->children[i]));
			position += mapnode_subkeys(child, keys, position);
			array_set(keys, position, &(string[]) { n->keys[i] });
			position++;
		}
		mapnode* child = ((mapnode*)(n->children[n->len]));
		position += mapnode_subkeys(child, keys, position);
	} else {
		for (int i = 0; i < n->len; ++i) {
			array_set(keys, position + i, &(string[]) { n->keys[i] });
		}
		position += n->len;
	}
	return position - at;
}

array_string SortedMap_keys(SortedMap* m) {
	array_string keys = __new_array_with_default(m->len, 0, sizeof(string), &(string[]){tos_lit("")});
	if (isnil(m->root) || m->root->len == 0) {
		return keys;
	}
	mapnode_subkeys(m->root, &/*arr*/keys, 0);
	return keys;
}

static void mapnode_free(mapnode* n) {
	println(tos_lit("TODO"));
}

void SortedMap_free(SortedMap* m) {
	if (isnil(m->root)) {
		return;
	}
	mapnode_free(m->root);
}

void SortedMap_print(SortedMap m) {
	println(tos_lit("TODO"));
}

// Attr: [unsafe]
int vstrlen(byteptr s) {
	return strlen(((charptr)(s)));
}

// Attr: [unsafe]
string tos(byteptr s, int len) {
	if (s == 0) {
		v_panic(tos_lit("tos(): nil string"));
	}
	return (string){.str = s, .len = len};
}

string tos_clone(byteptr s) {
	return string_clone(tos2(s));
}

string tos2(byteptr s) {
	if (s == 0) {
		v_panic(tos_lit("tos2: nil string"));
	}
	return (string){.str = s, .len = vstrlen(s)};
}

string tos3(charptr s) {
	if (s == 0) {
		v_panic(tos_lit("tos3: nil string"));
	}
	return (string){.str = ((byteptr)(s)), .len = strlen(s)};
}

string tos_lit(charptr s) {
	return (string){.str = ((byteptr)(s)), .len = strlen(s), .is_lit = 1};
}

// Attr: [unsafe]
string byteptr_vstring(byteptr bp) {
	return (string){.str = bp, .len = strlen(((charptr)(bp)))};
}

// Attr: [unsafe]
string byteptr_vstring_with_len(byteptr bp, int len) {
	return (string){.str = bp, .len = len};
}

static string string_clone_static(string a) {
	return string_clone(a);
}

string string_clone(string a) {
	string b = (string){.str = v_malloc(a.len + 1), .len = a.len};
	{ // Unsafe block
		memcpy(b.str, a.str, a.len);
		b.str[a.len] = '\0';
	}
	return b;
}

// Attr: [unsafe]
string cstring_to_vstring(byteptr cstr) {
	return tos_clone(cstr);
}

string string_replace_once(string s, string rep, string with) {
	Option_int _t33 = string_index(s, rep);
	if (!_t33.ok) {
		string err = _t33.v_error;
		int errcode = _t33.ecode;
		return string_clone(s);
	}
 	int index = *(int*) _t33.data;
	return string_add(string_add(string_substr(s, 0, index), with), string_substr(s, index + rep.len, s.len));
}

string string_replace(string s, string rep, string with) {
	if (s.len == 0 || rep.len == 0) {
		return string_clone(s);
	}
	array_int idxs = __new_array_with_default(0, 0, sizeof(int), 0);
	int idx = 0;
	for (;;) {
		idx = string_index_after(s, rep, idx);
		if (idx == -1) {
			break;
		}
		array_push(&idxs, _MOV((int[]){ idx }));
		idx += rep.len;
	}
	if (idxs.len == 0) {
		return string_clone(s);
	}
	int new_len = s.len + idxs.len * (with.len - rep.len);
	byteptr b = v_malloc(new_len + 1);
	int idx_pos = 0;
	int cur_idx = (*(int*)array_get(idxs, idx_pos));
	int b_i = 0;
	for (int i = 0; i < s.len; i++) {
		if (i == cur_idx) {
			for (int j = 0; j < with.len; ++j) {
				{ // Unsafe block
					b[b_i] = string_at(with, j);
				}
				b_i++;
			}
			i += rep.len - 1;
			idx_pos++;
			if (idx_pos < idxs.len) {
				cur_idx = (*(int*)array_get(idxs, idx_pos));
			}
		} else {
			{ // Unsafe block
				b[b_i] = string_at(s, i);
			}
			b_i++;
		}
	}
	{ // Unsafe block
		b[new_len] = '\0';
		return tos(b, new_len);
	}
}

static int compare_rep_index(RepIndex* a, RepIndex* b) {
	if (a->idx < b->idx) {
		return -1;
	}
	if (a->idx > b->idx) {
		return 1;
	}
	return 0;
}

static void array_RepIndex_sort2(array_RepIndex* a) {
	array_sort_with_compare(a, compare_rep_index);
}

string string_replace_each(string s, array_string vals) {
	if (s.len == 0 || vals.len == 0) {
		return s;
	}
	if (vals.len % 2 != 0) {
		println(tos_lit("string.replace_each(): odd number of strings"));
		return s;
	}
	int new_len = s.len;
	array_RepIndex idxs = __new_array_with_default(0, 0, sizeof(RepIndex), 0);
	int idx = 0;
	for (int rep_i = 0; rep_i < vals.len; rep_i += 2) {
		string rep = (*(string*)array_get(vals, rep_i));
		string with = (*(string*)array_get(vals, rep_i + 1));
		for (;;) {
			idx = string_index_after(s, rep, idx);
			if (idx == -1) {
				break;
			}
			array_push(&idxs, _MOV((RepIndex[]){ (RepIndex){.idx = idx,.val_idx = rep_i,} }));
			idx += rep.len;
			new_len += with.len - rep.len;
		}
	}
	if (idxs.len == 0) {
		return s;
	}
	array_RepIndex_sort2(&idxs);
	byteptr b = v_malloc(new_len + 1);
	int idx_pos = 0;
	RepIndex cur_idx = (*(RepIndex*)array_get(idxs, idx_pos));
	int b_i = 0;
	for (int i = 0; i < s.len; i++) {
		if (i == cur_idx.idx) {
			string rep = (*(string*)array_get(vals, cur_idx.val_idx));
			string with = (*(string*)array_get(vals, cur_idx.val_idx + 1));
			for (int j = 0; j < with.len; ++j) {
				{ // Unsafe block
					b[b_i] = string_at(with, j);
				}
				b_i++;
			}
			i += rep.len - 1;
			idx_pos++;
			if (idx_pos < idxs.len) {
				cur_idx = (*(RepIndex*)array_get(idxs, idx_pos));
			}
		} else {
			{ // Unsafe block
				b[b_i] = s.str[i];
			}
			b_i++;
		}
	}
	{ // Unsafe block
		b[new_len] = '\0';
		return tos(b, new_len);
	}
}

bool string_bool(string s) {
	return string_eq(s, tos_lit("true")) || string_eq(s, tos_lit("t"));
}

int string_int(string s) {
	return ((int)(strconv__common_parse_int(s, 0, 32, false, false)));
}

i64 string_i64(string s) {
	return strconv__common_parse_int(s, 0, 64, false, false);
}

i8 string_i8(string s) {
	return ((i8)(strconv__common_parse_int(s, 0, 8, false, false)));
}

i16 string_i16(string s) {
	return ((i16)(strconv__common_parse_int(s, 0, 16, false, false)));
}

f32 string_f32(string s) {
	return ((f32)(strconv__atof64(s)));
}

f64 string_f64(string s) {
	return strconv__atof64(s);
}

u16 string_u16(string s) {
	return ((u16)(strconv__common_parse_uint(s, 0, 16, false, false)));
}

u32 string_u32(string s) {
	return ((u32)(strconv__common_parse_uint(s, 0, 32, false, false)));
}

u64 string_u64(string s) {
	return strconv__common_parse_uint(s, 0, 64, false, false);
}

static bool string_eq(string s, string a) {
	if (s.str == 0) {
		v_panic(tos_lit("string.eq(): nil string"));
	}
	if (s.len != a.len) {
		return false;
	}
	{ // Unsafe block
		return memcmp(s.str, a.str, a.len) == 0;
	}
}

static bool string_ne(string s, string a) {
	return !string_eq(s, a);
}

static bool string_lt(string s, string a) {
	for (int i = 0; i < s.len; ++i) {
		if (i >= a.len || string_at(s, i) > string_at(a, i)) {
			return false;
		} else if (string_at(s, i) < string_at(a, i)) {
			return true;
		}
	}
	if (s.len < a.len) {
		return true;
	}
	return false;
}

static bool string_le(string s, string a) {
	return string_lt(s, a) || string_eq(s, a);
}

static bool string_gt(string s, string a) {
	return !string_le(s, a);
}

static bool string_ge(string s, string a) {
	return !string_lt(s, a);
}

static string string_add(string s, string a) {
	int new_len = a.len + s.len;
	string res = (string){.str = v_malloc(new_len + 1), .len = new_len};
	for (int j = 0; j < s.len; ++j) {
		{ // Unsafe block
			res.str[j] = s.str[j];
		}
	}
	for (int j = 0; j < a.len; ++j) {
		{ // Unsafe block
			res.str[s.len + j] = a.str[j];
		}
	}
	{ // Unsafe block
		res.str[new_len] = '\0';
	}
	return res;
}

array_string string_split(string s, string delim) {
	return string_split_nth(s, delim, 0);
}

array_string string_split_nth(string s, string delim, int nth) {
	array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	int i = 0;
	if (delim.len == 0) {
		i = 1;
		for (int _t36 = 0; _t36 < s.len; ++_t36) {
			byte ch = s.str[_t36];
			if (nth > 0 && i >= nth) {
				array_push(&res, _MOV((string[]){ string_substr(s, i, s.len) }));
				break;
			}
			array_push(&res, _MOV((string[]){ byte_str(ch) }));
			i++;
		}
		return res;
	}
	int start = 0;
	int nth_1 = nth - 1;
	for (;;) {
		if (!(i <= s.len)) break;
		bool is_delim = s.str[i] == delim.str[0];
		int j = 0;
		for (;;) {
			if (!(is_delim && j < delim.len)) break;
			is_delim = is_delim && s.str[i + j] == delim.str[j];
			j++;
		}
		bool last = i == s.len - 1;
		if (is_delim || last) {
			if (!is_delim && last) {
				i++;
			}
			string val = string_substr(s, start, i);
			if (string_starts_with(val, delim)) {
				val = string_right(val, delim.len);
			}
			bool was_last = nth > 0 && res.len == nth_1;
			if (was_last) {
				array_push(&res, _MOV((string[]){ string_right(s, start) }));
				break;
			}
			array_push(&res, _MOV((string[]){ val }));
			start = i + delim.len;
		}
		i++;
	}
	if (string_ends_with(s, delim) && (nth < 1 || res.len < nth)) {
		array_push(&res, _MOV((string[]){ tos_lit("") }));
	}
	return res;
}

array_string string_split_into_lines(string s) {
	array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	if (s.len == 0) {
		return res;
	}
	int start = 0;
	for (int i = 0; i < s.len; i++) {
		bool is_lf = s.str[i] == '\n';
		bool is_crlf = i != s.len - 1 && s.str[i] == '\r' && s.str[i + 1] == '\n';
		bool is_eol = is_lf || is_crlf;
		bool is_last = (is_crlf ? (i == s.len - 2) : (i == s.len - 1));
		if (is_eol || is_last) {
			if (is_last && !is_eol) {
				i++;
			}
			string line = string_substr(s, start, i);
			array_push(&res, _MOV((string[]){ line }));
			if (is_crlf) {
				i++;
			}
			start = i + 1;
		}
	}
	return res;
}

static string string_left(string s, int n) {
	if (n >= s.len) {
		return s;
	}
	return string_substr(s, 0, n);
}

static string string_right(string s, int n) {
	if (n >= s.len) {
		return tos_lit("");
	}
	return string_substr(s, n, s.len);
}

static string string_substr2(string s, int start, int _end, bool end_max) {
	int end = (end_max ? (s.len) : (_end));
	return string_substr(s, start, end);
}

string string_substr(string s, int start, int end) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (start > end || start > s.len || end > s.len || start < 0 || end < 0) {
			v_panic(_STR("substr(%"PRId32"\000, %"PRId32"\000) out of bounds (len=%"PRId32"\000)", 4, start, end, s.len));
		}
	}
	#endif
	int len = end - start;
	string res = (string){.str = v_malloc(len + 1), .len = len};
	for (int i = 0; i < len; ++i) {
		{ // Unsafe block
			res.str[i] = s.str[start + i];
		}
	}
	{ // Unsafe block
		res.str[len] = '\0';
	}
	return res;
}

int string_index_old(string s, string p) {
	if (p.len > s.len || p.len == 0) {
		return -1;
	}
	int i = 0;
	for (;;) {
		if (!(i < s.len)) break;
		int j = 0;
		for (;;) {
			if (!(j < p.len && s.str[i + j] == p.str[j])) break;
			j++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}

Option_int string_index(string s, string p) {
	if (p.len > s.len || p.len == 0) {
		Option _t43 = opt_none();
		return *(Option_int*)&_t43;
	}
	int i = 0;
	for (;;) {
		if (!(i < s.len)) break;
		int j = 0;
		for (;;) {
			if (!(j < p.len && s.str[i + j] == p.str[j])) break;
			j++;
		}
		if (j == p.len) {
			Option_int _t44;
			opt_ok2(&(int[]) { i }, (OptionBase*)(&_t44), sizeof(int));
			return _t44;
		}
		i++;
	}
	Option _t45 = opt_none();
	return *(Option_int*)&_t45;
}

static int string_index_kmp(string s, string p) {
	if (p.len > s.len) {
		return -1;
	}
	array_int prefix = __new_array_with_default(p.len, 0, sizeof(int), 0);
	int j = 0;
	for (int i = 1; i < p.len; i++) {
		for (;;) {
			if (!(p.str[j] != p.str[i] && j > 0)) break;
			j = (*(int*)array_get(prefix, j - 1));
		}
		if (p.str[j] == p.str[i]) {
			j++;
		}
		array_set(&prefix, i, &(int[]) { j });
	}
	j = 0;
	for (int i = 0; i < s.len; ++i) {
		for (;;) {
			if (!(p.str[j] != s.str[i] && j > 0)) break;
			j = (*(int*)array_get(prefix, j - 1));
		}
		if (p.str[j] == s.str[i]) {
			j++;
		}
		if (j == p.len) {
			return i - p.len + 1;
		}
	}
	return -1;
}

int string_index_any(string s, string chars) {
	for (int _t46 = 0; _t46 < chars.len; ++_t46) {
		byte c = chars.str[_t46];
		Option_int _t47 = string_index(s, byte_str(c));
		if (!_t47.ok) {
			string err = _t47.v_error;
			int errcode = _t47.ecode;
			continue;
		}
 		int index = *(int*) _t47.data;
		return index;
	}
	return -1;
}

Option_int string_last_index(string s, string p) {
	if (p.len > s.len || p.len == 0) {
		Option _t48 = opt_none();
		return *(Option_int*)&_t48;
	}
	int i = s.len - p.len;
	for (;;) {
		if (!(i >= 0)) break;
		int j = 0;
		for (;;) {
			if (!(j < p.len && s.str[i + j] == p.str[j])) break;
			j++;
		}
		if (j == p.len) {
			Option_int _t49;
			opt_ok2(&(int[]) { i }, (OptionBase*)(&_t49), sizeof(int));
			return _t49;
		}
		i--;
	}
	Option _t50 = opt_none();
	return *(Option_int*)&_t50;
}

int string_index_after(string s, string p, int start) {
	if (p.len > s.len) {
		return -1;
	}
	int strt = start;
	if (start < 0) {
		strt = 0;
	}
	if (start >= s.len) {
		return -1;
	}
	int i = strt;
	for (;;) {
		if (!(i < s.len)) break;
		int j = 0;
		int ii = i;
		for (;;) {
			if (!(j < p.len && s.str[ii] == p.str[j])) break;
			j++;
			ii++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}

int string_index_byte(string s, byte c) {
	for (int i = 0; i < s.len; ++i) {
		if (s.str[i] == c) {
			return i;
		}
	}
	return -1;
}

int string_last_index_byte(string s, byte c) {
	for (int i = s.len - 1; i >= 0; i--) {
		if (s.str[i] == c) {
			return i;
		}
	}
	return -1;
}

int string_count(string s, string substr) {
	if (s.len == 0 || substr.len == 0) {
		return 0;
	}
	if (substr.len > s.len) {
		return 0;
	}
	int n = 0;
	int i = 0;
	for (;;) {
		i = string_index_after(s, substr, i);
		if (i == -1) {
			return n;
		}
		i += substr.len;
		n++;
	}
	return 0;
}

bool string_contains(string s, string substr) {
	if (substr.len == 0) {
		return true;
	}
	Option_int _t51 = string_index(s, substr);
	if (!_t51.ok) {
		string err = _t51.v_error;
		int errcode = _t51.ecode;
		return false;
	};
	return true;
}

bool string_contains_any(string s, string chars) {
	for (int _t52 = 0; _t52 < chars.len; ++_t52) {
		byte c = chars.str[_t52];
		if (string_contains(s, byte_str(c))) {
			return true;
		}
	}
	return false;
}

bool string_contains_any_substr(string s, array_string substrs) {
	if (substrs.len == 0) {
		return true;
	}
	// FOR IN array
	array _t53 = substrs;
	for (int _t54 = 0; _t54 < _t53.len; ++_t54) {
		string sub = ((string*)_t53.data)[_t54];
		if (string_contains(s, sub)) {
			return true;
		}
	}
	return false;
}

bool string_starts_with(string s, string p) {
	if (p.len > s.len) {
		return false;
	}
	for (int i = 0; i < p.len; ++i) {
		if (s.str[i] != p.str[i]) {
			return false;
		}
	}
	return true;
}

bool string_ends_with(string s, string p) {
	if (p.len > s.len) {
		return false;
	}
	for (int i = 0; i < p.len; ++i) {
		if (string_at(p, i) != string_at(s, s.len - p.len + i)) {
			return false;
		}
	}
	return true;
}

string string_to_lower(string s) {
	{ // Unsafe block
		byteptr b = v_malloc(s.len + 1);
		for (int i = 0; i < s.len; ++i) {
			b[i] = ((byte)(tolower(s.str[i])));
		}
		return tos(b, s.len);
	}
}

bool string_is_lower(string s) {
	for (int i = 0; i < s.len; ++i) {
		if (string_at(s, i) >= 'A' && string_at(s, i) <= 'Z') {
			return false;
		}
	}
	return true;
}

string string_to_upper(string s) {
	{ // Unsafe block
		byteptr b = v_malloc(s.len + 1);
		for (int i = 0; i < s.len; ++i) {
			b[i] = ((byte)(toupper(s.str[i])));
		}
		return tos(b, s.len);
	}
}

bool string_is_upper(string s) {
	for (int i = 0; i < s.len; ++i) {
		if (string_at(s, i) >= 'a' && string_at(s, i) <= 'z') {
			return false;
		}
	}
	return true;
}

string string_capitalize(string s) {
	if (s.len == 0) {
		return tos_lit("");
	}
	return string_add(string_to_upper(byte_str(string_at(s, 0))), string_substr(s, 1, s.len));
}

bool string_is_capital(string s) {
	if (s.len == 0 || !(string_at(s, 0) >= 'A' && string_at(s, 0) <= 'Z')) {
		return false;
	}
	for (int i = 1; i < s.len; ++i) {
		if (string_at(s, i) >= 'A' && string_at(s, i) <= 'Z') {
			return false;
		}
	}
	return true;
}

string string_title(string s) {
	array_string words = string_split(s, tos_lit(" "));
	array_string tit = __new_array_with_default(0, 0, sizeof(string), 0);
	// FOR IN array
	array _t55 = words;
	for (int _t56 = 0; _t56 < _t55.len; ++_t56) {
		string word = ((string*)_t55.data)[_t56];
		array_push(&tit, _MOV((string[]){ string_capitalize(word) }));
	}
	string title = array_string_join(tit, tos_lit(" "));
	return title;
}

bool string_is_title(string s) {
	array_string words = string_split(s, tos_lit(" "));
	// FOR IN array
	array _t58 = words;
	for (int _t59 = 0; _t59 < _t58.len; ++_t59) {
		string word = ((string*)_t58.data)[_t59];
		if (!string_is_capital(word)) {
			return false;
		}
	}
	return true;
}

string string_find_between(string s, string start, string end) {
	Option_int _t60 = string_index(s, start);
	if (!_t60.ok) {
		string err = _t60.v_error;
		int errcode = _t60.ecode;
		return tos_lit("");
	}
 	int start_pos = *(int*) _t60.data;
	string val = string_right(s, start_pos + start.len);
	Option_int _t61 = string_index(val, end);
	if (!_t61.ok) {
		string err = _t61.v_error;
		int errcode = _t61.ecode;
		return val;
	}
 	int end_pos = *(int*) _t61.data;
	return string_left(val, end_pos);
}

static bool array_string_contains(array_string ar, string val) {
	// FOR IN array
	array _t62 = ar;
	for (int _t63 = 0; _t63 < _t62.len; ++_t63) {
		string s = ((string*)_t62.data)[_t63];
		if (string_eq(s, val)) {
			return true;
		}
	}
	return false;
}

bool byte_is_space(byte c) {
	return (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r' || c == 0x85 || c == 0xa0);
}

string string_trim_space(string s) {
	return string_trim(s, tos_lit(" \n\t\v\f\r"));
}

string string_trim(string s, string cutset) {
	if (s.len < 1 || cutset.len < 1) {
		return s;
	}
	array_byte cs_arr = string_bytes(cutset);
	int pos_left = 0;
	int pos_right = s.len - 1;
	bool cs_match = true;
	for (;;) {
		if (!(pos_left <= s.len && pos_right >= -1 && cs_match)) break;
		cs_match = false;
		if (_IN(byte, string_at(s, pos_left), cs_arr)) {
			pos_left++;
			cs_match = true;
		}
		if (_IN(byte, string_at(s, pos_right), cs_arr)) {
			pos_right--;
			cs_match = true;
		}
		if (pos_left > pos_right) {
			return tos_lit("");
		}
	}
	return string_substr(s, pos_left, pos_right + 1);
}

string string_trim_left(string s, string cutset) {
	if (s.len < 1 || cutset.len < 1) {
		return s;
	}
	array_byte cs_arr = string_bytes(cutset);
	int pos = 0;
	for (;;) {
		if (!(pos < s.len && _IN(byte, string_at(s, pos), cs_arr))) break;
		pos++;
	}
	return string_right(s, pos);
}

string string_trim_right(string s, string cutset) {
	if (s.len < 1 || cutset.len < 1) {
		return s;
	}
	array_byte cs_arr = string_bytes(cutset);
	int pos = s.len - 1;
	for (;;) {
		if (!(pos >= 0 && _IN(byte, string_at(s, pos), cs_arr))) break;
		pos--;
	}
	return (pos < 0 ? (tos_lit("")) : (string_left(s, pos + 1)));
}

string string_trim_prefix(string s, string str) {
	if (string_starts_with(s, str)) {
		return string_substr(s, str.len, s.len);
	}
	return s;
}

string string_trim_suffix(string s, string str) {
	if (string_ends_with(s, str)) {
		return string_substr(s, 0, s.len - str.len);
	}
	return s;
}

int compare_strings(string* a, string* b) {
	if (string_lt(/*rec*/*a, *b)) {
		return -1;
	}
	if (string_gt(/*rec*/*a, *b)) {
		return 1;
	}
	return 0;
}

static int compare_strings_by_len(string* a, string* b) {
	if (a->len < b->len) {
		return -1;
	}
	if (a->len > b->len) {
		return 1;
	}
	return 0;
}

static int compare_lower_strings(string* a, string* b) {
	string aa = string_to_lower(/*rec*/*a);
	string bb = string_to_lower(/*rec*/*b);
	return compare_strings((voidptr)&/*qq*/aa, (voidptr)&/*qq*/bb);
}

void array_string_sort(array_string* s) {
	array_sort_with_compare(s, compare_strings);
}

void array_string_sort_ignore_case(array_string* s) {
	array_sort_with_compare(s, compare_lower_strings);
}

void array_string_sort_by_len(array_string* s) {
	array_sort_with_compare(s, compare_strings_by_len);
}

string string_str(string s) {
	return s;
}

string ustring_str(ustring s) {
	return s.s;
}

ustring string_ustring(string s) {
	ustring res = (ustring){.s = s,.runes = __new_array(0, s.len, ((int)(/*SizeOfType*/ sizeof(int)))),.len = 0,};
	for (int i = 0; i < s.len; i++) {
		int char_len = utf8_char_len(s.str[i]);
		array_push(&res.runes, _MOV((int[]){ i }));
		i += char_len - 1;
		res.len++;
	}
	return res;
}

ustring string_ustring_tmp(string s) {
	if (g_ustring_runes.len == 0) {
		g_ustring_runes = __new_array(0, 128, ((int)(/*SizeOfType*/ sizeof(int))));
	}
	ustring res = (ustring){.s = s,.runes = __new_array(0, 1, sizeof(int)),.len = 0,};
	res.runes = g_ustring_runes;
	res.runes.len = s.len;
	int j = 0;
	for (int i = 0; i < s.len; i++) {
		int char_len = utf8_char_len(s.str[i]);
		(*(int*)array_get(res.runes, j)) = i;
		j++;
		i += char_len - 1;
		res.len++;
	}
	return res;
}

static bool ustring_eq(ustring u, ustring a) {
	if (u.len != a.len || string_ne(u.s, a.s)) {
		return false;
	}
	return true;
}

static bool ustring_ne(ustring u, ustring a) {
	return !ustring_eq(u, a);
}

static bool ustring_lt(ustring u, ustring a) {
	return string_lt(u.s, a.s);
}

static bool ustring_le(ustring u, ustring a) {
	return ustring_lt(u, a) || ustring_eq(u, a);
}

static bool ustring_gt(ustring u, ustring a) {
	return !ustring_le(u, a);
}

static bool ustring_ge(ustring u, ustring a) {
	return !ustring_lt(u, a);
}

ustring ustring_add(ustring u, ustring a) {
	ustring res = (ustring){.s = string_add(u.s, a.s),.runes = __new_array(0, u.s.len + a.s.len, ((int)(/*SizeOfType*/ sizeof(int)))),.len = 0,};
	int j = 0;
	for (int i = 0; i < u.s.len; i++) {
		int char_len = utf8_char_len(u.s.str[i]);
		array_push(&res.runes, _MOV((int[]){ j }));
		i += char_len - 1;
		j += char_len;
		res.len++;
	}
	for (int i = 0; i < a.s.len; i++) {
		int char_len = utf8_char_len(a.s.str[i]);
		array_push(&res.runes, _MOV((int[]){ j }));
		i += char_len - 1;
		j += char_len;
		res.len++;
	}
	return res;
}

int ustring_index_after(ustring u, ustring p, int start) {
	if (p.len > u.len) {
		return -1;
	}
	int strt = start;
	if (start < 0) {
		strt = 0;
	}
	if (start > u.len) {
		return -1;
	}
	int i = strt;
	for (;;) {
		if (!(i < u.len)) break;
		int j = 0;
		int ii = i;
		for (;;) {
			if (!(j < p.len && string_eq(ustring_at(u, ii), ustring_at(p, j)))) break;
			j++;
			ii++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}

int ustring_count(ustring u, ustring substr) {
	if (u.len == 0 || substr.len == 0) {
		return 0;
	}
	if (substr.len > u.len) {
		return 0;
	}
	int n = 0;
	int i = 0;
	for (;;) {
		i = ustring_index_after(u, substr, i);
		if (i == -1) {
			return n;
		}
		i += substr.len;
		n++;
	}
	return 0;
}

string ustring_substr(ustring u, int _start, int _end) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (_start > _end || _start > u.len || _end > u.len || _start < 0 || _end < 0) {
			v_panic(_STR("substr(%"PRId32"\000, %"PRId32"\000) out of bounds (len=%"PRId32"\000)", 4, _start, _end, u.len));
		}
	}
	#endif
	int end = (_end >= u.len ? (u.s.len) : ((*(int*)array_get(u.runes, _end))));
	return string_substr(u.s, (*(int*)array_get(u.runes, _start)), end);
}

string ustring_left(ustring u, int pos) {
	if (pos >= u.len) {
		return u.s;
	}
	return ustring_substr(u, 0, pos);
}

string ustring_right(ustring u, int pos) {
	if (pos >= u.len) {
		return tos_lit("");
	}
	return ustring_substr(u, pos, u.len);
}

static byte string_at(string s, int idx) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (idx < 0 || idx >= s.len) {
			v_panic(_STR("string index out of range: %"PRId32"\000 / %"PRId32"", 2, idx, s.len));
		}
	}
	#endif
	{ // Unsafe block
		return s.str[idx];
	}
}

string ustring_at(ustring u, int idx) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (idx < 0 || idx >= u.len) {
			v_panic(_STR("string index out of range: %"PRId32"\000 / %"PRId32"", 2, idx, u.runes.len));
		}
	}
	#endif
	return ustring_substr(u, idx, idx + 1);
}

// Attr: [unsafe]
static void ustring_free(ustring* u) {
	#if defined(_VPREALLOC)
	{
	}
	#endif
	array_free(&u->runes);
}

bool byte_is_digit(byte c) {
	return c >= '0' && c <= '9';
}

bool byte_is_hex_digit(byte c) {
	return byte_is_digit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

bool byte_is_oct_digit(byte c) {
	return c >= '0' && c <= '7';
}

bool byte_is_bin_digit(byte c) {
	return c == '0' || c == '1';
}

bool byte_is_letter(byte c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

void string_free(string* s) {
	#if defined(_VPREALLOC)
	{
	}
	#endif
	if (s->is_lit == -98761234) {
		printf("double string.free() detected\n");
		return;
	}
	if (s->is_lit == 1 || s->len == 0) {
		return;
	}
	v_free(s->str);
	s->is_lit = -98761234;
}

string string_all_before(string s, string dot) {
	Option_int _t67 = string_index(s, dot);
	if (!_t67.ok) {
		string err = _t67.v_error;
		int errcode = _t67.ecode;
		return s;
	}
 	int pos = *(int*) _t67.data;
	return string_left(s, pos);
}

string string_all_before_last(string s, string dot) {
	Option_int _t68 = string_last_index(s, dot);
	if (!_t68.ok) {
		string err = _t68.v_error;
		int errcode = _t68.ecode;
		return s;
	}
 	int pos = *(int*) _t68.data;
	return string_left(s, pos);
}

string string_all_after(string s, string dot) {
	Option_int _t69 = string_index(s, dot);
	if (!_t69.ok) {
		string err = _t69.v_error;
		int errcode = _t69.ecode;
		return s;
	}
 	int pos = *(int*) _t69.data;
	return string_right(s, pos + dot.len);
}

string string_all_after_last(string s, string dot) {
	Option_int _t70 = string_last_index(s, dot);
	if (!_t70.ok) {
		string err = _t70.v_error;
		int errcode = _t70.ecode;
		return s;
	}
 	int pos = *(int*) _t70.data;
	return string_right(s, pos + dot.len);
}

string string_after(string s, string dot) {
	return string_all_after_last(s, dot);
}

string string_after_char(string s, byte dot) {
	int pos = 0;
	for (int i = 0; i < s.len; ++i) {
		byte c = s.str[i];
		if (c == dot) {
			pos = i;
			break;
		}
	}
	if (pos == 0) {
		return s;
	}
	return string_right(s, pos + 1);
}

string array_string_join(array_string a, string del) {
	if (a.len == 0) {
		return tos_lit("");
	}
	int len = 0;
	// FOR IN array
	array _t71 = a;
	for (int _t72 = 0; _t72 < _t71.len; ++_t72) {
		string val = ((string*)_t71.data)[_t72];
		len += val.len + del.len;
	}
	len -= del.len;
	string res = tos_lit("");
	res.len = len;
	res.str = v_malloc(res.len + 1);
	int idx = 0;
	// FOR IN array
	array _t73 = a;
	for (int i = 0; i < _t73.len; ++i) {
		string val = ((string*)_t73.data)[i];
		for (int j = 0; j < val.len; ++j) {
			{ // Unsafe block
				res.str[idx] = val.str[j];
			}
			idx++;
		}
		if (i != a.len - 1) {
			for (int k = 0; k < del.len; ++k) {
				{ // Unsafe block
					res.str[idx] = del.str[k];
				}
				idx++;
			}
		}
	}
	{ // Unsafe block
		res.str[res.len] = '\0';
	}
	return res;
}

string array_string_join_lines(array_string s) {
	return array_string_join(s, tos_lit("\n"));
}

string string_reverse(string s) {
	if (s.len == 0 || s.len == 1) {
		return s;
	}
	string res = (string){.str = v_malloc(s.len), .len = s.len};
	for (int i = s.len - 1; i >= 0; i--) {
		{ // Unsafe block
			res.str[s.len - i - 1] = string_at(s, i);
		}
	}
	return res;
}

string string_limit(string s, int max) {
	ustring u = string_ustring(s);
	if (u.len <= max) {
		return s;
	}
	return ustring_substr(u, 0, max);
}

// Attr: [deprecated]
bool byte_is_white(byte c) {
	eprintln(tos_lit("warning: `string.is_white` has been deprecated, use `string.is_space` instead"));
	return byte_is_space(c);
}

int string_hash(string s) {
	u32 h = ((u32)(0U));
	if (h == 0 && s.len > 0) {
		for (int _t74 = 0; _t74 < s.len; ++_t74) {
			byte c = s.str[_t74];
			h = h * 31 + ((u32)(c));
		}
	}
	return ((int)(h));
}

array_byte string_bytes(string s) {
	if (s.len == 0) {
		return __new_array_with_default(0, 0, sizeof(byte), 0);
	}
	array_byte buf = __new_array_with_default(s.len, 0, sizeof(byte), 0);
	memcpy(buf.data, s.str, s.len);
	return buf;
}

string string_repeat(string s, int count) {
	if (count < 0) {
		v_panic(_STR("string.repeat: count is negative: %"PRId32"", 1, count));
	} else if (count == 0) {
		return tos_lit("");
	} else if (count == 1) {
		return s;
	}
	byteptr ret = v_malloc(s.len * count + 1);
	for (int i = 0; i < count; ++i) {
		for (int j = 0; j < s.len; ++j) {
			{ // Unsafe block
				ret[i * s.len + j] = string_at(s, j);
			}
		}
	}
	{ // Unsafe block
		int new_len = s.len * count;
		ret[new_len] = 0;
		return byteptr_vstring_with_len(ret, new_len);
	}
}

array_string string_fields(string s) {
	return string_split(string_replace(s, tos_lit("\t"), tos_lit(" ")), tos_lit(" "));
}

string string_map(string s, byte (*func)(byte )) {
	{ // Unsafe block
		byteptr res = v_malloc(s.len + 1);
		for (int i = 0; i < s.len; ++i) {
			res[i] = func(string_at(s, i));
		}
		return tos(res, s.len);
	}
}

string string_filter(string s, bool (*func)(byte b)) {
	int new_len = 0;
	byteptr buf = v_malloc(s.len + 1);
	for (int i = 0; i < s.len; ++i) {
		byte b = string_at(s, i);
		if (func(b)) {
			{ // Unsafe block
				buf[new_len] = b;
			}
			new_len++;
		}
	}
	{ // Unsafe block
		buf[new_len] = 0;
		return byteptr_vstring_with_len(buf, new_len);
	}
}

string string_strip_margin(string s) {
	return string_strip_margin_custom(s, '|');
}

string string_strip_margin_custom(string s, byte del) {
	byte sep = del;
	if (byte_is_space(sep)) {
		eprintln(tos_lit("Warning: `strip_margin` cannot use white-space as a delimiter"));
		eprintln(tos_lit("    Defaulting to `|`"));
		sep = '|';
	}
	byteptr ret = v_malloc(s.len + 1);
	int count = 0;
	for (int i = 0; i < s.len; i++) {
		if ((string_at(s, i) == '\n' || string_at(s, i) == '\r')) {
			{ // Unsafe block
				ret[count] = string_at(s, i);
			}
			count++;
			if (string_at(s, i) == '\r' && i < s.len - 1 && string_at(s, i + 1) == '\n') {
				{ // Unsafe block
					ret[count] = string_at(s, i + 1);
				}
				count++;
				i++;
			}
			for (;;) {
				if (!(string_at(s, i) != sep)) break;
				i++;
				if (i >= s.len) {
					break;
				}
			}
		} else {
			{ // Unsafe block
				ret[count] = string_at(s, i);
			}
			count++;
		}
	}
	{ // Unsafe block
		ret[count] = 0;
		return byteptr_vstring_with_len(ret, count);
	}
}

int utf8_char_len(byte b) {
	return (((0xe5000000 >> (((b >> 3) & 0x1e))) & 3)) + 1;
}

string utf32_to_str(u32 code) {
	byteptr buffer = v_malloc(5);
	return utf32_to_str_no_malloc(code, buffer);
}

string utf32_to_str_no_malloc(u32 code, voidptr buf) {
	int icode = ((int)(code));
	{ // Unsafe block
		byteptr buffer = ((byteptr)(buf));
		if (icode <= 127) {
			buffer[0] = ((byte)(icode));
			return tos(buffer, 1);
		}
		if (icode <= 2047) {
			buffer[0] = (192 | ((byte)(icode >> 6)));
			buffer[1] = (128 | ((byte)((icode & 63))));
			return tos(buffer, 2);
		}
		if (icode <= 65535) {
			buffer[0] = (224 | ((byte)(icode >> 12)));
			buffer[1] = (128 | ((((byte)(icode >> 6)) & 63)));
			buffer[2] = (128 | ((byte)((icode & 63))));
			return tos(buffer, 3);
		}
		if (icode <= 1114111) {
			buffer[0] = (240 | ((byte)(icode >> 18)));
			buffer[1] = (128 | ((((byte)(icode >> 12)) & 63)));
			buffer[2] = (128 | ((((byte)(icode >> 6)) & 63)));
			buffer[3] = (128 | ((byte)((icode & 63))));
			return tos(buffer, 4);
		}
	}
	return tos_lit("");
}

int string_utf32_code(string _rune) {
	if (_rune.len == 0) {
		return 0;
	}
	if (_rune.len == 1) {
		return ((int)(string_at(_rune, 0)));
	}
	byte b = ((byte)(((int)(string_at(_rune, 0)))));
	b = b << _rune.len;
	int res = ((int)(b));
	int shift = 6 - _rune.len;
	for (int i = 1; i < _rune.len; i++) {
		int c = ((int)(string_at(_rune, i)));
		res = res << shift;
		res |= (c & 63);
		shift = 6;
	}
	return res;
}

u16* string_to_wide(string _str) {
	#if defined(_WIN32)
	{
		int num_chars = (MultiByteToWideChar(_const_cp_utf8, 0, ((charptr)(_str.str)), _str.len, 0, 0));
		u16* wstr = ((u16*)(v_malloc((num_chars + 1) * 2)));
		if (wstr != 0) {
			MultiByteToWideChar(_const_cp_utf8, 0, ((charptr)(_str.str)), _str.len, wstr, num_chars);
			memset(((byte*)(wstr)) + num_chars * 2, 0, 2);
		}
		return wstr;
	}
	#else
	{
	}
	#endif
}

string string_from_wide(u16* _wstr) {
	#if defined(_WIN32)
	{
		int wstr_len = wcslen(_wstr);
		return string_from_wide2(_wstr, wstr_len);
	}
	#else
	{
	}
	#endif
}

string string_from_wide2(u16* _wstr, int len) {
	#if defined(_WIN32)
	{
		int num_chars = WideCharToMultiByte(_const_cp_utf8, 0, _wstr, len, 0, 0, 0, 0);
		byteptr str_to = v_malloc(num_chars + 1);
		if (str_to != 0) {
			WideCharToMultiByte(_const_cp_utf8, 0, _wstr, len, ((charptr)(str_to)), num_chars, 0, 0);
			memset(str_to + num_chars, 0, 1);
		}
		return tos2(str_to);
	}
	#else
	{
	}
	#endif
}

static int utf8_len(byte c) {
	int b = 0;
	byte x = c;
	if (((x & 240)) != 0) {
		x >>= 4;
	} else {
		b += 4;
	}
	if (((x & 12)) != 0) {
		x >>= 2;
	} else {
		b += 2;
	}
	if (((x & 2)) == 0) {
		b++;
	}
	return b;
}

static int utf8_str_len(string s) {
	int l = 0;
	for (int i = 0; i < s.len; i++) {
		l++;
		byte c = s.str[i];
		if (((c & (1 << 7))) != 0) {
			for (byte t = ((byte)(1 << 6)); ((c & t)) != 0; t >>= 1) {
				i++;
			}
		}
	}
	return l;
}

static int utf8_str_visible_length(string s) {
	int l = 0;
	int ul = 1;
	for (int i = 0; i < s.len; i += ul) {
		ul = 1;
		byte c = s.str[i];
		if (((c & (1 << 7))) != 0) {
			for (byte t = ((byte)(1 << 6)); ((c & t)) != 0; t >>= 1) {
				ul++;
			}
		}
		if (i + ul > s.len) {
			return l;
		}
		l++;
		if (c == 0xcc || c == 0xcd) {
			u16 r = ((((u16)(c)) << 8) | s.str[i + 1]);
			if (r >= 0xcc80 && r < 0xcdb0) {
				l--;
			}
		} else if (c == 0xe1 || c == 0xe2 || c == 0xef) {
			u32 r = ((((u32)(c)) << 16) | ((((u32)(s.str[i + 1])) << 8) | s.str[i + 2]));
			if ((r >= 0xe1aab0 && r < 0xe1ac80) || (r >= 0xe1b780 && r < 0xe1b880) || (r >= 0xe28390 && r < 0xe28480) || (r >= 0xefb8a0 && r < 0xefb8b0)) {
				l--;
			}
		}
	}
	return l;
}

int utf8_getchar() {
	int c = getchar();
	int len = utf8_len(((byte)(~c)));
	if (c < 0) {
		return 0;
	} else if (len == 0) {
		return c;
	} else if (len == 1) {
		return -1;
	} else {
		int uc = (c & ((1 << (7 - len)) - 1));
		for (int i = 0; i + 1 < len; i++) {
			int c2 = getchar();
			if (c2 != -1 && (c2 >> 6) == 2) {
				uc <<= 6;
				uc |= ((c2 & 63));
			} else if (c2 == -1) {
				return 0;
			} else {
				return -1;
			}
		}
		return uc;
	}
}

int vsdl__RWops_close(vsdl__RWops* ops) {
	int result = ops->close_cb(ops);
	return result;
}

Option_vsdl__RWops_ptr vsdl__rw_from_const_mem(voidptr stream, int size) {
	voidptr ops = SDL_RWFromConstMem(stream, size);
	if (ops == 0) {
		Option _t75 = v_error(vsdl__serror(tos_lit("Unable to open memory stream")));
		return *(Option_vsdl__RWops_ptr*)&_t75;
	}
	Option_vsdl__RWops_ptr _t76;
	opt_ok2(&(vsdl__RWops*[]) { ops }, (OptionBase*)(&_t76), sizeof(vsdl__RWops*));
	return _t76;
}

Option_vsdl__RWops_ptr vsdl__rw_from_file(string file, string mode) {
	voidptr ops = SDL_RWFromFile(file.str, mode.str);
	if (ops == 0) {
		Option _t77 = v_error(vsdl__serror(_STR("Unable to open file %.*s", 1, file)));
		return *(Option_vsdl__RWops_ptr*)&_t77;
	}
	Option_vsdl__RWops_ptr _t78;
	opt_ok2(&(vsdl__RWops*[]) { ops }, (OptionBase*)(&_t78), sizeof(vsdl__RWops*));
	return _t78;
}

Option_vsdl__RWops_ptr vsdl__rw_from_fp(voidptr fp, bool autoclose) {
	voidptr ops = SDL_RWFromFP(fp, autoclose);
	if (ops == 0) {
		Option _t79 = v_error(vsdl__serror(tos_lit("Unable to open file pointer")));
		return *(Option_vsdl__RWops_ptr*)&_t79;
	}
	Option_vsdl__RWops_ptr _t80;
	opt_ok2(&(vsdl__RWops*[]) { ops }, (OptionBase*)(&_t80), sizeof(vsdl__RWops*));
	return _t80;
}

Option_vsdl__RWops_ptr vsdl__rw_from_mem(voidptr stream, int size) {
	voidptr ops = SDL_RWFromMem(stream, size);
	if (ops == 0) {
		Option _t81 = v_error(vsdl__serror(tos_lit("Unable to open memory stream")));
		return *(Option_vsdl__RWops_ptr*)&_t81;
	}
	Option_vsdl__RWops_ptr _t82;
	opt_ok2(&(vsdl__RWops*[]) { ops }, (OptionBase*)(&_t82), sizeof(vsdl__RWops*));
	return _t82;
}

multi_return_array_byte_u32 vsdl__RWops_read(vsdl__RWops* ops, u32 size, u32 max) {
	array_byte data = __new_array_with_default(((int)(size)) * ((int)(max)), 0, sizeof(byte), &(byte[]){0});
	u32 count = ops->read_cb(ops, data.data, size, max);
	return (multi_return_array_byte_u32){.arg0=data, .arg1=count};
}

i16 vsdl__RWops_read_be_16(vsdl__RWops* ops) {
	return SDL_ReadBE16(ops);
}

int vsdl__RWops_read_be_32(vsdl__RWops* ops) {
	return SDL_ReadBE32(ops);
}

i64 vsdl__RWops_read_be_64(vsdl__RWops* ops) {
	return SDL_ReadBE64(ops);
}

i16 vsdl__RWops_read_le_16(vsdl__RWops* ops) {
	return SDL_ReadBE16(ops);
}

int vsdl__RWops_read_le_32(vsdl__RWops* ops) {
	return SDL_ReadBE32(ops);
}

i64 vsdl__RWops_read_le_64(vsdl__RWops* ops) {
	return SDL_ReadBE64(ops);
}

byte vsdl__RWops_read_u8(vsdl__RWops* ops) {
	return SDL_ReadU8(ops);
}

i64 vsdl__RWops_seek(vsdl__RWops* ops, i64 offset, vsdl__RWWhence whence) {
	return ops->seek_cb(ops, offset, whence);
}

i64 vsdl__RWops_tell(vsdl__RWops* ops) {
	return ops->seek_cb(ops, 0, vsdl__RWWhence_current);
}

u32 vsdl__RWops_write(vsdl__RWops* ops, array_byte data, u32 size, u32 num) {
	return ops->write_cb(ops, data.data, size, num);
}

bool vsdl__RWops_write_be_16(vsdl__RWops* ops, i16 data) {
	return SDL_WriteBE16(ops, data);
}

bool vsdl__RWops_write_be_32(vsdl__RWops* ops, int data) {
	return SDL_WriteBE32(ops, data);
}

bool vsdl__RWops_write_be_64(vsdl__RWops* ops, i64 data) {
	return SDL_WriteBE64(ops, data);
}

bool vsdl__RWops_write_le_16(vsdl__RWops* ops, i16 data) {
	return SDL_WriteBE16(ops, data);
}

bool vsdl__RWops_write_le_32(vsdl__RWops* ops, int data) {
	return SDL_WriteBE32(ops, data);
}

bool vsdl__RWops_write_le_64(vsdl__RWops* ops, i64 data) {
	return SDL_WriteBE64(ops, data);
}

bool vsdl__RWops_write_u8(vsdl__RWops* ops, byte data) {
	return SDL_WriteU8(ops, data);
}

// TypeDecl
// TypeDecl
// TypeDecl
// TypeDecl
// TypeDecl
static void vsdl__init() {
	SDL_Init(0);
}

void vsdl__delay(u32 ms) {
	SDL_Delay(ms);
}

u32 vsdl__get_ticks() {
	return SDL_GetTicks();
}

void vsdl__quit() {
	SDL_Quit();
}

static string vsdl__serror(string text) {
	string msg = tos3(SDL_GetError());
	return _STR("%.*s\000: %.*s", 2, text, msg);
}

Option_vsdl__gfx__Cursor vsdl__gfx__create_cursor(byte color, byte mask, int w, int h, int hot_x, int hot_y) {
	vsdl__gfx__Cursor cursor = (vsdl__gfx__Cursor){.ptr = SDL_CreateCursor(color, mask, w, h, hot_x, hot_y),};
	if (cursor.ptr == 0) {
		Option _t83 = v_error(vsdl__gfx__serror(tos_lit("Unable to create cursor")));
		return *(Option_vsdl__gfx__Cursor*)&_t83;
	}
	Option_vsdl__gfx__Cursor _t84;
	opt_ok2(&(vsdl__gfx__Cursor[]) { cursor }, (OptionBase*)(&_t84), sizeof(vsdl__gfx__Cursor));
	return _t84;
}

Option_vsdl__gfx__Cursor vsdl__gfx__create_system_cursor(vsdl__gfx__CursorType cursor_type) {
	vsdl__gfx__Cursor cursor = (vsdl__gfx__Cursor){.ptr = SDL_CreateSystemCursor(cursor_type),};
	if (cursor.ptr == 0) {
		Option _t85 = v_error(vsdl__gfx__serror(tos_lit("Unable to create system cursor")));
		return *(Option_vsdl__gfx__Cursor*)&_t85;
	}
	Option_vsdl__gfx__Cursor _t86;
	opt_ok2(&(vsdl__gfx__Cursor[]) { cursor }, (OptionBase*)(&_t86), sizeof(vsdl__gfx__Cursor));
	return _t86;
}

void vsdl__gfx__Cursor_free(vsdl__gfx__Cursor* cursor) {
	if (cursor->ptr == 0) {
		return;
	}
	SDL_FreeCursor(cursor->ptr);
	cursor->ptr = 0;
}

Option_vsdl__gfx__Cursor vsdl__gfx__get_cursor() {
	vsdl__gfx__Cursor cursor = (vsdl__gfx__Cursor){.ptr = SDL_GetCursor(),};
	if (cursor.ptr == 0) {
		Option _t87 = v_error(vsdl__gfx__serror(tos_lit("Unable to get cursor")));
		return *(Option_vsdl__gfx__Cursor*)&_t87;
	}
	Option_vsdl__gfx__Cursor _t88;
	opt_ok2(&(vsdl__gfx__Cursor[]) { cursor }, (OptionBase*)(&_t88), sizeof(vsdl__gfx__Cursor));
	return _t88;
}

void vsdl__gfx__set_cursor(vsdl__gfx__Cursor cursor) {
	SDL_SetCursor(cursor.ptr);
}

vsdl__gfx__CursorMode vsdl__gfx__show_cursor(vsdl__gfx__CursorMode mode) {
	if (mode == vsdl__gfx__CursorMode_query) {
		return SDL_ShowCursor(mode);
	}
	SDL_ShowCursor(mode);
	return mode;
}

Option_vsdl__gfx__Display vsdl__gfx__get_display(int index) {
	vsdl__gfx__Display display = (vsdl__gfx__Display){.format = 0,.w = 0,.h = 0,.refresh_rate = 0,.driverdata = 0,};
	int result = SDL_GetDisplayMode(index, 0, &display);
	if (result < 0) {
		Option _t89 = v_error(vsdl__gfx__serror(tos_lit("Unable to get display")));
		return *(Option_vsdl__gfx__Display*)&_t89;
	}
	Option_vsdl__gfx__Display _t90;
	opt_ok2(&(vsdl__gfx__Display[]) { display }, (OptionBase*)(&_t90), sizeof(vsdl__gfx__Display));
	return _t90;
}

int vsdl__gfx__get_displays_count() {
	return SDL_GetNumVideoDisplays();
}

int vsdl__gfx__get_display_modes(int display) {
	return SDL_GetNumDisplayModes(display);
}

static void vsdl__gfx__init() {
	SDL_InitSubSystem(SDL_INIT_VIDEO);
}

Option_vsdl__gfx__Surface_ptr vsdl__gfx__load_bmp(string path) {
	voidptr surface = SDL_LoadBMP(path.str);
	if (surface == 0) {
		Option _t91 = v_error(vsdl__gfx__serror(_STR("Unable to load bmp '%.*s\000'", 2, path)));
		return *(Option_vsdl__gfx__Surface_ptr*)&_t91;
	}
	Option_vsdl__gfx__Surface_ptr _t92;
	opt_ok2(&(vsdl__gfx__Surface*[]) { surface }, (OptionBase*)(&_t92), sizeof(vsdl__gfx__Surface*));
	return _t92;
}

static string vsdl__gfx__serror(string text) {
	string msg = tos3(SDL_GetError());
	return _STR("%.*s\000: %.*s", 2, text, msg);
}

Option_vsdl__gfx__GLContext vsdl__gfx__Window_create_gl_context(vsdl__gfx__Window window) {
	vsdl__gfx__GLContext context = (vsdl__gfx__GLContext){.ptr = SDL_GL_CreateContext(window.ptr),};
	if (context.ptr == 0) {
		Option _t93 = v_error(vsdl__gfx__serror(tos_lit("Unable to get GL context")));
		return *(Option_vsdl__gfx__GLContext*)&_t93;
	}
	Option_vsdl__gfx__GLContext _t94;
	opt_ok2(&(vsdl__gfx__GLContext[]) { context }, (OptionBase*)(&_t94), sizeof(vsdl__gfx__GLContext));
	return _t94;
}

void vsdl__gfx__GLContext_destroy(vsdl__gfx__GLContext* context) {
	if (context->ptr == 0) {
		return;
	}
	SDL_GL_DeleteContext(context->ptr);
	context->ptr = 0;
}

multi_return_int_int vsdl__gfx__Window_get_gl_drawsize(vsdl__gfx__Window window) {
	int w = 0;
	int h = 0;
	SDL_GL_GetDrawableSize(window.ptr, &w, &h);
	return (multi_return_int_int){.arg0=w, .arg1=h};
}

multi_return_f32_f32 vsdl__gfx__Texture_gl_bind_texture(vsdl__gfx__Texture texture) {
	f32 w = ((f32)(0));
	f32 h = ((f32)(0));
	SDL_GL_BindTexture(texture.ptr, &w, &h);
	return (multi_return_f32_f32){.arg0=w, .arg1=h};
}

bool vsdl__gfx__gl_extension_supported(string extension) {
	return SDL_GL_ExtensionSupported(extension.str);
}

int vsdl__gfx__gl_get_attribute(vsdl__gfx__GLAttr attribute) {
	int value = 0;
	SDL_GL_GetAttribute(attribute, &value);
	return value;
}

Option_vsdl__gfx__GLContext vsdl__gfx__gl_get_current_context() {
	vsdl__gfx__GLContext context = (vsdl__gfx__GLContext){.ptr = SDL_GL_GetCurrentContext(),};
	if (context.ptr == 0) {
		Option _t95 = v_error(vsdl__gfx__serror(tos_lit("Unable to get current context")));
		return *(Option_vsdl__gfx__GLContext*)&_t95;
	}
	Option_vsdl__gfx__GLContext _t96;
	opt_ok2(&(vsdl__gfx__GLContext[]) { context }, (OptionBase*)(&_t96), sizeof(vsdl__gfx__GLContext));
	return _t96;
}

Option_vsdl__gfx__Window vsdl__gfx__gl_get_current_window() {
	vsdl__gfx__Window window = (vsdl__gfx__Window){.ptr = SDL_GL_GetCurrentWindow(),};
	if (window.ptr == 0) {
		Option _t97 = v_error(vsdl__gfx__serror(tos_lit("Unable to get current window")));
		return *(Option_vsdl__gfx__Window*)&_t97;
	}
	Option_vsdl__gfx__Window _t98;
	opt_ok2(&(vsdl__gfx__Window[]) { window }, (OptionBase*)(&_t98), sizeof(vsdl__gfx__Window));
	return _t98;
}

voidptr vsdl__gfx__gl_get_procaddr(string proc) {
	return SDL_GL_GetProcAddress(proc.str);
}

int vsdl__gfx__gl_get_swap_interval() {
	return SDL_GL_GetSwapInterval();
}

Option_void vsdl__gfx__gl_load_library(string path) {
	int result = 0;
	if ((path).len == 0) {
		result = SDL_GL_LoadLibrary(NULL);
	} else {
		result = SDL_GL_LoadLibrary(path.str);
	}
	if (result < 0) {
		Option _t99 = v_error(vsdl__gfx__serror(_STR("Unable to load GL library at %.*s", 1, path)));
		return *(Option_void*)&_t99;
	}
	Option_void _t100 = {.ok = true};
	return _t100;
}

void vsdl__gfx__gl_reset_attributes() {
	SDL_GL_ResetAttributes();
}

void vsdl__gfx__gl_set_attribute(vsdl__gfx__GLAttr attribute, int value) {
	SDL_GL_SetAttribute(attribute, value);
}

void vsdl__gfx__gl_set_swap_interval(int interval) {
	SDL_GL_SetSwapInterval(interval);
}

void vsdl__gfx__Texture_gl_unbind_texture(vsdl__gfx__Texture texture) {
	SDL_GL_UnbindTexture(texture.ptr);
}

void vsdl__gfx__gl_unload_library() {
	SDL_GL_UnloadLibrary();
}

bool vsdl__gfx__Window_set_gl_context(vsdl__gfx__Window window, vsdl__gfx__GLContext context) {
	return SDL_GL_MakeCurrent(window.ptr, context.ptr) == 0;
}

void vsdl__gfx__Window_swap_gl(vsdl__gfx__Window window) {
	SDL_GL_SwapWindow(window.ptr);
}

void vsdl__gfx__Window_show_message(vsdl__gfx__Window window, string title, string message, vsdl__gfx__MessageBoxFlags flag) {
	vsdl__gfx__show_message(title, message, flag, (varg_vsdl__gfx__Window){.len=1,.args={window}});
}

int vsdl__gfx__Window_show_message_custom(vsdl__gfx__Window window, string title, string message, vsdl__gfx__MessageBoxFlags flag, array_vsdl__gfx__MessageBoxButton buttons, vsdl__gfx__MessageBoxColorScheme scheme) {
	return vsdl__gfx__show_message_custom(title, message, flag, buttons, (voidptr)&/*qq*/scheme, (varg_vsdl__gfx__Window){.len=1,.args={window}});
}

Option_void vsdl__gfx__show_message(string title, string message, vsdl__gfx__MessageBoxFlags flag, varg_vsdl__gfx__Window window) {
	int result = 0;
	if (window.len > 0) {
		result = SDL_ShowSimpleMessageBox(flag, title.str, message.str, window.args[0].ptr);
	} else {
		result = SDL_ShowSimpleMessageBox(flag, title.str, message.str, NULL);
	}
	if (result < 0) {
		Option _t101 = v_error(vsdl__gfx__serror(tos_lit("Unable to show message box")));
		return *(Option_void*)&_t101;
	}
	Option_void _t102 = {.ok = true};
	return _t102;
}

int vsdl__gfx__show_message_custom(string title, string message, vsdl__gfx__MessageBoxFlags flag, array_vsdl__gfx__MessageBoxButton buttons, vsdl__gfx__MessageBoxColorScheme* scheme, varg_vsdl__gfx__Window window) {
	vsdl__gfx__MessageBox messagebox_data = (vsdl__gfx__MessageBox){
		.flags = flag,
		.window = (window.len > 0 ? (window.args[0].ptr) : (((u32)(0U)))),
		.title = title.str,
		.message = message.str,
		.numbuttons = buttons.len,
		.buttons = buttons.data,
		.color_scheme = scheme,
	};
	int result = 0;
	SDL_ShowMessageBox(&messagebox_data, &result);
	return result;
}

u16 vsdl__gfx__calculate_gamma_ramp(f32 gamma) {
	u16 ramp = ((u16)(0U));
	SDL_CalculateGammaRamp(gamma, &ramp);
	return ramp;
}

void vsdl__gfx__PixelFormat_free(vsdl__gfx__PixelFormat* format) {
	SDL_FreeFormat(format);
}

void vsdl__gfx__Palette_free(vsdl__gfx__Palette* palette) {
	SDL_FreePalette(palette);
}

multi_return_byte_byte_byte vsdl__gfx__PixelFormat_get_rgb(vsdl__gfx__PixelFormat* format, u32 pixel) {
	byte r = ((byte)(0));
	byte g = ((byte)(0));
	byte b = ((byte)(0));
	SDL_GetRGB(pixel, format, &r, &g, &b);
	return (multi_return_byte_byte_byte){.arg0=r, .arg1=g, .arg2=b};
}

multi_return_byte_byte_byte_byte vsdl__gfx__PixelFormat_get_rgba(vsdl__gfx__PixelFormat* format, u32 pixel) {
	byte r = ((byte)(0));
	byte g = ((byte)(0));
	byte b = ((byte)(0));
	byte a = ((byte)(0));
	SDL_GetRGBA(pixel, format, &r, &g, &b, &a);
	return (multi_return_byte_byte_byte_byte){.arg0=r, .arg1=g, .arg2=b, .arg3=a};
}

u32 vsdl__gfx__PixelFormat_map_rgb(vsdl__gfx__PixelFormat* format, byte r, byte g, byte b) {
	return SDL_MapRGB(format, r, g, b);
}

u32 vsdl__gfx__PixelFormat_map_rgba(vsdl__gfx__PixelFormat* format, byte r, byte g, byte b, byte a) {
	return SDL_MapRGBA(format, r, g, b, a);
}

vsdl__gfx__PixelFormats vsdl__gfx__masks_to_pixel_formats(int bpp, u32 rmask, u32 gmask, u32 bmask, u32 amask) {
	return SDL_MasksToPixelFormatEnum(bpp, rmask, gmask, bmask, amask);
}

vsdl__gfx__PixelFormat* vsdl__gfx__new_pixel_format(u32 format) {
	return SDL_AllocFormat(format);
}

vsdl__gfx__Palette* vsdl__gfx__new_palette(int num_colors) {
	return SDL_AllocPalette(num_colors);
}

multi_return_bool_int_u32_u32_u32_u32 vsdl__gfx__pixel_formats_to_masks(vsdl__gfx__PixelFormats format) {
	int bpp = ((int)(0));
	u32 rmask = ((u32)(0U));
	u32 gmask = ((u32)(0U));
	u32 bmask = ((u32)(0U));
	u32 amask = ((u32)(0U));
	bool result = SDL_PixelFormatEnumToMasks(format, &bpp, &rmask, &gmask, &bmask, &amask);
	return (multi_return_bool_int_u32_u32_u32_u32){.arg0=result, .arg1=bpp, .arg2=rmask, .arg3=gmask, .arg4=bmask, .arg5=amask};
}

int vsdl__gfx__Palette_set_colors(vsdl__gfx__Palette* palette, array_vsdl__gfx__Color colors, int first, int total) {
	return SDL_SetPaletteColors(palette, colors.data, first, total);
}

int vsdl__gfx__PixelFormat_set_palette(vsdl__gfx__PixelFormat* format, vsdl__gfx__Palette* palette) {
	return SDL_SetPixelFormatPalette(format, palette);
}

// TypeDecl
int vsdl__gfx__iphone_animation_callback(vsdl__gfx__Window window, int interval, vsdl__gfx__IPhoneAnimationCallback callback, voidptr param) {
	return 0;
}

void vsdl__gfx__iphone_set_event_pump(bool enabled) {
}

// TypeDecl
multi_return_int_int vsdl__gfx__dxgi_get_output(int display) {
	int adapter = 0;
	int output = 0;
	SDL_DXGIGetOutputInfo(display, &adapter, &output);
	return (multi_return_int_int){.arg0=adapter, .arg1=output};
}

void vsdl__gfx__set_windows_hook(vsdl__gfx__WindowsMessageCallback callback, voidptr data) {
	SDL_SetWindowsMessageHook(callback, data);
}

multi_return_bool_int_int_int_int vsdl__gfx__Rect_clip_line_segment(vsdl__gfx__Rect rect, int x1, int y1, int x2, int y2) {
	int x1_out = x1;
	int y1_out = y1;
	int x2_out = x2;
	int y2_out = y2;
	bool result = SDL_IntersectRectAndLine(&rect, x1_out, y1_out, x2_out, y2_out);
	return (multi_return_bool_int_int_int_int){.arg0=result, .arg1=x1_out, .arg2=y1_out, .arg3=x2_out, .arg4=y2_out};
}

multi_return_bool_vsdl__gfx__Rect vsdl__gfx__enclose_points(array_vsdl__gfx__Point points, vsdl__gfx__Rect clip) {
	vsdl__gfx__Rect new_rect = (vsdl__gfx__Rect){.x = 0,.y = 0,.w = 0,.h = 0,};
	bool result = SDL_EnclosePoints(points.data, points.len, &clip, &new_rect);
	return (multi_return_bool_vsdl__gfx__Rect){.arg0=result, .arg1=new_rect};
}

multi_return_bool_vsdl__gfx__Rect vsdl__gfx__Rect_enclose_points(vsdl__gfx__Rect rect, array_vsdl__gfx__Point points) {
multi_return_bool_vsdl__gfx__Rect _t103=vsdl__gfx__enclose_points(points, rect);

			return (multi_return_bool_vsdl__gfx__Rect){.arg0=_t103.arg0,.arg1=_t103.arg1,};
}

bool vsdl__gfx__Rect_eq(vsdl__gfx__Rect rect, vsdl__gfx__Rect rect_b) {
	return rect.x == rect_b.x && rect.y == rect_b.y && rect.w == rect_b.w && rect.h == rect_b.h;
}

multi_return_bool_vsdl__gfx__Rect vsdl__gfx__Rect_get_intersection(vsdl__gfx__Rect rect, vsdl__gfx__Rect rect_b) {
	vsdl__gfx__Rect new_rect = (vsdl__gfx__Rect){.x = 0,.y = 0,.w = 0,.h = 0,};
	bool result = SDL_IntersectRect(&rect, &rect_b, &new_rect);
	return (multi_return_bool_vsdl__gfx__Rect){.arg0=result, .arg1=new_rect};
}

bool vsdl__gfx__Rect_has_area(vsdl__gfx__Rect rect) {
	return rect.w > 0 && rect.h > 0;
}

bool vsdl__gfx__Rect_has_point(vsdl__gfx__Rect rect, vsdl__gfx__Point point) {
	return SDL_PointInRect(&point, &rect);
}

bool vsdl__gfx__Rect_intersects(vsdl__gfx__Rect rect, vsdl__gfx__Rect rect_b) {
	return SDL_HasIntersection(&rect, &rect_b);
}

vsdl__gfx__Rect vsdl__gfx__Rect__plus(vsdl__gfx__Rect rect, vsdl__gfx__Rect rect_b) {
	if (!vsdl__gfx__Rect_has_area(rect) && !vsdl__gfx__Rect_has_area(rect_b)) {
		return (vsdl__gfx__Rect){.x = 0,.y = 0,.w = 0,.h = 0,};
	} else if (!vsdl__gfx__Rect_has_area(rect)) {
		return rect_b;
	} else {
		return rect;
	}
	vsdl__gfx__Rect result = (vsdl__gfx__Rect){.x = 0,.y = 0,.w = 0,.h = 0,};
	int a_min = rect.x;
	int a_max = rect.x + rect.w;
	int b_min = rect_b.x;
	int b_max = rect_b.x + rect_b.w;
	if (b_min < a_min) {
		a_min = b_min;
	}
	if (b_max > a_max) {
		a_max = b_max;
	}
	result.x = a_min;
	result.w = a_max - a_min;
	a_min = rect.y;
	a_max = rect.y + rect.h;
	b_min = rect_b.y;
	b_max = rect_b.y + rect_b.h;
	if (b_min < a_min) {
		a_min = b_min;
	}
	if (b_max > a_max) {
		a_max = b_max;
	}
	result.y = a_min;
	result.h = a_max - a_min;
}

void vsdl__gfx__Renderer_clear(vsdl__gfx__Renderer renderer) {
	SDL_RenderClear(renderer.ptr);
}

int vsdl__gfx__Renderer_copy(vsdl__gfx__Renderer renderer, vsdl__gfx__Texture texture, vsdl__gfx__Rect src_rect, vsdl__gfx__Rect dst_rect) {
	return SDL_RenderCopy(renderer.ptr, texture.ptr, &src_rect, &dst_rect);
}

int vsdl__gfx__Renderer_copy_ex(vsdl__gfx__Renderer renderer, vsdl__gfx__Texture texture, vsdl__gfx__Rect src_rect, vsdl__gfx__Rect dst_rect, f64 angle, vsdl__gfx__Point center, vsdl__gfx__RendererFlip flip) {
	return SDL_RenderCopyEx(renderer.ptr, texture.ptr, &src_rect, &dst_rect, angle, &center, flip);
}

Option_vsdl__gfx__Texture vsdl__gfx__Renderer_create_texture(vsdl__gfx__Renderer renderer, vsdl__gfx__PixelFormats format, int access, int width, int height) {
	vsdl__gfx__Texture texture = (vsdl__gfx__Texture){.h = height,.ptr = SDL_CreateTexture(renderer.ptr, format, access, width, height),.w = width,};
	if (texture.ptr == 0) {
		Option _t104 = v_error(vsdl__gfx__serror(tos_lit("Unable to create new texture")));
		return *(Option_vsdl__gfx__Texture*)&_t104;
	}
	Option_vsdl__gfx__Texture _t105;
	opt_ok2(&(vsdl__gfx__Texture[]) { texture }, (OptionBase*)(&_t105), sizeof(vsdl__gfx__Texture));
	return _t105;
}

void vsdl__gfx__Renderer_destroy(vsdl__gfx__Renderer* renderer) {
	if (renderer->ptr == 0) {
		return;
	}
	SDL_DestroyRenderer(&renderer);
	renderer->ptr = 0;
}

int vsdl__gfx__Renderer_draw_line(vsdl__gfx__Renderer renderer, vsdl__gfx__Point point1, vsdl__gfx__Point point2) {
	return SDL_RenderDrawLine(renderer.ptr, point1.x, point1.y, point2.x, point2.y);
}

int vsdl__gfx__Renderer_draw_lines(vsdl__gfx__Renderer renderer, array_vsdl__gfx__Point points) {
	return SDL_RenderDrawLines(renderer.ptr, points.data, points.len);
}

int vsdl__gfx__Renderer_draw_point(vsdl__gfx__Renderer renderer, vsdl__gfx__Point point) {
	return SDL_RenderDrawPoint(renderer.ptr, point.x, point.y);
}

int vsdl__gfx__Renderer_draw_points(vsdl__gfx__Renderer renderer, array_vsdl__gfx__Point points) {
	return SDL_RenderDrawPoints(renderer.ptr, points.data, points.len);
}

int vsdl__gfx__Renderer_draw_rect(vsdl__gfx__Renderer renderer, vsdl__gfx__Rect rect) {
	return SDL_RenderDrawRect(renderer.ptr, &rect);
}

int vsdl__gfx__Renderer_draw_rects(vsdl__gfx__Renderer renderer, array_vsdl__gfx__Rect rects) {
	return SDL_RenderDrawRects(renderer.ptr, rects.data, rects.len);
}

int vsdl__gfx__Renderer_draw_fill_rect(vsdl__gfx__Renderer renderer, vsdl__gfx__Rect rect) {
	return SDL_RenderFillRect(renderer.ptr, &rect);
}

int vsdl__gfx__Renderer_draw_fill_rects(vsdl__gfx__Renderer renderer, array_vsdl__gfx__Rect rects) {
	return SDL_RenderFillRects(renderer.ptr, rects.data, rects.len);
}

void vsdl__gfx__Renderer_fill(vsdl__gfx__Renderer renderer, vsdl__gfx__Color color) {
	vsdl__gfx__Color existing_color = vsdl__gfx__Renderer_get_draw_color(renderer);
	vsdl__gfx__Renderer_set_draw_color(renderer, color);
	vsdl__gfx__Renderer_clear(renderer);
	vsdl__gfx__Renderer_set_draw_color(renderer, existing_color);
}

vsdl__gfx__Color vsdl__gfx__Renderer_get_draw_color(vsdl__gfx__Renderer renderer) {
	byte r = ((byte)(0));
	byte b = ((byte)(0));
	byte g = ((byte)(0));
	byte a = ((byte)(0));
	SDL_GetRenderDrawColor(renderer.ptr, &r, &b, &g, &a);
	return (vsdl__gfx__Color){.r = r,.g = g,.b = b,.a = a,};
}

Option_vsdl__gfx__Texture vsdl__gfx__Renderer_get_render_target(vsdl__gfx__Renderer renderer) {
	voidptr ptr = SDL_GetRenderTarget(renderer.ptr);
	if (ptr == 0) {
		Option _t106 = v_error(tos_lit("Default render target"));
		return *(Option_vsdl__gfx__Texture*)&_t106;
	}
	int access = 0;
	u32 format = ((u32)(0U));
	int height = 0;
	int width = 0;
	SDL_QueryTexture(ptr, &access, &format, &height, &width);
	Option_vsdl__gfx__Texture _t107;
	opt_ok2(&(vsdl__gfx__Texture[]) { (vsdl__gfx__Texture){.h = height,.ptr = ptr,.w = width,} }, (OptionBase*)(&_t107), sizeof(vsdl__gfx__Texture));
	return _t107;
}

multi_return_f32_f32 vsdl__gfx__Renderer_get_scale(vsdl__gfx__Renderer renderer) {
	f32 scale_x = ((f32)(0));
	f32 scale_y = ((f32)(0));
	SDL_RenderGetScale(renderer.ptr, &scale_x, &scale_y);
	return (multi_return_f32_f32){.arg0=scale_x, .arg1=scale_y};
}

void vsdl__gfx__Renderer_present(vsdl__gfx__Renderer renderer) {
	SDL_RenderPresent(renderer.ptr);
}

int vsdl__gfx__Renderer_render(vsdl__gfx__Renderer renderer, vsdl__gfx__Texture texture, vsdl__gfx__Rect rect) {
	return vsdl__gfx__Renderer_copy(renderer, texture, (vsdl__gfx__Rect){.x = 0,.y = 0,.w = texture.w,.h = texture.h,}, rect);
}

void vsdl__gfx__Renderer_set_blend_mode(vsdl__gfx__Renderer renderer, vsdl__gfx__BlendMode mode) {
	SDL_SetRenderDrawBlendMode(renderer.ptr, mode);
}

void vsdl__gfx__Renderer_set_draw_color(vsdl__gfx__Renderer renderer, vsdl__gfx__Color color) {
	SDL_SetRenderDrawColor(renderer.ptr, color.r, color.g, color.b, color.a);
}

void vsdl__gfx__Renderer_set_target(vsdl__gfx__Renderer renderer, vsdl__gfx__Texture texture) {
	SDL_SetRenderTarget(renderer.ptr, texture.ptr);
}

void vsdl__gfx__Renderer_set_scale(vsdl__gfx__Renderer renderer, f32 scale_x, f32 scale_y) {
	SDL_RenderSetScale(renderer.ptr, scale_x, scale_y);
}

void vsdl__gfx__Renderer_set_viewport(vsdl__gfx__Renderer renderer, vsdl__gfx__Rect rect) {
	SDL_RenderSetViewport(renderer.ptr, &rect);
}

// TypeDecl
Option_vsdl__gfx__Surface_ptr vsdl__gfx__create_surface(int width, int height, int depth, vsdl__gfx__Color color) {
	voidptr new_surface = SDL_CreateRGBSurface(0, width, height, depth, color.r, color.g, color.b, color.a);
	if (new_surface == 0) {
		Option _t108 = v_error(vsdl__gfx__serror(tos_lit("Unable to create new surface")));
		return *(Option_vsdl__gfx__Surface_ptr*)&_t108;
	}
	Option_vsdl__gfx__Surface_ptr _t109;
	opt_ok2(&(vsdl__gfx__Surface*[]) { new_surface }, (OptionBase*)(&_t109), sizeof(vsdl__gfx__Surface*));
	return _t109;
}

Option_vsdl__gfx__Surface_ptr vsdl__gfx__create_surface_from(voidptr data, int width, int height, int depth, int pitch, vsdl__gfx__Color color) {
	voidptr new_surface = SDL_CreateRGBSurfaceFrom(data, width, height, depth, pitch, color.r, color.g, color.b, color.a);
	if (new_surface == 0) {
		Option _t110 = v_error(vsdl__gfx__serror(tos_lit("Unable to create new surface")));
		return *(Option_vsdl__gfx__Surface_ptr*)&_t110;
	}
	Option_vsdl__gfx__Surface_ptr _t111;
	opt_ok2(&(vsdl__gfx__Surface*[]) { new_surface }, (OptionBase*)(&_t111), sizeof(vsdl__gfx__Surface*));
	return _t111;
}

void vsdl__gfx__Surface_blit_to(vsdl__gfx__Surface* surface, vsdl__gfx__Surface* dst_surface, vsdl__gfx__Rect* src_rect, vsdl__gfx__Rect* dst_rect) {
	SDL_BlitSurface(surface, src_rect, dst_surface, dst_rect);
}

void vsdl__gfx__Surface_blit_scaled_to(vsdl__gfx__Surface* surface, vsdl__gfx__Surface* dst_surface, vsdl__gfx__Rect* src_rect, vsdl__gfx__Rect* dst_rect) {
	SDL_BlitScaled(surface, src_rect, dst_surface, dst_rect);
}

Option_vsdl__gfx__Surface_ptr vsdl__gfx__Surface_convert(vsdl__gfx__Surface* surface, vsdl__gfx__PixelFormat* format, u32 flags) {
	voidptr new_surface = SDL_ConvertSurface(surface, format, flags);
	if (new_surface == 0) {
		Option _t112 = v_error(vsdl__gfx__serror(tos_lit("Unable to convert surface")));
		return *(Option_vsdl__gfx__Surface_ptr*)&_t112;
	}
	Option_vsdl__gfx__Surface_ptr _t113;
	opt_ok2(&(vsdl__gfx__Surface*[]) { new_surface }, (OptionBase*)(&_t113), sizeof(vsdl__gfx__Surface*));
	return _t113;
}

Option_vsdl__gfx__Renderer vsdl__gfx__Surface_create_renderer(vsdl__gfx__Surface* surface) {
	vsdl__gfx__Renderer renderer = (vsdl__gfx__Renderer){.ptr = SDL_CreateSoftwareRenderer(surface),};
	if (renderer.ptr == 0) {
		Option _t114 = v_error(vsdl__gfx__serror(tos_lit("Unable to create new renderer")));
		return *(Option_vsdl__gfx__Renderer*)&_t114;
	}
	Option_vsdl__gfx__Renderer _t115;
	opt_ok2(&(vsdl__gfx__Renderer[]) { renderer }, (OptionBase*)(&_t115), sizeof(vsdl__gfx__Renderer));
	return _t115;
}

Option_vsdl__gfx__Texture vsdl__gfx__Surface_create_texture(vsdl__gfx__Surface* surface, vsdl__gfx__Renderer renderer) {
	vsdl__gfx__Texture texture = (vsdl__gfx__Texture){.h = vsdl__gfx__Surface_get_height(surface),.ptr = SDL_CreateTextureFromSurface(renderer.ptr, surface),.w = vsdl__gfx__Surface_get_width(surface),};
	if (texture.ptr == 0) {
		Option _t116 = v_error(vsdl__gfx__serror(tos_lit("Unable to create texture from surface")));
		return *(Option_vsdl__gfx__Texture*)&_t116;
	}
	Option_vsdl__gfx__Texture _t117;
	opt_ok2(&(vsdl__gfx__Texture[]) { texture }, (OptionBase*)(&_t117), sizeof(vsdl__gfx__Texture));
	return _t117;
}

void vsdl__gfx__Surface_fill(vsdl__gfx__Surface* surface, vsdl__gfx__Color color) {
	vsdl__gfx__Rect rect = vsdl__gfx__Surface_get_rect(surface);
	SDL_FillRect(surface, &rect, vsdl__gfx__PixelFormat_map_rgb(surface->format, color.r, color.g, color.b));
}

void vsdl__gfx__Surface_fill_rect(vsdl__gfx__Surface* surface, vsdl__gfx__Rect rect, vsdl__gfx__Color color) {
	SDL_FillRect(surface, &rect, vsdl__gfx__PixelFormat_map_rgb(surface->format, color.r, color.g, color.b));
}

u32 vsdl__gfx__Surface_format_color(vsdl__gfx__Surface* surface, vsdl__gfx__Color color) {
	return vsdl__gfx__PixelFormat_map_rgb(surface->format, color.r, color.g, color.b);
}

void vsdl__gfx__Surface_free(vsdl__gfx__Surface* surface) {
	SDL_FreeSurface(surface);
}

u32 vsdl__gfx__Surface_get_flags(vsdl__gfx__Surface* surface) {
	return surface->flags;
}

vsdl__gfx__PixelFormat* vsdl__gfx__Surface_get_format(vsdl__gfx__Surface* surface) {
	return surface->format;
}

int vsdl__gfx__Surface_get_height(vsdl__gfx__Surface* surface) {
	return surface->h;
}

int vsdl__gfx__Surface_get_pitch(vsdl__gfx__Surface* surface) {
	return surface->pitch;
}

vsdl__gfx__Rect vsdl__gfx__Surface_get_rect(vsdl__gfx__Surface* surface) {
	return (vsdl__gfx__Rect){.x = 0,.y = 0,.w = vsdl__gfx__Surface_get_width(surface),.h = vsdl__gfx__Surface_get_height(surface),};
}

int vsdl__gfx__Surface_get_width(vsdl__gfx__Surface* surface) {
	return surface->w;
}

int vsdl__gfx__Surface_set_color_key(vsdl__gfx__Surface* surface, bool enable, u32 color) {
	return SDL_SetColorKey(surface, enable, color);
}

void vsdl__gfx__Texture_free(vsdl__gfx__Texture texture) {
	if (texture.ptr == 0) {
		return;
	}
	SDL_DestroyTexture(texture.ptr);
}

byte vsdl__gfx__Texture_get_alpha(vsdl__gfx__Texture texture) {
	byte alpha = ((byte)(0));
	SDL_GetTextureAlphaMod(texture.ptr, &alpha);
	return alpha;
}

vsdl__gfx__BlendMode vsdl__gfx__Texture_get_blend_mode(vsdl__gfx__Texture texture) {
	vsdl__gfx__BlendMode mode = vsdl__gfx__BlendMode_none;
	SDL_GetTextureBlendMode(texture.ptr, &mode);
	return mode;
}

vsdl__gfx__Color vsdl__gfx__Texture_get_color_mod(vsdl__gfx__Texture texture) {
	byte r = ((byte)(0));
	byte g = ((byte)(0));
	byte b = ((byte)(0));
	SDL_GetTextureColorMod(texture.ptr, &r, &g, &b);
	return (vsdl__gfx__Color){.r = r,.g = g,.b = b,.a = 255,};
}

int vsdl__gfx__Texture_get_height(vsdl__gfx__Texture texture) {
	return texture.h;
}

int vsdl__gfx__Texture_get_width(vsdl__gfx__Texture texture) {
	return texture.w;
}

void vsdl__gfx__Texture_query(vsdl__gfx__Texture texture, u32* format, int* access, int* w, int* h) {
	SDL_QueryTexture(texture.ptr, format, access, w, h);
}

int vsdl__gfx__Texture_render(vsdl__gfx__Texture texture, vsdl__gfx__Renderer renderer, vsdl__gfx__Rect rect) {
	return vsdl__gfx__Renderer_copy(renderer, texture, (vsdl__gfx__Rect){.x = 0,.y = 0,.w = texture.w,.h = texture.h,}, rect);
}

int vsdl__gfx__Texture_set_alpha(vsdl__gfx__Texture texture, byte alpha) {
	return SDL_SetTextureAlphaMod(texture.ptr, alpha);
}

int vsdl__gfx__Texture_set_blend_mode(vsdl__gfx__Texture texture, vsdl__gfx__BlendMode mode) {
	return SDL_SetTextureBlendMode(texture.ptr, mode);
}

int vsdl__gfx__Texture_set_color_mod(vsdl__gfx__Texture texture, vsdl__gfx__Color color) {
	return SDL_SetTextureColorMod(texture.ptr, color.r, color.g, color.b);
}

void vsdl__gfx__Texture_update(vsdl__gfx__Texture texture, vsdl__gfx__Rect rect, voidptr pixels, int pitch) {
	SDL_UpdateTexture(texture.ptr, &rect, pixels, pitch);
}

// TypeDecl
// TypeDecl
Option_vsdl__gfx__SDL_vulkanSurface vsdl__gfx__Window_create_vulkan_surface(vsdl__gfx__Window window, vsdl__gfx__SDL_vulkanInstance instance) {
	vsdl__gfx__SDL_vulkanSurface surface = ((vsdl__gfx__SDL_vulkanSurface)(0));
	if (!SDL_Vulkan_CreateSurface(window.ptr, instance, &surface)) {
		Option _t118 = v_error(vsdl__gfx__serror(tos_lit("Unable to initialize Vulkan surface")));
		return *(Option_vsdl__gfx__SDL_vulkanSurface*)&_t118;
	}
	Option_vsdl__gfx__SDL_vulkanSurface _t119;
	opt_ok2(&(vsdl__gfx__SDL_vulkanSurface[]) { surface }, (OptionBase*)(&_t119), sizeof(vsdl__gfx__SDL_vulkanSurface));
	return _t119;
}

multi_return_int_int vsdl__gfx__Window_get_vulkan_drawsize(vsdl__gfx__Window window) {
	int w = 0;
	int h = 0;
	SDL_Vulkan_GetDrawableSize(window.ptr, &w, &h);
	return (multi_return_int_int){.arg0=w, .arg1=h};
}

array_string vsdl__gfx__Window_get_vulkan_extensions(vsdl__gfx__Window window) {
	int count = 0;
	SDL_Vulkan_GetInstanceExtensions(window.ptr, &count, NULL);
	if (count == 0) {
		return __new_array_with_default(0, 0, sizeof(string), 0);
	}
	array_charptr pointers = __new_array_with_default(((int)(count)), 0, sizeof(charptr), 0);
	array_string extensions = __new_array_with_default(((int)(count)), 0, sizeof(string), &(string[]){tos_lit("")});
	SDL_Vulkan_GetInstanceExtensions(window.ptr, &count, &(*(charptr*)array_get(pointers, 0)));
	// FOR IN array
	array _t120 = pointers;
	for (int i = 0; i < _t120.len; ++i) {
		array_set(&extensions, i, &(string[]) { tos3((*(charptr*)array_get(pointers, i))) });
	}
	return extensions;
}

Option_void vsdl__gfx__vulkan_load(string path) {
	int result = -1;
	if (path.len > 0) {
		result = SDL_Vulkan_LoadLibrary(path.str);
	} else {
		result = SDL_Vulkan_LoadLibrary(NULL);
	}
	if (result < 0) {
		Option _t121 = v_error(vsdl__gfx__serror(_STR("Unable to load Vulkan library at %.*s", 1, path)));
		return *(Option_void*)&_t121;
	}
	Option_void _t122 = {.ok = true};
	return _t122;
}

voidptr vsdl__gfx__vulkan_get_procaddr() {
	return SDL_Vulkan_GetVkGetInstanceProcAddr();
}

void vsdl__gfx__vulkan_unload() {
	SDL_Vulkan_UnloadLibrary();
}

Option_vsdl__gfx__Renderer vsdl__gfx__Window_create_renderer(vsdl__gfx__Window window, int index, u32 flags) {
	vsdl__gfx__Renderer renderer = (vsdl__gfx__Renderer){.ptr = SDL_CreateRenderer(window.ptr, index, flags),};
	if (renderer.ptr == 0) {
		Option _t123 = v_error(vsdl__gfx__serror(tos_lit("Unable to create new renderer")));
		return *(Option_vsdl__gfx__Renderer*)&_t123;
	}
	Option_vsdl__gfx__Renderer _t124;
	opt_ok2(&(vsdl__gfx__Renderer[]) { renderer }, (OptionBase*)(&_t124), sizeof(vsdl__gfx__Renderer));
	return _t124;
}

Option_vsdl__gfx__Window vsdl__gfx__create_window(string title, int x, int y, int width, int height, varg_vsdl__gfx__WindowFlags flags) {
	int x_adj = (x == -1 ? (SDL_WINDOWPOS_CENTERED) : (x));
	int y_adj = (y == -1 ? (SDL_WINDOWPOS_CENTERED) : (y));
	u32 flag = ((u32)(0U));
	// FOR IN cond_type/variadic
	for (int _t125 = 0; _t125 < flags.len; ++_t125) {
		vsdl__gfx__WindowFlags f = flags.args[_t125];
		flag = (flag | f);
	}
	vsdl__gfx__Window window = (vsdl__gfx__Window){.ptr = SDL_CreateWindow(title.str, x_adj, y_adj, width, height, flag),};
	if (window.ptr == 0) {
		Option _t126 = v_error(vsdl__gfx__serror(tos_lit("Unable to create new window")));
		return *(Option_vsdl__gfx__Window*)&_t126;
	}
	Option_vsdl__gfx__Window _t127;
	opt_ok2(&(vsdl__gfx__Window[]) { window }, (OptionBase*)(&_t127), sizeof(vsdl__gfx__Window));
	return _t127;
}

Option_multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer vsdl__gfx__create_window_and_renderer(string title, int x, int y, int width, int height, varg_vsdl__gfx__WindowFlags flags) {
	Option_vsdl__gfx__Window _t128 = vsdl__gfx__create_window(title, x, y, width, height, flags);
	if (!_t128.ok) {
		return *(Option_multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer *)&_t128;
	}
 	vsdl__gfx__Window window = *(vsdl__gfx__Window*) _t128.data;
	Option_vsdl__gfx__Renderer _t129 = vsdl__gfx__Window_create_renderer(window, -1, 0);
	if (!_t129.ok) {
		return *(Option_multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer *)&_t129;
	}
 	vsdl__gfx__Renderer renderer = *(vsdl__gfx__Renderer*) _t129.data;
	Option_multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer _t130;
	opt_ok2(&(multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer/*X*/[]) { (multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer){.arg0=window, .arg1=renderer} }, (OptionBase*)(&_t130), sizeof(multi_return_vsdl__gfx__Window_vsdl__gfx__Renderer));
	return _t130;
}

void vsdl__gfx__Window_destroy(vsdl__gfx__Window* window) {
	if (window->ptr == 0) {
		return;
	}
	SDL_DestroyWindow(window->ptr);
	window->ptr = 0;
}

void vsdl__gfx__Window_focus(vsdl__gfx__Window window) {
	SDL_RaiseWindow(window.ptr);
}

Option_vsdl__gfx__Window vsdl__gfx__get_active_window() {
	vsdl__gfx__Window window = (vsdl__gfx__Window){.ptr = SDL_GetGrabbedWindow(),};
	if (window.ptr == 0) {
		Option _t131 = v_error(vsdl__gfx__serror(tos_lit("No window is currently active")));
		return *(Option_vsdl__gfx__Window*)&_t131;
	}
	Option_vsdl__gfx__Window _t132;
	opt_ok2(&(vsdl__gfx__Window[]) { window }, (OptionBase*)(&_t132), sizeof(vsdl__gfx__Window));
	return _t132;
}

multi_return_int_int_int_int vsdl__gfx__Window_get_border_size(vsdl__gfx__Window window) {
	int top = 0;
	int left = 0;
	int bottom = 0;
	int right = 0;
	SDL_GetWindowBordersSize(window.ptr, &top, &left, &bottom, &right);
	return (multi_return_int_int_int_int){.arg0=top, .arg1=left, .arg2=bottom, .arg3=right};
}

f32 vsdl__gfx__Window_get_brightness(vsdl__gfx__Window window) {
	return SDL_GetWindowBrightness(window.ptr);
}

voidptr vsdl__gfx__Window_get_data(vsdl__gfx__Window window, string name) {
	return SDL_GetWindowData(window.ptr, name.str);
}

Option_vsdl__gfx__Display vsdl__gfx__Window_get_display(vsdl__gfx__Window window) {
	vsdl__gfx__Display display = (vsdl__gfx__Display){.format = 0,.w = 0,.h = 0,.refresh_rate = 0,.driverdata = 0,};
	int result = SDL_GetWindowDisplayMode(window.ptr, &display);
	if (result < 0) {
		Option _t133 = v_error(vsdl__gfx__serror(tos_lit("Unable to get display")));
		return *(Option_vsdl__gfx__Display*)&_t133;
	}
	Option_vsdl__gfx__Display _t134;
	opt_ok2(&(vsdl__gfx__Display[]) { display }, (OptionBase*)(&_t134), sizeof(vsdl__gfx__Display));
	return _t134;
}

u32 vsdl__gfx__Window_get_id(vsdl__gfx__Window window) {
	return SDL_GetWindowID(window.ptr);
}

int vsdl__gfx__Window_get_index(vsdl__gfx__Window window) {
	return SDL_GetWindowDisplayIndex(window.ptr);
}

u32 vsdl__gfx__Window_get_flags(vsdl__gfx__Window window) {
	return SDL_GetWindowFlags(window.ptr);
}

multi_return_int_int vsdl__gfx__Window_get_maximum_size(vsdl__gfx__Window window) {
	int width = 0;
	int height = 0;
	SDL_GetWindowMaximumSize(window.ptr, &width, &height);
	return (multi_return_int_int){.arg0=width, .arg1=height};
}

multi_return_int_int vsdl__gfx__Window_get_minimum_size(vsdl__gfx__Window window) {
	int width = 0;
	int height = 0;
	SDL_GetWindowMinimumSize(window.ptr, &width, &height);
	return (multi_return_int_int){.arg0=width, .arg1=height};
}

f32 vsdl__gfx__Window_get_opacity(vsdl__gfx__Window window) {
	f32 opacity = ((f32)(0));
	SDL_GetWindowOpacity(window.ptr, &opacity);
	return opacity;
}

vsdl__gfx__PixelFormats vsdl__gfx__Window_get_pixel_format(vsdl__gfx__Window window) {
	return SDL_GetWindowPixelFormat(window.ptr);
}

vsdl__gfx__Point vsdl__gfx__Window_get_position(vsdl__gfx__Window window) {
	int x = 0;
	int y = 0;
	SDL_GetWindowPosition(window.ptr, &x, &y);
	return (vsdl__gfx__Point){.x = x,.y = y,};
}

multi_return_int_int vsdl__gfx__Window_get_size(vsdl__gfx__Window window) {
	int w = 0;
	int h = 0;
	SDL_GetWindowPosition(window.ptr, &w, &h);
	return (multi_return_int_int){.arg0=w, .arg1=h};
}

Option_vsdl__gfx__Surface_ptr vsdl__gfx__Window_get_surface(vsdl__gfx__Window window) {
	voidptr surface = SDL_GetWindowSurface(window.ptr);
	if (surface == 0) {
		Option _t135 = v_error(vsdl__gfx__serror(tos_lit("Unable to get window surface")));
		return *(Option_vsdl__gfx__Surface_ptr*)&_t135;
	}
	Option_vsdl__gfx__Surface_ptr _t136;
	opt_ok2(&(vsdl__gfx__Surface*[]) { surface }, (OptionBase*)(&_t136), sizeof(vsdl__gfx__Surface*));
	return _t136;
}

string vsdl__gfx__Window_get_title(vsdl__gfx__Window window) {
	return tos3(SDL_GetWindowTitle(window.ptr));
}

Option_vsdl__gfx__Window vsdl__gfx__get_window_from_id(u32 id) {
	vsdl__gfx__Window window = (vsdl__gfx__Window){.ptr = SDL_GetWindowFromID(id),};
	if (window.ptr == 0) {
		Option _t137 = v_error(vsdl__gfx__serror(tos_lit("No window exists with that id")));
		return *(Option_vsdl__gfx__Window*)&_t137;
	}
	Option_vsdl__gfx__Window _t138;
	opt_ok2(&(vsdl__gfx__Window[]) { window }, (OptionBase*)(&_t138), sizeof(vsdl__gfx__Window));
	return _t138;
}

bool vsdl__gfx__Window_has_focus(vsdl__gfx__Window window) {
	return SDL_GetWindowGrab(window.ptr);
}

void vsdl__gfx__Window_maximize(vsdl__gfx__Window window) {
	SDL_MaximizeWindow(window.ptr);
}

void vsdl__gfx__Window_minimize(vsdl__gfx__Window window) {
	SDL_MinimizeWindow(window.ptr);
}

void vsdl__gfx__Window_restore(vsdl__gfx__Window window) {
	SDL_RestoreWindow(window.ptr);
}

int vsdl__gfx__Window_set_display(vsdl__gfx__Window window, vsdl__gfx__Display display) {
	return SDL_SetWindowDisplayMode(window.ptr, &display);
}

void vsdl__gfx__Window_set_border(vsdl__gfx__Window window, bool bordered) {
	SDL_SetWindowBordered(window.ptr, bordered);
}

int vsdl__gfx__Window_set_brightness(vsdl__gfx__Window window, f32 brightness) {
	return SDL_SetWindowBrightness(window.ptr, brightness);
}

voidptr vsdl__gfx__Window_set_data(vsdl__gfx__Window window, string name, voidptr data) {
	return SDL_SetWindowData(window.ptr, name.str, data);
}

void vsdl__gfx__Window_set_focus(vsdl__gfx__Window window, bool focus) {
	SDL_SetWindowGrab(window.ptr, focus);
}

int vsdl__gfx__Window_set_fullscreen(vsdl__gfx__Window window, vsdl__gfx__FullscreenMode fullscreen) {
	return SDL_SetWindowFullscreen(window.ptr, fullscreen);
}

void vsdl__gfx__Window_set_icon(vsdl__gfx__Window window, vsdl__gfx__Surface* icon) {
	SDL_SetWindowIcon(window.ptr, icon);
}

void vsdl__gfx__Window_set_maximum_size(vsdl__gfx__Window window, int w, int h) {
	SDL_SetWindowMaximumSize(window.ptr, w, h);
}

void vsdl__gfx__Window_set_minimum_size(vsdl__gfx__Window window, int w, int h) {
	SDL_SetWindowMinimumSize(window.ptr, w, h);
}

void vsdl__gfx__Window_set_modal_for(vsdl__gfx__Window window, vsdl__gfx__Window parent) {
	SDL_SetWindowModalFor(window.ptr, parent.ptr);
}

int vsdl__gfx__Window_set_opacity(vsdl__gfx__Window window, f32 opacity) {
	return SDL_SetWindowOpacity(window.ptr, opacity);
}

void vsdl__gfx__Window_set_position(vsdl__gfx__Window window, vsdl__gfx__Point position) {
	int x = (position.x == -1 ? (SDL_WINDOWPOS_CENTERED) : (position.x));
	int y = (position.y == -1 ? (SDL_WINDOWPOS_CENTERED) : (position.y));
	SDL_SetWindowPosition(window.ptr, x, y);
}

void vsdl__gfx__Window_set_resizable(vsdl__gfx__Window window, bool resizable) {
	SDL_SetWindowResizable(window.ptr, resizable);
}

void vsdl__gfx__Window_update(vsdl__gfx__Window window) {
	SDL_UpdateWindowSurface(window.ptr);
}

static void vsdl__audio__init() {
	SDL_InitSubSystem(SDL_INIT_AUDIO);
	array_string drivers = vsdl__audio__get_drivers();
	for (int i = 0; i < drivers.len; i++) {
		if (SDL_AudioInit((*(string*)array_get(drivers, i)).str) < 0) {
			println(_STR("Failed it initialize driver %.*s", 1, (*(string*)array_get(drivers, i))));
			continue;
		}
		break;
	}
}

Option_void vsdl__audio__initialize_driver(string driver) {
	if (SDL_AudioInit(driver.str) == 0) {
		Option _t139 = v_error(vsdl__audio__serror(_STR("Failed it initialize driver %.*s", 1, driver)));
		return *(Option_void*)&_t139;
	}
	Option_void _t140 = {.ok = true};
	return _t140;
}

array_vsdl__audio__AudioDevice vsdl__audio__get_devices() {
	array_vsdl__audio__AudioDevice devices = __new_array_with_default(0, 0, sizeof(vsdl__audio__AudioDevice), 0);
	int count = vsdl__audio__get_device_count();
	for (int i = 0; i < count; i++) {
		array_push(&devices, _MOV((vsdl__audio__AudioDevice[]){ (vsdl__audio__AudioDevice){.ptr = 0,.spec = {0},.queue = new_map_1(sizeof(vsdl__audio__AudioData*)),.index = i,.name = vsdl__audio__get_device_name(i),} }));
	}
	return devices;
}

array_string vsdl__audio__get_drivers() {
	array_string drivers = __new_array_with_default(0, 0, sizeof(string), 0);
	int count = SDL_GetNumAudioDrivers();
	for (int i = 0; i < count; i++) {
		array_push(&drivers, _MOV((string[]){ tos3(SDL_GetAudioDriver(i)) }));
	}
	return drivers;
}

int vsdl__audio__get_device_count() {
	return SDL_GetNumAudioDevices(0);
}

string vsdl__audio__get_device_name(int index) {
	return tos3(SDL_GetAudioDeviceName(index, 0));
}

void vsdl__audio__quit() {
	SDL_AudioQuit();
}

static string vsdl__audio__serror(string text) {
	string msg = tos3(SDL_GetError());
	return _STR("%.*s\000: %.*s", 2, text, msg);
}

void vsdl__audio__AudioDevice_close(vsdl__audio__AudioDevice* device) {
	if (device->ptr == 0) {
		return;
	}
	SDL_CloseAudioDevice(device->ptr);
	device->ptr = 0;
}

u32 vsdl__audio__AudioDevice_dequeue(vsdl__audio__AudioDevice* device, vsdl__audio__AudioData data) {
	return SDL_DequeueAudio(device->ptr, data.ptr, data.len);
}

void vsdl__audio__AudioDevice_empty(vsdl__audio__AudioDevice* device) {
	SDL_ClearQueuedAudio(device->ptr);
}

vsdl__audio__AudioStatus vsdl__audio__AudioDevice_get_status(vsdl__audio__AudioDevice* device) {
	return SDL_GetAudioDeviceStatus(device->ptr);
}

u32 vsdl__audio__AudioDevice_get_queue_size(vsdl__audio__AudioDevice* device) {
	return SDL_GetQueuedAudioSize(device->ptr);
}

void vsdl__audio__AudioDevice_lock_callback(vsdl__audio__AudioDevice* device) {
	SDL_LockAudioDevice(device->ptr);
}

Option_void vsdl__audio__AudioDevice_open(vsdl__audio__AudioDevice* device, vsdl__audio__AudioSpec spec, varg_vsdl__audio__AudioChangeFlags flags) {
	if (device->ptr > 0) {
		Option_void _t143 = {.ok = true};
		return _t143;
	}
	u32 flag = ((u32)(0U));
	// FOR IN cond_type/variadic
	for (int _t144 = 0; _t144 < flags.len; ++_t144) {
		vsdl__audio__AudioChangeFlags f = flags.args[_t144];
		flag = (flag | f);
	}
	vsdl__audio__AudioSpec desired_spec = // assoc
	(vsdl__audio__AudioSpec){
		.freq = spec.freq,
		.format = spec.format,
		.channels = spec.channels,
		.silence = spec.silence,
		.samples = spec.samples,
		.size = spec.size,
		.callback = vsdl__audio__play, 
		.userdata = device, 
	};
	vsdl__audio__AudioSpec obtained = (vsdl__audio__AudioSpec){.freq = 0,.format = 0,.channels = 0,.silence = 0,.samples = 0,.size = 0,.callback = 0,.userdata = 0,};
	voidptr ptr = SDL_OpenAudioDevice(device->name.str, 0, &desired_spec, &obtained, flag);
	if (ptr == 0) {
		Option _t145 = v_error(vsdl__audio__serror(_STR("Unable to open audio device %.*s", 1, device->name)));
		return *(Option_void*)&_t145;
	}
	device->ptr = ptr;
	device->spec = obtained;
	Option_void _t146 = {.ok = true};
	return _t146;
}

void vsdl__audio__AudioDevice_pause(vsdl__audio__AudioDevice* device) {
	SDL_PauseAudioDevice(device->ptr, 1);
}

vsdl__audio__AudioData* vsdl__audio__AudioDevice_play(vsdl__audio__AudioDevice* device, vsdl__audio__AudioData data, i8 volume) {
	vsdl__audio__AudioData* copy = (vsdl__audio__AudioData*)memdup(&(vsdl__audio__AudioData){.copy = true,
		.device = &device,
		.len = data.len,
		.loop = false,
		.path = data.path,
		.pos = 0,
		.ptr = data.ptr,
		.spec = data.spec,
		.status = vsdl__audio__AudioStatus_playing,
		.volume = volume,
	}, sizeof(vsdl__audio__AudioData));
	voidptr ref = ((voidptr)(copy));
	map_set(&device->queue, _STR("%p", 1, ref), &(vsdl__audio__AudioData*[]) { copy });
	return copy;
}

Option_void vsdl__audio__AudioDevice_queue(vsdl__audio__AudioDevice* device, vsdl__audio__AudioData data) {
	if (SDL_QueueAudio(device->ptr, data.ptr, data.len) == 0) {
		Option _t147 = v_error(vsdl__audio__serror(tos_lit("Unable to queue audio data")));
		return *(Option_void*)&_t147;
	}
	Option_void _t148 = {.ok = true};
	return _t148;
}

void vsdl__audio__AudioDevice_unlock_callback(vsdl__audio__AudioDevice* device) {
	SDL_UnlockAudioDevice(device->ptr);
}

void vsdl__audio__AudioDevice_unpause(vsdl__audio__AudioDevice* device) {
	SDL_PauseAudioDevice(device->ptr, 0);
}

static void vsdl__audio__play(vsdl__audio__AudioDevice* device, byte* stream, int len) {
	memset(stream, 0, len);
	array_string keys = map_keys(&device->queue);
	// FOR IN array
	array _t149 = keys;
	for (int _t150 = 0; _t150 < _t149.len; ++_t150) {
		string k = ((string*)_t149.data)[_t150];
		vsdl__audio__AudioData* data = (*(vsdl__audio__AudioData**)map_get(device->queue, k, &(vsdl__audio__AudioData*[]){ 0 }));
		if (data->status == vsdl__audio__AudioStatus_stopped || data->status == vsdl__audio__AudioStatus_paused) {
			continue;
		}
		u32 remaining = vsdl__audio__AudioData_get_remaining(data);
		u32 length = (_us32_ge(vsdl__audio__AudioData_get_remaining(data),len) ? (((u32)(len))) : (vsdl__audio__AudioData_get_remaining(data)));
		SDL_MixAudioFormat(stream, data->ptr + data->pos, device->spec.format, length, data->volume);
		data->pos += ((u32)(length));
		remaining = vsdl__audio__AudioData_get_remaining(data);
		if (remaining == 0 && !data->loop) {
			map_delete(&device->queue, k);
		} else if (remaining == 0) {
			data->pos = 0;
		}
	}
}

// TypeDecl
Option_vsdl__audio__AudioData_ptr vsdl__audio__load_wav(string path) {
	vsdl__audio__AudioData* data = (vsdl__audio__AudioData*)memdup(&(vsdl__audio__AudioData){.copy = 0,.device = 0,.len = 0,.loop = 0,.path = path,.pos = 0,.ptr = 0,.spec = {0},.status = vsdl__audio__AudioStatus_stopped,.volume = 128,}, sizeof(vsdl__audio__AudioData));
	if (SDL_LoadWAV(path.str, &data->spec, &data->ptr, &data->len) == 0) {
		Option _t151 = v_error(vsdl__audio__serror(_STR("Unable to load wav %.*s", 1, path)));
		return *(Option_vsdl__audio__AudioData_ptr*)&_t151;
	}
	Option_vsdl__audio__AudioData_ptr _t152;
	opt_ok2(&(vsdl__audio__AudioData*[]) { data }, (OptionBase*)(&_t152), sizeof(vsdl__audio__AudioData*));
	return _t152;
}

bool vsdl__audio__AudioData_get_loop(vsdl__audio__AudioData* data) {
	return data->loop;
}

f32 vsdl__audio__AudioData_get_pos(vsdl__audio__AudioData* data) {
	return ((f32)((((f64)(data->pos)) / ((f64)(data->len))) * 100));
}

u32 vsdl__audio__AudioData_get_pos_byte(vsdl__audio__AudioData* data) {
	return data->pos;
}

u32 vsdl__audio__AudioData_get_remaining(vsdl__audio__AudioData* data) {
	u32 remaining = data->len - data->pos;
	return (remaining < 0 ? (0) : (remaining));
}

vsdl__audio__AudioSpec vsdl__audio__AudioData_get_spec(vsdl__audio__AudioData* data) {
	return data->spec;
}

i8 vsdl__audio__AudioData_get_volume(vsdl__audio__AudioData* data) {
	return data->volume;
}

bool vsdl__audio__AudioData_free(vsdl__audio__AudioData* data) {
	if (data->ptr == 0 || data->copy) {
		return false;
	}
	SDL_FreeWAV(data->ptr);
	data->len = 0;
	data->ptr = 0;
	data->pos = 0;
	return true;
}

void vsdl__audio__AudioData_set_loop(vsdl__audio__AudioData* data, bool loop) {
	data->loop = loop;
}

void vsdl__audio__AudioData_set_pos(vsdl__audio__AudioData* data, f32 pos) {
	if (pos > 100) {
		data->pos = data->len;
		return;
	}
	if (pos <= 0) {
		data->pos = 0;
		return;
	}
	vsdl__audio__AudioDevice_lock_callback(data->device);
	u32 updated_pos = ((u32)(((f64)(data->len)) * (pos / 100)));
	data->pos = updated_pos - (updated_pos % 8);
	vsdl__audio__AudioDevice_unlock_callback(data->device);
}

void vsdl__audio__AudioData_set_pos_byte(vsdl__audio__AudioData* data, u32 pos) {
	vsdl__audio__AudioDevice_lock_callback(data->device);
	u32 updated_pos = pos - (pos % 8);
	if (updated_pos < 0) {
		updated_pos = 0;
	}
	data->pos = updated_pos;
	vsdl__audio__AudioDevice_unlock_callback(data->device);
}

void vsdl__audio__AudioData_set_volume(vsdl__audio__AudioData* data, i8 volume) {
	vsdl__audio__AudioDevice_lock_callback(data->device);
	data->volume = (volume < 0 ? (0) : (volume));
	vsdl__audio__AudioDevice_unlock_callback(data->device);
}

string time__Time_format(time__Time t) {
	return time__Time_get_fmt_str(t, time__FormatDelimiter_hyphen, time__FormatTime_hhmm24, time__FormatDate_yyyymmdd);
}

string time__Time_format_ss(time__Time t) {
	return time__Time_get_fmt_str(t, time__FormatDelimiter_hyphen, time__FormatTime_hhmmss24, time__FormatDate_yyyymmdd);
}

string time__Time_format_ss_milli(time__Time t) {
	return time__Time_get_fmt_str(t, time__FormatDelimiter_hyphen, time__FormatTime_hhmmss24_milli, time__FormatDate_yyyymmdd);
}

string time__Time_format_ss_micro(time__Time t) {
	return time__Time_get_fmt_str(t, time__FormatDelimiter_hyphen, time__FormatTime_hhmmss24_micro, time__FormatDate_yyyymmdd);
}

string time__Time_hhmm(time__Time t) {
	return time__Time_get_fmt_time_str(t, time__FormatTime_hhmm24);
}

string time__Time_hhmmss(time__Time t) {
	return time__Time_get_fmt_time_str(t, time__FormatTime_hhmmss24);
}

string time__Time_hhmm12(time__Time t) {
	return time__Time_get_fmt_time_str(t, time__FormatTime_hhmm12);
}

string time__Time_ymmdd(time__Time t) {
	return time__Time_get_fmt_date_str(t, time__FormatDelimiter_hyphen, time__FormatDate_yyyymmdd);
}

string time__Time_ddmmy(time__Time t) {
	return time__Time_get_fmt_date_str(t, time__FormatDelimiter_dot, time__FormatDate_ddmmyyyy);
}

string time__Time_md(time__Time t) {
	return time__Time_get_fmt_date_str(t, time__FormatDelimiter_space, time__FormatDate_mmmd);
}

string time__Time_clean(time__Time t) {
	time__Time znow = time__now();
	if (t.month == znow.month && t.year == znow.year && t.day == znow.day) {
		return time__Time_get_fmt_time_str(t, time__FormatTime_hhmm24);
	}
	if (t.year == znow.year) {
		return time__Time_get_fmt_str(t, time__FormatDelimiter_space, time__FormatTime_hhmm24, time__FormatDate_mmmd);
	}
	return time__Time_format(t);
}

string time__Time_clean12(time__Time t) {
	time__Time znow = time__now();
	if (t.month == znow.month && t.year == znow.year && t.day == znow.day) {
		return time__Time_get_fmt_time_str(t, time__FormatTime_hhmm12);
	}
	if (t.year == znow.year) {
		return time__Time_get_fmt_str(t, time__FormatDelimiter_space, time__FormatTime_hhmm12, time__FormatDate_mmmd);
	}
	return time__Time_format(t);
}

string time__Time_get_fmt_time_str(time__Time t, time__FormatTime fmt_time) {
	if (fmt_time == time__FormatTime_no_time) {
		return tos_lit("");
	}
	string tp = (t.hour > 11 ? (tos_lit("p.m.")) : (tos_lit("a.m.")));
	int hour = (t.hour > 12 ? (t.hour - 12) : t.hour == 0 ? (12) : (t.hour));
	time__FormatTime _t153 = fmt_time;
		return (_t153 == time__FormatTime_hhmm12) ? (_STR("%"PRId32"\000:%02"PRId32"\000 %.*s", 3, hour, t.minute, tp)) : (_t153 == time__FormatTime_hhmm24) ? (_STR("%02"PRId32"\000:%02"PRId32"", 2, t.hour, t.minute)) : (_t153 == time__FormatTime_hhmmss12) ? (_STR("%"PRId32"\000:%02"PRId32"\000:%02"PRId32"\000 %.*s", 4, hour, t.minute, t.second, tp)) : (_t153 == time__FormatTime_hhmmss24) ? (_STR("%02"PRId32"\000:%02"PRId32"\000:%02"PRId32"", 3, t.hour, t.minute, t.second)) : (_t153 == time__FormatTime_hhmmss24_milli) ? (_STR("%02"PRId32"\000:%02"PRId32"\000:%02"PRId32"\000.%03"PRId32"", 4, t.hour, t.minute, t.second, (t.microsecond / 1000))) : (_t153 == time__FormatTime_hhmmss24_micro) ? (_STR("%02"PRId32"\000:%02"PRId32"\000:%02"PRId32"\000.%06"PRId32"", 4, t.hour, t.minute, t.second, t.microsecond)) : (_STR("unknown enumeration %.*s", 1, time__FormatTime_str(fmt_time)));
}

string time__Time_get_fmt_date_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatDate fmt_date) {
	if (fmt_date == time__FormatDate_no_date) {
		return tos_lit("");
	}
	string month = _STR("%.*s", 1, time__Time_smonth(t));
	string year = _STR("%02"PRId32"", 1, (t.year % 100));
	time__FormatDate _t154 = fmt_date;
		string res = (_t154 == time__FormatDate_ddmmyy) ? (_STR("%02"PRId32"\000|%02"PRId32"\000|%.*s", 3, t.day, t.month, year)) : (_t154 == time__FormatDate_ddmmyyyy) ? (_STR("%02"PRId32"\000|%02"PRId32"\000|%04"PRId32"", 3, t.day, t.month, t.year)) : (_t154 == time__FormatDate_mmddyy) ? (_STR("%02"PRId32"\000|%02"PRId32"\000|%.*s", 3, t.month, t.day, year)) : (_t154 == time__FormatDate_mmddyyyy) ? (_STR("%02"PRId32"\000|%02"PRId32"\000|%04"PRId32"", 3, t.month, t.day, t.year)) : (_t154 == time__FormatDate_mmmd) ? (_STR("%.*s\000|%"PRId32"", 2, month, t.day)) : (_t154 == time__FormatDate_mmmdd) ? (_STR("%.*s\000|%02"PRId32"", 2, month, t.day)) : (_t154 == time__FormatDate_mmmddyyyy) ? (_STR("%.*s\000|%02"PRId32"\000|%04"PRId32"", 3, month, t.day, t.year)) : (_t154 == time__FormatDate_yyyymmdd) ? (_STR("%04"PRId32"\000|%02"PRId32"\000|%02"PRId32"", 3, t.year, t.month, t.day)) : (_STR("unknown enumeration %.*s", 1, time__FormatDate_str(fmt_date)));
	time__FormatDelimiter _t155 = fmt_dlmtr;
		string del = (_t155 == time__FormatDelimiter_dot) ? (tos_lit(".")) : (_t155 == time__FormatDelimiter_hyphen) ? (tos_lit("-")) : (_t155 == time__FormatDelimiter_slash) ? (tos_lit("/")) : (_t155 == time__FormatDelimiter_space) ? (tos_lit(" ")) : (tos_lit(""));
	res = string_replace(res, tos_lit("|"), del);
	return res;
}

string time__Time_get_fmt_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatTime fmt_time, time__FormatDate fmt_date) {
	if (fmt_date == time__FormatDate_no_date) {
		if (fmt_time == time__FormatTime_no_time) {
			return tos_lit("");
		} else {
			return time__Time_get_fmt_time_str(t, fmt_time);
		}
	} else {
		if (fmt_time != time__FormatTime_no_time) {
			return string_add(string_add(time__Time_get_fmt_date_str(t, fmt_dlmtr, fmt_date), tos_lit(" ")), time__Time_get_fmt_time_str(t, fmt_time));
		} else {
			return time__Time_get_fmt_date_str(t, fmt_dlmtr, fmt_date);
		}
	}
}

string time__Time_utc_string(time__Time t) {
	string day_str = time__Time_weekday_str(t);
	string month_str = time__Time_smonth(t);
	string utc_string = _STR("%.*s\000, %"PRId32"\000 %.*s\000 %"PRId32"\000 %02"PRId32"\000:%02"PRId32"\000:%02"PRId32"\000 UTC", 8, day_str, t.day, month_str, t.year, t.hour, t.minute, t.second);
	return utc_string;
}

// Attr: [inline]
inline bool time__Time_eq(time__Time t1, time__Time t2) {
	if (t1.v_unix == t2.v_unix && t1.microsecond == t2.microsecond) {
		return true;
	}
	return false;
}

bool time__Time_ne(time__Time t1, time__Time t2) {
	return !time__Time_eq(t1, t2);
}

bool time__Time_lt(time__Time t1, time__Time t2) {
	if (t1.v_unix < t2.v_unix || (t1.v_unix == t2.v_unix && t1.microsecond < t2.microsecond)) {
		return true;
	}
	return false;
}

bool time__Time_le(time__Time t1, time__Time t2) {
	return time__Time_lt(t1, t2) || time__Time_eq(t1, t2);
}

bool time__Time_gt(time__Time t1, time__Time t2) {
	if (t1.v_unix > t2.v_unix || (t1.v_unix == t2.v_unix && t1.microsecond > t2.microsecond)) {
		return true;
	}
	return false;
}

bool time__Time_ge(time__Time t1, time__Time t2) {
	return time__Time_gt(t1, t2) || time__Time_eq(t1, t2);
}

Option_time__Time time__parse(string s) {
	Option_int _t156 = string_index(s, tos_lit(" "));
	if (!_t156.ok) {
		string err = _t156.v_error;
		int errcode = _t156.ecode;
		Option _t157 = v_error(_STR("Invalid time format: %.*s", 1, s));
		return *(Option_time__Time*)&_t157;
	}
 	int pos = *(int*) _t156.data;
	string symd = string_substr(s, 0, pos);
	array_string ymd = string_split(symd, tos_lit("-"));
	if (ymd.len != 3) {
		Option _t158 = v_error(_STR("Invalid time format: %.*s", 1, s));
		return *(Option_time__Time*)&_t158;
	}
	string shms = string_substr(s, pos, s.len);
	array_string hms = string_split(shms, tos_lit(":"));
	string hour = string_substr((*(string*)array_get(hms, 0)), 1, (*(string*)array_get(hms, 0)).len);
	string minute = (*(string*)array_get(hms, 1));
	string second = (*(string*)array_get(hms, 2));
	time__Time res = time__new_time((time__Time){
		.year = string_int((*(string*)array_get(ymd, 0))),
		.month = string_int((*(string*)array_get(ymd, 1))),
		.day = string_int((*(string*)array_get(ymd, 2))),
		.hour = string_int(hour),
		.minute = string_int(minute),
		.second = string_int(second),
		.microsecond = 0,
		.v_unix = 0,
	});
	Option_time__Time _t159;
	opt_ok2(&(time__Time[]) { res }, (OptionBase*)(&_t159), sizeof(time__Time));
	return _t159;
}

Option_time__Time time__parse_rfc2822(string s) {
	array_string fields = string_split(s, tos_lit(" "));
	if (fields.len < 5) {
		Option _t160 = v_error(_STR("Invalid time format: %.*s", 1, s));
		return *(Option_time__Time*)&_t160;
	}
	Option_int _t161 = string_index(_const_time__months_string, (*(string*)array_get(fields, 2)));
	if (!_t161.ok) {
		string err = _t161.v_error;
		int errcode = _t161.ecode;
		Option _t162 = v_error(_STR("Invalid time format: %.*s", 1, s));
		return *(Option_time__Time*)&_t162;
	}
 	int pos = *(int*) _t161.data;
	int mm = pos / 3 + 1;
	byteptr tmstr = ((byteptr)(0));
	{ // Unsafe block
		tmstr = v_malloc(s.len * 2);
	}
	int count = snprintf(((charptr)(tmstr)), (s.len * 2), "%s-%02d-%s %s", (*(string*)array_get(fields, 3)).str, mm, (*(string*)array_get(fields, 1)).str, (*(string*)array_get(fields, 4)).str);
	return time__parse(tos(tmstr, count));
}

Option_time__Time time__parse_iso8601(string s) {
	int year = 0;
	int month = 0;
	int day = 0;
	int hour = 0;
	int minute = 0;
	int second = 0;
	int mic_second = 0;
	rune time_char = 'a';
	rune plus_min = 'a';
	int offset_hour = 0;
	int offset_min = 0;
	int count = sscanf(((charptr)(s.str)), "%4d-%2d-%2d%c%2d:%2d:%2d.%6d%c%2d:%2d", &year, &month, &day, &time_char, &hour, &minute, &second, &mic_second, &plus_min, &offset_hour, &offset_min);
	if (count != 11) {
		Option _t163 = v_error(tos_lit("Invalid 8601 format"));
		return *(Option_time__Time*)&_t163;
	}
	if (time_char != 'T' && time_char != ' ') {
		Option _t164 = v_error(tos_lit("Invalid 8601 format, expected space or `T` as time separator"));
		return *(Option_time__Time*)&_t164;
	}
	if (plus_min != '+' && plus_min != '-') {
		Option _t165 = v_error(tos_lit("Invalid 8601 format, expected `+` or `-` as time separator"));
		return *(Option_time__Time*)&_t165;
	}
	time__Time t = time__new_time((time__Time){
		.year = year,
		.month = month,
		.day = day,
		.hour = hour,
		.minute = minute,
		.second = second,
		.microsecond = mic_second,
		.v_unix = 0,
	});
	u64 unix_time = t.v_unix;
	int unix_offset = ((int)(0));
	if (offset_hour > 0) {
		unix_offset += 3600 * offset_hour;
	}
	if (offset_min > 0) {
		unix_offset += 60 * offset_min;
	}
	if (unix_offset != 0) {
		if (plus_min == '+') {
			unix_time -= ((u64)(unix_offset));
		} else {
			unix_time += ((u64)(unix_offset));
		}
		t = time__unix2(((int)(unix_time)), t.microsecond);
	}
	Option_time__Time _t166;
	opt_ok2(&(time__Time[]) { time__to_local_time(t) }, (OptionBase*)(&_t166), sizeof(time__Time));
	return _t166;
}

time__StopWatch time__new_stopwatch(time__StopWatchOptions opts) {
	u64 initial = ((u64)(0U));
	if (opts.auto_start) {
		initial = time__sys_mono_now();
	}
	return (time__StopWatch){.elapsed = 0,.start = initial,.end = 0,};
}

void time__StopWatch_start(time__StopWatch* t) {
	t->start = time__sys_mono_now();
	t->end = 0;
}

void time__StopWatch_restart(time__StopWatch* t) {
	t->start = time__sys_mono_now();
	t->end = 0;
	t->elapsed = 0;
}

void time__StopWatch_stop(time__StopWatch* t) {
	t->end = time__sys_mono_now();
}

void time__StopWatch_pause(time__StopWatch* t) {
	if (t->start > 0) {
		if (t->end == 0) {
			t->elapsed += time__sys_mono_now() - t->start;
		} else {
			t->elapsed += t->end - t->start;
		}
	}
	t->start = 0;
}

time__Duration time__StopWatch_elapsed(time__StopWatch t) {
	if (t.start > 0) {
		if (t.end == 0) {
			return ((time__Duration)(time__sys_mono_now() - t.start + t.elapsed));
		} else {
			return ((time__Duration)(t.end - t.start + t.elapsed));
		}
	}
	return ((time__Duration)(t.elapsed));
}

time__Time time__now() {
	#if defined(__APPLE__)
	{
	}
	#endif
	#if defined(_WIN32)
	{
		return time__win_now();
	}
	#endif
	#if defined(__sun)
	{
	}
	#endif
	#if defined(__linux__) || defined(__ANDROID__)
	{
	}
	#endif
	time_t t = time(0);
	struct tm* now = localtime(&t);
	return time__convert_ctime(*now, 0);
}

time__Time time__utc() {
	#if defined(__APPLE__)
	{
	}
	#endif
	#if defined(_WIN32)
	{
		return time__win_utc();
	}
	#endif
	#if defined(__sun)
	{
	}
	#endif
	#if defined(__linux__) || defined(__ANDROID__)
	{
	}
	#endif
	time_t t = time(0);
	time(&t);
	return time__unix2(((int)(t)), 0);
}

string time__Time_smonth(time__Time t) {
	if (t.month <= 0 || t.month > 12) {
		return tos_lit("---");
	}
	int i = t.month - 1;
	return string_substr(_const_time__months_string, i * 3, (i + 1) * 3);
}

time__Time time__new_time(time__Time t) {
	if (t.v_unix != 0) {
		return t;
	}
	struct tm tt = (struct tm){
		.tm_year = t.year - 1900,
		.tm_mon = t.month - 1,
		.tm_mday = t.day,
		.tm_hour = t.hour,
		.tm_min = t.minute,
		.tm_sec = t.second,
	};
	u64 utime = ((u64)(time__make_unix_time(tt)));
	return // assoc
	(time__Time){
		.year = t.year,
		.month = t.month,
		.day = t.day,
		.hour = t.hour,
		.minute = t.minute,
		.second = t.second,
		.microsecond = t.microsecond,
		.v_unix = utime, 
	};
}

// Attr: [inline]
inline int time__Time_unix_time(time__Time t) {
	return ((int)(t.v_unix));
}

// Attr: [inline]
inline u64 time__Time_unix_time_milli(time__Time t) {
	return t.v_unix * 1000 + ((u64)(t.microsecond / 1000));
}

time__Time time__Time_add_seconds(time__Time t, int seconds) {
	return time__unix(((int)(t.v_unix + ((u64)(seconds)))));
}

time__Time time__Time_add_days(time__Time t, int days) {
	return time__unix(((int)(t.v_unix + ((u64)(((i64)(days)) * 3600 * 24)))));
}

static int time__since(time__Time t) {
	return 0;
}

string time__Time_relative(time__Time t) {
	time__Time znow = time__now();
	u64 secs = znow.v_unix - t.v_unix;
	if (secs <= 30) {
		return tos_lit("now");
	}
	if (secs < 60) {
		return tos_lit("1m");
	}
	if (secs < 3600) {
		u64 m = secs / 60;
		if (m == 1) {
			return tos_lit("1 minute ago");
		}
		return _STR("%"PRIu64"\000 minutes ago", 2, m);
	}
	if (secs < 3600 * 24) {
		u64 h = secs / 3600;
		if (h == 1) {
			return tos_lit("1 hour ago");
		}
		return _STR("%"PRIu64"\000 hours ago", 2, h);
	}
	if (secs < 3600 * 24 * 5) {
		u64 d = secs / 3600 / 24;
		if (d == 1) {
			return tos_lit("1 day ago");
		}
		return _STR("%"PRIu64"\000 days ago", 2, d);
	}
	if (secs > 3600 * 24 * 10000) {
		return tos_lit("");
	}
	return time__Time_md(t);
}

string time__Time_relative_short(time__Time t) {
	time__Time znow = time__now();
	u64 secs = znow.v_unix - t.v_unix;
	if (secs <= 30) {
		return tos_lit("now");
	}
	if (secs < 60) {
		return tos_lit("1m");
	}
	if (secs < 3600) {
		return _STR("%"PRIu64"\000m", 2, secs / 60);
	}
	if (secs < 3600 * 24) {
		return _STR("%"PRIu64"\000h", 2, secs / 3600);
	}
	if (secs < 3600 * 24 * 5) {
		return _STR("%"PRIu64"\000d", 2, secs / 3600 / 24);
	}
	if (secs > 3600 * 24 * 10000) {
		return tos_lit("");
	}
	return time__Time_md(t);
}

int time__day_of_week(int y, int m, int d) {
	array_int t = new_array_from_c_array(12, 12, sizeof(int), _MOV((int[12]){
			0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4}));
	int sy = y;
	if (m < 3) {
		sy = sy - 1;
	}
	return (sy + sy / 4 - sy / 100 + sy / 400 + (*(int*)array_get(t, m - 1)) + d - 1) % 7 + 1;
}

int time__Time_day_of_week(time__Time t) {
	return time__day_of_week(t.year, t.month, t.day);
}

string time__Time_weekday_str(time__Time t) {
	int i = time__Time_day_of_week(t) - 1;
	return string_substr(_const_time__days_string, i * 3, (i + 1) * 3);
}

string time__Time_long_weekday_str(time__Time t) {
	int i = time__Time_day_of_week(t) - 1;
	return (*(string*)array_get(_const_time__long_days, i));
}

i64 time__ticks() {
	#if defined(_WIN32)
	{
		return GetTickCount();
	}
	#else
	{
	}
	#endif
}

void time__sleep(int seconds) {
	#if defined(_WIN32)
	{
		Sleep(seconds * 1000);
	}
	#else
	{
	}
	#endif
}

void time__sleep_ms(int milliseconds) {
	#if defined(_WIN32)
	{
		Sleep(milliseconds);
	}
	#else
	{
	}
	#endif
}

void time__usleep(int microseconds) {
	#if defined(_WIN32)
	{
		int milliseconds = microseconds / 1000;
		Sleep(milliseconds);
	}
	#else
	{
	}
	#endif
}

bool time__is_leap_year(int year) {
	return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}

Option_int time__days_in_month(int month, int year) {
	if (month > 12 || month < 1) {
		Option _t167 = v_error(_STR("Invalid month: %"PRId32"", 1, month));
		return *(Option_int*)&_t167;
	}
	int extra = (month == 2 && time__is_leap_year(year) ? (1) : (0));
	int res = (*(int*)array_get(_const_time__month_days, month - 1)) + extra;
	Option_int _t168;
	opt_ok2(&(int[]) { res }, (OptionBase*)(&_t168), sizeof(int));
	return _t168;
}

string time__Time_str(time__Time t) {
	return time__Time_format_ss(t);
}

static time__Time time__convert_ctime(struct tm t, int microsecond) {
	return (time__Time){
		.year = t.tm_year + 1900,
		.month = t.tm_mon + 1,
		.day = t.tm_mday,
		.hour = t.tm_hour,
		.minute = t.tm_min,
		.second = t.tm_sec,
		.microsecond = microsecond,
		.v_unix = ((u64)(time__make_unix_time(t))),
	};
}

// TypeDecl
i64 time__Duration_nanoseconds(time__Duration d) {
	return ((i64)(d));
}

i64 time__Duration_microseconds(time__Duration d) {
	return ((i64)(d)) / 1000;
}

i64 time__Duration_milliseconds(time__Duration d) {
	return ((i64)(d)) / 1000000;
}

f64 time__Duration_seconds(time__Duration d) {
	i64 sec = d / _const_time__second;
	i64 nsec = d % _const_time__second;
	return ((f64)(sec)) + ((f64)(nsec)) / 1e9;
}

f64 time__Duration_minutes(time__Duration d) {
	i64 min = d / _const_time__minute;
	i64 nsec = d % _const_time__minute;
	return ((f64)(min)) + ((f64)(nsec)) / (60 * 1e9);
}

f64 time__Duration_hours(time__Duration d) {
	i64 hr = d / _const_time__hour;
	i64 nsec = d % _const_time__hour;
	return ((f64)(hr)) + ((f64)(nsec)) / (60 * 60 * 1e9);
}

static int time__make_unix_time(struct tm t) {
	return ((int)(_mkgmtime(&t)));
}

static u64 time__init_win_time_freq() {
	u64 f = ((u64)(0U));
	QueryPerformanceFrequency(&f);
	return f;
}

static u64 time__init_win_time_start() {
	u64 s = ((u64)(0U));
	QueryPerformanceCounter(&s);
	return s;
}

u64 time__sys_mono_now() {
	u64 tm = ((u64)(0U));
	QueryPerformanceCounter(&tm);
	return (tm - _const_time__start_time) * 1000000000 / _const_time__freq_time;
}

// Attr: [inline]
inline static u64 time__vpc_now() {
	u64 tm = ((u64)(0U));
	QueryPerformanceCounter(&tm);
	return tm;
}

static int time__local_as_unix_time() {
	time_t t = time(0);
	struct tm* tm = localtime(&t);
	return time__make_unix_time(*tm);
}

static time__Time time__to_local_time(time__Time t) {
	time__SystemTime st_utc = (time__SystemTime){
		.year = ((u16)(t.year)),
		.month = ((u16)(t.month)),
		.day_of_week = 0,
		.day = ((u16)(t.day)),
		.hour = ((u16)(t.hour)),
		.minute = ((u16)(t.minute)),
		.second = ((u16)(t.second)),
		.millisecond = 0,
	};
	time__SystemTime st_local = (time__SystemTime){.year = 0,.month = 0,.day_of_week = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.millisecond = 0,};
	SystemTimeToTzSpecificLocalTime(((voidptr)(0)), &st_utc, &st_local);
	time__Time t_local = (time__Time){
		.year = st_local.year,
		.month = st_local.month,
		.day = st_local.day,
		.hour = st_local.hour,
		.minute = st_local.minute,
		.second = st_local.second,
		.microsecond = t.microsecond,
		.v_unix = t.v_unix,
	};
	return t_local;
}

// Attr: [inline]
inline static time__Time time__win_now() {
	struct _FILETIME ft_utc = (struct _FILETIME){
#ifndef __cplusplus
0
#endif
};
	GetSystemTimeAsFileTime(&ft_utc);
	time__SystemTime st_utc = (time__SystemTime){.year = 0,.month = 0,.day_of_week = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.millisecond = 0,};
	FileTimeToSystemTime(&ft_utc, &st_utc);
	time__SystemTime st_local = (time__SystemTime){.year = 0,.month = 0,.day_of_week = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.millisecond = 0,};
	SystemTimeToTzSpecificLocalTime(((voidptr)(0)), &st_utc, &st_local);
	time__Time t = (time__Time){
		.year = st_local.year,
		.month = st_local.month,
		.day = st_local.day,
		.hour = st_local.hour,
		.minute = st_local.minute,
		.second = st_local.second,
		.microsecond = st_local.millisecond * 1000,
		.v_unix = ((u64)(time__SystemTime_unix_time(st_local))),
	};
	return t;
}

// Attr: [inline]
inline static time__Time time__win_utc() {
	struct _FILETIME ft_utc = (struct _FILETIME){
#ifndef __cplusplus
0
#endif
};
	GetSystemTimeAsFileTime(&ft_utc);
	time__SystemTime st_utc = (time__SystemTime){.year = 0,.month = 0,.day_of_week = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.millisecond = 0,};
	FileTimeToSystemTime(&ft_utc, &st_utc);
	time__Time t = (time__Time){
		.year = st_utc.year,
		.month = st_utc.month,
		.day = st_utc.day,
		.hour = st_utc.hour,
		.minute = st_utc.minute,
		.second = st_utc.second,
		.microsecond = st_utc.millisecond * 1000,
		.v_unix = ((u64)(time__SystemTime_unix_time(st_utc))),
	};
	return t;
}

int time__SystemTime_unix_time(time__SystemTime st) {
	struct tm tt = (struct tm){
		.tm_year = st.year - 1900,
		.tm_mon = st.month - 1,
		.tm_mday = st.day,
		.tm_hour = st.hour,
		.tm_min = st.minute,
		.tm_sec = st.second,
	};
	return time__make_unix_time(tt);
}

time__Time time__darwin_now() {
	return (time__Time){.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.microsecond = 0,.v_unix = 0,};
}

time__Time time__linux_now() {
	return (time__Time){.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.microsecond = 0,.v_unix = 0,};
}

time__Time time__solaris_now() {
	return (time__Time){.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.microsecond = 0,.v_unix = 0,};
}

time__Time time__darwin_utc() {
	return (time__Time){.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.microsecond = 0,.v_unix = 0,};
}

time__Time time__linux_utc() {
	return (time__Time){.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.microsecond = 0,.v_unix = 0,};
}

time__Time time__solaris_utc() {
	return (time__Time){.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.microsecond = 0,.v_unix = 0,};
}

time__Time time__unix(int abs) {
	int day_offset = abs / _const_time__seconds_per_day;
	if (abs % _const_time__seconds_per_day < 0) {
		day_offset--;
	}
	multi_return_int_int_int mr_470 = time__calculate_date_from_offset(day_offset);
	int year = mr_470.arg0;
	int month = mr_470.arg1;
	int day = mr_470.arg2;
	multi_return_int_int_int mr_524 = time__calculate_time_from_offset(abs % _const_time__seconds_per_day);
	int hr = mr_524.arg0;
	int min = mr_524.arg1;
	int sec = mr_524.arg2;
	return (time__Time){
		.year = year,
		.month = month,
		.day = day,
		.hour = hr,
		.minute = min,
		.second = sec,
		.microsecond = 0,
		.v_unix = ((u64)(abs)),
	};
}

time__Time time__unix2(int abs, int microsecond) {
	int day_offset = abs / _const_time__seconds_per_day;
	if (abs % _const_time__seconds_per_day < 0) {
		day_offset--;
	}
	multi_return_int_int_int mr_1019 = time__calculate_date_from_offset(day_offset);
	int year = mr_1019.arg0;
	int month = mr_1019.arg1;
	int day = mr_1019.arg2;
	multi_return_int_int_int mr_1073 = time__calculate_time_from_offset(abs % _const_time__seconds_per_day);
	int hr = mr_1073.arg0;
	int min = mr_1073.arg1;
	int sec = mr_1073.arg2;
	return (time__Time){
		.year = year,
		.month = month,
		.day = day,
		.hour = hr,
		.minute = min,
		.second = sec,
		.microsecond = microsecond,
		.v_unix = ((u64)(abs)),
	};
}

// Attr: [inline]
inline static multi_return_int_int_int time__calculate_date_from_offset(int day_offset_) {
	int day_offset = day_offset_;
	int year = 2001;
	day_offset -= 31 * 365 + 8;
	year += (day_offset / _const_time__days_per_400_years) * 400;
	day_offset %= _const_time__days_per_400_years;
	if (day_offset == _const_time__days_per_100_years * 4) {
		year += 300;
		day_offset -= _const_time__days_per_100_years * 3;
	} else {
		year += (day_offset / _const_time__days_per_100_years) * 100;
		day_offset %= _const_time__days_per_100_years;
	}
	if (day_offset == _const_time__days_per_4_years * 25) {
		year += 96;
		day_offset -= _const_time__days_per_4_years * 24;
	} else {
		year += (day_offset / _const_time__days_per_4_years) * 4;
		day_offset %= _const_time__days_per_4_years;
	}
	if (day_offset == 365 * 4) {
		year += 3;
		day_offset -= 365 * 3;
	} else {
		year += (day_offset / 365);
		day_offset %= 365;
	}
	if (day_offset < 0) {
		year--;
		if (time__is_leap_year(year)) {
			day_offset += 366;
		} else {
			day_offset += 365;
		}
	}
	if (time__is_leap_year(year)) {
		if (day_offset > 31 + 29 - 1) {
			day_offset--;
		} else if (day_offset == 31 + 29 - 1) {
			return (multi_return_int_int_int){.arg0=year, .arg1=2, .arg2=29};
		}
	}
	int estimated_month = day_offset / 31;
	for (;;) {
		if (!(day_offset >= (*(int*)array_get(_const_time__days_before, estimated_month + 1)))) break;
		estimated_month++;
	}
	for (;;) {
		if (!(day_offset < (*(int*)array_get(_const_time__days_before, estimated_month)))) break;
		if (estimated_month == 0) {
			break;
		}
		estimated_month--;
	}
	day_offset -= (*(int*)array_get(_const_time__days_before, estimated_month));
	return (multi_return_int_int_int){.arg0=year, .arg1=estimated_month + 1, .arg2=day_offset + 1};
}

// Attr: [inline]
inline static multi_return_int_int_int time__calculate_time_from_offset(int second_offset_) {
	int second_offset = second_offset_;
	if (second_offset < 0) {
		second_offset += _const_time__seconds_per_day;
	}
	int hour = second_offset / _const_time__seconds_per_hour;
	second_offset %= _const_time__seconds_per_hour;
	int min = second_offset / _const_time__seconds_per_minute;
	second_offset %= _const_time__seconds_per_minute;
	return (multi_return_int_int_int){.arg0=hour, .arg1=min, .arg2=second_offset};
}

string os__getenv(string key) {
	#if defined(_WIN32)
	{
		voidptr s = _wgetenv(string_to_wide(key));
		if (s == 0) {
			return tos_lit("");
		}
		return string_from_wide(s);
	}
	#else
	{
	}
	#endif
}

int os__setenv(string name, string value, bool overwrite) {
	#if defined(_WIN32)
	{
		string format = _STR("%.*s\000=%.*s", 2, name, value);
		if (overwrite) {
			{ // Unsafe block
				return _putenv(format.str);
			}
		} else {
			if (os__getenv(name).len == 0) {
				{ // Unsafe block
					return _putenv(format.str);
				}
			}
		}
		return -1;
	}
	#else
	{
	}
	#endif
}

int os__unsetenv(string name) {
	#if defined(_WIN32)
	{
		string format = _STR("%.*s\000=", 2, name);
		return _putenv(format.str);
	}
	#else
	{
	}
	#endif
}

map_string_string os__environ() {
	map_string_string res = new_map_1(sizeof(string));
	#if defined(_WIN32)
	{
		u16* estrings = GetEnvironmentStringsW();
		string eline = tos_lit("");
		for (u16* c = estrings; *c != 0; ) {
			eline = string_from_wide(c);
			int eq_index = string_index_byte(eline, '=');
			if (eq_index > 0) {
				map_set(&res, string_substr(eline, 0, eq_index), &(string[]) { string_substr(eline, eq_index + 1, eline.len) });
			}
			{ // Unsafe block
				c = c + eline.len + 1;
			}
		}
		FreeEnvironmentStringsW(estrings);
	}
	#else
	{
	}
	#endif
	return res;
}

// Attr: [deprecated]
bool os__File_is_opened(os__File f) {
	eprintln(tos_lit("warning: `file.is_opened()` has been deprecated, use `file.is_opened` instead"));
	return f.is_opened;
}

Option_int os__File_write(os__File* f, string s) {
	if (!f->is_opened) {
		Option _t169 = v_error(tos_lit("file is not opened"));
		return *(Option_int*)&_t169;
	}
	int written = fwrite(s.str, s.len, 1, f->cfile);
	if (written == 0 && s.len != 0) {
		Option _t170 = v_error(tos_lit("0 bytes written"));
		return *(Option_int*)&_t170;
	}
	Option_int _t171;
	opt_ok2(&(int[]) { written }, (OptionBase*)(&_t171), sizeof(int));
	return _t171;
}

Option_int os__File_writeln(os__File* f, string s) {
	if (!f->is_opened) {
		Option _t172 = v_error(tos_lit("file is not opened"));
		return *(Option_int*)&_t172;
	}
	int written = fwrite(s.str, s.len, 1, f->cfile);
	if (written == 0 && s.len != 0) {
		Option _t173 = v_error(tos_lit("0 bytes written"));
		return *(Option_int*)&_t173;
	}
	int x = fputs("\n", f->cfile);
	if (x < 0) {
		Option _t174 = v_error(tos_lit("could not add newline"));
		return *(Option_int*)&_t174;
	}
	Option_int _t175;
	opt_ok2(&(int[]) { (written + 1) }, (OptionBase*)(&_t175), sizeof(int));
	return _t175;
}

int os__File_write_bytes(os__File* f, voidptr data, int size) {
	return fwrite(data, 1, size, f->cfile);
}

int os__File_write_bytes_at(os__File* f, voidptr data, int size, int pos) {
	fseek(f->cfile, pos, SEEK_SET);
	int res = fwrite(data, 1, size, f->cfile);
	fseek(f->cfile, 0, SEEK_END);
	return res;
}

array_byte os__File_read_bytes(os__File* f, int size) {
	return os__File_read_bytes_at(f, size, 0);
}

array_byte os__File_read_bytes_at(os__File* f, int size, int pos) {
	array_byte arr = __new_array_with_default(size, 0, sizeof(byte), 0);
	Option_int _t176 = os__File_read_bytes_into(f, pos, &/*arr*/arr);
	if (!_t176.ok) {
		string err = _t176.v_error;
		int errcode = _t176.ecode;
		return __new_array_with_default(0, 0, sizeof(byte), 0);
	}
 	int nreadbytes = *(int*) _t176.data;
	return array_slice(arr, 0, nreadbytes);
}

Option_int os__File_read_bytes_into(os__File* f, int pos, array_byte* buf) {
	if (buf->len == 0) {
		v_panic(string_add(tos_lit(""), tos_lit(": `buf.len` == 0")));
	}
	fseek(f->cfile, pos, SEEK_SET);
	errno = 0;
	int nbytes = fread(buf->data, 1, buf->len, f->cfile);
	if (errno != 0) {
		Option _t177 = v_error(os__posix_get_error_msg(errno));
		return *(Option_int*)&_t177;
	}
	#if defined(_VDEBUG)
	{
	}
	#endif
	Option_int _t178;
	opt_ok2(&(int[]) { nbytes }, (OptionBase*)(&_t178), sizeof(int));
	return _t178;
}

void os__File_flush(os__File* f) {
	if (!f->is_opened) {
		return;
	}
	fflush(f->cfile);
}

os__File os__open_stdin() {
	return (os__File){.cfile = stdin,.fd = 0,.is_opened = true,};
}

Option_string os__File_get_line(os__File* f) {
	if (!f->is_opened) {
		Option _t179 = v_error(tos_lit("file is closed"));
		return *(Option_string*)&_t179;
	}
	#if !defined(_WIN32)
	{
	}
	#endif
	array_fixed_byte_4096 buf = {0};
	strings__Builder res = strings__new_builder(1024);
	int x = 0;
	for (;;) {
		{ // Unsafe block
			x = fgets(((charptr)(buf)), 4096, f->cfile);
		}
		if (x == 0) {
			if (res.len > 0) {
				break;
			}
			Option _t180 = v_error(tos_lit("end of file"));
			return *(Option_string*)&_t180;
		}
		byteptr bufbp = ((byteptr)(buf));
		int blen = vstrlen(bufbp);
		strings__Builder_write_bytes(&res, bufbp, blen);
		{ // Unsafe block
			if (blen == 0 || bufbp[blen - 1] == '\n' || bufbp[blen - 1] == '\r') {
				break;
			}
		}
	}
	Option_string _t181;
	opt_ok2(&(string[]) { strings__Builder_str(&res) }, (OptionBase*)(&_t181), sizeof(string));
	return _t181;
}

os__FileMode os__inode(string path) {
	struct stat attr;
	stat(((charptr)(path.str)), &attr);
	os__FileType typ = os__FileType_regular;
	if ((attr.st_mode & ((u32)(S_IFMT))) == ((u32)(S_IFDIR))) {
		typ = os__FileType_directory;
	}
	#if !defined(_WIN32)
	{
	}
	#endif
	#if defined(_WIN32)
	{
		return (os__FileMode){.typ = typ,.owner = (os__FilePermission){.read = ((attr.st_mode & ((u32)(S_IREAD)))) != 0,.write = ((attr.st_mode & ((u32)(S_IWRITE)))) != 0,.execute = ((attr.st_mode & ((u32)(S_IEXEC)))) != 0,},.group = (os__FilePermission){.read = ((attr.st_mode & ((u32)(S_IREAD)))) != 0,.write = ((attr.st_mode & ((u32)(S_IWRITE)))) != 0,.execute = ((attr.st_mode & ((u32)(S_IEXEC)))) != 0,},.others = (os__FilePermission){.read = ((attr.st_mode & ((u32)(S_IREAD)))) != 0,.write = ((attr.st_mode & ((u32)(S_IWRITE)))) != 0,.execute = ((attr.st_mode & ((u32)(S_IEXEC)))) != 0,},};
	}
	#else
	{
	}
	#endif
}

Option_array_byte os__read_bytes(string path) {
	Option_FILE_ptr _t182 = os__vfopen(path, tos_lit("rb"));
	if (!_t182.ok) {
		return *(Option_array_byte *)&_t182;
	}
 	FILE* fp = *(FILE**) _t182.data;
	int cseek = fseek(fp, 0, SEEK_END);
	if (cseek != 0) {
		Option _t183 = v_error(tos_lit("fseek failed"));
		return *(Option_array_byte*)&_t183;
	}
	int fsize = ftell(fp);
	if (fsize < 0) {
		Option _t184 = v_error(tos_lit("ftell failed"));
		return *(Option_array_byte*)&_t184;
	}
	rewind(fp);
	array_byte res = __new_array_with_default(fsize, 0, sizeof(byte), 0);
	int nr_read_elements = fread(res.data, fsize, 1, fp);
	if (nr_read_elements == 0 && fsize > 0) {
		Option _t185 = v_error(tos_lit("fread failed"));
		return *(Option_array_byte*)&_t185;
	}
	fclose(fp);
	Option_array_byte _t186;
	opt_ok2(&(array_byte[]) { array_slice(res, 0, nr_read_elements * fsize) }, (OptionBase*)(&_t186), sizeof(array_byte));
	return _t186;
}

Option_string os__read_file(string path) {
	string mode = tos_lit("rb");
	Option_FILE_ptr _t187 = os__vfopen(path, mode);
	if (!_t187.ok) {
		return *(Option_string *)&_t187;
	}
 	FILE* fp = *(FILE**) _t187.data;
	int cseek = fseek(fp, 0, SEEK_END);
	if (cseek != 0) {
		// Defer begin
		fclose(fp);
		// Defer end
		Option _t188 = v_error(tos_lit("fseek failed"));
		return *(Option_string*)&_t188;
	}
	int fsize = ftell(fp);
	if (fsize < 0) {
		// Defer begin
		fclose(fp);
		// Defer end
		Option _t189 = v_error(tos_lit("ftell failed"));
		return *(Option_string*)&_t189;
	}
	rewind(fp);
	{ // Unsafe block
		byteptr str = v_malloc(fsize + 1);
		int nelements = fread(str, fsize, 1, fp);
		if (nelements == 0 && fsize > 0) {
			v_free(str);
			// Defer begin
			fclose(fp);
			// Defer end
			Option _t190 = v_error(tos_lit("fread failed"));
			return *(Option_string*)&_t190;
		}
		str[fsize] = 0;
		// Defer begin
		fclose(fp);
		// Defer end
		Option_string _t191;
		opt_ok2(&(string[]) { byteptr_vstring_with_len(str, fsize) }, (OptionBase*)(&_t191), sizeof(string));
		return _t191;
	}
	// Defer begin
	fclose(fp);
	// Defer end
	Option _t192 = opt_none();
	return *(Option_string*)&_t192;
}

int os__file_size(string path) {
	struct stat s;
	{ // Unsafe block
		#if defined(_WIN32)
		{
			#if defined(__TINYC__)
			{
				stat(((charptr)(path.str)), &s);
			}
			#else
			{
			}
			#endif
		}
		#else
		{
		}
		#endif
	}
	return s.st_size;
}

void os__mv(string src, string dst) {
	string rdst = dst;
	if (os__is_dir(rdst)) {
		rdst = os__join_path(string_trim_right(rdst, _const_os__path_separator), (varg_string){.len=1,.args={os__file_name(string_trim_right(src, _const_os__path_separator))}});
	}
	#if defined(_WIN32)
	{
		string w_src = string_replace(src, tos_lit("/"), tos_lit("\\"));
		string w_dst = string_replace(rdst, tos_lit("/"), tos_lit("\\"));
		_wrename(string_to_wide(w_src), string_to_wide(w_dst));
	}
	#else
	{
	}
	#endif
}

Option_void os__cp(string src, string dst) {
	#if defined(_WIN32)
	{
		string w_src = string_replace(src, tos_lit("/"), tos_lit("\\"));
		string w_dst = string_replace(dst, tos_lit("/"), tos_lit("\\"));
		if (CopyFile(string_to_wide(w_src), string_to_wide(w_dst), false) == 0) {
			u32 result = GetLastError();
			Option _t193 = error_with_code(_STR("failed to copy %.*s\000 to %.*s", 2, src, dst), ((int)(result)));
			return *(Option_void*)&_t193;
		}
	}
	#else
	{
	}
	#endif
	Option_void _t194 = {.ok = true};
	return _t194;
}

// Attr: [deprecated]
Option_void os__cp_r(string osource_path, string odest_path, bool overwrite) {
	eprintln(tos_lit("warning: `os.cp_r` has been deprecated, use `os.cp_all` instead"));
	return os__cp_all(osource_path, odest_path, overwrite);
}

Option_void os__cp_all(string src, string dst, bool overwrite) {
	string source_path = os__real_path(src);
	string dest_path = os__real_path(dst);
	if (!os__exists(source_path)) {
		Option _t195 = v_error(tos_lit("Source path doesn\'t exist"));
		return *(Option_void*)&_t195;
	}
	if (!os__is_dir(source_path)) {
		string adjusted_path = (os__is_dir(dest_path) ? (os__join_path(dest_path, (varg_string){.len=1,.args={os__file_name(source_path)}})) : (dest_path));
		if (os__exists(adjusted_path)) {
			if (overwrite) {
				os__rm(adjusted_path);
			} else {
				Option _t196 = v_error(tos_lit("Destination file path already exist"));
				return *(Option_void*)&_t196;
			}
		}
		Option_void _t197 = os__cp(source_path, adjusted_path);
		if (!_t197.ok && !_t197.is_none) {
			return *(Option_void *)&_t197;
		};
		Option_void _t198 = {.ok = true};
		return _t198;
	}
	if (!os__is_dir(dest_path)) {
		Option _t199 = v_error(tos_lit("Destination path is not a valid directory"));
		return *(Option_void*)&_t199;
	}
	Option_array_string _t200 = os__ls(source_path);
	if (!_t200.ok) {
		return *(Option_void *)&_t200;
	}
 	array_string files = *(array_string*) _t200.data;
	// FOR IN array
	array _t201 = files;
	for (int _t202 = 0; _t202 < _t201.len; ++_t202) {
		string file = ((string*)_t201.data)[_t202];
		string sp = os__join_path(source_path, (varg_string){.len=1,.args={file}});
		string dp = os__join_path(dest_path, (varg_string){.len=1,.args={file}});
		if (os__is_dir(sp)) {
			Option_bool _t203 = os__mkdir(dp);
			if (!_t203.ok) {
				return *(Option_void *)&_t203;
			};
		}
		Option_void _t204 = os__cp_all(sp, dp, overwrite);
		if (!_t204.ok && !_t204.is_none) {
			string err = _t204.v_error;
			int errcode = _t204.ecode;
			os__rmdir(dp);
			Option _t205 = v_error(err);
			return *(Option_void*)&_t205;
		};
	}
	Option_void _t206 = {.ok = true};
	return _t206;
}

Option_void os__mv_by_cp(string source, string target) {
	Option_void _t207 = os__cp(source, target);
	if (!_t207.ok && !_t207.is_none) {
		return *(Option_void *)&_t207;
	};
	Option_void _t208 = os__rm(source);
	if (!_t208.ok && !_t208.is_none) {
		return *(Option_void *)&_t208;
	};
	Option_void _t209 = {.ok = true};
	return _t209;
}

Option_FILE_ptr os__vfopen(string path, string mode) {
	if (path.len == 0) {
		Option _t210 = v_error(tos_lit("vfopen called with \"\""));
		return *(Option_FILE_ptr*)&_t210;
	}
	voidptr fp = ((voidptr)(0));
	#if defined(_WIN32)
	{
		fp = _wfopen(string_to_wide(path), string_to_wide(mode));
	}
	#else
	{
	}
	#endif
	if (isnil(fp)) {
		Option _t211 = v_error(_STR("failed to open file \"%.*s\000\"", 2, path));
		return *(Option_FILE_ptr*)&_t211;
	} else {
		Option_FILE_ptr _t212;
		opt_ok2(&(FILE*[]) { fp }, (OptionBase*)(&_t212), sizeof(FILE*));
		return _t212;
	}
	Option _t213 = opt_none();
	return *(Option_FILE_ptr*)&_t213;
}

int os__fileno(voidptr cfile) {
	#if defined(_WIN32)
	{
		return _fileno(cfile);
	}
	#else
	{
	}
	#endif
}

Option_array_string os__read_lines(string path) {
	Option_string _t214 = os__read_file(path);
	if (!_t214.ok) {
		return *(Option_array_string *)&_t214;
	}
 	string buf = *(string*) _t214.data;
	Option_array_string _t215;
	opt_ok2(&(array_string[]) { string_split_into_lines(buf) }, (OptionBase*)(&_t215), sizeof(array_string));
	return _t215;
}

static Option_array_ustring os__read_ulines(string path) {
	Option_array_string _t216 = os__read_lines(path);
	if (!_t216.ok) {
		return *(Option_array_ustring *)&_t216;
	}
 	array_string lines = *(array_string*) _t216.data;
	array_ustring ulines = __new_array_with_default(0, 0, sizeof(ustring), 0);
	// FOR IN array
	array _t217 = lines;
	for (int _t218 = 0; _t218 < _t217.len; ++_t218) {
		string myline = ((string*)_t217.data)[_t218];
		array_push(&ulines, _MOV((ustring[]){ string_ustring(myline) }));
	}
	Option_array_ustring _t220;
	opt_ok2(&(array_ustring[]) { ulines }, (OptionBase*)(&_t220), sizeof(array_ustring));
	return _t220;
}

Option_os__File os__open_append(string path) {
	os__File file = (os__File){.cfile = 0,.fd = 0,.is_opened = 0,};
	#if defined(_WIN32)
	{
		u16* wpath = string_to_wide(string_replace(path, tos_lit("/"), tos_lit("\\")));
		string mode = tos_lit("ab");
		file = (os__File){.cfile = _wfopen(wpath, string_to_wide(mode)),.fd = 0,.is_opened = 0,};
	}
	#else
	{
	}
	#endif
	if (isnil(file.cfile)) {
		Option _t221 = v_error(_STR("failed to create(append) file \"%.*s\000\"", 2, path));
		return *(Option_os__File*)&_t221;
	}
	file.is_opened = true;
	Option_os__File _t222;
	opt_ok2(&(os__File[]) { file }, (OptionBase*)(&_t222), sizeof(os__File));
	return _t222;
}

Option_os__File os__open_file(string path, string mode, varg_int options) {
	int flags = 0;
	for (int _t223 = 0; _t223 < mode.len; ++_t223) {
		byte m = mode.str[_t223];
		byte _t224 = m;
		if (_t224 == 'r') {
			flags |= _const_os__o_rdonly;
		} else if (_t224 == 'w') {
			flags |= (_const_os__o_create | _const_os__o_trunc);
		} else if (_t224 == 'b') {
			flags |= _const_os__o_binary;
		} else if (_t224 == 'a') {
			flags |= (_const_os__o_create | _const_os__o_append);
		} else if (_t224 == 's') {
			flags |= _const_os__o_sync;
		} else if (_t224 == 'n') {
			flags |= _const_os__o_nonblock;
		} else if (_t224 == 'c') {
			flags |= _const_os__o_noctty;
		} else if (_t224 == '+') {
			flags |= _const_os__o_rdwr;
		} else {
		};
	}
	int permission = 0666;
	if (options.len > 0) {
		permission = options.args[0];
	}
	#if defined(_WIN32)
	{
		if (permission < 0600) {
			permission = 0x0100;
		} else {
			permission = (0x0100 | 0x0080);
		}
	}
	#endif
	string p = path;
	#if defined(_WIN32)
	{
		p = string_replace(path, tos_lit("/"), tos_lit("\\"));
	}
	#endif
	int fd = open(((charptr)(p.str)), flags, permission);
	if (fd == -1) {
		Option _t225 = v_error(os__posix_get_error_msg(errno));
		return *(Option_os__File*)&_t225;
	}
	voidptr cfile = fdopen(fd, ((charptr)(mode.str)));
	if (isnil(cfile)) {
		Option _t226 = v_error(_STR("Failed to open or create file \"%.*s\000\"", 2, path));
		return *(Option_os__File*)&_t226;
	}
	Option_os__File _t227;
	opt_ok2(&(os__File[]) { (os__File){.cfile = cfile,.fd = fd,.is_opened = true,} }, (OptionBase*)(&_t227), sizeof(os__File));
	return _t227;
}

static voidptr os__vpopen(string path) {
	#if defined(_WIN32)
	{
		string mode = tos_lit("rb");
		u16* wpath = string_to_wide(path);
		return _wpopen(wpath, string_to_wide(mode));
	}
	#else
	{
	}
	#endif
}

static multi_return_int_bool os__posix_wait4_to_exit_status(int waitret) {
	#if defined(_WIN32)
	{
		return (multi_return_int_bool){.arg0=waitret, .arg1=false};
	}
	#else
	{
	}
	#endif
}

string os__posix_get_error_msg(int code) {
	charptr ptr_text = strerror(code);
	if (ptr_text == 0) {
		return tos_lit("");
	}
	return tos3(ptr_text);
}

static int os__vpclose(voidptr f) {
	#if defined(_WIN32)
	{
		return _pclose(f);
	}
	#else
	{
	}
	#endif
}

int os__system(string cmd) {
	int ret = 0;
	#if defined(_WIN32)
	{
		string wcmd = (cmd.len > 1 && string_at(cmd, 0) == '"' && string_at(cmd, 1) != '"' ? (_STR("\"%.*s\000\"", 2, cmd)) : (cmd));
		{ // Unsafe block
			ret = _wsystem(string_to_wide(wcmd));
		}
	}
	#else
	{
	}
	#endif
	if (ret == -1) {
		os__print_c_errno();
	}
	#if !defined(_WIN32)
	{
	}
	#endif
	return ret;
}

string os__sigint_to_signal_name(int si) {
	int _t228 = si;
	if (_t228 == 1) {
		return tos_lit("SIGHUP");
	} else if (_t228 == 2) {
		return tos_lit("SIGINT");
	} else if (_t228 == 3) {
		return tos_lit("SIGQUIT");
	} else if (_t228 == 4) {
		return tos_lit("SIGILL");
	} else if (_t228 == 6) {
		return tos_lit("SIGABRT");
	} else if (_t228 == 8) {
		return tos_lit("SIGFPE");
	} else if (_t228 == 9) {
		return tos_lit("SIGKILL");
	} else if (_t228 == 11) {
		return tos_lit("SIGSEGV");
	} else if (_t228 == 13) {
		return tos_lit("SIGPIPE");
	} else if (_t228 == 14) {
		return tos_lit("SIGALRM");
	} else if (_t228 == 15) {
		return tos_lit("SIGTERM");
	} else {
	};
	#if defined(__linux__)
	{
	}
	#endif
	return tos_lit("unknown");
}

bool os__exists(string path) {
	#if defined(_WIN32)
	{
		string p = string_replace(path, tos_lit("/"), tos_lit("\\"));
		return _waccess(string_to_wide(p), _const_os__f_ok) != -1;
	}
	#else
	{
	}
	#endif
}

bool os__is_executable(string path) {
	#if defined(_WIN32)
	{
		string p = os__real_path(path);
		return (os__exists(p) && string_ends_with(p, tos_lit(".exe")));
	}
	#endif
	#if defined(__sun)
	{
	}
	#endif
	return access(((charptr)(path.str)), _const_os__x_ok) != -1;
}

bool os__is_writable(string path) {
	#if defined(_WIN32)
	{
		string p = string_replace(path, tos_lit("/"), tos_lit("\\"));
		return _waccess(string_to_wide(p), _const_os__w_ok) != -1;
	}
	#else
	{
	}
	#endif
}

bool os__is_readable(string path) {
	#if defined(_WIN32)
	{
		string p = string_replace(path, tos_lit("/"), tos_lit("\\"));
		return _waccess(string_to_wide(p), _const_os__r_ok) != -1;
	}
	#else
	{
	}
	#endif
}

// Attr: [deprecated]
bool os__file_exists(string _path) {
	eprintln(tos_lit("warning: `os.file_exists` has been deprecated, use `os.exists` instead"));
	return os__exists(_path);
}

Option_void os__rm(string path) {
	#if defined(_WIN32)
	{
		int rc = _wremove(string_to_wide(path));
		if (rc == -1) {
			Option _t229 = v_error(_STR("Failed to remove \"%.*s\000\"", 2, path));
			return *(Option_void*)&_t229;
		}
	}
	#else
	{
	}
	#endif
	Option_void _t230 = {.ok = true};
	return _t230;
}

Option_void os__rmdir(string path) {
	#if defined(_WIN32)
	{
		int rc = RemoveDirectory(string_to_wide(path));
		if (rc == 0) {
			Option _t231 = v_error(_STR("Failed to remove \"%.*s\000\"", 2, path));
			return *(Option_void*)&_t231;
		}
	}
	#else
	{
	}
	#endif
	Option_void _t232 = {.ok = true};
	return _t232;
}

// Attr: [deprecated]
void os__rmdir_recursive(string path) {
	eprintln(tos_lit("warning: `os.rmdir_recursive` has been deprecated, use `os.rmdir_all` instead"));
	os__rmdir_all(path);
}

Option_void os__rmdir_all(string path) {
	string ret_err = tos_lit("");
	Option_array_string _t233 = os__ls(path);
	if (!_t233.ok) {
		return *(Option_void *)&_t233;
	}
 	array_string items = *(array_string*) _t233.data;
	// FOR IN array
	array _t234 = items;
	for (int _t235 = 0; _t235 < _t234.len; ++_t235) {
		string item = ((string*)_t234.data)[_t235];
		if (os__is_dir(os__join_path(path, (varg_string){.len=1,.args={item}}))) {
			os__rmdir_all(os__join_path(path, (varg_string){.len=1,.args={item}}));
		}
		Option_void _t236 = os__rm(os__join_path(path, (varg_string){.len=1,.args={item}}));
		if (!_t236.ok && !_t236.is_none) {
			string err = _t236.v_error;
			int errcode = _t236.ecode;
			ret_err = err;
		};
	}
	Option_void _t237 = os__rmdir(path);
	if (!_t237.ok && !_t237.is_none) {
		string err = _t237.v_error;
		int errcode = _t237.ecode;
		ret_err = err;
	};
	if (ret_err.len > 0) {
		Option _t238 = v_error(ret_err);
		return *(Option_void*)&_t238;
	}
	Option_void _t239 = {.ok = true};
	return _t239;
}

bool os__is_dir_empty(string path) {
	Option_array_string _t240 = os__ls(path);
	if (!_t240.ok) {
		string err = _t240.v_error;
		int errcode = _t240.ecode;
		return true;
	}
 	array_string items = *(array_string*) _t240.data;
	return items.len == 0;
}

static void os__print_c_errno() {
	int e = errno;
	string se = tos_clone(((byteptr)(strerror(errno))));
	println(_STR("errno=%"PRId32"\000 err=%.*s", 2, e, se));
}

string os__file_ext(string path) {
	Option_int _t241 = string_last_index(path, tos_lit("."));
	if (!_t241.ok) {
		string err = _t241.v_error;
		int errcode = _t241.ecode;
		return tos_lit("");
	}
 	int pos = *(int*) _t241.data;
	return string_substr(path, pos, path.len);
}

string os__dir(string path) {
	if ((path).len == 0) {
		return tos_lit(".");
	}
	Option_int _t242 = string_last_index(path, _const_os__path_separator);
	if (!_t242.ok) {
		string err = _t242.v_error;
		int errcode = _t242.ecode;
		return tos_lit(".");
	}
 	int pos = *(int*) _t242.data;
	if (string_ends_with(path, _const_os__path_separator)) {
		pos--;
	}
	return string_substr(path, 0, pos);
}

string os__base(string path) {
	if ((path).len == 0) {
		return tos_lit(".");
	}
	if (string_eq(path, _const_os__path_separator)) {
		return _const_os__path_separator;
	}
	if (string_ends_with(path, _const_os__path_separator)) {
		string path2 = string_substr(path, 0, path.len - 1);
		Option_int _t243 = string_last_index(path2, _const_os__path_separator);
		if (!_t243.ok) {
			string err = _t243.v_error;
			int errcode = _t243.ecode;
			return string_clone(path2);
		}
 		int pos = *(int*) _t243.data;
		return string_substr(path2, pos + 1, path2.len);
	}
	Option_int _t244 = string_last_index(path, _const_os__path_separator);
	if (!_t244.ok) {
		string err = _t244.v_error;
		int errcode = _t244.ecode;
		return string_clone(path);
	}
 	int pos = *(int*) _t244.data;
	return string_substr(path, pos + 1, path.len);
}

string os__file_name(string path) {
	return string_all_after_last(path, _const_os__path_separator);
}

string os__input(string prompt) {
	print(prompt);
	os__flush();
	return os__get_line();
}

string os__get_line() {
	string str = os__get_raw_line();
	#if defined(_WIN32)
	{
		return string_trim_right(str, tos_lit("\r\n"));
	}
	#else
	{
	}
	#endif
}

string os__get_raw_line() {
	#if defined(_WIN32)
	{
		{ // Unsafe block
			int max_line_chars = 256;
			byteptr buf = v_malloc(max_line_chars * 2);
			voidptr h_input = GetStdHandle(_const_os__std_input_handle);
			int bytes_read = 0;
			if (is_atty(0) > 0) {
				ReadConsole(h_input, buf, max_line_chars * 2, ((LPDWORD)(&bytes_read)), 0);
				return string_from_wide2(((u16*)(buf)), bytes_read);
			}
			int offset = 0;
			for (;;) {
				byteptr pos = buf + offset;
				bool res = ReadFile(h_input, pos, 1, ((LPDWORD)(&bytes_read)), 0);
				if (!res || bytes_read == 0) {
					break;
				}
				if (*pos == '\n' || *pos == '\r') {
					offset++;
					break;
				}
				offset++;
			}
			return byteptr_vstring_with_len(buf, offset);
		}
	}
	#else
	{
	}
	#endif
}

array_byte os__get_raw_stdin() {
	#if defined(_WIN32)
	{
		{ // Unsafe block
			int block_bytes = 512;
			byteptr buf = v_malloc(block_bytes);
			voidptr h_input = GetStdHandle(_const_os__std_input_handle);
			int bytes_read = 0;
			int offset = 0;
			for (;;) {
				byteptr pos = buf + offset;
				bool res = ReadFile(h_input, pos, block_bytes, ((LPDWORD)(&bytes_read)), 0);
				offset += bytes_read;
				if (!res) {
					break;
				}
				buf = v_realloc(buf, ((u32)(offset + block_bytes + (block_bytes - bytes_read))));
			}
			CloseHandle(h_input);
			return (array){.element_size = 1,.data = ((voidptr)(buf)),.len = offset,.cap = offset,};
		}
	}
	#else
	{
	}
	#endif
}

array_string os__get_lines() {
	string line = tos_lit("");
	array_string inputstr = __new_array_with_default(0, 0, sizeof(string), 0);
	for (;;) {
		line = os__get_line();
		if (line.len <= 0) {
			break;
		}
		line = string_trim_space(line);
		array_push(&inputstr, _MOV((string[]){ line }));
	}
	return inputstr;
}

string os__get_lines_joined() {
	string line = tos_lit("");
	string inputstr = tos_lit("");
	for (;;) {
		line = os__get_line();
		if (line.len <= 0) {
			break;
		}
		line = string_trim_space(line);
		inputstr = /*f*/string_add(inputstr, line);
	}
	return inputstr;
}

string os__user_os() {
	#if defined(__linux__)
	{
	}
	#endif
	#if defined(__APPLE__)
	{
	}
	#endif
	#if defined(_WIN32)
	{
		return tos_lit("windows");
	}
	#endif
	#if defined(__FreeBSD__)
	{
	}
	#endif
	#if defined(__OpenBSD__)
	{
	}
	#endif
	#if defined(__NetBSD__)
	{
	}
	#endif
	#if defined(__DragonFly__)
	{
	}
	#endif
	#if defined(__ANDROID__)
	{
	}
	#endif
	#if defined(__sun)
	{
	}
	#endif
	#if defined(__haiku__)
	{
	}
	#endif
	return tos_lit("unknown");
}

string os__home_dir() {
	#if defined(_WIN32)
	{
		return os__getenv(tos_lit("USERPROFILE"));
	}
	#else
	{
	}
	#endif
}

Option_void os__write_file(string path, string text) {
	Option_os__File _t246 = os__create(path);
	if (!_t246.ok) {
		return *(Option_void *)&_t246;
	}
 	os__File f = *(os__File*) _t246.data;
	os__File_write(&f, text);
	os__File_close(&f);
	Option_void _t247 = {.ok = true};
	return _t247;
}

Option_void os__write_file_array(string path, array buffer) {
	Option_os__File _t248 = os__create(path);
	if (!_t248.ok) {
		return *(Option_void *)&_t248;
	}
 	os__File f = *(os__File*) _t248.data;
	os__File_write_bytes_at(&f, buffer.data, (buffer.len * buffer.element_size), 0);
	os__File_close(&f);
	Option_void _t249 = {.ok = true};
	return _t249;
}


void os__on_segfault(voidptr f) {
	#if defined(_WIN32)
	{
		return;
	}
	#endif
	#if defined(__APPLE__)
	{
	}
	#endif
}

string os__executable() {
	#if defined(__linux__)
	{
	}
	#endif
	#if defined(_WIN32)
	{
		int max = 512;
		int size = max * 2;
		u16* result = ((u16*)(vcalloc(size)));
		int len = GetModuleFileName(0, result, max);
		u32 attrs = GetFileAttributesW(result);
		u32 is_set = (attrs & 0x400);
		if (is_set != 0) {
			voidptr file = CreateFile(result, 0x80000000, 1, 0, 3, 0x80, 0);
			if (file != -1) {
				u16* final_path = ((u16*)(vcalloc(size)));
				int final_len = GetFinalPathNameByHandleW(file, final_path, size, 0);
				if (final_len < size) {
					string ret = string_from_wide2(final_path, final_len);
					return string_substr(ret, 4, ret.len);
				} else {
					eprintln(tos_lit("os.executable() saw that the executable file path was too long"));
				}
			}
			CloseHandle(file);
		}
		return string_from_wide2(result, len);
	}
	#endif
	#if defined(__APPLE__)
	{
	}
	#endif
	#if defined(__FreeBSD__)
	{
	}
	#endif
	#if defined(__OpenBSD__)
	{
	}
	#endif
	#if defined(__sun)
	{
	}
	#endif
	#if defined(__haiku__)
	{
	}
	#endif
	#if defined(__NetBSD__)
	{
	}
	#endif
	#if defined(__DragonFly__)
	{
	}
	#endif
	return os__executable_fallback();
}

static string os__executable_fallback() {
	if (_const_os__args.len == 0) {
		return tos_lit("");
	}
	string exepath = (*(string*)array_get(_const_os__args, 0));
	#if defined(_WIN32)
	{
		if (!string_contains(exepath, tos_lit(".exe"))) {
			exepath = /*f*/string_add(exepath, tos_lit(".exe"));
		}
	}
	#endif
	if (!os__is_abs_path(exepath)) {
		if (string_contains(exepath, _const_os__path_separator)) {
			exepath = os__join_path(_const_os__wd_at_startup, (varg_string){.len=1,.args={exepath}});
		} else {
			Option_string _t250 = os__find_abs_path_of_executable(exepath);
			if (!_t250.ok) {
				string err = _t250.v_error;
				int errcode = _t250.ecode;
				*(string*) _t250.data = tos_lit("");
			}
 			string foundpath = *(string*) _t250.data;
			if (foundpath.len > 0) {
				exepath = foundpath;
			}
		}
	}
	exepath = os__real_path(exepath);
	return exepath;
}

Option_string os__find_abs_path_of_executable(string exepath) {
	if (os__is_abs_path(exepath)) {
		Option_string _t251;
		opt_ok2(&(string[]) { os__real_path(exepath) }, (OptionBase*)(&_t251), sizeof(string));
		return _t251;
	}
	string res = tos_lit("");
	string env_path_delimiter = (string_eq(os__user_os(), tos_lit("windows")) ? (tos_lit(";")) : (tos_lit(":")));
	array_string paths = string_split(os__getenv(tos_lit("PATH")), env_path_delimiter);
	// FOR IN array
	array _t252 = paths;
	for (int _t253 = 0; _t253 < _t252.len; ++_t253) {
		string p = ((string*)_t252.data)[_t253];
		string found_abs_path = os__join_path(p, (varg_string){.len=1,.args={exepath}});
		if (os__exists(found_abs_path) && os__is_executable(found_abs_path)) {
			res = found_abs_path;
			break;
		}
	}
	if (res.len > 0) {
		Option_string _t254;
		opt_ok2(&(string[]) { os__real_path(res) }, (OptionBase*)(&_t254), sizeof(string));
		return _t254;
	}
	Option _t255 = v_error(tos_lit("failed to find executable"));
	return *(Option_string*)&_t255;
}

bool os__exists_in_system_path(string prog) {
	Option_string _t256 = os__find_abs_path_of_executable(prog);
	if (!_t256.ok) {
		string err = _t256.v_error;
		int errcode = _t256.ecode;
		return false;
	};
	return true;
}

// Attr: [deprecated]
bool os__dir_exists(string path) {
	eprintln(tos_lit("warning: `os.dir_exists` has been deprecated, use `os.is_dir` instead"));
	return os__is_dir(path);
}

bool os__is_dir(string path) {
	#if defined(_WIN32)
	{
		string w_path = string_replace(path, tos_lit("/"), tos_lit("\\"));
		u32 attr = GetFileAttributesW(string_to_wide(w_path));
		if (attr == ((u32)(INVALID_FILE_ATTRIBUTES))) {
			return false;
		}
		if ((((int)(attr)) & FILE_ATTRIBUTE_DIRECTORY) != 0) {
			return true;
		}
		return false;
	}
	#else
	{
	}
	#endif
}

bool os__is_file(string path) {
	return os__exists(path) && !os__is_dir(path);
}

bool os__is_link(string path) {
	#if defined(_WIN32)
	{
		return false;
	}
	#else
	{
	}
	#endif
}

void os__chdir(string path) {
	#if defined(_WIN32)
	{
		_wchdir(string_to_wide(path));
	}
	#else
	{
	}
	#endif
}

string os__getwd() {
	#if defined(_WIN32)
	{
		int max = 512;
		u16* buf = ((u16*)(vcalloc(max * 2)));
		if (_wgetcwd(buf, max) == 0) {
			return tos_lit("");
		}
		return string_from_wide(buf);
	}
	#else
	{
	}
	#endif
}

string os__real_path(string fpath) {
	byteptr fullpath = vcalloc(_const_os__max_path_len);
	charptr ret = ((charptr)(0));
	#if defined(_WIN32)
	{
		ret = ((charptr)(_fullpath(fullpath, fpath.str, _const_os__max_path_len)));
		if (ret == 0) {
			return fpath;
		}
	}
	#else
	{
	}
	#endif
	return byteptr_vstring(fullpath);
}

bool os__is_abs_path(string path) {
	#if defined(_WIN32)
	{
		return string_at(path, 0) == '/' || (byte_is_letter(string_at(path, 0)) && string_at(path, 1) == ':');
	}
	#endif
	return string_at(path, 0) == '/';
}

string os__join_path(string base, varg_string dirs) {
	array_string result = __new_array_with_default(0, 0, sizeof(string), 0);
	array_push(&result, _MOV((string[]){ string_trim_right(base, tos_lit("\\/")) }));
	// FOR IN cond_type/variadic
	for (int _t258 = 0; _t258 < dirs.len; ++_t258) {
		string d = dirs.args[_t258];
		array_push(&result, _MOV((string[]){ d }));
	}
	return array_string_join(result, _const_os__path_separator);
}

array_string os__walk_ext(string path, string ext) {
	if (!os__is_dir(path)) {
		return __new_array_with_default(0, 0, sizeof(string), 0);
	}
	Option_array_string _t260 = os__ls(path);
	if (!_t260.ok) {
		string err = _t260.v_error;
		int errcode = _t260.ecode;
		return __new_array_with_default(0, 0, sizeof(string), 0);
	}
 	array_string files = *(array_string*) _t260.data;
	array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	string separator = (string_ends_with(path, _const_os__path_separator) ? (tos_lit("")) : (_const_os__path_separator));
	// FOR IN array
	array _t261 = files;
	for (int _t262 = 0; _t262 < _t261.len; ++_t262) {
		string file = ((string*)_t261.data)[_t262];
		if (string_starts_with(file, tos_lit("."))) {
			continue;
		}
		string p = string_add(string_add(path, separator), file);
		if (os__is_dir(p) && !os__is_link(p)) {
			_PUSH_MANY(&res, (os__walk_ext(p, ext)), _t263, array_string);
		} else if (string_ends_with(file, ext)) {
			array_push(&res, _MOV((string[]){ p }));
		}
	}
	return res;
}

void os__walk(string path, void (*f)(string path)) {
	if (!os__is_dir(path)) {
		return;
	}
	Option_array_string _t265 = os__ls(path);
	if (!_t265.ok) {
		string err = _t265.v_error;
		int errcode = _t265.ecode;
		return;
	}
 	array_string files = *(array_string*) _t265.data;
	// FOR IN array
	array _t266 = files;
	for (int _t267 = 0; _t267 < _t266.len; ++_t267) {
		string file = ((string*)_t266.data)[_t267];
		string p = string_add(string_add(path, _const_os__path_separator), file);
		if (os__is_dir(p) && !os__is_link(p)) {
			os__walk(p, f);
		} else if (os__exists(p)) {
			f(p);
		}
	}
	return;
}

// Attr: [unsafe]
void os__signal(int signum, voidptr handler) {
	signal(signum, handler);
}

int os__fork() {
	int pid = -1;
	#if !defined(_WIN32)
	{
	}
	#endif
	#if defined(_WIN32)
	{
		v_panic(tos_lit("os.fork not supported in windows"));
	}
	#endif
	return pid;
}

int os__wait() {
	int pid = -1;
	#if !defined(_WIN32)
	{
	}
	#endif
	#if defined(_WIN32)
	{
		v_panic(tos_lit("os.wait not supported in windows"));
	}
	#endif
	return pid;
}

int os__file_last_mod_unix(string path) {
	struct stat attr;
	stat(((charptr)(path.str)), &attr);
	return attr.st_mtime;
}

void os__log(string s) {
	println(string_add(tos_lit("os.log: "), s));
}

// Attr: [deprecated]
void os__flush_stdout() {
	eprintln(tos_lit("warning: `os.flush_stdout` has been deprecated, use `os.flush` instead"));
	os__flush();
}

void os__flush() {
	fflush(stdout);
}

Option_void os__mkdir_all(string path) {
	string p = (string_starts_with(path, _const_os__path_separator) ? (_const_os__path_separator) : (tos_lit("")));
	array_string path_parts = string_split(string_trim_left(path, _const_os__path_separator), _const_os__path_separator);
	// FOR IN array
	array _t268 = path_parts;
	for (int _t269 = 0; _t269 < _t268.len; ++_t269) {
		string subdir = ((string*)_t268.data)[_t269];
		p = /*f*/string_add(p, string_add(subdir, _const_os__path_separator));
		if (os__exists(p) && os__is_dir(p)) {
			continue;
		}
		Option_bool _t270 = os__mkdir(p);
		if (!_t270.ok) {
			string err = _t270.v_error;
			int errcode = _t270.ecode;
			Option _t271 = v_error(_STR("folder: %.*s\000, error: %.*s", 2, p, err));
			return *(Option_void*)&_t271;
		};
	}
	Option_void _t272 = {.ok = true};
	return _t272;
}

string os__cache_dir() {
	#if !defined(_WIN32)
	{
	}
	#endif
	string cdir = os__join_path(os__home_dir(), (varg_string){.len=1,.args={tos_lit(".cache")}});
	if (!os__is_dir(cdir) && !os__is_link(cdir)) {
		Option_bool _t273 = os__mkdir(cdir);
		if (!_t273.ok) {
			string err = _t273.v_error;
			int errcode = _t273.ecode;
			v_panic(err);
		};
	}
	return cdir;
}

string os__temp_dir() {
	string path = os__getenv(tos_lit("TMPDIR"));
	#if defined(_WIN32)
	{
		if ((path).len == 0) {
			path = os__getenv(tos_lit("TEMP"));
			if ((path).len == 0) {
				path = os__getenv(tos_lit("TMP"));
			}
			if ((path).len == 0) {
				path = tos_lit("C:/tmp");
			}
		}
	}
	#endif
	#if defined(__ANDROID__)
	{
	}
	#endif
	if ((path).len == 0) {
		path = tos_lit("/tmp");
	}
	return path;
}

void os__chmod(string path, int mode) {
	chmod(((charptr)(path.str)), mode);
}

string os__resource_abs_path(string path) {
	string base_path = os__real_path(os__dir(os__executable()));
	string vresource = os__getenv(tos_lit("V_RESOURCE_PATH"));
	if (vresource.len != 0) {
		base_path = vresource;
	}
	return os__real_path(os__join_path(base_path, (varg_string){.len=1,.args={path}}));
}

Option_os__File os__open(string path) {
	Option_FILE_ptr _t274 = os__vfopen(path, tos_lit("rb"));
	if (!_t274.ok) {
		return *(Option_os__File *)&_t274;
	}
 	FILE* cfile = *(FILE**) _t274.data;
	int fd = os__fileno(cfile);
	Option_os__File _t275;
	opt_ok2(&(os__File[]) { (os__File){.cfile = cfile,.fd = fd,.is_opened = true,} }, (OptionBase*)(&_t275), sizeof(os__File));
	return _t275;
}

Option_os__File os__create(string path) {
	Option_FILE_ptr _t276 = os__vfopen(path, tos_lit("wb"));
	if (!_t276.ok) {
		return *(Option_os__File *)&_t276;
	}
 	FILE* cfile = *(FILE**) _t276.data;
	int fd = os__fileno(cfile);
	Option_os__File _t277;
	opt_ok2(&(os__File[]) { (os__File){.cfile = cfile,.fd = fd,.is_opened = true,} }, (OptionBase*)(&_t277), sizeof(os__File));
	return _t277;
}

// TypeDecl
static array_string os__init_os_args_wide(int argc, byteptr* argv) {
	array_string args = __new_array_with_default(0, 0, sizeof(string), 0);
	for (int i = 0; i < argc; ++i) {
		array_push(&args, _MOV((string[]){ string_from_wide(((u16*)(argv[i]))) }));
	}
	return args;
}

Option_array_string os__ls(string path) {
	os__Win32finddata find_file_data = (os__Win32finddata){.dw_file_attributes = 0,.ft_creation_time = {0},.ft_last_access_time = {0},.ft_last_write_time = {0},.n_file_size_high = 0,.n_file_size_low = 0,.dw_reserved0 = 0,.dw_reserved1 = 0,.c_file_name = {0},.c_alternate_file_name = {0},.dw_file_type = 0,.dw_creator_type = 0,.w_finder_flags = 0,};
	array_string dir_files = __new_array_with_default(0, 0, sizeof(string), 0);
	if (!os__is_dir(path)) {
		Option _t279 = v_error(_STR("ls() couldnt open dir \"%.*s\000\": directory does not exist", 2, path));
		return *(Option_array_string*)&_t279;
	}
	string path_files = _STR("%.*s\000\\*", 2, path);
	voidptr h_find_files = FindFirstFile(string_to_wide(path_files), ((voidptr)(&find_file_data)));
	string first_filename = string_from_wide(((u16*)(find_file_data.c_file_name)));
	if (string_ne(first_filename, tos_lit(".")) && string_ne(first_filename, tos_lit(".."))) {
		array_push(&dir_files, _MOV((string[]){ first_filename }));
	}
	for (;;) {
		if (!(FindNextFile(h_find_files, ((voidptr)(&find_file_data))) > 0)) break;
		string filename = string_from_wide(((u16*)(find_file_data.c_file_name)));
		if (string_ne(filename, tos_lit(".")) && string_ne(filename, tos_lit(".."))) {
			array_push(&dir_files, _MOV((string[]){ string_clone(filename) }));
		}
	}
	FindClose(h_find_files);
	Option_array_string _t282;
	opt_ok2(&(array_string[]) { dir_files }, (OptionBase*)(&_t282), sizeof(array_string));
	return _t282;
}

Option_bool os__mkdir(string path) {
	if (string_eq(path, tos_lit("."))) {
		Option_bool _t283;
		opt_ok2(&(bool[]) { true }, (OptionBase*)(&_t283), sizeof(bool));
		return _t283;
	}
	string apath = os__real_path(path);
	if (!CreateDirectory(string_to_wide(apath), 0)) {
		Option _t284 = v_error(string_add(_STR("mkdir failed for \"%.*s\000\", because CreateDirectory returned ", 2, apath), os__get_error_msg(((int)(GetLastError())))));
		return *(Option_bool*)&_t284;
	}
	Option_bool _t285;
	opt_ok2(&(bool[]) { true }, (OptionBase*)(&_t285), sizeof(bool));
	return _t285;
}

os__HANDLE os__get_file_handle(string path) {
	Option_FILE_ptr _t286 = os__vfopen(path, tos_lit("rb"));
	if (!_t286.ok) {
		string err = _t286.v_error;
		int errcode = _t286.ecode;
		return ((os__HANDLE)(_const_os__invalid_handle_value));
	}
 	FILE* cfile = *(FILE**) _t286.data;
	os__HANDLE handle = ((os__HANDLE)(_get_osfhandle(os__fileno(cfile))));
	return handle;
}

Option_string os__get_module_filename(os__HANDLE handle) {
	{ // Unsafe block
		int sz = 4096;
		u16* buf = ((u16*)(v_malloc(4096)));
		for (;;) {
			int status = ((int)(GetModuleFileNameW(handle, ((voidptr)(&buf)), sz)));
			int _t287 = status;
			if (_t287 == _const_os__success) {
				Option_string _t288;
				opt_ok2(&(string[]) { string_from_wide2(buf, sz) }, (OptionBase*)(&_t288), sizeof(string));
				return _t288;
			} else {
				Option _t289 = v_error(tos_lit("Cannot get file name from handle"));
				return *(Option_string*)&_t289;
			};
		}
	}
	v_panic(tos_lit("this should be unreachable"));
	Option _t290 = opt_none();
	return *(Option_string*)&_t290;
}

static voidptr os__ptr_win_get_error_msg(u32 code) {
	voidptr buf = ((voidptr)(0));
	if (code > ((u32)(_const_os__max_error_code))) {
		return buf;
	}
	FormatMessage(((_const_os__format_message_allocate_buffer | _const_os__format_message_from_system) | _const_os__format_message_ignore_inserts), 0, code, MAKELANGID(_const_os__lang_neutral, _const_os__sublang_default), ((voidptr)(&buf)), 0, 0);
	return buf;
}

string os__get_error_msg(int code) {
	if (code < 0) {
		return tos_lit("");
	}
	voidptr ptr_text = os__ptr_win_get_error_msg(((u32)(code)));
	if (ptr_text == 0) {
		return tos_lit("");
	}
	return string_from_wide(ptr_text);
}

Option_os__Result os__exec(string cmd) {
	if (string_contains(cmd, tos_lit(";")) || string_contains(cmd, tos_lit("&&")) || string_contains(cmd, tos_lit("||")) || string_contains(cmd, tos_lit("\n"))) {
		Option _t291 = v_error(tos_lit(";, &&, || and \\n are not allowed in shell commands"));
		return *(Option_os__Result*)&_t291;
	}
	u32* child_stdin = ((u32*)(0));
	u32* child_stdout_read = ((u32*)(0));
	u32* child_stdout_write = ((u32*)(0));
	os__SecurityAttributes sa = (os__SecurityAttributes){.n_length = 0,.lp_security_descriptor = 0,.b_inherit_handle = 0,};
	sa.n_length = /*SizeOfType*/ sizeof(SECURITY_ATTRIBUTES);
	sa.b_inherit_handle = true;
	bool create_pipe_ok = CreatePipe(((voidptr)(&child_stdout_read)), ((voidptr)(&child_stdout_write)), ((voidptr)(&sa)), 0);
	if (!create_pipe_ok) {
		int error_num = ((int)(GetLastError()));
		string error_msg = os__get_error_msg(error_num);
		Option _t292 = error_with_code(_STR("exec failed (CreatePipe): %.*s", 1, error_msg), error_num);
		return *(Option_os__Result*)&_t292;
	}
	bool set_handle_info_ok = SetHandleInformation(child_stdout_read, HANDLE_FLAG_INHERIT, 0);
	if (!set_handle_info_ok) {
		int error_num = ((int)(GetLastError()));
		string error_msg = os__get_error_msg(error_num);
		Option _t293 = error_with_code(_STR("exec failed (SetHandleInformation): %.*s", 1, error_msg), error_num);
		return *(Option_os__Result*)&_t293;
	}
	os__ProcessInformation proc_info = (os__ProcessInformation){.h_process = 0,.h_thread = 0,.dw_process_id = 0,.dw_thread_id = 0,};
	os__StartupInfo start_info = (os__StartupInfo){
		.cb = /*SizeOfType*/ sizeof(PROCESS_INFORMATION),
		.lp_reserved = 0,
		.lp_desktop = 0,
		.lp_title = 0,
		.dw_x = 0,
		.dw_y = 0,
		.dw_x_size = 0,
		.dw_y_size = 0,
		.dw_x_count_chars = 0,
		.dw_y_count_chars = 0,
		.dw_fill_attributes = 0,
		.dw_flags = ((u32)(STARTF_USESTDHANDLES)),
		.w_show_window = 0,
		.cb_reserved2 = 0,
		.lp_reserved2 = 0,
		.h_std_input = child_stdin,
		.h_std_output = child_stdout_write,
		.h_std_error = child_stdout_write,
	};
	array_fixed_u16_32768 command_line = {0};
	ExpandEnvironmentStringsW(string_to_wide(cmd), ((voidptr)(&command_line)), 32768);
	bool create_process_ok = CreateProcessW(0, command_line, 0, 0, TRUE, 0, 0, 0, ((voidptr)(&start_info)), ((voidptr)(&proc_info)));
	if (!create_process_ok) {
		int error_num = ((int)(GetLastError()));
		string error_msg = os__get_error_msg(error_num);
		Option _t294 = error_with_code(_STR("exec failed (CreateProcess) with code %"PRId32"\000: %.*s\000 cmd: %.*s", 3, error_num, error_msg, cmd), error_num);
		return *(Option_os__Result*)&_t294;
	}
	CloseHandle(child_stdin);
	CloseHandle(child_stdout_write);
	array_fixed_byte_4096 buf = {0};
	u32 bytes_read = ((u32)(0U));
	strings__Builder read_data = strings__new_builder(1024);
	for (;;) {
		bool readfile_result = ReadFile(child_stdout_read, buf, 1000, ((voidptr)(&bytes_read)), 0);
		strings__Builder_write_bytes(&read_data, (voidptr)&/*qq*/buf, ((int)(bytes_read)));
		if (readfile_result == false || ((int)(bytes_read)) == 0) {
			break;
		}
	}
	string soutput = string_trim_space(strings__Builder_str(&read_data));
	strings__Builder_free(&read_data);
	u32 exit_code = ((u32)(0U));
	WaitForSingleObject(proc_info.h_process, INFINITE);
	GetExitCodeProcess(proc_info.h_process, ((voidptr)(&exit_code)));
	CloseHandle(proc_info.h_process);
	CloseHandle(proc_info.h_thread);
	Option_os__Result _t295;
	opt_ok2(&(os__Result[]) { (os__Result){.exit_code = ((int)(exit_code)),.output = soutput,} }, (OptionBase*)(&_t295), sizeof(os__Result));
	return _t295;
}

Option_bool os__symlink(string origin, string target) {
	int flags = (os__is_dir(origin) ? (1) : (0));
	if (CreateSymbolicLinkW(string_to_wide(origin), string_to_wide(target), ((u32)(flags))) != 0) {
		Option_bool _t296;
		opt_ok2(&(bool[]) { true }, (OptionBase*)(&_t296), sizeof(bool));
		return _t296;
	}
	Option _t297 = v_error(os__get_error_msg(((int)(GetLastError()))));
	return *(Option_bool*)&_t297;
}

void os__File_close(os__File* f) {
	if (!f->is_opened) {
		return;
	}
	f->is_opened = false;
	fflush(f->cfile);
	fclose(f->cfile);
}

// TypeDecl
void os__add_vectored_exception_handler(bool first, VectoredExceptionHandler handler) {
	AddVectoredExceptionHandler(((u32)(first)), ((PVECTORED_EXCEPTION_HANDLER)(handler)));
}

bool os__debugger_present() {
	return IsDebuggerPresent();
}

os__Uname os__uname() {
	string unknown = tos_lit("unknown");
	return (os__Uname){.sysname = unknown,.nodename = unknown,.release = unknown,.version = unknown,.machine = unknown,};
}

Option_bool os__is_writable_folder(string folder) {
	if (!os__exists(folder)) {
		Option _t298 = v_error(_STR("`%.*s\000` does not exist", 2, folder));
		return *(Option_bool*)&_t298;
	}
	if (!os__is_dir(folder)) {
		Option _t299 = v_error(tos_lit("`folder` is not a folder"));
		return *(Option_bool*)&_t299;
	}
	string tmp_perm_check = os__join_path(folder, (varg_string){.len=1,.args={string_add(tos_lit("tmp_perm_check_pid_"), int_str(os__getpid()))}});
	Option_os__File _t300 = os__open_file(tmp_perm_check, tos_lit("w+"), (varg_int){.len=1,.args={0700}});
	if (!_t300.ok) {
		string err = _t300.v_error;
		int errcode = _t300.ecode;
		Option _t301 = v_error(_STR("cannot write to folder %.*s\000: %.*s", 2, folder, err));
		return *(Option_bool*)&_t301;
	}
 	os__File f = *(os__File*) _t300.data;
	os__File_close(&f);
	os__rm(tmp_perm_check);
	Option_bool _t302;
	opt_ok2(&(bool[]) { true }, (OptionBase*)(&_t302), sizeof(bool));
	return _t302;
}

// Attr: [inline]
inline int os__getpid() {
	return _getpid();
}

int vsdl__mixer__channels_allocate(int count) {
	return Mix_AllocateChannels(count);
}

int vsdl__mixer__channel_fade_in(int channel, vsdl__mixer__Chunk* chunk, int loops, int ms) {
	return Mix_FadeInChannel(channel, chunk, loops, ms);
}

int vsdl__mixer__channel_fade_in_timed(int channel, vsdl__mixer__Chunk* chunk, int loops, int ms, int time) {
	return Mix_FadeInChannelTimed(channel, chunk, loops, ms, time);
}

void vsdl__mixer__channel_pause(int channel) {
	Mix_Pause(channel);
}

int vsdl__mixer__channel_play(int channel, vsdl__mixer__Chunk* chunk, int loops) {
	return Mix_PlayChannel(channel, chunk, loops);
}

int vsdl__mixer__channel_play_timed(int channel, vsdl__mixer__Chunk* chunk, int loops, int time) {
	return Mix_PlayChannelTimed(channel, chunk, loops, time);
}

void vsdl__mixer__channel_resume(int channel) {
	Mix_Resume(channel);
}

int vsdl__mixer__channel_volume(int index, byte volume) {
	return Mix_Volume(index, volume);
}

void vsdl__mixer__Chunk_free(vsdl__mixer__Chunk* chunk) {
	Mix_FreeChunk(chunk);
}

int vsdl__mixer__Chunk_fade_in(vsdl__mixer__Chunk* chunk, int channel, int loop, int ms) {
	return vsdl__mixer__channel_fade_in(channel, chunk, loop, ms);
}

int vsdl__mixer__Chunk_fade_in_timed(vsdl__mixer__Chunk* chunk, int channel, int loop, int ms, int time) {
	return vsdl__mixer__channel_fade_in_timed(channel, chunk, loop, ms, time);
}

string vsdl__mixer__get_chunk_decoder(int index) {
	return tos3(Mix_GetChunkDecoder(index));
}

int vsdl__mixer__get_num_chunk_decoders() {
	return Mix_GetNumChunkDecoders();
}

Option_vsdl__mixer__Chunk_ptr vsdl__mixer__load(string path) {
	voidptr chunk = Mix_LoadWAV(path.str);
	if (chunk == 0) {
		Option _t303 = v_error(vsdl__mixer__serror(_STR("Unable to load file %.*s", 1, path)));
		return *(Option_vsdl__mixer__Chunk_ptr*)&_t303;
	}
	Option_vsdl__mixer__Chunk_ptr _t304;
	opt_ok2(&(vsdl__mixer__Chunk*[]) { chunk }, (OptionBase*)(&_t304), sizeof(vsdl__mixer__Chunk*));
	return _t304;
}

Option_vsdl__mixer__Chunk_ptr vsdl__mixer__load_rw(vsdl__RWops* ops, bool autofree) {
	voidptr chunk = Mix_LoadWAV_RW(ops, autofree);
	if (chunk == 0) {
		Option _t305 = v_error(vsdl__mixer__serror(tos_lit("Unable to load file from RW")));
		return *(Option_vsdl__mixer__Chunk_ptr*)&_t305;
	}
	Option_vsdl__mixer__Chunk_ptr _t306;
	opt_ok2(&(vsdl__mixer__Chunk*[]) { chunk }, (OptionBase*)(&_t306), sizeof(vsdl__mixer__Chunk*));
	return _t306;
}

int vsdl__mixer__Chunk_play(vsdl__mixer__Chunk* chunk, int channel, int loops) {
	return vsdl__mixer__channel_play(channel, chunk, loops);
}

int vsdl__mixer__Chunk_play_timed(vsdl__mixer__Chunk* chunk, int channel, int loops, int time) {
	return vsdl__mixer__channel_play_timed(channel, chunk, loops, time);
}

int vsdl__mixer__Chunk_set_volume(vsdl__mixer__Chunk* chunk, byte volume) {
	return Mix_VolumeChunk(chunk, volume);
}

int vsdl__mixer__init(varg_vsdl__mixer__MixerFlags flags) {
	int flag = 0;
	// FOR IN cond_type/variadic
	for (int _t307 = 0; _t307 < flags.len; ++_t307) {
		vsdl__mixer__MixerFlags f = flags.args[_t307];
		flag = (flag | f);
	}
	return Mix_Init(flag);
}

void vsdl__mixer__close() {
	Mix_CloseAudio();
}

void vsdl__mixer__quit() {
	for (;;) {
		if (!(Mix_Init(0) > 0)) break;
		Mix_Quit();
	}
}

Option_int vsdl__mixer__open(int frequency, vsdl__mixer__Format format, int channels, int buffer_size) {
	vsdl__mixer__Format adjusted_format = format;
	if (format == vsdl__mixer__Format_default) {
		#if defined(TARGET_ORDER_IS_LITTLE)
		{
			adjusted_format = vsdl__mixer__Format_u16lsb;
		}
		#else
		{
		}
		#endif
	}
	int result = Mix_OpenAudio(frequency, adjusted_format, channels, buffer_size);
	if (result == -1) {
		Option _t308 = v_error(vsdl__mixer__serror(tos_lit("Unable to open audio")));
		return *(Option_int*)&_t308;
	}
	Option_int _t309;
	opt_ok2(&(int[]) { result }, (OptionBase*)(&_t309), sizeof(int));
	return _t309;
}

Option_int vsdl__mixer__open_device(vsdl__audio__AudioDevice device, int frequency, vsdl__mixer__Format format, int channels, int buffer_size, int allowed_changes) {
	vsdl__mixer__Format adjusted_format = format;
	if (format == vsdl__mixer__Format_default) {
		#if defined(TARGET_ORDER_IS_LITTLE)
		{
			adjusted_format = vsdl__mixer__Format_u16lsb;
		}
		#else
		{
		}
		#endif
	}
	int result = Mix_OpenAudioDevice(frequency, adjusted_format, channels, buffer_size, device.name.str, allowed_changes);
	if (result == -1) {
		Option _t310 = v_error(vsdl__mixer__serror(tos_lit("Unable to open audio")));
		return *(Option_int*)&_t310;
	}
	Option_int _t311;
	opt_ok2(&(int[]) { result }, (OptionBase*)(&_t311), sizeof(int));
	return _t311;
}

static string vsdl__mixer__serror(string text) {
	string msg = tos3(Mix_GetError());
	return _STR("%.*s\000: %.*s", 2, text, msg);
}

// TypeDecl
// TypeDecl
int runtime__nr_jobs() {
	int cpus = runtime__nr_cpus();
	int vjobs = string_int(os__getenv(tos_lit("VJOBS")));
	if (vjobs > 0) {
		cpus = vjobs;
	}
	return cpus;
}

bool runtime__is_32bit() {
	#if defined(TARGET_IS_32BIT)
	{
		return true;
	}
	#endif
	return false;
}

bool runtime__is_64bit() {
	#if defined(TARGET_IS_64BIT)
	{
		return true;
	}
	#endif
	return false;
}

bool runtime__is_little_endian() {
	#if defined(TARGET_ORDER_IS_LITTLE)
	{
		return true;
	}
	#endif
	return false;
}

bool runtime__is_big_endian() {
	#if defined(TARGET_ORDER_IS_BIG)
	{
		return true;
	}
	#endif
	return false;
}

int runtime__nr_cpus() {
	SYSTEM_INFO sinfo = (SYSTEM_INFO){.dwNumberOfProcessors = 0,};
	GetSystemInfo(&sinfo);
	int nr = ((int)(sinfo.dwNumberOfProcessors));
	if (nr == 0) {
		nr = string_int(os__getenv(tos_lit("NUMBER_OF_PROCESSORS")));
	}
	return nr;
}

// Attr: [inline]
inline static u32 rand__util__nr_next(u32 prev) {
	return prev * 1664525 + 1013904223;
}

// Attr: [inline]
inline array_u32 rand__util__time_seed_array(int count) {
	time__Time ctime = time__now();
	u32 seed = ((u32)((time__Time_unix_time(ctime) ^ ctime.microsecond)));
	array_u32 seed_data = __new_array_with_default(0, count, sizeof(u32), 0);
	for (int _t312 = 0; _t312 < count; ++_t312) {
		seed = rand__util__nr_next(seed);
		array_push(&seed_data, _MOV((u32[]){ rand__util__nr_next(seed) }));
	}
	return seed_data;
}

// Attr: [inline]
inline u32 rand__util__time_seed_32() {
	return (*(u32*)array_get(rand__util__time_seed_array(1), 0));
}

// Attr: [inline]
inline u64 rand__util__time_seed_64() {
	array_u32 seed_data = rand__util__time_seed_array(2);
	u64 lower = ((u64)((*(u32*)array_get(seed_data, 0))));
	u64 upper = ((u64)((*(u32*)array_get(seed_data, 1))));
	return (lower | (upper << 32));
}

void rand__wyrand__WyRandRNG_seed(rand__wyrand__WyRandRNG* rng, array_u32 seed_data) {
	if (seed_data.len != 2) {
		eprintln(tos_lit("WyRandRNG needs 2 32-bit unsigned integers as the seed."));
		v_exit(1);
	}
	rng->state = ((*(u32*)array_get(seed_data, 0)) | (((u64)((*(u32*)array_get(seed_data, 1)))) << 32));
	rng->has_extra = false;
}

// Attr: [inline]
inline u32 rand__wyrand__WyRandRNG_u32(rand__wyrand__WyRandRNG* rng) {
	if (rng->has_extra) {
		rng->has_extra = false;
		return rng->extra;
	}
	u64 full_value = rand__wyrand__WyRandRNG_u64(rng);
	u32 lower = ((u32)((full_value & _const_rand__util__lower_mask)));
	u32 upper = ((u32)(full_value >> 32));
	rng->extra = upper;
	rng->has_extra = true;
	return lower;
}

// Attr: [inline]
inline u64 rand__wyrand__WyRandRNG_u64(rand__wyrand__WyRandRNG* rng) {
	{ // Unsafe block
		u64 seed1 = rng->state;
		seed1 += _const_rand__wyrand__wyp0;
		rng->state = seed1;
		return hash__wymum((seed1 ^ _const_rand__wyrand__wyp1), seed1);
	}
	return 0;
}

// Attr: [inline]
inline u32 rand__wyrand__WyRandRNG_u32n(rand__wyrand__WyRandRNG* rng, u32 max) {
	if (max == 0) {
		eprintln(tos_lit("max must be positive integer"));
		v_exit(1);
	}
	int bit_len = math__bits__len_32(max);
	if (bit_len == 32) {
		for (;;) {
			u32 value = rand__wyrand__WyRandRNG_u32(rng);
			if (value < max) {
				return value;
			}
		}
	} else {
		u32 mask = (((u32)(1U)) << (bit_len + 1)) - 1;
		for (;;) {
			u32 value = (rand__wyrand__WyRandRNG_u32(rng) & mask);
			if (value < max) {
				return value;
			}
		}
	}
	return ((u32)(0U));
}

// Attr: [inline]
inline u64 rand__wyrand__WyRandRNG_u64n(rand__wyrand__WyRandRNG* rng, u64 max) {
	if (max == 0) {
		eprintln(tos_lit("max must be positive integer"));
		v_exit(1);
	}
	int bit_len = math__bits__len_64(max);
	if (bit_len == 64) {
		for (;;) {
			u64 value = rand__wyrand__WyRandRNG_u64(rng);
			if (value < max) {
				return value;
			}
		}
	} else {
		u64 mask = (((u64)(1U)) << (bit_len + 1)) - 1;
		for (;;) {
			u64 value = (rand__wyrand__WyRandRNG_u64(rng) & mask);
			if (value < max) {
				return value;
			}
		}
	}
	return ((u64)(0U));
}

// Attr: [inline]
inline u32 rand__wyrand__WyRandRNG_u32_in_range(rand__wyrand__WyRandRNG* rng, u32 min, u32 max) {
	if (max <= min) {
		eprintln(tos_lit("max must be greater than min"));
		v_exit(1);
	}
	return min + rand__wyrand__WyRandRNG_u32n(rng, max - min);
}

// Attr: [inline]
inline u64 rand__wyrand__WyRandRNG_u64_in_range(rand__wyrand__WyRandRNG* rng, u64 min, u64 max) {
	if (max <= min) {
		eprintln(tos_lit("max must be greater than min"));
		v_exit(1);
	}
	return min + rand__wyrand__WyRandRNG_u64n(rng, max - min);
}

// Attr: [inline]
inline int rand__wyrand__WyRandRNG_int(rand__wyrand__WyRandRNG* rng) {
	return ((int)(rand__wyrand__WyRandRNG_u32(rng)));
}

// Attr: [inline]
inline i64 rand__wyrand__WyRandRNG_i64(rand__wyrand__WyRandRNG* rng) {
	return ((i64)(rand__wyrand__WyRandRNG_u64(rng)));
}

// Attr: [inline]
inline int rand__wyrand__WyRandRNG_int31(rand__wyrand__WyRandRNG* rng) {
	return ((int)((rand__wyrand__WyRandRNG_u32(rng) & _const_rand__util__u31_mask)));
}

// Attr: [inline]
inline i64 rand__wyrand__WyRandRNG_int63(rand__wyrand__WyRandRNG* rng) {
	return ((i64)((rand__wyrand__WyRandRNG_u64(rng) & _const_rand__util__u63_mask)));
}

// Attr: [inline]
inline int rand__wyrand__WyRandRNG_intn(rand__wyrand__WyRandRNG* rng, int max) {
	if (max <= 0) {
		eprintln(tos_lit("max has to be positive."));
		v_exit(1);
	}
	return ((int)(rand__wyrand__WyRandRNG_u32n(rng, ((u32)(max)))));
}

// Attr: [inline]
inline i64 rand__wyrand__WyRandRNG_i64n(rand__wyrand__WyRandRNG* rng, i64 max) {
	if (max <= 0) {
		eprintln(tos_lit("max has to be positive."));
		v_exit(1);
	}
	return ((i64)(rand__wyrand__WyRandRNG_u64n(rng, ((u64)(max)))));
}

// Attr: [inline]
inline int rand__wyrand__WyRandRNG_int_in_range(rand__wyrand__WyRandRNG* rng, int min, int max) {
	if (max <= min) {
		eprintln(tos_lit("max must be greater than min"));
		v_exit(1);
	}
	return min + rand__wyrand__WyRandRNG_intn(rng, max - min);
}

// Attr: [inline]
inline i64 rand__wyrand__WyRandRNG_i64_in_range(rand__wyrand__WyRandRNG* rng, i64 min, i64 max) {
	if (max <= min) {
		eprintln(tos_lit("max must be greater than min"));
		v_exit(1);
	}
	return min + rand__wyrand__WyRandRNG_i64n(rng, max - min);
}

// Attr: [inline]
inline f32 rand__wyrand__WyRandRNG_f32(rand__wyrand__WyRandRNG* rng) {
	return ((f32)(rand__wyrand__WyRandRNG_u32(rng))) / _const_rand__util__max_u32_as_f32;
}

// Attr: [inline]
inline f64 rand__wyrand__WyRandRNG_f64(rand__wyrand__WyRandRNG* rng) {
	return ((f64)(rand__wyrand__WyRandRNG_u64(rng))) / _const_rand__util__max_u64_as_f64;
}

// Attr: [inline]
inline f32 rand__wyrand__WyRandRNG_f32n(rand__wyrand__WyRandRNG* rng, f32 max) {
	if (max <= 0) {
		eprintln(tos_lit("max has to be positive."));
		v_exit(1);
	}
	return rand__wyrand__WyRandRNG_f32(rng) * max;
}

// Attr: [inline]
inline f64 rand__wyrand__WyRandRNG_f64n(rand__wyrand__WyRandRNG* rng, f64 max) {
	if (max <= 0) {
		eprintln(tos_lit("max has to be positive."));
		v_exit(1);
	}
	return rand__wyrand__WyRandRNG_f64(rng) * max;
}

// Attr: [inline]
inline f32 rand__wyrand__WyRandRNG_f32_in_range(rand__wyrand__WyRandRNG* rng, f32 min, f32 max) {
	if (max <= min) {
		eprintln(tos_lit("max must be greater than min"));
		v_exit(1);
	}
	return min + rand__wyrand__WyRandRNG_f32n(rng, max - min);
}

// Attr: [inline]
inline f64 rand__wyrand__WyRandRNG_f64_in_range(rand__wyrand__WyRandRNG* rng, f64 min, f64 max) {
	if (max <= min) {
		eprintln(tos_lit("max must be greater than min"));
		v_exit(1);
	}
	return min + rand__wyrand__WyRandRNG_f64n(rng, max - min);
}

static void rand__init() {
	default_rng = rand__new_default((rand__PRNGConfigStruct){.seed = rand__util__time_seed_array(2),});
}

rand__wyrand__WyRandRNG* rand__new_default(rand__PRNGConfigStruct config) {
	rand__wyrand__WyRandRNG* rng = (rand__wyrand__WyRandRNG*)memdup(&(rand__wyrand__WyRandRNG){.state = rand__util__time_seed_64(),.has_extra = 0,.extra = 0,}, sizeof(rand__wyrand__WyRandRNG));
	rand__wyrand__WyRandRNG_seed(rng, config.seed);
	return rng;
}

void rand__seed(array_u32 seed) {
	rand__wyrand__WyRandRNG_seed(default_rng, seed);
}

u32 rand__u32() {
	return rand__wyrand__WyRandRNG_u32(default_rng);
}

u64 rand__u64() {
	return rand__wyrand__WyRandRNG_u64(default_rng);
}

u32 rand__u32n(u32 max) {
	return rand__wyrand__WyRandRNG_u32n(default_rng, max);
}

u64 rand__u64n(u64 max) {
	return rand__wyrand__WyRandRNG_u64n(default_rng, max);
}

u32 rand__u32_in_range(u32 min, u32 max) {
	return rand__wyrand__WyRandRNG_u32_in_range(default_rng, min, max);
}

u64 rand__u64_in_range(u64 min, u64 max) {
	return rand__wyrand__WyRandRNG_u64_in_range(default_rng, min, max);
}

int rand__int() {
	return rand__wyrand__WyRandRNG_int(default_rng);
}

int rand__intn(int max) {
	return rand__wyrand__WyRandRNG_intn(default_rng, max);
}

int rand__int_in_range(int min, int max) {
	return rand__wyrand__WyRandRNG_int_in_range(default_rng, min, max);
}

int rand__int31() {
	return rand__wyrand__WyRandRNG_int31(default_rng);
}

i64 rand__i64() {
	return rand__wyrand__WyRandRNG_i64(default_rng);
}

i64 rand__i64n(i64 max) {
	return rand__wyrand__WyRandRNG_i64n(default_rng, max);
}

i64 rand__i64_in_range(i64 min, i64 max) {
	return rand__wyrand__WyRandRNG_i64_in_range(default_rng, min, max);
}

i64 rand__int63() {
	return rand__wyrand__WyRandRNG_int63(default_rng);
}

f32 rand__f32() {
	return rand__wyrand__WyRandRNG_f32(default_rng);
}

f64 rand__f64() {
	return rand__wyrand__WyRandRNG_f64(default_rng);
}

f32 rand__f32n(f32 max) {
	return rand__wyrand__WyRandRNG_f32n(default_rng, max);
}

f64 rand__f64n(f64 max) {
	return rand__wyrand__WyRandRNG_f64n(default_rng, max);
}

f32 rand__f32_in_range(f32 min, f32 max) {
	return rand__wyrand__WyRandRNG_f32_in_range(default_rng, min, max);
}

f64 rand__f64_in_range(f64 min, f64 max) {
	return rand__wyrand__WyRandRNG_f64_in_range(default_rng, min, max);
}

string rand__string(int len) {
	byteptr buf = v_malloc(len);
	for (int i = 0; i < len; ++i) {
		{ // Unsafe block
			buf[i] = string_at(_const_rand__chars, rand__intn(_const_rand__chars.len));
		}
	}
	return byteptr_vstring_with_len(buf, len);
}

string rand__uuid_v4() {
	int buflen = 36;
	byteptr buf = v_malloc(37);
	int i_buf = 0;
	u64 x = ((u64)(0U));
	byte d = ((byte)(0));
	for (;;) {
		if (!(i_buf < buflen)) break;
		int c = 0;
		x = rand__wyrand__WyRandRNG_u64(default_rng);
		x &= 0x0F0F0F0F0F0F0F0F;
		x += 0x3030303030303030;
		for (;;) {
			if (!(c < 8 && i_buf < buflen)) break;
			d = ((byte)(x));
			{ // Unsafe block
				buf[i_buf] = (d > 0x39 ? (d + 0x27) : (d));
			}
			i_buf++;
			c++;
			x = x >> 8;
		}
	}
	x = x >> 8;
	d = ((byte)(x));
	{ // Unsafe block
		buf[19] = (d > 0x39 ? (d + 0x27) : (d));
		buf[8] = '-';
		buf[13] = '-';
		buf[18] = '-';
		buf[23] = '-';
		buf[14] = '4';
		buf[buflen] = 0;
	}
	return byteptr_vstring_with_len(buf, buflen);
}

string rand__ulid() {
	return rand__ulid_at_millisecond(time__Time_unix_time_milli(time__utc()));
}

string rand__ulid_at_millisecond(u64 unix_time_milli) {
	int buflen = 26;
	byteptr buf = v_malloc(27);
	u64 t = unix_time_milli;
	int i = 9;
	for (;;) {
		if (!(i >= 0)) break;
		{ // Unsafe block
			buf[i] = string_at(_const_rand__ulid_encoding, (t & 0x1F));
		}
		t = t >> 5;
		i--;
	}
	u64 x = rand__wyrand__WyRandRNG_u64(default_rng);
	i = 10;
	for (;;) {
		if (!(i < 19)) break;
		{ // Unsafe block
			buf[i] = string_at(_const_rand__ulid_encoding, (x & 0x1F));
		}
		x = x >> 5;
		i++;
	}
	x = rand__wyrand__WyRandRNG_u64(default_rng);
	for (;;) {
		if (!(i < 26)) break;
		{ // Unsafe block
			buf[i] = string_at(_const_rand__ulid_encoding, (x & 0x1F));
		}
		x = x >> 5;
		i++;
	}
	{ // Unsafe block
		buf[26] = 0;
	}
	return byteptr_vstring_with_len(buf, buflen);
}

#if defined(__linux__)
#endif

static sync__Channel* sync__new_channel_st(u32 n, u32 st) {
	return (sync__Channel*)memdup(&(sync__Channel){.writesem = sync__new_semaphore_init((n > 0 ? (n) : (1))),
		.readsem = sync__new_semaphore_init((n > 0 ? (((u32)(0U))) : (1))),
		.writesem_im = sync__new_semaphore(),
		.readsem_im = sync__new_semaphore(),
		.ringbuf = (n > 0 ? (v_malloc(((int)(n * st)))) : (((byteptr)(0)))),
		.statusbuf = (n > 0 ? (vcalloc(((int)(n * 2)))) : (((byteptr)(0)))),
		.objsize = st,
		.write_adr = 0,
		.read_adr = 0,
		.adr_read = 0,
		.adr_written = 0,
		.write_free = n,
		.read_avail = 0,
		.buf_elem_write_idx = 0,
		.buf_elem_read_idx = 0,
		.write_subscriber = 0,
		.read_subscriber = 0,
		.write_sub_mtx = 0,
		.read_sub_mtx = 0,
		.closed = 0,
		.cap = n,
	}, sizeof(sync__Channel));
}

void sync__Channel_close(sync__Channel* ch) {
	atomic_store_u16(&ch->closed, 1);
	voidptr nulladr = ((voidptr)(0));
	for (;;) {
		if (!(!atomic_compare_exchange_weak_ptr(&ch->adr_written, &nulladr, ((voidptr)(-1))))) break;
		nulladr = ((voidptr)(0));
	}
	sync__Semaphore_post(ch->readsem_im);
	sync__Semaphore_post(ch->readsem);
	u16 null16 = ((u16)(0U));
	for (;;) {
		if (!(!atomic_compare_exchange_weak_u16(&ch->read_sub_mtx, &null16, ((u16)(1U))))) break;
		null16 = ((u16)(0U));
	}
	if (ch->read_subscriber != ((voidptr)(0))) {
		sync__Semaphore_post(ch->read_subscriber->sem);
	}
	atomic_store_u16(&ch->read_sub_mtx, ((u16)(0U)));
	null16 = ((u16)(0U));
	for (;;) {
		if (!(!atomic_compare_exchange_weak_u16(&ch->write_sub_mtx, &null16, ((u16)(1U))))) break;
		null16 = ((u16)(0U));
	}
	if (ch->write_subscriber != ((voidptr)(0))) {
		sync__Semaphore_post(ch->write_subscriber->sem);
	}
	atomic_store_u16(&ch->write_sub_mtx, ((u16)(0U)));
}

// Attr: [inline]
inline int sync__Channel_len(sync__Channel* ch) {
	return ((int)(atomic_load_u32(&ch->read_avail)));
}

// Attr: [inline]
inline void sync__Channel_push(sync__Channel* ch, voidptr src) {
	if (sync__Channel_try_push_priv(ch, src, false) == ChanState_closed) {
		v_panic(tos_lit("push on closed channel"));
	}
}

// Attr: [inline]
inline ChanState sync__Channel_try_push(sync__Channel* ch, voidptr src) {
	return sync__Channel_try_push_priv(ch, src, true);
}

static ChanState sync__Channel_try_push_priv(sync__Channel* ch, voidptr src, bool no_block) {
	if (atomic_load_u16(&ch->closed) != 0) {
		return ChanState_closed;
	}
	multi_return_any_int_any_int mr_5172 = (no_block ? ((multi_return_any_int_any_int){.arg0=1,.arg1=1}) : ((multi_return_any_int_any_int){.arg0=_const_sync__spinloops,.arg1=_const_sync__spinloops_sem}));
	int spinloops_sem_ = mr_5172.arg0;
	int spinloops_ = mr_5172.arg1;
	bool have_swapped = false;
	for (;;) {
		bool got_sem = false;
		voidptr wradr = atomic_load_ptr(&ch->write_adr);
		for (;;) {
			if (!(wradr != NULL)) break;
			if (atomic_compare_exchange_strong_ptr(&ch->write_adr, &wradr, ((voidptr)(0)))) {
				memcpy(wradr, src, ch->objsize);
				voidptr nulladr = ((voidptr)(0));
				for (;;) {
					if (!(!atomic_compare_exchange_weak_ptr(&ch->adr_written, &nulladr, wradr))) break;
					nulladr = ((voidptr)(0));
				}
				sync__Semaphore_post(ch->readsem_im);
				return ChanState_success;
			}
		}
		if (no_block && ch->cap == 0) {
			return ChanState_not_ready;
		}
		for (int _t314 = 0; _t314 < spinloops_sem_; ++_t314) {
			if (got_sem) {
				break;
			}
			got_sem = sync__Semaphore_try_wait(ch->writesem);
		}
		if (!got_sem) {
			if (no_block) {
				return ChanState_not_ready;
			}
			sync__Semaphore_wait(ch->writesem);
		}
		if (ch->cap == 0) {
			bool read_in_progress = false;
			atomic_store_ptr(&ch->read_adr, src);
			wradr = atomic_load_ptr(&ch->write_adr);
			if (wradr != NULL) {
				voidptr src2 = src;
				if (atomic_compare_exchange_strong_ptr(&ch->read_adr, &src2, ((voidptr)(0)))) {
					sync__Semaphore_post(ch->writesem);
					continue;
				} else {
					read_in_progress = true;
				}
			}
			if (!read_in_progress) {
				u16 null16 = ((u16)(0U));
				for (;;) {
					if (!(!atomic_compare_exchange_weak_u16(&ch->read_sub_mtx, &null16, ((u16)(1U))))) break;
					null16 = ((u16)(0U));
				}
				if (ch->read_subscriber != ((voidptr)(0))) {
					sync__Semaphore_post(ch->read_subscriber->sem);
				}
				atomic_store_u16(&ch->read_sub_mtx, ((u16)(0U)));
			}
			voidptr src2 = src;
			for (u32 sp = ((u32)(0U)); _us32_lt(sp,spinloops_) || read_in_progress; sp++) {
				if (atomic_compare_exchange_strong_ptr(&ch->adr_read, &src2, ((voidptr)(0)))) {
					have_swapped = true;
					read_in_progress = true;
					break;
				}
				src2 = src;
			}
			bool got_im_sem = false;
			for (u32 sp = ((u32)(0U)); _us32_lt(sp,spinloops_sem_) || read_in_progress; sp++) {
				got_im_sem = sync__Semaphore_try_wait(ch->writesem_im);
				if (got_im_sem) {
					break;
				}
			}
			for (;;) {
				if (got_im_sem) {
					got_im_sem = false;
				} else {
					sync__Semaphore_wait(ch->writesem_im);
				}
				if (have_swapped || atomic_compare_exchange_strong_ptr(&ch->adr_read, &src2, ((voidptr)(0)))) {
					sync__Semaphore_post(ch->writesem);
					break;
				} else {
					sync__Semaphore_post(ch->writesem_im);
					if (src2 == ((voidptr)(-1))) {
						sync__Semaphore_post(ch->readsem);
						return ChanState_closed;
					}
					src2 = src;
				}
			}
			return ChanState_success;
		} else {
			bool space_in_queue = false;
			u32 wr_free = atomic_load_u32(&ch->write_free);
			for (;;) {
				if (!(wr_free > 0)) break;
				space_in_queue = atomic_compare_exchange_weak_u32(&ch->write_free, &wr_free, wr_free - 1);
				if (space_in_queue) {
					break;
				}
			}
			if (space_in_queue) {
				u32 wr_idx = atomic_load_u32(&ch->buf_elem_write_idx);
				for (;;) {
					u32 new_wr_idx = wr_idx + 1;
					for (;;) {
						if (!(new_wr_idx >= ch->cap)) break;
						new_wr_idx -= ch->cap;
					}
					if (atomic_compare_exchange_strong_u32(&ch->buf_elem_write_idx, &wr_idx, new_wr_idx)) {
						break;
					}
				}
				byteptr wr_ptr = ch->ringbuf;
				byteptr status_adr = ch->statusbuf;
				{ // Unsafe block
					wr_ptr += wr_idx * ch->objsize;
					status_adr += wr_idx * /*SizeOfType*/ sizeof(u16);
				}
				u16 expected_status = ((u16)(sync__BufferElemStat_unused));
				for (;;) {
					if (!(!atomic_compare_exchange_weak_u16(status_adr, &expected_status, ((u16)(sync__BufferElemStat_writing))))) break;
					expected_status = ((u16)(sync__BufferElemStat_unused));
				}
				memcpy(wr_ptr, src, ch->objsize);
				atomic_store_u16(status_adr, ((u16)(sync__BufferElemStat_written)));
				u32 old_read_avail = atomic_fetch_add_u32(&ch->read_avail, 1);
				sync__Semaphore_post(ch->readsem);
				if (old_read_avail == 0) {
					u16 null16 = ((u16)(0U));
					for (;;) {
						if (!(!atomic_compare_exchange_weak_u16(&ch->read_sub_mtx, &null16, ((u16)(1U))))) break;
						null16 = ((u16)(0U));
					}
					if (ch->read_subscriber != ((voidptr)(0))) {
						sync__Semaphore_post(ch->read_subscriber->sem);
					}
					atomic_store_u16(&ch->read_sub_mtx, ((u16)(0U)));
				}
				return ChanState_success;
			} else {
				if (no_block) {
					return ChanState_not_ready;
				}
				sync__Semaphore_post(ch->writesem);
			}
		}
	}
}

// Attr: [inline]
inline bool sync__Channel_pop(sync__Channel* ch, voidptr dest) {
	return sync__Channel_try_pop_priv(ch, dest, false) == ChanState_success;
}

// Attr: [inline]
inline ChanState sync__Channel_try_pop(sync__Channel* ch, voidptr dest) {
	return sync__Channel_try_pop_priv(ch, dest, true);
}

static ChanState sync__Channel_try_pop_priv(sync__Channel* ch, voidptr dest, bool no_block) {
	multi_return_any_int_any_int mr_9482 = (no_block ? ((multi_return_any_int_any_int){.arg0=1,.arg1=1}) : ((multi_return_any_int_any_int){.arg0=_const_sync__spinloops,.arg1=_const_sync__spinloops_sem}));
	int spinloops_sem_ = mr_9482.arg0;
	int spinloops_ = mr_9482.arg1;
	bool have_swapped = false;
	bool write_in_progress = false;
	for (;;) {
		bool got_sem = false;
		if (ch->cap == 0) {
			voidptr rdadr = atomic_load_ptr(&ch->read_adr);
			for (;;) {
				if (!(rdadr != NULL)) break;
				if (atomic_compare_exchange_strong_ptr(&ch->read_adr, &rdadr, ((voidptr)(0)))) {
					memcpy(dest, rdadr, ch->objsize);
					voidptr nulladr = ((voidptr)(0));
					for (;;) {
						if (!(!atomic_compare_exchange_weak_ptr(&ch->adr_read, &nulladr, rdadr))) break;
						nulladr = ((voidptr)(0));
					}
					sync__Semaphore_post(ch->writesem_im);
					return ChanState_success;
				}
			}
			if (no_block) {
				if (atomic_load_u16(&ch->closed) == 0) {
					return ChanState_not_ready;
				} else {
					return ChanState_closed;
				}
			}
		}
		for (int _t315 = 0; _t315 < spinloops_sem_; ++_t315) {
			if (got_sem) {
				break;
			}
			got_sem = sync__Semaphore_try_wait(ch->readsem);
		}
		if (!got_sem) {
			if (no_block) {
				if (atomic_load_u16(&ch->closed) == 0) {
					return ChanState_not_ready;
				} else {
					return ChanState_closed;
				}
			}
			sync__Semaphore_wait(ch->readsem);
		}
		if (ch->cap > 0) {
			bool obj_in_queue = false;
			u32 rd_avail = atomic_load_u32(&ch->read_avail);
			for (;;) {
				if (!(rd_avail > 0)) break;
				obj_in_queue = atomic_compare_exchange_weak_u32(&ch->read_avail, &rd_avail, rd_avail - 1);
				if (obj_in_queue) {
					break;
				}
			}
			if (obj_in_queue) {
				u32 rd_idx = atomic_load_u32(&ch->buf_elem_read_idx);
				for (;;) {
					u32 new_rd_idx = rd_idx + 1;
					for (;;) {
						if (!(new_rd_idx >= ch->cap)) break;
						new_rd_idx -= ch->cap;
					}
					if (atomic_compare_exchange_weak_u32(&ch->buf_elem_read_idx, &rd_idx, new_rd_idx)) {
						break;
					}
				}
				byteptr rd_ptr = ch->ringbuf;
				byteptr status_adr = ch->statusbuf;
				{ // Unsafe block
					rd_ptr += rd_idx * ch->objsize;
					status_adr += rd_idx * /*SizeOfType*/ sizeof(u16);
				}
				u16 expected_status = ((u16)(sync__BufferElemStat_written));
				for (;;) {
					if (!(!atomic_compare_exchange_weak_u16(status_adr, &expected_status, ((u16)(sync__BufferElemStat_reading))))) break;
					expected_status = ((u16)(sync__BufferElemStat_written));
				}
				memcpy(dest, rd_ptr, ch->objsize);
				atomic_store_u16(status_adr, ((u16)(sync__BufferElemStat_unused)));
				u32 old_write_free = atomic_fetch_add_u32(&ch->write_free, 1);
				sync__Semaphore_post(ch->writesem);
				if (old_write_free == 0) {
					u16 null16 = ((u16)(0U));
					for (;;) {
						if (!(!atomic_compare_exchange_weak_u16(&ch->write_sub_mtx, &null16, ((u16)(1U))))) break;
						null16 = ((u16)(0U));
					}
					if (ch->write_subscriber != ((voidptr)(0))) {
						sync__Semaphore_post(ch->write_subscriber->sem);
					}
					atomic_store_u16(&ch->write_sub_mtx, ((u16)(0U)));
				}
				return ChanState_success;
			}
		}
		atomic_store_ptr(&ch->write_adr, dest);
		if (ch->cap == 0) {
			voidptr rdadr = atomic_load_ptr(&ch->read_adr);
			if (rdadr != NULL) {
				voidptr dest2 = dest;
				if (atomic_compare_exchange_strong_ptr(&ch->write_adr, &dest2, ((voidptr)(0)))) {
					sync__Semaphore_post(ch->readsem);
					continue;
				} else {
					write_in_progress = true;
				}
			}
		}
		if (ch->cap == 0 && !write_in_progress) {
			u16 null16 = ((u16)(0U));
			for (;;) {
				if (!(!atomic_compare_exchange_weak_u16(&ch->write_sub_mtx, &null16, ((u16)(1U))))) break;
				null16 = ((u16)(0U));
			}
			if (ch->write_subscriber != ((voidptr)(0))) {
				sync__Semaphore_post(ch->write_subscriber->sem);
			}
			atomic_store_u16(&ch->write_sub_mtx, ((u16)(0U)));
		}
		voidptr dest2 = dest;
		for (u32 sp = ((u32)(0U)); _us32_lt(sp,spinloops_) || write_in_progress; sp++) {
			if (atomic_compare_exchange_strong_ptr(&ch->adr_written, &dest2, ((voidptr)(0)))) {
				have_swapped = true;
				break;
			} else if (dest2 == ((voidptr)(-1))) {
				sync__Semaphore_post(ch->readsem);
				return ChanState_closed;
			}
			dest2 = dest;
		}
		bool got_im_sem = false;
		for (u32 sp = ((u32)(0U)); _us32_lt(sp,spinloops_sem_) || write_in_progress; sp++) {
			got_im_sem = sync__Semaphore_try_wait(ch->readsem_im);
			if (got_im_sem) {
				break;
			}
		}
		for (;;) {
			if (got_im_sem) {
				got_im_sem = false;
			} else {
				sync__Semaphore_wait(ch->readsem_im);
			}
			if (have_swapped || atomic_compare_exchange_strong_ptr(&ch->adr_written, &dest2, ((voidptr)(0)))) {
				sync__Semaphore_post(ch->readsem);
				break;
			} else {
				sync__Semaphore_post(ch->readsem_im);
				if (dest2 == ((voidptr)(-1))) {
					sync__Semaphore_post(ch->readsem);
					return ChanState_closed;
				}
				dest2 = dest;
			}
		}
		return ChanState_success;
	}
}

int sync__channel_select(array_sync__Channel_ptr* channels, array_sync__Direction dir, array_voidptr* objrefs, time__Duration timeout) {
	// assert
	if (channels->len == dir.len) {} else {
		VAssertMetaInfo v_assert_meta_info__t316;
		memset(&v_assert_meta_info__t316, 0, sizeof(VAssertMetaInfo));
		v_assert_meta_info__t316.fpath = tos_lit("C:\\\\Users\\\\Owner\\\\Documents\\\\Projects\\\\v\\\\vlib\\\\sync\\\\channels.v");
		v_assert_meta_info__t316.line_nr = 504;
		v_assert_meta_info__t316.fn_name = tos_lit("sync.channel_select");
		v_assert_meta_info__t316.src = tos_lit("channels.len == dir.len");
		v_assert_meta_info__t316.op = tos_lit("==");
		v_assert_meta_info__t316.llabel = tos_lit("channels.len");
		v_assert_meta_info__t316.rlabel = tos_lit("dir.len");
		v_assert_meta_info__t316.lvalue = int_str(  channels->len) /* typeof: v.ast.SelectorExpr type: 7 */ ;
		v_assert_meta_info__t316.rvalue = int_str(  dir.len) /* typeof: v.ast.SelectorExpr type: 7 */ ;
		__print_assert_failure(&v_assert_meta_info__t316);
		v_panic(tos_lit("Assertion failed..."));
		exit(1);
	}
	// assert
	if (dir.len == objrefs->len) {} else {
		VAssertMetaInfo v_assert_meta_info__t317;
		memset(&v_assert_meta_info__t317, 0, sizeof(VAssertMetaInfo));
		v_assert_meta_info__t317.fpath = tos_lit("C:\\\\Users\\\\Owner\\\\Documents\\\\Projects\\\\v\\\\vlib\\\\sync\\\\channels.v");
		v_assert_meta_info__t317.line_nr = 505;
		v_assert_meta_info__t317.fn_name = tos_lit("sync.channel_select");
		v_assert_meta_info__t317.src = tos_lit("dir.len == objrefs.len");
		v_assert_meta_info__t317.op = tos_lit("==");
		v_assert_meta_info__t317.llabel = tos_lit("dir.len");
		v_assert_meta_info__t317.rlabel = tos_lit("objrefs.len");
		v_assert_meta_info__t317.lvalue = int_str(  dir.len) /* typeof: v.ast.SelectorExpr type: 7 */ ;
		v_assert_meta_info__t317.rvalue = int_str(  objrefs->len) /* typeof: v.ast.SelectorExpr type: 7 */ ;
		__print_assert_failure(&v_assert_meta_info__t317);
		v_panic(tos_lit("Assertion failed..."));
		exit(1);
	}
	array_sync__Subscription subscr = __new_array_with_default(channels->len, 0, sizeof(sync__Subscription), 0);
	sync__Semaphore sem = sync__new_semaphore();
	// FOR IN array
	array * _t318 = channels;
	for (int i = 0; i < _t318->len; ++i) {
		sync__Channel* ch = ((sync__Channel**)_t318->data)[i];
		if ((*(sync__Direction*)array_get(dir, i)) == sync__Direction_push) {
			u16 null16 = ((u16)(0U));
			for (;;) {
				if (!(!atomic_compare_exchange_weak_u16(&ch->write_sub_mtx, &null16, ((u16)(1U))))) break;
				null16 = ((u16)(0U));
			}
			(*(sync__Subscription*)array_get(subscr, i)).sem = sem;
			(*(sync__Subscription*)array_get(subscr, i)).prev = &ch->write_subscriber;
			(*(sync__Subscription*)array_get(subscr, i)).nxt = atomic_exchange_ptr(&ch->write_subscriber, &(*(sync__Subscription*)array_get(subscr, i)));
			if (((voidptr)((*(sync__Subscription*)array_get(subscr, i)).nxt)) != ((voidptr)(0))) {
				(*(sync__Subscription*)array_get(subscr, i)).nxt->prev = &(*(sync__Subscription*)array_get(subscr, i));
			}
			atomic_store_u16(&ch->write_sub_mtx, ((u16)(0U)));
		} else {
			u16 null16 = ((u16)(0U));
			for (;;) {
				if (!(!atomic_compare_exchange_weak_u16(&ch->read_sub_mtx, &null16, ((u16)(1U))))) break;
				null16 = ((u16)(0U));
			}
			(*(sync__Subscription*)array_get(subscr, i)).sem = sem;
			(*(sync__Subscription*)array_get(subscr, i)).prev = &ch->read_subscriber;
			(*(sync__Subscription*)array_get(subscr, i)).nxt = atomic_exchange_ptr(&ch->read_subscriber, &(*(sync__Subscription*)array_get(subscr, i)));
			if (((voidptr)((*(sync__Subscription*)array_get(subscr, i)).nxt)) != ((voidptr)(0))) {
				(*(sync__Subscription*)array_get(subscr, i)).nxt->prev = &(*(sync__Subscription*)array_get(subscr, i));
			}
			atomic_store_u16(&ch->read_sub_mtx, ((u16)(0U)));
		}
	}
	time__StopWatch stopwatch = (timeout <= 0 ? ((time__StopWatch){.elapsed = 0,.start = 0,.end = 0,}) : (time__new_stopwatch((time__StopWatchOptions){.auto_start = true,})));
	int event_idx = -1;
	for (;;) {
		u32 rnd = rand__u32_in_range(0, ((u32)(channels->len)));
		int num_closed = 0;
		// FOR IN array
		array * _t319 = channels;
		for (int j = 0; j < _t319->len; ++j) {
			int i = j + ((int)(rnd));
			if (i >= channels->len) {
				i -= channels->len;
			}
			if ((*(sync__Direction*)array_get(dir, i)) == sync__Direction_push) {
				ChanState stat = sync__Channel_try_push_priv((*(sync__Channel**)array_get(*channels, i)), (*(voidptr*)array_get(*objrefs, i)), true);
				if (stat == ChanState_success) {
					event_idx = i;
					goto restore;
				} else if (stat == ChanState_closed) {
					num_closed++;
				}
			} else {
				ChanState stat = sync__Channel_try_pop_priv((*(sync__Channel**)array_get(*channels, i)), (*(voidptr*)array_get(*objrefs, i)), true);
				if (stat == ChanState_success) {
					event_idx = i;
					goto restore;
				} else if (stat == ChanState_closed) {
					num_closed++;
				}
			}
		}
		if (num_closed == channels->len) {
			event_idx = -2;
			goto restore;
		}
		if (timeout == 0) {
			goto restore;
		} else if (timeout > 0) {
			i64 remaining = timeout - time__StopWatch_elapsed(stopwatch);
			if (!sync__Semaphore_timed_wait(sem, remaining)) {
				goto restore;
			}
		} else {
			sync__Semaphore_wait(sem);
		}
	}
	restore: {}
	// FOR IN array
	array * _t320 = channels;
	for (int i = 0; i < _t320->len; ++i) {
		sync__Channel* ch = ((sync__Channel**)_t320->data)[i];
		if ((*(sync__Direction*)array_get(dir, i)) == sync__Direction_push) {
			u16 null16 = ((u16)(0U));
			for (;;) {
				if (!(!atomic_compare_exchange_weak_u16(&ch->write_sub_mtx, &null16, ((u16)(1U))))) break;
				null16 = ((u16)(0U));
			}
			(*(sync__Subscription*)array_get(subscr, i)).prev = (*(sync__Subscription*)array_get(subscr, i)).nxt;
			if ((*(sync__Subscription*)array_get(subscr, i)).nxt != 0) {
				sync__Semaphore_post((*(sync__Subscription*)array_get(subscr, i)).nxt->sem);
			}
			atomic_store_u16(&ch->write_sub_mtx, ((u16)(0U)));
		} else {
			u16 null16 = ((u16)(0U));
			for (;;) {
				if (!(!atomic_compare_exchange_weak_u16(&ch->read_sub_mtx, &null16, ((u16)(1U))))) break;
				null16 = ((u16)(0U));
			}
			(*(sync__Subscription*)array_get(subscr, i)).prev = (*(sync__Subscription*)array_get(subscr, i)).nxt;
			if ((*(sync__Subscription*)array_get(subscr, i)).nxt != 0) {
				sync__Semaphore_post((*(sync__Subscription*)array_get(subscr, i)).nxt->sem);
			}
			atomic_store_u16(&ch->read_sub_mtx, ((u16)(0U)));
		}
	}
	sync__Semaphore_destroy(sem);
	return event_idx;
}

// TypeDecl
sync__PoolProcessor* sync__new_pool_processor(sync__PoolProcessorConfig context) {
	if (isnil(context.callback)) {
		v_panic(tos_lit("You need to pass a valid callback to new_pool_processor."));
	}
	runtime__nr_jobs();
	sync__PoolProcessor* pool = (sync__PoolProcessor*)memdup(&(sync__PoolProcessor){.thread_cb = ((voidptr)(context.callback)),
		.njobs = context.maxjobs,
		.items = __new_array_with_default(0, 0, sizeof(voidptr), 0),
		.results = __new_array_with_default(0, 0, sizeof(voidptr), 0),
		.ntask = 0,
		.ntask_mtx = sync__new_mutex(),
		.waitgroup = sync__new_waitgroup(),
		.shared_context = ((voidptr)(0)),
		.thread_contexts = __new_array_with_default(0, 0, sizeof(voidptr), 0),
	}, sizeof(sync__PoolProcessor));
	return pool;
}

void sync__PoolProcessor_set_max_jobs(sync__PoolProcessor* pool, int njobs) {
	pool->njobs = njobs;
}

void sync__PoolProcessor_work_on_pointers(sync__PoolProcessor* pool, array_voidptr items) {
	int njobs = runtime__nr_jobs();
	if (pool->njobs > 0) {
		njobs = pool->njobs;
	}
	pool->items = __new_array_with_default(0, 0, sizeof(voidptr), 0);
	pool->results = __new_array_with_default(0, 0, sizeof(voidptr), 0);
	pool->thread_contexts = __new_array_with_default(0, 0, sizeof(voidptr), 0);
	_PUSH_MANY(&pool->items, (items), _t321, array_voidptr);
	pool->results = __new_array_with_default((pool->items.len), 0, sizeof(voidptr), 0);
	_PUSH_MANY(&pool->thread_contexts, (__new_array_with_default((pool->items.len), 0, sizeof(voidptr), 0)), _t322, array_voidptr);
	sync__WaitGroup_add(pool->waitgroup, njobs);
	for (int i = 0; i < njobs; i++) {
		if (njobs > 1) {
			// go
			thread_arg_sync__process_in_thread *arg__t323 = malloc(sizeof(thread_arg_sync__process_in_thread));
			arg__t323->arg1 = pool;
			arg__t323->arg2 = i;
			CreateThread(0,0, (LPTHREAD_START_ROUTINE)sync__process_in_thread_thread_wrapper, arg__t323, 0,0);
			// endgo

		} else {
			sync__process_in_thread(pool, i);
		}
	}
	sync__WaitGroup_wait(pool->waitgroup);
}

static void sync__process_in_thread(sync__PoolProcessor* pool, int task_id) {
	voidptr (*cb) (sync__PoolProcessor* p, int idx, int task_id) = ((sync__ThreadCB)(pool->thread_cb));
	int idx = 0;
	int ilen = pool->items.len;
	for (;;) {
		if (pool->ntask >= ilen) {
			break;
		}
		sync__Mutex_m_lock(pool->ntask_mtx);
		idx = pool->ntask;
		pool->ntask++;
		sync__Mutex_unlock(pool->ntask_mtx);
		if (idx >= ilen) {
			break;
		}
		(*(voidptr*)array_get(pool->results, idx)) = cb(pool, idx, task_id);
	}
	sync__WaitGroup_done(pool->waitgroup);
}

string sync__PoolProcessor_get_string_item(sync__PoolProcessor* pool, int idx) {
	return *(((string*)((*(voidptr*)array_get(pool->items, idx)))));
}

int sync__PoolProcessor_get_int_item(sync__PoolProcessor* pool, int idx) {
	voidptr item = (*(voidptr*)array_get(pool->items, idx));
	return *(((int*)(item)));
}

void sync__PoolProcessor_set_shared_context(sync__PoolProcessor* pool, voidptr context) {
	pool->shared_context = context;
}

voidptr sync__PoolProcessor_get_shared_context(sync__PoolProcessor* pool) {
	return pool->shared_context;
}

void sync__PoolProcessor_set_thread_context(sync__PoolProcessor* pool, int idx, voidptr context) {
	(*(voidptr*)array_get(pool->thread_contexts, idx)) = context;
}

voidptr sync__PoolProcessor_get_thread_context(sync__PoolProcessor* pool, int idx) {
	return (*(voidptr*)array_get(pool->thread_contexts, idx));
}

void sync__PoolProcessor_work_on_items_s(sync__PoolProcessor* pool, array_string items) {
	sync__PoolProcessor_work_on_pointers(pool, array_pointers(items));
}

void sync__PoolProcessor_work_on_items_i(sync__PoolProcessor* pool, array_int items) {
	sync__PoolProcessor_work_on_pointers(pool, array_pointers(items));
}

array_sync__SResult sync__PoolProcessor_get_results_s(sync__PoolProcessor* pool) {
	array_sync__SResult res = __new_array_with_default(0, 0, sizeof(sync__SResult), 0);
	for (int i = 0; i < pool->results.len; ++i) {
		array_push(&res, _MOV((sync__SResult[]){ *(((sync__SResult*)((*(voidptr*)array_get(pool->results, i))))) }));
	}
	return res;
}

array_sync__IResult sync__PoolProcessor_get_results_i(sync__PoolProcessor* pool) {
	array_sync__IResult res = __new_array_with_default(0, 0, sizeof(sync__IResult), 0);
	for (int i = 0; i < pool->results.len; ++i) {
		array_push(&res, _MOV((sync__IResult[]){ *(((sync__IResult*)((*(voidptr*)array_get(pool->results, i))))) }));
	}
	return res;
}

// TypeDecl
// TypeDecl
sync__Mutex* sync__new_mutex() {
	sync__Mutex* sm = (sync__Mutex*)memdup(&(sync__Mutex){.mx = 0,.state = 0,.cycle_wait = 0,.cycle_woken = 0,.reader_sem = 0,.writer_sem = 0,}, sizeof(sync__Mutex));
	{ // Unsafe block
		sync__Mutex* m = sm;
		m->mx = ((sync__MHANDLE)(CreateMutex(0, false, 0)));
		if (isnil((voidptr)&/*qq*/m->mx)) {
			m->state = sync__MutexState_broken;
			return sm;
		}
	}
	return sm;
}

sync__RwMutex* sync__new_rwmutex() {
	sync__RwMutex* m = (sync__RwMutex*)memdup(&(sync__RwMutex){.mx = 0,}, sizeof(sync__RwMutex));
	InitializeSRWLock(&m->mx);
	return m;
}

void sync__Mutex_m_lock(sync__Mutex* m) {
	if (isnil((voidptr)&/*qq*/m->mx)) {
		m->mx = ((sync__MHANDLE)(CreateMutex(0, false, 0)));
		if (isnil((voidptr)&/*qq*/m->mx)) {
			m->state = sync__MutexState_broken;
			return;
		}
	}
	int state = WaitForSingleObject(m->mx, INFINITE);
	if (state == WAIT_ABANDONED) {
		m->state = sync__MutexState_abandoned;
	} else if (state == 0) {
		m->state = sync__MutexState_waiting;
	} else {
		m->state = sync__MutexState_broken;
	}
}

void sync__Mutex_unlock(sync__Mutex* m) {
	if (m->state == sync__MutexState_waiting) {
		if (ReleaseMutex(m->mx)) {
			m->state = sync__MutexState_broken;
			return;
		}
	}
	m->state = sync__MutexState_released;
}

void sync__RwMutex_r_lock(sync__RwMutex* m) {
	AcquireSRWLockShared(&m->mx);
}

void sync__RwMutex_w_lock(sync__RwMutex* m) {
	AcquireSRWLockExclusive(&m->mx);
}

void sync__RwMutex_r_unlock(sync__RwMutex* m) {
	ReleaseSRWLockShared(&m->mx);
}

void sync__RwMutex_w_unlock(sync__RwMutex* m) {
	ReleaseSRWLockExclusive(&m->mx);
}

void sync__Mutex_destroy(sync__Mutex* m) {
	if (m->state == sync__MutexState_waiting) {
		sync__Mutex_unlock(m);
	}
	CloseHandle(m->mx);
	m->state = sync__MutexState_destroyed;
}

// Attr: [inline]
inline sync__Semaphore sync__new_semaphore() {
	return sync__new_semaphore_init(0);
}

sync__Semaphore sync__new_semaphore_init(u32 n) {
	return (sync__Semaphore){.sem = ((sync__SHANDLE)(CreateSemaphore(0, n, INT32_MAX, 0))),};
}

void sync__Semaphore_post(sync__Semaphore s) {
	ReleaseSemaphore(s.sem, 1, 0);
}

void sync__Semaphore_wait(sync__Semaphore s) {
	WaitForSingleObject(s.sem, INFINITE);
}

bool sync__Semaphore_try_wait(sync__Semaphore s) {
	return WaitForSingleObject(s.sem, 0) == 0;
}

bool sync__Semaphore_timed_wait(sync__Semaphore s, time__Duration timeout) {
	return WaitForSingleObject(s.sem, timeout / _const_time__millisecond) == 0;
}

bool sync__Semaphore_destroy(sync__Semaphore s) {
	return CloseHandle(s.sem) != 0;
}

void sync__Waiter_wait(sync__Waiter* w) {
	WaitForSingleObject(w->event, INFINITE);
}

void sync__Waiter_stop(sync__Waiter* w) {
	SetEvent(w->event);
}

sync__Waiter* sync__new_waiter() {
	{ // Unsafe block
		sync__Waiter* sm = (sync__Waiter*)memdup(&(sync__Waiter){.event = ((sync__MHANDLE)(CreateEvent(0, false, true, 0))),}, sizeof(sync__Waiter));
		return sm;
	}
}

sync__WaitGroup* sync__new_waitgroup() {
	return (sync__WaitGroup*)memdup(&(sync__WaitGroup){.task_count = 0,.task_count_mutex = sync__new_mutex(),.wait_blocker = sync__new_waiter(),}, sizeof(sync__WaitGroup));
}

void sync__WaitGroup_add(sync__WaitGroup* wg, int delta) {
	sync__Mutex_m_lock(wg->task_count_mutex);
	if (wg->task_count == 0) {
		sync__Waiter_wait(wg->wait_blocker);
	}
	wg->task_count += delta;
	if (wg->task_count < 0) {
		v_panic(tos_lit("Negative number of jobs in waitgroup"));
	}
	if (wg->task_count == 0) {
		sync__Waiter_stop(wg->wait_blocker);
	}
// Defer begin
sync__Mutex_unlock(wg->task_count_mutex);
// Defer end
}

void sync__WaitGroup_done(sync__WaitGroup* wg) {
	sync__WaitGroup_add(wg, -1);
}

void sync__WaitGroup_wait(sync__WaitGroup* wg) {
	sync__Waiter_wait(wg->wait_blocker);
	sync__Waiter_stop(wg->wait_blocker);
}

static void vsdl__events__init() {
	SDL_InitSubSystem(SDL_INIT_EVENTS);
}

void vsdl__events__add_watcher(chan_vsdl__events__Event ch, varg_vsdl__events__EventCategory flags) {
	vsdl__events__EventSystem* system_ref = ((vsdl__events__EventSystem*)(0));
	{ // Unsafe block
		system_ref = _const_vsdl__events__system;
	}
	if (flags.len == 0) {
		array_push(&(*(array_chan_vsdl__events__Event*)map_get_and_set(&system_ref->channels, tos_lit("all"), &(array_chan_vsdl__events__Event[]){ __new_array(0, 1, sizeof(chan_vsdl__events__Event)) })), _MOV((chan_vsdl__events__Event[]){ ch }));
		return;
	}
	u32 flag = ((u32)(0U));
	// FOR IN cond_type/variadic
	for (int _t327 = 0; _t327 < flags.len; ++_t327) {
		vsdl__events__EventCategory f = flags.args[_t327];
		flag = (flag | f);
	}
	if (flag == vsdl__events__EventCategory_all) {
		array_push(&(*(array_chan_vsdl__events__Event*)map_get_and_set(&system_ref->channels, tos_lit("all"), &(array_chan_vsdl__events__Event[]){ __new_array(0, 1, sizeof(chan_vsdl__events__Event)) })), _MOV((chan_vsdl__events__Event[]){ ch }));
		return;
	}
	int count = 0;
	array_string list = new_array_from_c_array(15, 15, sizeof(string), _MOV((string[15]){
			tos_lit("app"), tos_lit("display"), tos_lit("window"), tos_lit("system"), tos_lit("key"), tos_lit("text"), tos_lit("mouse"), tos_lit("joystick"), tos_lit("controller"), tos_lit("touch"), tos_lit("clipboard"), tos_lit("drop"), tos_lit("audio"), tos_lit("sensor"), tos_lit("renderer")}));
	// FOR IN array
	array _t329 = list;
	for (int i = 0; i < _t329.len; ++i) {
		string v = ((string*)_t329.data)[i];
		if (((flag >> i) & 1) == 1) {
			array_push(&(*(array_chan_vsdl__events__Event*)map_get_and_set(&system_ref->channels, v, &(array_chan_vsdl__events__Event[]){ __new_array(0, 1, sizeof(chan_vsdl__events__Event)) })), _MOV((chan_vsdl__events__Event[]){ ch }));
			count++;
		}
	}
	if (count == 0) {
		array_push(&(*(array_chan_vsdl__events__Event*)map_get_and_set(&system_ref->channels, tos_lit("all"), &(array_chan_vsdl__events__Event[]){ __new_array(0, 1, sizeof(chan_vsdl__events__Event)) })), _MOV((chan_vsdl__events__Event[]){ ch }));
	}
}

chan_vsdl__events__Event vsdl__events__create_watcher(int cap, varg_vsdl__events__EventCategory flags) {
	chan_vsdl__events__Event channel = sync__new_channel_st(cap, sizeof(vsdl__events__Event));
	vsdl__events__add_watcher(channel, flags);
	return channel;
}

u32 vsdl__events__get_delay() {
	vsdl__events__EventSystem* system_ref = ((vsdl__events__EventSystem*)(0));
	{ // Unsafe block
		system_ref = _const_vsdl__events__system;
	}
	return _const_vsdl__events__system->delay;
}

void vsdl__events__loop() {
	for (;;) {
		if (!(vsdl__events__run())) break;
	}
}

int vsdl__events__poll_events(vsdl__events__Event* event) {
	return SDL_PollEvent(event);
}

bool vsdl__events__run() {
	if (!_const_vsdl__events__system->running) {
		return false;
	}
	vsdl__events__EventSystem_run(_const_vsdl__events__system);
	return true;
}

void vsdl__events__set_delay(u32 delay) {
	vsdl__events__EventSystem* system_ref = ((vsdl__events__EventSystem*)(0));
	{ // Unsafe block
		system_ref = _const_vsdl__events__system;
	}
	system_ref->delay = delay;
}

void vsdl__events__quit() {
	vsdl__events__EventSystem* system_ref = ((vsdl__events__EventSystem*)(0));
	{ // Unsafe block
		system_ref = _const_vsdl__events__system;
	}
	system_ref->running = false;
	array_int closed_channels = __new_array_with_default(0, 0, sizeof(int), 0);
	// FOR IN map
	map_string_array_chan_vsdl__events__Event _t335 = system_ref->channels;
	array_string keys__t332 = map_keys(&_t335);
	for (int _t333 = 0; _t333 < keys__t332.len; ++_t333) {
		string _t334 = /*kkkk*/ string_clone( ((string*)keys__t332.data)[_t333] );
		array_chan_vsdl__events__Event channels = (*(array_chan_vsdl__events__Event*)map_get(_t335, _t334, &(array_chan_vsdl__events__Event[]){ __new_array(0, 1, sizeof(chan_vsdl__events__Event)) }));
		// FOR IN array
		array _t336 = channels;
		for (int _t337 = 0; _t337 < _t336.len; ++_t337) {
			chan_vsdl__events__Event channel = ((chan_vsdl__events__Event*)_t336.data)[_t337];
			voidptr ref = ((voidptr)(&channel));
			if (array_int_index(closed_channels, ref) >= 0) {
				continue;
			}
			sync__Channel_close(channel);
			array_push(&closed_channels, _MOV((int[]){ ref }));
		}
	}
	/*for in map cleanup*/
	for (int _t333 = 0; _t333 < keys__t332.len; ++_t333) { string_free(&((string*)keys__t332.data)[_t333]); }
	array_free(&keys__t332);
}

static void vsdl__events__EventSystem_run(vsdl__events__EventSystem* system) {
	vsdl__events__Event* event = (vsdl__events__Event*)memdup(&(vsdl__events__Event){
#ifndef __cplusplus
0
#endif
}, sizeof(vsdl__events__Event));
	vsdl__events__EventSystem* system_ref = ((vsdl__events__EventSystem*)(0));
	{ // Unsafe block
		system_ref = system;
	}
	for (;;) {
		if (!(vsdl__events__poll_events(event) != 0)) break;
		vsdl__events__EventType _t339 = event->type;
		if (_t339 == vsdl__events__EventType_quit) {
			vsdl__events__quit();
		} else if (_t339 == vsdl__events__EventType_app_terminating || _t339 == vsdl__events__EventType_app_lowmemory || _t339 == vsdl__events__EventType_app_willenterbackground || _t339 == vsdl__events__EventType_app_willenterforeground || _t339 == vsdl__events__EventType_app_didenterbackground || _t339 == vsdl__events__EventType_app_didenterforeground) {
			vsdl__events__trigger_event(tos_lit("app"), *event);
		} else if (_t339 == vsdl__events__EventType_displayevent) {
			vsdl__events__trigger_event(tos_lit("display"), *event);
		} else if (_t339 == vsdl__events__EventType_windowevent) {
			vsdl__events__trigger_event(tos_lit("window"), *event);
		} else if (_t339 == vsdl__events__EventType_syswmevent) {
			vsdl__events__trigger_event(tos_lit("system"), *event);
		} else if (_t339 == vsdl__events__EventType_keydown || _t339 == vsdl__events__EventType_keyup || _t339 == vsdl__events__EventType_keymapchanged) {
			vsdl__events__trigger_event(tos_lit("key"), *event);
		} else if (_t339 == vsdl__events__EventType_textediting || _t339 == vsdl__events__EventType_textinput) {
			vsdl__events__trigger_event(tos_lit("text"), *event);
		} else if (_t339 == vsdl__events__EventType_mousemotion || _t339 == vsdl__events__EventType_mousewheel || _t339 == vsdl__events__EventType_mousebuttonup || _t339 == vsdl__events__EventType_mousebuttondown) {
			vsdl__events__trigger_event(tos_lit("mouse"), *event);
		} else if (_t339 == vsdl__events__EventType_joyaxismotion || _t339 == vsdl__events__EventType_joyballmotion || _t339 == vsdl__events__EventType_joyhatmotion || _t339 == vsdl__events__EventType_joybuttondown || _t339 == vsdl__events__EventType_joybuttonup || _t339 == vsdl__events__EventType_joydeviceadded || _t339 == vsdl__events__EventType_joydeviceremoved) {
			vsdl__events__trigger_event(tos_lit("joystick"), *event);
		} else if (_t339 == vsdl__events__EventType_controlleraxismotion || _t339 == vsdl__events__EventType_controlleraxisbuttondown || _t339 == vsdl__events__EventType_controlleraxisbuttonup || _t339 == vsdl__events__EventType_controllerdeviceadded || _t339 == vsdl__events__EventType_controllerdeviceremapped || _t339 == vsdl__events__EventType_controllerdeviceremoved) {
			vsdl__events__trigger_event(tos_lit("controller"), *event);
		} else if (_t339 == vsdl__events__EventType_fingerdown || _t339 == vsdl__events__EventType_fingerup || _t339 == vsdl__events__EventType_fingermotion || _t339 == vsdl__events__EventType_dollargesture || _t339 == vsdl__events__EventType_dollarrecord || _t339 == vsdl__events__EventType_multigesture) {
			vsdl__events__trigger_event(tos_lit("touch"), *event);
		} else if (_t339 == vsdl__events__EventType_clipboardupdate) {
			vsdl__events__trigger_event(tos_lit("clipborad"), *event);
		} else if (_t339 == vsdl__events__EventType_dropfile || _t339 == vsdl__events__EventType_droptext || _t339 == vsdl__events__EventType_dropbegin || _t339 == vsdl__events__EventType_dropcomplete) {
			vsdl__events__trigger_event(tos_lit("drop"), *event);
		} else if (_t339 == vsdl__events__EventType_audiodeviceadded || _t339 == vsdl__events__EventType_audiodeviceremoved) {
			vsdl__events__trigger_event(tos_lit("audio"), *event);
		} else if (_t339 == vsdl__events__EventType_sensorupdate) {
			vsdl__events__trigger_event(tos_lit("sensor"), *event);
		} else if (_t339 == vsdl__events__EventType_render_targets_reset || _t339 == vsdl__events__EventType_render_device_reset) {
			vsdl__events__trigger_event(tos_lit("renderer"), *event);
		} else {
			vsdl__events__trigger_event(tos_lit("all"), *event);
		};
	}
	vsdl__delay(system->delay);
}

static void vsdl__events__trigger_event(string category, vsdl__events__Event event) {
	vsdl__events__EventSystem* system_ref = ((vsdl__events__EventSystem*)(0));
	{ // Unsafe block
		system_ref = _const_vsdl__events__system;
	}
	// FOR IN array
	array _t340 = (*(array_chan_vsdl__events__Event*)map_get(system_ref->channels, category, &(array_chan_vsdl__events__Event[]){ __new_array(0, 1, sizeof(chan_vsdl__events__Event)) }));
	for (int _t341 = 0; _t341 < _t340.len; ++_t341) {
		chan_vsdl__events__Event v = ((chan_vsdl__events__Event*)_t340.data)[_t341];
		sync__Channel_try_push(v, (voidptr)&/*qq*/event);
	}
}

static void main__main() {
	Option_vsdl__gfx__Window _t342 = vsdl__gfx__create_window(tos_lit("VSDL Mixer Demo"), -1, -1, 640, 480, (varg_vsdl__gfx__WindowFlags){.len=1,.args={vsdl__gfx__WindowFlags_shown}});
	if (!_t342.ok) {
		v_panic(_t342.v_error);
	}
 	vsdl__gfx__Window window = *(vsdl__gfx__Window*) _t342.data;
	Option_vsdl__gfx__Surface_ptr _t343 = vsdl__gfx__Window_get_surface(window);
	if (!_t343.ok) {
		v_panic(_t343.v_error);
	}
 	vsdl__gfx__Surface* surface = *(vsdl__gfx__Surface**) _t343.data;
	vsdl__gfx__Surface_fill(surface, (vsdl__gfx__Color){.r = 255,.g = 255,.b = 255,.a = 255,});
	Option_int _t344 = vsdl__mixer__open(44100, vsdl__mixer__Format_default, 2, 1024);
	if (!_t344.ok) {
		v_panic(_t344.v_error);
	};
	vsdl__gfx__Window_update(window);
	vsdl__events__loop();
// Defer begin
vsdl__mixer__close();
vsdl__gfx__Surface_free(surface);
vsdl__gfx__Window_destroy(&window);
vsdl__mixer__quit();
vsdl__quit();
// Defer end
}

void _vinit() {
	builtin_init();
	vinit_string_literals();
	// Initializations for module strings :
	// Initializations for module hash :
	_const_hash__wyp0 = ((u64)(0xa0761d6478bd642fU));
	_const_hash__wyp1 = ((u64)(0xe7037ed1a0b428dbU));
	_const_hash__wyp2 = ((u64)(0x8ebc6af09c88c6e3U));
	_const_hash__wyp3 = ((u64)(0x589965cc75374cc3U));
	_const_hash__wyp4 = ((u64)(0x1d8e4e27c47d124fU));
	// Initializations for module math.bits :
	_const_math__bits__de_bruijn32 = ((u32)(0x077CB531U));
	_const_math__bits__de_bruijn32tab = new_array_from_c_array(32, 32, sizeof(byte), _MOV((byte[32]){
		((byte)(0)), 1, 28, 2, 29, 14, 24, 3, 30, 22, 20, 15, 25, 17, 4, 8, 31, 27, 13, 23, 21, 19, 16, 7, 26, 12, 18, 6, 11, 5, 10, 9}));
	_const_math__bits__de_bruijn64 = ((u64)(0x03f79d71b4ca8b09U));
	_const_math__bits__de_bruijn64tab = new_array_from_c_array(64, 64, sizeof(byte), _MOV((byte[64]){
		((byte)(0)), 1, 56, 2, 57, 49, 28, 3, 61, 58, 42, 50, 38, 29, 17, 4, 62, 47, 59, 36, 45, 43, 51, 22, 53, 39, 33, 30, 24, 18, 12, 5, 63, 55, 48, 27, 60, 41, 37, 16, 46, 35, 44, 21, 52, 32, 23, 11, 54, 26, 40, 15, 34, 20, 31, 10, 25, 14, 19, 9, 13, 8, 7, 6}));
	_const_math__bits__m0 = ((u64)(0x5555555555555555U));
	_const_math__bits__m1 = ((u64)(0x3333333333333333U));
	_const_math__bits__m2 = ((u64)(0x0f0f0f0f0f0f0f0fU));
	_const_math__bits__m3 = ((u64)(0x00ff00ff00ff00ffU));
	_const_math__bits__m4 = ((u64)(0x0000ffff0000ffffU));
	_const_math__bits__max_u32 = ((u32)(4294967295U));
	_const_math__bits__max_u64 = ((u64)(18446744073709551615U));
	_const_math__bits__two32 = ((u64)(0x100000000U));
	_const_math__bits__mask32 = _const_math__bits__two32 - 1;
	_const_math__bits__ntz_8_tab = new_array_from_c_array(256, 256, sizeof(byte), _MOV((byte[256]){
		((byte)(0x08)), 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x06, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x07, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x06, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00}));
	_const_math__bits__pop_8_tab = new_array_from_c_array(256, 256, sizeof(byte), _MOV((byte[256]){
		((byte)(0x00)), 0x01, 0x01, 0x02, 0x01, 0x02, 0x02, 0x03, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x05, 0x06, 0x06, 0x07, 0x06, 0x07, 0x07, 0x08}));
	_const_math__bits__rev_8_tab = new_array_from_c_array(256, 256, sizeof(byte), _MOV((byte[256]){
		((byte)(0x00)), 0x80, 0x40, 0xc0, 0x20, 0xa0, 0x60, 0xe0, 0x10, 0x90, 0x50, 0xd0, 0x30, 0xb0, 0x70, 0xf0, 0x08, 0x88, 0x48, 0xc8, 0x28, 0xa8, 0x68, 0xe8, 0x18, 0x98, 0x58, 0xd8, 0x38, 0xb8, 0x78, 0xf8, 0x04, 0x84, 0x44, 0xc4, 0x24, 0xa4, 0x64, 0xe4, 0x14, 0x94, 0x54, 0xd4, 0x34, 0xb4, 0x74, 0xf4, 0x0c, 0x8c, 0x4c, 0xcc, 0x2c, 0xac, 0x6c, 0xec, 0x1c, 0x9c, 0x5c, 0xdc, 0x3c, 0xbc, 0x7c, 0xfc, 0x02, 0x82, 0x42, 0xc2, 0x22, 0xa2, 0x62, 0xe2, 0x12, 0x92, 0x52, 0xd2, 0x32, 0xb2, 0x72, 0xf2, 0x0a, 0x8a, 0x4a, 0xca, 0x2a, 0xaa, 0x6a, 0xea, 0x1a, 0x9a, 0x5a, 0xda, 0x3a, 0xba, 0x7a, 0xfa, 0x06, 0x86, 0x46, 0xc6, 0x26, 0xa6, 0x66, 0xe6, 0x16, 0x96, 0x56, 0xd6, 0x36, 0xb6, 0x76, 0xf6, 0x0e, 0x8e, 0x4e, 0xce, 0x2e, 0xae, 0x6e, 0xee, 0x1e, 0x9e, 0x5e, 0xde, 0x3e, 0xbe, 0x7e, 0xfe, 0x01, 0x81, 0x41, 0xc1, 0x21, 0xa1, 0x61, 0xe1, 0x11, 0x91, 0x51, 0xd1, 0x31, 0xb1, 0x71, 0xf1, 0x09, 0x89, 0x49, 0xc9, 0x29, 0xa9, 0x69, 0xe9, 0x19, 0x99, 0x59, 0xd9, 0x39, 0xb9, 0x79, 0xf9, 0x05, 0x85, 0x45, 0xc5, 0x25, 0xa5, 0x65, 0xe5, 0x15, 0x95, 0x55, 0xd5, 0x35, 0xb5, 0x75, 0xf5, 0x0d, 0x8d, 0x4d, 0xcd, 0x2d, 0xad, 0x6d, 0xed, 0x1d, 0x9d, 0x5d, 0xdd, 0x3d, 0xbd, 0x7d, 0xfd, 0x03, 0x83, 0x43, 0xc3, 0x23, 0xa3, 0x63, 0xe3, 0x13, 0x93, 0x53, 0xd3, 0x33, 0xb3, 0x73, 0xf3, 0x0b, 0x8b, 0x4b, 0xcb, 0x2b, 0xab, 0x6b, 0xeb, 0x1b, 0x9b, 0x5b, 0xdb, 0x3b, 0xbb, 0x7b, 0xfb, 0x07, 0x87, 0x47, 0xc7, 0x27, 0xa7, 0x67, 0xe7, 0x17, 0x97, 0x57, 0xd7, 0x37, 0xb7, 0x77, 0xf7, 0x0f, 0x8f, 0x4f, 0xcf, 0x2f, 0xaf, 0x6f, 0xef, 0x1f, 0x9f, 0x5f, 0xdf, 0x3f, 0xbf, 0x7f, 0xff}));
	_const_math__bits__len_8_tab = new_array_from_c_array(256, 256, sizeof(byte), _MOV((byte[256]){
		((byte)(0x00)), 0x01, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08}));
	// Initializations for module strconv :
	_const_strconv__double_plus_zero = ((u64)(0x0000000000000000U));
	_const_strconv__double_minus_zero = ((u64)(0x8000000000000000U));
	_const_strconv__double_plus_infinity = ((u64)(0x7FF0000000000000U));
	_const_strconv__double_minus_infinity = ((u64)(0xFFF0000000000000U));
	_const_strconv__c_ten = ((u32)(10U));
	_const_strconv__pos_exp = new_array_from_c_array(309, 309, sizeof(u64), _MOV((u64[309]){
		((u64)(0x3ff0000000000000U)), ((u64)(0x4024000000000000U)), ((u64)(0x4059000000000000U)), ((u64)(0x408f400000000000U)), ((u64)(0x40c3880000000000U)), ((u64)(0x40f86a0000000000U)), ((u64)(0x412e848000000000U)), ((u64)(0x416312d000000000U)), ((u64)(0x4197d78400000000U)), ((u64)(0x41cdcd6500000000U)), ((u64)(0x4202a05f20000000U)), ((u64)(0x42374876e8000000U)), ((u64)(0x426d1a94a2000000U)), ((u64)(0x42a2309ce5400000U)), ((u64)(0x42d6bcc41e900000U)), ((u64)(0x430c6bf526340000U)), ((u64)(0x4341c37937e08000U)), ((u64)(0x4376345785d8a000U)), ((u64)(0x43abc16d674ec800U)), ((u64)(0x43e158e460913d00U)), ((u64)(0x4415af1d78b58c40U)), ((u64)(0x444b1ae4d6e2ef50U)), ((u64)(0x4480f0cf064dd592U)), ((u64)(0x44b52d02c7e14af6U)), ((u64)(0x44ea784379d99db4U)), ((u64)(0x45208b2a2c280291U)), ((u64)(0x4554adf4b7320335U)), ((u64)(0x4589d971e4fe8402U)), ((u64)(0x45c027e72f1f1281U)), ((u64)(0x45f431e0fae6d721U)), ((u64)(0x46293e5939a08ceaU)), ((u64)(0x465f8def8808b024U)), ((u64)(0x4693b8b5b5056e17U)), ((u64)(0x46c8a6e32246c99cU)), ((u64)(0x46fed09bead87c03U)), ((u64)(0x4733426172c74d82U)), ((u64)(0x476812f9cf7920e3U)), ((u64)(0x479e17b84357691bU)), ((u64)(0x47d2ced32a16a1b1U)), ((u64)(0x48078287f49c4a1dU)), ((u64)(0x483d6329f1c35ca5U)), ((u64)(0x48725dfa371a19e7U)), ((u64)(0x48a6f578c4e0a061U)), ((u64)(0x48dcb2d6f618c879U)), ((u64)(0x4911efc659cf7d4cU)), ((u64)(0x49466bb7f0435c9eU)), ((u64)(0x497c06a5ec5433c6U)), ((u64)(0x49b18427b3b4a05cU)), ((u64)(0x49e5e531a0a1c873U)), ((u64)(0x4a1b5e7e08ca3a8fU)), ((u64)(0x4a511b0ec57e649aU)), ((u64)(0x4a8561d276ddfdc0U)), ((u64)(0x4ababa4714957d30U)), ((u64)(0x4af0b46c6cdd6e3eU)), ((u64)(0x4b24e1878814c9ceU)), ((u64)(0x4b5a19e96a19fc41U)), ((u64)(0x4b905031e2503da9U)), ((u64)(0x4bc4643e5ae44d13U)), ((u64)(0x4bf97d4df19d6057U)), ((u64)(0x4c2fdca16e04b86dU)), ((u64)(0x4c63e9e4e4c2f344U)), ((u64)(0x4c98e45e1df3b015U)), ((u64)(0x4ccf1d75a5709c1bU)), ((u64)(0x4d03726987666191U)), ((u64)(0x4d384f03e93ff9f5U)), ((u64)(0x4d6e62c4e38ff872U)), ((u64)(0x4da2fdbb0e39fb47U)), ((u64)(0x4dd7bd29d1c87a19U)), ((u64)(0x4e0dac74463a989fU)), ((u64)(0x4e428bc8abe49f64U)), ((u64)(0x4e772ebad6ddc73dU)), ((u64)(0x4eacfa698c95390cU)), ((u64)(0x4ee21c81f7dd43a7U)), ((u64)(0x4f16a3a275d49491U)), ((u64)(0x4f4c4c8b1349b9b5U)), ((u64)(0x4f81afd6ec0e1411U)), ((u64)(0x4fb61bcca7119916U)), ((u64)(0x4feba2bfd0d5ff5bU)), ((u64)(0x502145b7e285bf99U)), ((u64)(0x50559725db272f7fU)), ((u64)(0x508afcef51f0fb5fU)), ((u64)(0x50c0de1593369d1bU)), ((u64)(0x50f5159af8044462U)), ((u64)(0x512a5b01b605557bU)), ((u64)(0x516078e111c3556dU)), ((u64)(0x5194971956342ac8U)), ((u64)(0x51c9bcdfabc1357aU)), ((u64)(0x5200160bcb58c16cU)), ((u64)(0x52341b8ebe2ef1c7U)), ((u64)(0x526922726dbaae39U)), ((u64)(0x529f6b0f092959c7U)), ((u64)(0x52d3a2e965b9d81dU)), ((u64)(0x53088ba3bf284e24U)), ((u64)(0x533eae8caef261adU)), ((u64)(0x53732d17ed577d0cU)), ((u64)(0x53a7f85de8ad5c4fU)), ((u64)(0x53ddf67562d8b363U)), ((u64)(0x5412ba095dc7701eU)), ((u64)(0x5447688bb5394c25U)), ((u64)(0x547d42aea2879f2eU)), ((u64)(0x54b249ad2594c37dU)), ((u64)(0x54e6dc186ef9f45cU)), ((u64)(0x551c931e8ab87173U)), ((u64)(0x5551dbf316b346e8U)), ((u64)(0x558652efdc6018a2U)), ((u64)(0x55bbe7abd3781ecaU)), ((u64)(0x55f170cb642b133fU)), ((u64)(0x5625ccfe3d35d80eU)), ((u64)(0x565b403dcc834e12U)), ((u64)(0x569108269fd210cbU)), ((u64)(0x56c54a3047c694feU)), ((u64)(0x56fa9cbc59b83a3dU)), ((u64)(0x5730a1f5b8132466U)), ((u64)(0x5764ca732617ed80U)), ((u64)(0x5799fd0fef9de8e0U)), ((u64)(0x57d03e29f5c2b18cU)), ((u64)(0x58044db473335defU)), ((u64)(0x583961219000356bU)), ((u64)(0x586fb969f40042c5U)), ((u64)(0x58a3d3e2388029bbU)), ((u64)(0x58d8c8dac6a0342aU)), ((u64)(0x590efb1178484135U)), ((u64)(0x59435ceaeb2d28c1U)), ((u64)(0x59783425a5f872f1U)), ((u64)(0x59ae412f0f768fadU)), ((u64)(0x59e2e8bd69aa19ccU)), ((u64)(0x5a17a2ecc414a03fU)), ((u64)(0x5a4d8ba7f519c84fU)), ((u64)(0x5a827748f9301d32U)), ((u64)(0x5ab7151b377c247eU)), ((u64)(0x5aecda62055b2d9eU)), ((u64)(0x5b22087d4358fc82U)), ((u64)(0x5b568a9c942f3ba3U)), ((u64)(0x5b8c2d43b93b0a8cU)), ((u64)(0x5bc19c4a53c4e697U)), ((u64)(0x5bf6035ce8b6203dU)), ((u64)(0x5c2b843422e3a84dU)), ((u64)(0x5c6132a095ce4930U)), ((u64)(0x5c957f48bb41db7cU)), ((u64)(0x5ccadf1aea12525bU)), ((u64)(0x5d00cb70d24b7379U)), ((u64)(0x5d34fe4d06de5057U)), ((u64)(0x5d6a3de04895e46dU)), ((u64)(0x5da066ac2d5daec4U)), ((u64)(0x5dd4805738b51a75U)), ((u64)(0x5e09a06d06e26112U)), ((u64)(0x5e400444244d7cabU)), ((u64)(0x5e7405552d60dbd6U)), ((u64)(0x5ea906aa78b912ccU)), ((u64)(0x5edf485516e7577fU)), ((u64)(0x5f138d352e5096afU)), ((u64)(0x5f48708279e4bc5bU)), ((u64)(0x5f7e8ca3185deb72U)), ((u64)(0x5fb317e5ef3ab327U)), ((u64)(0x5fe7dddf6b095ff1U)), ((u64)(0x601dd55745cbb7edU)), ((u64)(0x6052a5568b9f52f4U)), ((u64)(0x60874eac2e8727b1U)), ((u64)(0x60bd22573a28f19dU)), ((u64)(0x60f2357684599702U)), ((u64)(0x6126c2d4256ffcc3U)), ((u64)(0x615c73892ecbfbf4U)), ((u64)(0x6191c835bd3f7d78U)), ((u64)(0x61c63a432c8f5cd6U)), ((u64)(0x61fbc8d3f7b3340cU)), ((u64)(0x62315d847ad00087U)), ((u64)(0x6265b4e5998400a9U)), ((u64)(0x629b221effe500d4U)), ((u64)(0x62d0f5535fef2084U)), ((u64)(0x630532a837eae8a5U)), ((u64)(0x633a7f5245e5a2cfU)), ((u64)(0x63708f936baf85c1U)), ((u64)(0x63a4b378469b6732U)), ((u64)(0x63d9e056584240feU)), ((u64)(0x64102c35f729689fU)), ((u64)(0x6444374374f3c2c6U)), ((u64)(0x647945145230b378U)), ((u64)(0x64af965966bce056U)), ((u64)(0x64e3bdf7e0360c36U)), ((u64)(0x6518ad75d8438f43U)), ((u64)(0x654ed8d34e547314U)), ((u64)(0x6583478410f4c7ecU)), ((u64)(0x65b819651531f9e8U)), ((u64)(0x65ee1fbe5a7e7861U)), ((u64)(0x6622d3d6f88f0b3dU)), ((u64)(0x665788ccb6b2ce0cU)), ((u64)(0x668d6affe45f818fU)), ((u64)(0x66c262dfeebbb0f9U)), ((u64)(0x66f6fb97ea6a9d38U)), ((u64)(0x672cba7de5054486U)), ((u64)(0x6761f48eaf234ad4U)), ((u64)(0x679671b25aec1d89U)), ((u64)(0x67cc0e1ef1a724ebU)), ((u64)(0x680188d357087713U)), ((u64)(0x6835eb082cca94d7U)), ((u64)(0x686b65ca37fd3a0dU)), ((u64)(0x68a11f9e62fe4448U)), ((u64)(0x68d56785fbbdd55aU)), ((u64)(0x690ac1677aad4ab1U)), ((u64)(0x6940b8e0acac4eafU)), ((u64)(0x6974e718d7d7625aU)), ((u64)(0x69aa20df0dcd3af1U)), ((u64)(0x69e0548b68a044d6U)), ((u64)(0x6a1469ae42c8560cU)), ((u64)(0x6a498419d37a6b8fU)), ((u64)(0x6a7fe52048590673U)), ((u64)(0x6ab3ef342d37a408U)), ((u64)(0x6ae8eb0138858d0aU)), ((u64)(0x6b1f25c186a6f04cU)), ((u64)(0x6b537798f4285630U)), ((u64)(0x6b88557f31326bbbU)), ((u64)(0x6bbe6adefd7f06aaU)), ((u64)(0x6bf302cb5e6f642aU)), ((u64)(0x6c27c37e360b3d35U)), ((u64)(0x6c5db45dc38e0c82U)), ((u64)(0x6c9290ba9a38c7d1U)), ((u64)(0x6cc734e940c6f9c6U)), ((u64)(0x6cfd022390f8b837U)), ((u64)(0x6d3221563a9b7323U)), ((u64)(0x6d66a9abc9424febU)), ((u64)(0x6d9c5416bb92e3e6U)), ((u64)(0x6dd1b48e353bce70U)), ((u64)(0x6e0621b1c28ac20cU)), ((u64)(0x6e3baa1e332d728fU)), ((u64)(0x6e714a52dffc6799U)), ((u64)(0x6ea59ce797fb817fU)), ((u64)(0x6edb04217dfa61dfU)), ((u64)(0x6f10e294eebc7d2cU)), ((u64)(0x6f451b3a2a6b9c76U)), ((u64)(0x6f7a6208b5068394U)), ((u64)(0x6fb07d457124123dU)), ((u64)(0x6fe49c96cd6d16ccU)), ((u64)(0x7019c3bc80c85c7fU)), ((u64)(0x70501a55d07d39cfU)), ((u64)(0x708420eb449c8843U)), ((u64)(0x70b9292615c3aa54U)), ((u64)(0x70ef736f9b3494e9U)), ((u64)(0x7123a825c100dd11U)), ((u64)(0x7158922f31411456U)), ((u64)(0x718eb6bafd91596bU)), ((u64)(0x71c33234de7ad7e3U)), ((u64)(0x71f7fec216198ddcU)), ((u64)(0x722dfe729b9ff153U)), ((u64)(0x7262bf07a143f6d4U)), ((u64)(0x72976ec98994f489U)), ((u64)(0x72cd4a7bebfa31abU)), ((u64)(0x73024e8d737c5f0bU)), ((u64)(0x7336e230d05b76cdU)), ((u64)(0x736c9abd04725481U)), ((u64)(0x73a1e0b622c774d0U)), ((u64)(0x73d658e3ab795204U)), ((u64)(0x740bef1c9657a686U)), ((u64)(0x74417571ddf6c814U)), ((u64)(0x7475d2ce55747a18U)), ((u64)(0x74ab4781ead1989eU)), ((u64)(0x74e10cb132c2ff63U)), ((u64)(0x75154fdd7f73bf3cU)), ((u64)(0x754aa3d4df50af0bU)), ((u64)(0x7580a6650b926d67U)), ((u64)(0x75b4cffe4e7708c0U)), ((u64)(0x75ea03fde214caf1U)), ((u64)(0x7620427ead4cfed6U)), ((u64)(0x7654531e58a03e8cU)), ((u64)(0x768967e5eec84e2fU)), ((u64)(0x76bfc1df6a7a61bbU)), ((u64)(0x76f3d92ba28c7d15U)), ((u64)(0x7728cf768b2f9c5aU)), ((u64)(0x775f03542dfb8370U)), ((u64)(0x779362149cbd3226U)), ((u64)(0x77c83a99c3ec7eb0U)), ((u64)(0x77fe494034e79e5cU)), ((u64)(0x7832edc82110c2f9U)), ((u64)(0x7867a93a2954f3b8U)), ((u64)(0x789d9388b3aa30a5U)), ((u64)(0x78d27c35704a5e67U)), ((u64)(0x79071b42cc5cf601U)), ((u64)(0x793ce2137f743382U)), ((u64)(0x79720d4c2fa8a031U)), ((u64)(0x79a6909f3b92c83dU)), ((u64)(0x79dc34c70a777a4dU)), ((u64)(0x7a11a0fc668aac70U)), ((u64)(0x7a46093b802d578cU)), ((u64)(0x7a7b8b8a6038ad6fU)), ((u64)(0x7ab137367c236c65U)), ((u64)(0x7ae585041b2c477fU)), ((u64)(0x7b1ae64521f7595eU)), ((u64)(0x7b50cfeb353a97dbU)), ((u64)(0x7b8503e602893dd2U)), ((u64)(0x7bba44df832b8d46U)), ((u64)(0x7bf06b0bb1fb384cU)), ((u64)(0x7c2485ce9e7a065fU)), ((u64)(0x7c59a742461887f6U)), ((u64)(0x7c9008896bcf54faU)), ((u64)(0x7cc40aabc6c32a38U)), ((u64)(0x7cf90d56b873f4c7U)), ((u64)(0x7d2f50ac6690f1f8U)), ((u64)(0x7d63926bc01a973bU)), ((u64)(0x7d987706b0213d0aU)), ((u64)(0x7dce94c85c298c4cU)), ((u64)(0x7e031cfd3999f7b0U)), ((u64)(0x7e37e43c8800759cU)), ((u64)(0x7e6ddd4baa009303U)), ((u64)(0x7ea2aa4f4a405be2U)), ((u64)(0x7ed754e31cd072daU)), ((u64)(0x7f0d2a1be4048f90U)), ((u64)(0x7f423a516e82d9baU)), ((u64)(0x7f76c8e5ca239029U)), ((u64)(0x7fac7b1f3cac7433U)), ((u64)(0x7fe1ccf385ebc8a0U))}));
	_const_strconv__neg_exp = new_array_from_c_array(324, 324, sizeof(u64), _MOV((u64[324]){
		((u64)(0x3ff0000000000000U)), ((u64)(0x3fb999999999999aU)), ((u64)(0x3f847ae147ae147bU)), ((u64)(0x3f50624dd2f1a9fcU)), ((u64)(0x3f1a36e2eb1c432dU)), ((u64)(0x3ee4f8b588e368f1U)), ((u64)(0x3eb0c6f7a0b5ed8dU)), ((u64)(0x3e7ad7f29abcaf48U)), ((u64)(0x3e45798ee2308c3aU)), ((u64)(0x3e112e0be826d695U)), ((u64)(0x3ddb7cdfd9d7bdbbU)), ((u64)(0x3da5fd7fe1796495U)), ((u64)(0x3d719799812dea11U)), ((u64)(0x3d3c25c268497682U)), ((u64)(0x3d06849b86a12b9bU)), ((u64)(0x3cd203af9ee75616U)), ((u64)(0x3c9cd2b297d889bcU)), ((u64)(0x3c670ef54646d497U)), ((u64)(0x3c32725dd1d243acU)), ((u64)(0x3bfd83c94fb6d2acU)), ((u64)(0x3bc79ca10c924223U)), ((u64)(0x3b92e3b40a0e9b4fU)), ((u64)(0x3b5e392010175ee6U)), ((u64)(0x3b282db34012b251U)), ((u64)(0x3af357c299a88ea7U)), ((u64)(0x3abef2d0f5da7dd9U)), ((u64)(0x3a88c240c4aecb14U)), ((u64)(0x3a53ce9a36f23c10U)), ((u64)(0x3a1fb0f6be506019U)), ((u64)(0x39e95a5efea6b347U)), ((u64)(0x39b4484bfeebc2a0U)), ((u64)(0x398039d665896880U)), ((u64)(0x3949f623d5a8a733U)), ((u64)(0x3914c4e977ba1f5cU)), ((u64)(0x38e09d8792fb4c49U)), ((u64)(0x38aa95a5b7f87a0fU)), ((u64)(0x38754484932d2e72U)), ((u64)(0x3841039d428a8b8fU)), ((u64)(0x380b38fb9daa78e4U)), ((u64)(0x37d5c72fb1552d83U)), ((u64)(0x37a16c262777579cU)), ((u64)(0x376be03d0bf225c7U)), ((u64)(0x37364cfda3281e39U)), ((u64)(0x3701d7314f534b61U)), ((u64)(0x36cc8b8218854567U)), ((u64)(0x3696d601ad376ab9U)), ((u64)(0x366244ce242c5561U)), ((u64)(0x362d3ae36d13bbceU)), ((u64)(0x35f7624f8a762fd8U)), ((u64)(0x35c2b50c6ec4f313U)), ((u64)(0x358dee7a4ad4b81fU)), ((u64)(0x3557f1fb6f10934cU)), ((u64)(0x352327fc58da0f70U)), ((u64)(0x34eea6608e29b24dU)), ((u64)(0x34b8851a0b548ea4U)), ((u64)(0x34839dae6f76d883U)), ((u64)(0x344f62b0b257c0d2U)), ((u64)(0x34191bc08eac9a41U)), ((u64)(0x33e41633a556e1ceU)), ((u64)(0x33b011c2eaabe7d8U)), ((u64)(0x3379b604aaaca626U)), ((u64)(0x3344919d5556eb52U)), ((u64)(0x3310747ddddf22a8U)), ((u64)(0x32da53fc9631d10dU)), ((u64)(0x32a50ffd44f4a73dU)), ((u64)(0x3270d9976a5d5297U)), ((u64)(0x323af5bf109550f2U)), ((u64)(0x32059165a6ddda5bU)), ((u64)(0x31d1411e1f17e1e3U)), ((u64)(0x319b9b6364f30304U)), ((u64)(0x316615e91d8f359dU)), ((u64)(0x3131ab20e472914aU)), ((u64)(0x30fc45016d841baaU)), ((u64)(0x30c69d9abe034955U)), ((u64)(0x309217aefe690777U)), ((u64)(0x305cf2b1970e7258U)), ((u64)(0x3027288e1271f513U)), ((u64)(0x2ff286d80ec190dcU)), ((u64)(0x2fbda48ce468e7c7U)), ((u64)(0x2f87b6d71d20b96cU)), ((u64)(0x2f52f8ac174d6123U)), ((u64)(0x2f1e5aacf2156838U)), ((u64)(0x2ee8488a5b445360U)), ((u64)(0x2eb36d3b7c36a91aU)), ((u64)(0x2e7f152bf9f10e90U)), ((u64)(0x2e48ddbcc7f40ba6U)), ((u64)(0x2e13e497065cd61fU)), ((u64)(0x2ddfd424d6faf031U)), ((u64)(0x2da97683df2f268dU)), ((u64)(0x2d745ecfe5bf520bU)), ((u64)(0x2d404bd984990e6fU)), ((u64)(0x2d0a12f5a0f4e3e5U)), ((u64)(0x2cd4dbf7b3f71cb7U)), ((u64)(0x2ca0aff95cc5b092U)), ((u64)(0x2c6ab328946f80eaU)), ((u64)(0x2c355c2076bf9a55U)), ((u64)(0x2c0116805effaeaaU)), ((u64)(0x2bcb5733cb32b111U)), ((u64)(0x2b95df5ca28ef40dU)), ((u64)(0x2b617f7d4ed8c33eU)), ((u64)(0x2b2bff2ee48e0530U)), ((u64)(0x2af665bf1d3e6a8dU)), ((u64)(0x2ac1eaff4a98553dU)), ((u64)(0x2a8cab3210f3bb95U)), ((u64)(0x2a56ef5b40c2fc77U)), ((u64)(0x2a225915cd68c9f9U)), ((u64)(0x29ed5b561574765bU)), ((u64)(0x29b77c44ddf6c516U)), ((u64)(0x2982c9d0b1923745U)), ((u64)(0x294e0fb44f50586eU)), ((u64)(0x29180c903f7379f2U)), ((u64)(0x28e33d4032c2c7f5U)), ((u64)(0x28aec866b79e0cbaU)), ((u64)(0x2878a0522c7e7095U)), ((u64)(0x2843b374f06526deU)), ((u64)(0x280f8587e7083e30U)), ((u64)(0x27d9379fec069826U)), ((u64)(0x27a42c7ff0054685U)), ((u64)(0x277023998cd10537U)), ((u64)(0x2739d28f47b4d525U)), ((u64)(0x2704a8729fc3ddb7U)), ((u64)(0x26d086c219697e2cU)), ((u64)(0x269a71368f0f3047U)), ((u64)(0x2665275ed8d8f36cU)), ((u64)(0x2630ec4be0ad8f89U)), ((u64)(0x25fb13ac9aaf4c0fU)), ((u64)(0x25c5a956e225d672U)), ((u64)(0x2591544581b7dec2U)), ((u64)(0x255bba08cf8c979dU)), ((u64)(0x25262e6d72d6dfb0U)), ((u64)(0x24f1bebdf578b2f4U)), ((u64)(0x24bc6463225ab7ecU)), ((u64)(0x2486b6b5b5155ff0U)), ((u64)(0x24522bc490dde65aU)), ((u64)(0x241d12d41afca3c3U)), ((u64)(0x23e7424348ca1c9cU)), ((u64)(0x23b29b69070816e3U)), ((u64)(0x237dc574d80cf16bU)), ((u64)(0x2347d12a4670c123U)), ((u64)(0x23130dbb6b8d674fU)), ((u64)(0x22de7c5f127bd87eU)), ((u64)(0x22a8637f41fcad32U)), ((u64)(0x227382cc34ca2428U)), ((u64)(0x223f37ad21436d0cU)), ((u64)(0x2208f9574dcf8a70U)), ((u64)(0x21d3faac3e3fa1f3U)), ((u64)(0x219ff779fd329cb9U)), ((u64)(0x216992c7fdc216faU)), ((u64)(0x2134756ccb01abfbU)), ((u64)(0x21005df0a267bcc9U)), ((u64)(0x20ca2fe76a3f9475U)), ((u64)(0x2094f31f8832dd2aU)), ((u64)(0x2060c27fa028b0efU)), ((u64)(0x202ad0cc33744e4bU)), ((u64)(0x1ff573d68f903ea2U)), ((u64)(0x1fc1297872d9cbb5U)), ((u64)(0x1f8b758d848fac55U)), ((u64)(0x1f55f7a46a0c89ddU)), ((u64)(0x1f2192e9ee706e4bU)), ((u64)(0x1eec1e43171a4a11U)), ((u64)(0x1eb67e9c127b6e74U)), ((u64)(0x1e81fee341fc585dU)), ((u64)(0x1e4ccb0536608d61U)), ((u64)(0x1e1708d0f84d3de7U)), ((u64)(0x1de26d73f9d764b9U)), ((u64)(0x1dad7becc2f23ac2U)), ((u64)(0x1d779657025b6235U)), ((u64)(0x1d42deac01e2b4f7U)), ((u64)(0x1d0e3113363787f2U)), ((u64)(0x1cd8274291c6065bU)), ((u64)(0x1ca3529ba7d19eafU)), ((u64)(0x1c6eea92a61c3118U)), ((u64)(0x1c38bba884e35a7aU)), ((u64)(0x1c03c9539d82aec8U)), ((u64)(0x1bcfa885c8d117a6U)), ((u64)(0x1b99539e3a40dfb8U)), ((u64)(0x1b6442e4fb671960U)), ((u64)(0x1b303583fc527ab3U)), ((u64)(0x1af9ef3993b72ab8U)), ((u64)(0x1ac4bf6142f8eefaU)), ((u64)(0x1a90991a9bfa58c8U)), ((u64)(0x1a5a8e90f9908e0dU)), ((u64)(0x1a253eda614071a4U)), ((u64)(0x19f0ff151a99f483U)), ((u64)(0x19bb31bb5dc320d2U)), ((u64)(0x1985c162b168e70eU)), ((u64)(0x1951678227871f3eU)), ((u64)(0x191bd8d03f3e9864U)), ((u64)(0x18e6470cff6546b6U)), ((u64)(0x18b1d270cc51055fU)), ((u64)(0x187c83e7ad4e6efeU)), ((u64)(0x1846cfec8aa52598U)), ((u64)(0x18123ff06eea847aU)), ((u64)(0x17dd331a4b10d3f6U)), ((u64)(0x17a75c1508da432bU)), ((u64)(0x1772b010d3e1cf56U)), ((u64)(0x173de6815302e556U)), ((u64)(0x1707eb9aa8cf1ddeU)), ((u64)(0x16d322e220a5b17eU)), ((u64)(0x169e9e369aa2b597U)), ((u64)(0x16687e92154ef7acU)), ((u64)(0x16339874ddd8c623U)), ((u64)(0x15ff5a549627a36cU)), ((u64)(0x15c91510781fb5f0U)), ((u64)(0x159410d9f9b2f7f3U)), ((u64)(0x15600d7b2e28c65cU)), ((u64)(0x1529af2b7d0e0a2dU)), ((u64)(0x14f48c22ca71a1bdU)), ((u64)(0x14c0701bd527b498U)), ((u64)(0x148a4cf9550c5426U)), ((u64)(0x14550a6110d6a9b8U)), ((u64)(0x1420d51a73deee2dU)), ((u64)(0x13eaee90b964b047U)), ((u64)(0x13b58ba6fab6f36cU)), ((u64)(0x13813c85955f2923U)), ((u64)(0x134b9408eefea839U)), ((u64)(0x1316100725988694U)), ((u64)(0x12e1a66c1e139eddU)), ((u64)(0x12ac3d79c9b8fe2eU)), ((u64)(0x12769794a160cb58U)), ((u64)(0x124212dd4de70913U)), ((u64)(0x120ceafbafd80e85U)), ((u64)(0x11d72262f3133ed1U)), ((u64)(0x11a281e8c275cbdaU)), ((u64)(0x116d9ca79d89462aU)), ((u64)(0x1137b08617a104eeU)), ((u64)(0x1102f39e794d9d8bU)), ((u64)(0x10ce5297287c2f45U)), ((u64)(0x1098421286c9bf6bU)), ((u64)(0x1063680ed23aff89U)), ((u64)(0x102f0ce4839198dbU)), ((u64)(0x0ff8d71d360e13e2U)), ((u64)(0x0fc3df4a91a4dcb5U)), ((u64)(0x0f8fcbaa82a16121U)), ((u64)(0x0f596fbb9bb44db4U)), ((u64)(0x0f245962e2f6a490U)), ((u64)(0x0ef047824f2bb6daU)), ((u64)(0x0eba0c03b1df8af6U)), ((u64)(0x0e84d6695b193bf8U)), ((u64)(0x0e50ab877c142ffaU)), ((u64)(0x0e1aac0bf9b9e65cU)), ((u64)(0x0de5566ffafb1eb0U)), ((u64)(0x0db111f32f2f4bc0U)), ((u64)(0x0d7b4feb7eb212cdU)), ((u64)(0x0d45d98932280f0aU)), ((u64)(0x0d117ad428200c08U)), ((u64)(0x0cdbf7b9d9cce00dU)), ((u64)(0x0ca65fc7e170b33eU)), ((u64)(0x0c71e6398126f5cbU)), ((u64)(0x0c3ca38f350b22dfU)), ((u64)(0x0c06e93f5da2824cU)), ((u64)(0x0bd25432b14ecea3U)), ((u64)(0x0b9d53844ee47dd1U)), ((u64)(0x0b677603725064a8U)), ((u64)(0x0b32c4cf8ea6b6ecU)), ((u64)(0x0afe07b27dd78b14U)), ((u64)(0x0ac8062864ac6f43U)), ((u64)(0x0a9338205089f29cU)), ((u64)(0x0a5ec033b40fea93U)), ((u64)(0x0a2899c2f6732210U)), ((u64)(0x09f3ae3591f5b4d9U)), ((u64)(0x09bf7d228322baf5U)), ((u64)(0x098930e868e89591U)), ((u64)(0x0954272053ed4474U)), ((u64)(0x09201f4d0ff10390U)), ((u64)(0x08e9cbae7fe805b3U)), ((u64)(0x08b4a2f1ffecd15cU)), ((u64)(0x0880825b3323dab0U)), ((u64)(0x084a6a2b85062ab3U)), ((u64)(0x081521bc6a6b555cU)), ((u64)(0x07e0e7c9eebc444aU)), ((u64)(0x07ab0c764ac6d3a9U)), ((u64)(0x0775a391d56bdc87U)), ((u64)(0x07414fa7ddefe3a0U)), ((u64)(0x070bb2a62fe638ffU)), ((u64)(0x06d62884f31e93ffU)), ((u64)(0x06a1ba03f5b21000U)), ((u64)(0x066c5cd322b67fffU)), ((u64)(0x0636b0a8e891ffffU)), ((u64)(0x060226ed86db3333U)), ((u64)(0x05cd0b15a491eb84U)), ((u64)(0x05973c115074bc6aU)), ((u64)(0x05629674405d6388U)), ((u64)(0x052dbd86cd6238d9U)), ((u64)(0x04f7cad23de82d7bU)), ((u64)(0x04c308a831868ac9U)), ((u64)(0x048e74404f3daadbU)), ((u64)(0x04585d003f6488afU)), ((u64)(0x04237d99cc506d59U)), ((u64)(0x03ef2f5c7a1a488eU)), ((u64)(0x03b8f2b061aea072U)), ((u64)(0x0383f559e7bee6c1U)), ((u64)(0x034feef63f97d79cU)), ((u64)(0x03198bf832dfdfb0U)), ((u64)(0x02e46ff9c24cb2f3U)), ((u64)(0x02b059949b708f29U)), ((u64)(0x027a28edc580e50eU)), ((u64)(0x0244ed8b04671da5U)), ((u64)(0x0210be08d0527e1dU)), ((u64)(0x01dac9a7b3b7302fU)), ((u64)(0x01a56e1fc2f8f359U)), ((u64)(0x017124e63593f5e1U)), ((u64)(0x013b6e3d22865634U)), ((u64)(0x0105f1ca820511c3U)), ((u64)(0x00d18e3b9b374169U)), ((u64)(0x009c16c5c5253575U)), ((u64)(0x0066789e3750f791U)), ((u64)(0x0031fa182c40c60dU)), ((u64)(0x000730d67819e8d2U)), ((u64)(0x0000b8157268fdafU)), ((u64)(0x000012688b70e62bU)), ((u64)(0x000001d74124e3d1U)), ((u64)(0x0000002f201d49fbU)), ((u64)(0x00000004b6695433U)), ((u64)(0x0000000078a42205U)), ((u64)(0x000000000c1069cdU)), ((u64)(0x000000000134d761U)), ((u64)(0x00000000001ee257U)), ((u64)(0x00000000000316a2U)), ((u64)(0x0000000000004f10U)), ((u64)(0x00000000000007e8U)), ((u64)(0x00000000000000caU)), ((u64)(0x0000000000000014U)), ((u64)(0x0000000000000002U))}));
	_const_strconv__max_u64 = ((u64)(UINT64_MAX));
	_const_strconv__ten_pow_table_32 = new_array_from_c_array(12, 12, sizeof(u32), _MOV((u32[12]){
		((u32)(1U)), ((u32)(10U)), ((u32)(100U)), ((u32)(1000U)), ((u32)(10000U)), ((u32)(100000U)), ((u32)(1000000U)), ((u32)(10000000U)), ((u32)(100000000U)), ((u32)(1000000000U)), ((u32)(10000000000U)), ((u32)(100000000000U))}));
	_const_strconv__mantbits32 = ((u32)(23U));
	_const_strconv__expbits32 = ((u32)(8U));
	_const_strconv__ten_pow_table_64 = new_array_from_c_array(20, 20, sizeof(u64), _MOV((u64[20]){
		((u64)(1U)), ((u64)(10U)), ((u64)(100U)), ((u64)(1000U)), ((u64)(10000U)), ((u64)(100000U)), ((u64)(1000000U)), ((u64)(10000000U)), ((u64)(100000000U)), ((u64)(1000000000U)), ((u64)(10000000000U)), ((u64)(100000000000U)), ((u64)(1000000000000U)), ((u64)(10000000000000U)), ((u64)(100000000000000U)), ((u64)(1000000000000000U)), ((u64)(10000000000000000U)), ((u64)(100000000000000000U)), ((u64)(1000000000000000000U)), ((u64)(10000000000000000000U))}));
	_const_strconv__mantbits64 = ((u32)(52U));
	_const_strconv__expbits64 = ((u32)(11U));
	_const_strconv__dec_round = new_array_from_c_array(20, 20, sizeof(f64), _MOV((f64[20]){
		((f64)(0.44)), 0.044, 0.0044, 0.00044, 0.000044, 0.0000044, 0.00000044, 0.000000044, 0.0000000044, 0.00000000044, 0.000000000044, 0.0000000000044, 0.00000000000044, 0.000000000000044, 0.0000000000000044, 0.00000000000000044, 0.000000000000000044, 0.0000000000000000044, 0.00000000000000000044, 0.000000000000000000044}));
	_const_strconv__powers_of_10 = new_array_from_c_array(18, 18, sizeof(u64), _MOV((u64[18]){
		((u64)(1e0)), ((u64)(1e1)), ((u64)(1e2)), ((u64)(1e3)), ((u64)(1e4)), ((u64)(1e5)), ((u64)(1e6)), ((u64)(1e7)), ((u64)(1e8)), ((u64)(1e9)), ((u64)(1e10)), ((u64)(1e11)), ((u64)(1e12)), ((u64)(1e13)), ((u64)(1e14)), ((u64)(1e15)), ((u64)(1e16)), ((u64)(1e17))}));
	_const_strconv__pow5_split_32 = new_array_from_c_array(47, 47, sizeof(u64), _MOV((u64[47]){
		((u64)(1152921504606846976U)), ((u64)(1441151880758558720U)), ((u64)(1801439850948198400U)), ((u64)(2251799813685248000U)), ((u64)(1407374883553280000U)), ((u64)(1759218604441600000U)), ((u64)(2199023255552000000U)), ((u64)(1374389534720000000U)), ((u64)(1717986918400000000U)), ((u64)(2147483648000000000U)), ((u64)(1342177280000000000U)), ((u64)(1677721600000000000U)), ((u64)(2097152000000000000U)), ((u64)(1310720000000000000U)), ((u64)(1638400000000000000U)), ((u64)(2048000000000000000U)), ((u64)(1280000000000000000U)), ((u64)(1600000000000000000U)), ((u64)(2000000000000000000U)), ((u64)(1250000000000000000U)), ((u64)(1562500000000000000U)), ((u64)(1953125000000000000U)), ((u64)(1220703125000000000U)), ((u64)(1525878906250000000U)), ((u64)(1907348632812500000U)), ((u64)(1192092895507812500U)), ((u64)(1490116119384765625U)), ((u64)(1862645149230957031U)), ((u64)(1164153218269348144U)), ((u64)(1455191522836685180U)), ((u64)(1818989403545856475U)), ((u64)(2273736754432320594U)), ((u64)(1421085471520200371U)), ((u64)(1776356839400250464U)), ((u64)(2220446049250313080U)), ((u64)(1387778780781445675U)), ((u64)(1734723475976807094U)), ((u64)(2168404344971008868U)), ((u64)(1355252715606880542U)), ((u64)(1694065894508600678U)), ((u64)(2117582368135750847U)), ((u64)(1323488980084844279U)), ((u64)(1654361225106055349U)), ((u64)(2067951531382569187U)), ((u64)(1292469707114105741U)), ((u64)(1615587133892632177U)), ((u64)(2019483917365790221U))}));
	_const_strconv__pow5_inv_split_32 = new_array_from_c_array(31, 31, sizeof(u64), _MOV((u64[31]){
		((u64)(576460752303423489U)), ((u64)(461168601842738791U)), ((u64)(368934881474191033U)), ((u64)(295147905179352826U)), ((u64)(472236648286964522U)), ((u64)(377789318629571618U)), ((u64)(302231454903657294U)), ((u64)(483570327845851670U)), ((u64)(386856262276681336U)), ((u64)(309485009821345069U)), ((u64)(495176015714152110U)), ((u64)(396140812571321688U)), ((u64)(316912650057057351U)), ((u64)(507060240091291761U)), ((u64)(405648192073033409U)), ((u64)(324518553658426727U)), ((u64)(519229685853482763U)), ((u64)(415383748682786211U)), ((u64)(332306998946228969U)), ((u64)(531691198313966350U)), ((u64)(425352958651173080U)), ((u64)(340282366920938464U)), ((u64)(544451787073501542U)), ((u64)(435561429658801234U)), ((u64)(348449143727040987U)), ((u64)(557518629963265579U)), ((u64)(446014903970612463U)), ((u64)(356811923176489971U)), ((u64)(570899077082383953U)), ((u64)(456719261665907162U)), ((u64)(365375409332725730U))}));
	_const_strconv__pow5_split_64 = new_array_from_c_array(326, 326, sizeof(strconv__Uint128), _MOV((strconv__Uint128[326]){
		(strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x0100000000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x0140000000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x0190000000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01f4000000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x0138800000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x0186a00000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01e8480000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01312d0000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x017d784000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01dcd65000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x012a05f200000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x0174876e80000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01d1a94a20000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x012309ce54000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x016bcc41e9000000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01c6bf5263400000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x011c37937e080000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x016345785d8a0000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01bc16d674ec8000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01158e460913d000U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x015af1d78b58c400U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01b1ae4d6e2ef500U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x010f0cf064dd5920U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x0152d02c7e14af68U)),}, (strconv__Uint128){.lo = ((u64)(0x0000000000000000U)),.hi = ((u64)(0x01a784379d99db42U)),}, (strconv__Uint128){.lo = ((u64)(0x4000000000000000U)),.hi = ((u64)(0x0108b2a2c2802909U)),}, (strconv__Uint128){.lo = ((u64)(0x9000000000000000U)),.hi = ((u64)(0x014adf4b7320334bU)),}, (strconv__Uint128){.lo = ((u64)(0x7400000000000000U)),.hi = ((u64)(0x019d971e4fe8401eU)),}, (strconv__Uint128){.lo = ((u64)(0x0880000000000000U)),.hi = ((u64)(0x01027e72f1f12813U)),}, (strconv__Uint128){.lo = ((u64)(0xcaa0000000000000U)),.hi = ((u64)(0x01431e0fae6d7217U)),}, (strconv__Uint128){.lo = ((u64)(0xbd48000000000000U)),.hi = ((u64)(0x0193e5939a08ce9dU)),}, (strconv__Uint128){.lo = ((u64)(0x2c9a000000000000U)),.hi = ((u64)(0x01f8def8808b0245U)),}, (strconv__Uint128){.lo = ((u64)(0x3be0400000000000U)),.hi = ((u64)(0x013b8b5b5056e16bU)),}, (strconv__Uint128){.lo = ((u64)(0x0ad8500000000000U)),.hi = ((u64)(0x018a6e32246c99c6U)),}, (strconv__Uint128){.lo = ((u64)(0x8d8e640000000000U)),.hi = ((u64)(0x01ed09bead87c037U)),}, (strconv__Uint128){.lo = ((u64)(0xb878fe8000000000U)),.hi = ((u64)(0x013426172c74d822U)),}, (strconv__Uint128){.lo = ((u64)(0x66973e2000000000U)),.hi = ((u64)(0x01812f9cf7920e2bU)),}, (strconv__Uint128){.lo = ((u64)(0x403d0da800000000U)),.hi = ((u64)(0x01e17b84357691b6U)),}, (strconv__Uint128){.lo = ((u64)(0xe826288900000000U)),.hi = ((u64)(0x012ced32a16a1b11U)),}, (strconv__Uint128){.lo = ((u64)(0x622fb2ab40000000U)),.hi = ((u64)(0x0178287f49c4a1d6U)),}, (strconv__Uint128){.lo = ((u64)(0xfabb9f5610000000U)),.hi = ((u64)(0x01d6329f1c35ca4bU)),}, (strconv__Uint128){.lo = ((u64)(0x7cb54395ca000000U)),.hi = ((u64)(0x0125dfa371a19e6fU)),}, (strconv__Uint128){.lo = ((u64)(0x5be2947b3c800000U)),.hi = ((u64)(0x016f578c4e0a060bU)),}, (strconv__Uint128){.lo = ((u64)(0x32db399a0ba00000U)),.hi = ((u64)(0x01cb2d6f618c878eU)),}, (strconv__Uint128){.lo = ((u64)(0xdfc9040047440000U)),.hi = ((u64)(0x011efc659cf7d4b8U)),}, (strconv__Uint128){.lo = ((u64)(0x17bb450059150000U)),.hi = ((u64)(0x0166bb7f0435c9e7U)),}, (strconv__Uint128){.lo = ((u64)(0xddaa16406f5a4000U)),.hi = ((u64)(0x01c06a5ec5433c60U)),}, (strconv__Uint128){.lo = ((u64)(0x8a8a4de845986800U)),.hi = ((u64)(0x0118427b3b4a05bcU)),}, (strconv__Uint128){.lo = ((u64)(0xad2ce16256fe8200U)),.hi = ((u64)(0x015e531a0a1c872bU)),}, (strconv__Uint128){.lo = ((u64)(0x987819baecbe2280U)),.hi = ((u64)(0x01b5e7e08ca3a8f6U)),}, (strconv__Uint128){.lo = ((u64)(0x1f4b1014d3f6d590U)),.hi = ((u64)(0x0111b0ec57e6499aU)),}, (strconv__Uint128){.lo = ((u64)(0xa71dd41a08f48af4U)),.hi = ((u64)(0x01561d276ddfdc00U)),}, (strconv__Uint128){.lo = ((u64)(0xd0e549208b31adb1U)),.hi = ((u64)(0x01aba4714957d300U)),}, (strconv__Uint128){.lo = ((u64)(0x828f4db456ff0c8eU)),.hi = ((u64)(0x010b46c6cdd6e3e0U)),}, (strconv__Uint128){.lo = ((u64)(0xa33321216cbecfb2U)),.hi = ((u64)(0x014e1878814c9cd8U)),}, (strconv__Uint128){.lo = ((u64)(0xcbffe969c7ee839eU)),.hi = ((u64)(0x01a19e96a19fc40eU)),}, (strconv__Uint128){.lo = ((u64)(0x3f7ff1e21cf51243U)),.hi = ((u64)(0x0105031e2503da89U)),}, (strconv__Uint128){.lo = ((u64)(0x8f5fee5aa43256d4U)),.hi = ((u64)(0x014643e5ae44d12bU)),}, (strconv__Uint128){.lo = ((u64)(0x7337e9f14d3eec89U)),.hi = ((u64)(0x0197d4df19d60576U)),}, (strconv__Uint128){.lo = ((u64)(0x1005e46da08ea7abU)),.hi = ((u64)(0x01fdca16e04b86d4U)),}, (strconv__Uint128){.lo = ((u64)(0x8a03aec4845928cbU)),.hi = ((u64)(0x013e9e4e4c2f3444U)),}, (strconv__Uint128){.lo = ((u64)(0xac849a75a56f72fdU)),.hi = ((u64)(0x018e45e1df3b0155U)),}, (strconv__Uint128){.lo = ((u64)(0x17a5c1130ecb4fbdU)),.hi = ((u64)(0x01f1d75a5709c1abU)),}, (strconv__Uint128){.lo = ((u64)(0xeec798abe93f11d6U)),.hi = ((u64)(0x013726987666190aU)),}, (strconv__Uint128){.lo = ((u64)(0xaa797ed6e38ed64bU)),.hi = ((u64)(0x0184f03e93ff9f4dU)),}, (strconv__Uint128){.lo = ((u64)(0x1517de8c9c728bdeU)),.hi = ((u64)(0x01e62c4e38ff8721U)),}, (strconv__Uint128){.lo = ((u64)(0xad2eeb17e1c7976bU)),.hi = ((u64)(0x012fdbb0e39fb474U)),}, (strconv__Uint128){.lo = ((u64)(0xd87aa5ddda397d46U)),.hi = ((u64)(0x017bd29d1c87a191U)),}, (strconv__Uint128){.lo = ((u64)(0x4e994f5550c7dc97U)),.hi = ((u64)(0x01dac74463a989f6U)),}, (strconv__Uint128){.lo = ((u64)(0xf11fd195527ce9deU)),.hi = ((u64)(0x0128bc8abe49f639U)),}, (strconv__Uint128){.lo = ((u64)(0x6d67c5faa71c2456U)),.hi = ((u64)(0x0172ebad6ddc73c8U)),}, (strconv__Uint128){.lo = ((u64)(0x88c1b77950e32d6cU)),.hi = ((u64)(0x01cfa698c95390baU)),}, (strconv__Uint128){.lo = ((u64)(0x957912abd28dfc63U)),.hi = ((u64)(0x0121c81f7dd43a74U)),}, (strconv__Uint128){.lo = ((u64)(0xbad75756c7317b7cU)),.hi = ((u64)(0x016a3a275d494911U)),}, (strconv__Uint128){.lo = ((u64)(0x298d2d2c78fdda5bU)),.hi = ((u64)(0x01c4c8b1349b9b56U)),}, (strconv__Uint128){.lo = ((u64)(0xd9f83c3bcb9ea879U)),.hi = ((u64)(0x011afd6ec0e14115U)),}, (strconv__Uint128){.lo = ((u64)(0x50764b4abe865297U)),.hi = ((u64)(0x0161bcca7119915bU)),}, (strconv__Uint128){.lo = ((u64)(0x2493de1d6e27e73dU)),.hi = ((u64)(0x01ba2bfd0d5ff5b2U)),}, (strconv__Uint128){.lo = ((u64)(0x56dc6ad264d8f086U)),.hi = ((u64)(0x01145b7e285bf98fU)),}, (strconv__Uint128){.lo = ((u64)(0x2c938586fe0f2ca8U)),.hi = ((u64)(0x0159725db272f7f3U)),}, (strconv__Uint128){.lo = ((u64)(0xf7b866e8bd92f7d2U)),.hi = ((u64)(0x01afcef51f0fb5efU)),}, (strconv__Uint128){.lo = ((u64)(0xfad34051767bdae3U)),.hi = ((u64)(0x010de1593369d1b5U)),}, (strconv__Uint128){.lo = ((u64)(0x79881065d41ad19cU)),.hi = ((u64)(0x015159af80444623U)),}, (strconv__Uint128){.lo = ((u64)(0x57ea147f49218603U)),.hi = ((u64)(0x01a5b01b605557acU)),}, (strconv__Uint128){.lo = ((u64)(0xb6f24ccf8db4f3c1U)),.hi = ((u64)(0x01078e111c3556cbU)),}, (strconv__Uint128){.lo = ((u64)(0xa4aee003712230b2U)),.hi = ((u64)(0x014971956342ac7eU)),}, (strconv__Uint128){.lo = ((u64)(0x4dda98044d6abcdfU)),.hi = ((u64)(0x019bcdfabc13579eU)),}, (strconv__Uint128){.lo = ((u64)(0xf0a89f02b062b60bU)),.hi = ((u64)(0x010160bcb58c16c2U)),}, (strconv__Uint128){.lo = ((u64)(0xacd2c6c35c7b638eU)),.hi = ((u64)(0x0141b8ebe2ef1c73U)),}, (strconv__Uint128){.lo = ((u64)(0x98077874339a3c71U)),.hi = ((u64)(0x01922726dbaae390U)),}, (strconv__Uint128){.lo = ((u64)(0xbe0956914080cb8eU)),.hi = ((u64)(0x01f6b0f092959c74U)),}, (strconv__Uint128){.lo = ((u64)(0xf6c5d61ac8507f38U)),.hi = ((u64)(0x013a2e965b9d81c8U)),}, (strconv__Uint128){.lo = ((u64)(0x34774ba17a649f07U)),.hi = ((u64)(0x0188ba3bf284e23bU)),}, (strconv__Uint128){.lo = ((u64)(0x01951e89d8fdc6c8U)),.hi = ((u64)(0x01eae8caef261acaU)),}, (strconv__Uint128){.lo = ((u64)(0x40fd3316279e9c3dU)),.hi = ((u64)(0x0132d17ed577d0beU)),}, (strconv__Uint128){.lo = ((u64)(0xd13c7fdbb186434cU)),.hi = ((u64)(0x017f85de8ad5c4edU)),}, (strconv__Uint128){.lo = ((u64)(0x458b9fd29de7d420U)),.hi = ((u64)(0x01df67562d8b3629U)),}, (strconv__Uint128){.lo = ((u64)(0xcb7743e3a2b0e494U)),.hi = ((u64)(0x012ba095dc7701d9U)),}, (strconv__Uint128){.lo = ((u64)(0x3e5514dc8b5d1db9U)),.hi = ((u64)(0x017688bb5394c250U)),}, (strconv__Uint128){.lo = ((u64)(0x4dea5a13ae346527U)),.hi = ((u64)(0x01d42aea2879f2e4U)),}, (strconv__Uint128){.lo = ((u64)(0xb0b2784c4ce0bf38U)),.hi = ((u64)(0x01249ad2594c37ceU)),}, (strconv__Uint128){.lo = ((u64)(0x5cdf165f6018ef06U)),.hi = ((u64)(0x016dc186ef9f45c2U)),}, (strconv__Uint128){.lo = ((u64)(0xf416dbf7381f2ac8U)),.hi = ((u64)(0x01c931e8ab871732U)),}, (strconv__Uint128){.lo = ((u64)(0xd88e497a83137abdU)),.hi = ((u64)(0x011dbf316b346e7fU)),}, (strconv__Uint128){.lo = ((u64)(0xceb1dbd923d8596cU)),.hi = ((u64)(0x01652efdc6018a1fU)),}, (strconv__Uint128){.lo = ((u64)(0xc25e52cf6cce6fc7U)),.hi = ((u64)(0x01be7abd3781eca7U)),}, (strconv__Uint128){.lo = ((u64)(0xd97af3c1a40105dcU)),.hi = ((u64)(0x01170cb642b133e8U)),}, (strconv__Uint128){.lo = ((u64)(0x0fd9b0b20d014754U)),.hi = ((u64)(0x015ccfe3d35d80e3U)),}, (strconv__Uint128){.lo = ((u64)(0xd3d01cde90419929U)),.hi = ((u64)(0x01b403dcc834e11bU)),}, (strconv__Uint128){.lo = ((u64)(0x6462120b1a28ffb9U)),.hi = ((u64)(0x01108269fd210cb1U)),}, (strconv__Uint128){.lo = ((u64)(0xbd7a968de0b33fa8U)),.hi = ((u64)(0x0154a3047c694fddU)),}, (strconv__Uint128){.lo = ((u64)(0x2cd93c3158e00f92U)),.hi = ((u64)(0x01a9cbc59b83a3d5U)),}, (strconv__Uint128){.lo = ((u64)(0x3c07c59ed78c09bbU)),.hi = ((u64)(0x010a1f5b81324665U)),}, (strconv__Uint128){.lo = ((u64)(0x8b09b7068d6f0c2aU)),.hi = ((u64)(0x014ca732617ed7feU)),}, (strconv__Uint128){.lo = ((u64)(0x2dcc24c830cacf34U)),.hi = ((u64)(0x019fd0fef9de8dfeU)),}, (strconv__Uint128){.lo = ((u64)(0xdc9f96fd1e7ec180U)),.hi = ((u64)(0x0103e29f5c2b18beU)),}, (strconv__Uint128){.lo = ((u64)(0x93c77cbc661e71e1U)),.hi = ((u64)(0x0144db473335deeeU)),}, (strconv__Uint128){.lo = ((u64)(0x38b95beb7fa60e59U)),.hi = ((u64)(0x01961219000356aaU)),}, (strconv__Uint128){.lo = ((u64)(0xc6e7b2e65f8f91efU)),.hi = ((u64)(0x01fb969f40042c54U)),}, (strconv__Uint128){.lo = ((u64)(0xfc50cfcffbb9bb35U)),.hi = ((u64)(0x013d3e2388029bb4U)),}, (strconv__Uint128){.lo = ((u64)(0x3b6503c3faa82a03U)),.hi = ((u64)(0x018c8dac6a0342a2U)),}, (strconv__Uint128){.lo = ((u64)(0xca3e44b4f9523484U)),.hi = ((u64)(0x01efb1178484134aU)),}, (strconv__Uint128){.lo = ((u64)(0xbe66eaf11bd360d2U)),.hi = ((u64)(0x0135ceaeb2d28c0eU)),}, (strconv__Uint128){.lo = ((u64)(0x6e00a5ad62c83907U)),.hi = ((u64)(0x0183425a5f872f12U)),}, (strconv__Uint128){.lo = ((u64)(0x0980cf18bb7a4749U)),.hi = ((u64)(0x01e412f0f768fad7U)),}, (strconv__Uint128){.lo = ((u64)(0x65f0816f752c6c8dU)),.hi = ((u64)(0x012e8bd69aa19cc6U)),}, (strconv__Uint128){.lo = ((u64)(0xff6ca1cb527787b1U)),.hi = ((u64)(0x017a2ecc414a03f7U)),}, (strconv__Uint128){.lo = ((u64)(0xff47ca3e2715699dU)),.hi = ((u64)(0x01d8ba7f519c84f5U)),}, (strconv__Uint128){.lo = ((u64)(0xbf8cde66d86d6202U)),.hi = ((u64)(0x0127748f9301d319U)),}, (strconv__Uint128){.lo = ((u64)(0x2f7016008e88ba83U)),.hi = ((u64)(0x017151b377c247e0U)),}, (strconv__Uint128){.lo = ((u64)(0x3b4c1b80b22ae923U)),.hi = ((u64)(0x01cda62055b2d9d8U)),}, (strconv__Uint128){.lo = ((u64)(0x250f91306f5ad1b6U)),.hi = ((u64)(0x012087d4358fc827U)),}, (strconv__Uint128){.lo = ((u64)(0xee53757c8b318623U)),.hi = ((u64)(0x0168a9c942f3ba30U)),}, (strconv__Uint128){.lo = ((u64)(0x29e852dbadfde7acU)),.hi = ((u64)(0x01c2d43b93b0a8bdU)),}, (strconv__Uint128){.lo = ((u64)(0x3a3133c94cbeb0ccU)),.hi = ((u64)(0x0119c4a53c4e6976U)),}, (strconv__Uint128){.lo = ((u64)(0xc8bd80bb9fee5cffU)),.hi = ((u64)(0x016035ce8b6203d3U)),}, (strconv__Uint128){.lo = ((u64)(0xbaece0ea87e9f43eU)),.hi = ((u64)(0x01b843422e3a84c8U)),}, (strconv__Uint128){.lo = ((u64)(0x74d40c9294f238a7U)),.hi = ((u64)(0x01132a095ce492fdU)),}, (strconv__Uint128){.lo = ((u64)(0xd2090fb73a2ec6d1U)),.hi = ((u64)(0x0157f48bb41db7bcU)),}, (strconv__Uint128){.lo = ((u64)(0x068b53a508ba7885U)),.hi = ((u64)(0x01adf1aea12525acU)),}, (strconv__Uint128){.lo = ((u64)(0x8417144725748b53U)),.hi = ((u64)(0x010cb70d24b7378bU)),}, (strconv__Uint128){.lo = ((u64)(0x651cd958eed1ae28U)),.hi = ((u64)(0x014fe4d06de5056eU)),}, (strconv__Uint128){.lo = ((u64)(0xfe640faf2a8619b2U)),.hi = ((u64)(0x01a3de04895e46c9U)),}, (strconv__Uint128){.lo = ((u64)(0x3efe89cd7a93d00fU)),.hi = ((u64)(0x01066ac2d5daec3eU)),}, (strconv__Uint128){.lo = ((u64)(0xcebe2c40d938c413U)),.hi = ((u64)(0x014805738b51a74dU)),}, (strconv__Uint128){.lo = ((u64)(0x426db7510f86f518U)),.hi = ((u64)(0x019a06d06e261121U)),}, (strconv__Uint128){.lo = ((u64)(0xc9849292a9b4592fU)),.hi = ((u64)(0x0100444244d7cab4U)),}, (strconv__Uint128){.lo = ((u64)(0xfbe5b73754216f7aU)),.hi = ((u64)(0x01405552d60dbd61U)),}, (strconv__Uint128){.lo = ((u64)(0x7adf25052929cb59U)),.hi = ((u64)(0x01906aa78b912cbaU)),}, (strconv__Uint128){.lo = ((u64)(0x1996ee4673743e2fU)),.hi = ((u64)(0x01f485516e7577e9U)),}, (strconv__Uint128){.lo = ((u64)(0xaffe54ec0828a6ddU)),.hi = ((u64)(0x0138d352e5096af1U)),}, (strconv__Uint128){.lo = ((u64)(0x1bfdea270a32d095U)),.hi = ((u64)(0x018708279e4bc5aeU)),}, (strconv__Uint128){.lo = ((u64)(0xa2fd64b0ccbf84baU)),.hi = ((u64)(0x01e8ca3185deb719U)),}, (strconv__Uint128){.lo = ((u64)(0x05de5eee7ff7b2f4U)),.hi = ((u64)(0x01317e5ef3ab3270U)),}, (strconv__Uint128){.lo = ((u64)(0x0755f6aa1ff59fb1U)),.hi = ((u64)(0x017dddf6b095ff0cU)),}, (strconv__Uint128){.lo = ((u64)(0x092b7454a7f3079eU)),.hi = ((u64)(0x01dd55745cbb7ecfU)),}, (strconv__Uint128){.lo = ((u64)(0x65bb28b4e8f7e4c3U)),.hi = ((u64)(0x012a5568b9f52f41U)),}, (strconv__Uint128){.lo = ((u64)(0xbf29f2e22335ddf3U)),.hi = ((u64)(0x0174eac2e8727b11U)),}, (strconv__Uint128){.lo = ((u64)(0x2ef46f9aac035570U)),.hi = ((u64)(0x01d22573a28f19d6U)),}, (strconv__Uint128){.lo = ((u64)(0xdd58c5c0ab821566U)),.hi = ((u64)(0x0123576845997025U)),}, (strconv__Uint128){.lo = ((u64)(0x54aef730d6629ac0U)),.hi = ((u64)(0x016c2d4256ffcc2fU)),}, (strconv__Uint128){.lo = ((u64)(0x29dab4fd0bfb4170U)),.hi = ((u64)(0x01c73892ecbfbf3bU)),}, (strconv__Uint128){.lo = ((u64)(0xfa28b11e277d08e6U)),.hi = ((u64)(0x011c835bd3f7d784U)),}, (strconv__Uint128){.lo = ((u64)(0x38b2dd65b15c4b1fU)),.hi = ((u64)(0x0163a432c8f5cd66U)),}, (strconv__Uint128){.lo = ((u64)(0xc6df94bf1db35de7U)),.hi = ((u64)(0x01bc8d3f7b3340bfU)),}, (strconv__Uint128){.lo = ((u64)(0xdc4bbcf772901ab0U)),.hi = ((u64)(0x0115d847ad000877U)),}, (strconv__Uint128){.lo = ((u64)(0xd35eac354f34215cU)),.hi = ((u64)(0x015b4e5998400a95U)),}, (strconv__Uint128){.lo = ((u64)(0x48365742a30129b4U)),.hi = ((u64)(0x01b221effe500d3bU)),}, (strconv__Uint128){.lo = ((u64)(0x0d21f689a5e0ba10U)),.hi = ((u64)(0x010f5535fef20845U)),}, (strconv__Uint128){.lo = ((u64)(0x506a742c0f58e894U)),.hi = ((u64)(0x01532a837eae8a56U)),}, (strconv__Uint128){.lo = ((u64)(0xe4851137132f22b9U)),.hi = ((u64)(0x01a7f5245e5a2cebU)),}, (strconv__Uint128){.lo = ((u64)(0x6ed32ac26bfd75b4U)),.hi = ((u64)(0x0108f936baf85c13U)),}, (strconv__Uint128){.lo = ((u64)(0x4a87f57306fcd321U)),.hi = ((u64)(0x014b378469b67318U)),}, (strconv__Uint128){.lo = ((u64)(0x5d29f2cfc8bc07e9U)),.hi = ((u64)(0x019e056584240fdeU)),}, (strconv__Uint128){.lo = ((u64)(0xfa3a37c1dd7584f1U)),.hi = ((u64)(0x0102c35f729689eaU)),}, (strconv__Uint128){.lo = ((u64)(0xb8c8c5b254d2e62eU)),.hi = ((u64)(0x014374374f3c2c65U)),}, (strconv__Uint128){.lo = ((u64)(0x26faf71eea079fb9U)),.hi = ((u64)(0x01945145230b377fU)),}, (strconv__Uint128){.lo = ((u64)(0xf0b9b4e6a48987a8U)),.hi = ((u64)(0x01f965966bce055eU)),}, (strconv__Uint128){.lo = ((u64)(0x5674111026d5f4c9U)),.hi = ((u64)(0x013bdf7e0360c35bU)),}, (strconv__Uint128){.lo = ((u64)(0x2c111554308b71fbU)),.hi = ((u64)(0x018ad75d8438f432U)),}, (strconv__Uint128){.lo = ((u64)(0xb7155aa93cae4e7aU)),.hi = ((u64)(0x01ed8d34e547313eU)),}, (strconv__Uint128){.lo = ((u64)(0x326d58a9c5ecf10cU)),.hi = ((u64)(0x013478410f4c7ec7U)),}, (strconv__Uint128){.lo = ((u64)(0xff08aed437682d4fU)),.hi = ((u64)(0x01819651531f9e78U)),}, (strconv__Uint128){.lo = ((u64)(0x3ecada89454238a3U)),.hi = ((u64)(0x01e1fbe5a7e78617U)),}, (strconv__Uint128){.lo = ((u64)(0x873ec895cb496366U)),.hi = ((u64)(0x012d3d6f88f0b3ceU)),}, (strconv__Uint128){.lo = ((u64)(0x290e7abb3e1bbc3fU)),.hi = ((u64)(0x01788ccb6b2ce0c2U)),}, (strconv__Uint128){.lo = ((u64)(0xb352196a0da2ab4fU)),.hi = ((u64)(0x01d6affe45f818f2U)),}, (strconv__Uint128){.lo = ((u64)(0xb0134fe24885ab11U)),.hi = ((u64)(0x01262dfeebbb0f97U)),}, (strconv__Uint128){.lo = ((u64)(0x9c1823dadaa715d6U)),.hi = ((u64)(0x016fb97ea6a9d37dU)),}, (strconv__Uint128){.lo = ((u64)(0x031e2cd19150db4bU)),.hi = ((u64)(0x01cba7de5054485dU)),}, (strconv__Uint128){.lo = ((u64)(0x21f2dc02fad2890fU)),.hi = ((u64)(0x011f48eaf234ad3aU)),}, (strconv__Uint128){.lo = ((u64)(0xaa6f9303b9872b53U)),.hi = ((u64)(0x01671b25aec1d888U)),}, (strconv__Uint128){.lo = ((u64)(0xd50b77c4a7e8f628U)),.hi = ((u64)(0x01c0e1ef1a724eaaU)),}, (strconv__Uint128){.lo = ((u64)(0xc5272adae8f199d9U)),.hi = ((u64)(0x01188d357087712aU)),}, (strconv__Uint128){.lo = ((u64)(0x7670f591a32e004fU)),.hi = ((u64)(0x015eb082cca94d75U)),}, (strconv__Uint128){.lo = ((u64)(0xd40d32f60bf98063U)),.hi = ((u64)(0x01b65ca37fd3a0d2U)),}, (strconv__Uint128){.lo = ((u64)(0xc4883fd9c77bf03eU)),.hi = ((u64)(0x0111f9e62fe44483U)),}, (strconv__Uint128){.lo = ((u64)(0xb5aa4fd0395aec4dU)),.hi = ((u64)(0x0156785fbbdd55a4U)),}, (strconv__Uint128){.lo = ((u64)(0xe314e3c447b1a760U)),.hi = ((u64)(0x01ac1677aad4ab0dU)),}, (strconv__Uint128){.lo = ((u64)(0xaded0e5aaccf089cU)),.hi = ((u64)(0x010b8e0acac4eae8U)),}, (strconv__Uint128){.lo = ((u64)(0xd96851f15802cac3U)),.hi = ((u64)(0x014e718d7d7625a2U)),}, (strconv__Uint128){.lo = ((u64)(0x8fc2666dae037d74U)),.hi = ((u64)(0x01a20df0dcd3af0bU)),}, (strconv__Uint128){.lo = ((u64)(0x39d980048cc22e68U)),.hi = ((u64)(0x010548b68a044d67U)),}, (strconv__Uint128){.lo = ((u64)(0x084fe005aff2ba03U)),.hi = ((u64)(0x01469ae42c8560c1U)),}, (strconv__Uint128){.lo = ((u64)(0x4a63d8071bef6883U)),.hi = ((u64)(0x0198419d37a6b8f1U)),}, (strconv__Uint128){.lo = ((u64)(0x9cfcce08e2eb42a4U)),.hi = ((u64)(0x01fe52048590672dU)),}, (strconv__Uint128){.lo = ((u64)(0x821e00c58dd309a7U)),.hi = ((u64)(0x013ef342d37a407cU)),}, (strconv__Uint128){.lo = ((u64)(0xa2a580f6f147cc10U)),.hi = ((u64)(0x018eb0138858d09bU)),}, (strconv__Uint128){.lo = ((u64)(0x8b4ee134ad99bf15U)),.hi = ((u64)(0x01f25c186a6f04c2U)),}, (strconv__Uint128){.lo = ((u64)(0x97114cc0ec80176dU)),.hi = ((u64)(0x0137798f428562f9U)),}, (strconv__Uint128){.lo = ((u64)(0xfcd59ff127a01d48U)),.hi = ((u64)(0x018557f31326bbb7U)),}, (strconv__Uint128){.lo = ((u64)(0xfc0b07ed7188249aU)),.hi = ((u64)(0x01e6adefd7f06aa5U)),}, (strconv__Uint128){.lo = ((u64)(0xbd86e4f466f516e0U)),.hi = ((u64)(0x01302cb5e6f642a7U)),}, (strconv__Uint128){.lo = ((u64)(0xace89e3180b25c98U)),.hi = ((u64)(0x017c37e360b3d351U)),}, (strconv__Uint128){.lo = ((u64)(0x1822c5bde0def3beU)),.hi = ((u64)(0x01db45dc38e0c826U)),}, (strconv__Uint128){.lo = ((u64)(0xcf15bb96ac8b5857U)),.hi = ((u64)(0x01290ba9a38c7d17U)),}, (strconv__Uint128){.lo = ((u64)(0xc2db2a7c57ae2e6dU)),.hi = ((u64)(0x01734e940c6f9c5dU)),}, (strconv__Uint128){.lo = ((u64)(0x3391f51b6d99ba08U)),.hi = ((u64)(0x01d022390f8b8375U)),}, (strconv__Uint128){.lo = ((u64)(0x403b393124801445U)),.hi = ((u64)(0x01221563a9b73229U)),}, (strconv__Uint128){.lo = ((u64)(0x904a077d6da01956U)),.hi = ((u64)(0x016a9abc9424feb3U)),}, (strconv__Uint128){.lo = ((u64)(0x745c895cc9081facU)),.hi = ((u64)(0x01c5416bb92e3e60U)),}, (strconv__Uint128){.lo = ((u64)(0x48b9d5d9fda513cbU)),.hi = ((u64)(0x011b48e353bce6fcU)),}, (strconv__Uint128){.lo = ((u64)(0x5ae84b507d0e58beU)),.hi = ((u64)(0x01621b1c28ac20bbU)),}, (strconv__Uint128){.lo = ((u64)(0x31a25e249c51eeeeU)),.hi = ((u64)(0x01baa1e332d728eaU)),}, (strconv__Uint128){.lo = ((u64)(0x5f057ad6e1b33554U)),.hi = ((u64)(0x0114a52dffc67992U)),}, (strconv__Uint128){.lo = ((u64)(0xf6c6d98c9a2002aaU)),.hi = ((u64)(0x0159ce797fb817f6U)),}, (strconv__Uint128){.lo = ((u64)(0xb4788fefc0a80354U)),.hi = ((u64)(0x01b04217dfa61df4U)),}, (strconv__Uint128){.lo = ((u64)(0xf0cb59f5d8690214U)),.hi = ((u64)(0x010e294eebc7d2b8U)),}, (strconv__Uint128){.lo = ((u64)(0x2cfe30734e83429aU)),.hi = ((u64)(0x0151b3a2a6b9c767U)),}, (strconv__Uint128){.lo = ((u64)(0xf83dbc9022241340U)),.hi = ((u64)(0x01a6208b50683940U)),}, (strconv__Uint128){.lo = ((u64)(0x9b2695da15568c08U)),.hi = ((u64)(0x0107d457124123c8U)),}, (strconv__Uint128){.lo = ((u64)(0xc1f03b509aac2f0aU)),.hi = ((u64)(0x0149c96cd6d16cbaU)),}, (strconv__Uint128){.lo = ((u64)(0x726c4a24c1573acdU)),.hi = ((u64)(0x019c3bc80c85c7e9U)),}, (strconv__Uint128){.lo = ((u64)(0xe783ae56f8d684c0U)),.hi = ((u64)(0x0101a55d07d39cf1U)),}, (strconv__Uint128){.lo = ((u64)(0x616499ecb70c25f0U)),.hi = ((u64)(0x01420eb449c8842eU)),}, (strconv__Uint128){.lo = ((u64)(0xf9bdc067e4cf2f6cU)),.hi = ((u64)(0x019292615c3aa539U)),}, (strconv__Uint128){.lo = ((u64)(0x782d3081de02fb47U)),.hi = ((u64)(0x01f736f9b3494e88U)),}, (strconv__Uint128){.lo = ((u64)(0x4b1c3e512ac1dd0cU)),.hi = ((u64)(0x013a825c100dd115U)),}, (strconv__Uint128){.lo = ((u64)(0x9de34de57572544fU)),.hi = ((u64)(0x018922f31411455aU)),}, (strconv__Uint128){.lo = ((u64)(0x455c215ed2cee963U)),.hi = ((u64)(0x01eb6bafd91596b1U)),}, (strconv__Uint128){.lo = ((u64)(0xcb5994db43c151deU)),.hi = ((u64)(0x0133234de7ad7e2eU)),}, (strconv__Uint128){.lo = ((u64)(0x7e2ffa1214b1a655U)),.hi = ((u64)(0x017fec216198ddbaU)),}, (strconv__Uint128){.lo = ((u64)(0x1dbbf89699de0febU)),.hi = ((u64)(0x01dfe729b9ff1529U)),}, (strconv__Uint128){.lo = ((u64)(0xb2957b5e202ac9f3U)),.hi = ((u64)(0x012bf07a143f6d39U)),}, (strconv__Uint128){.lo = ((u64)(0x1f3ada35a8357c6fU)),.hi = ((u64)(0x0176ec98994f4888U)),}, (strconv__Uint128){.lo = ((u64)(0x270990c31242db8bU)),.hi = ((u64)(0x01d4a7bebfa31aaaU)),}, (strconv__Uint128){.lo = ((u64)(0x5865fa79eb69c937U)),.hi = ((u64)(0x0124e8d737c5f0aaU)),}, (strconv__Uint128){.lo = ((u64)(0xee7f791866443b85U)),.hi = ((u64)(0x016e230d05b76cd4U)),}, (strconv__Uint128){.lo = ((u64)(0x2a1f575e7fd54a66U)),.hi = ((u64)(0x01c9abd04725480aU)),}, (strconv__Uint128){.lo = ((u64)(0x5a53969b0fe54e80U)),.hi = ((u64)(0x011e0b622c774d06U)),}, (strconv__Uint128){.lo = ((u64)(0xf0e87c41d3dea220U)),.hi = ((u64)(0x01658e3ab7952047U)),}, (strconv__Uint128){.lo = ((u64)(0xed229b5248d64aa8U)),.hi = ((u64)(0x01bef1c9657a6859U)),}, (strconv__Uint128){.lo = ((u64)(0x3435a1136d85eea9U)),.hi = ((u64)(0x0117571ddf6c8138U)),}, (strconv__Uint128){.lo = ((u64)(0x4143095848e76a53U)),.hi = ((u64)(0x015d2ce55747a186U)),}, (strconv__Uint128){.lo = ((u64)(0xd193cbae5b2144e8U)),.hi = ((u64)(0x01b4781ead1989e7U)),}, (strconv__Uint128){.lo = ((u64)(0xe2fc5f4cf8f4cb11U)),.hi = ((u64)(0x0110cb132c2ff630U)),}, (strconv__Uint128){.lo = ((u64)(0x1bbb77203731fdd5U)),.hi = ((u64)(0x0154fdd7f73bf3bdU)),}, (strconv__Uint128){.lo = ((u64)(0x62aa54e844fe7d4aU)),.hi = ((u64)(0x01aa3d4df50af0acU)),}, (strconv__Uint128){.lo = ((u64)(0xbdaa75112b1f0e4eU)),.hi = ((u64)(0x010a6650b926d66bU)),}, (strconv__Uint128){.lo = ((u64)(0xad15125575e6d1e2U)),.hi = ((u64)(0x014cffe4e7708c06U)),}, (strconv__Uint128){.lo = ((u64)(0x585a56ead360865bU)),.hi = ((u64)(0x01a03fde214caf08U)),}, (strconv__Uint128){.lo = ((u64)(0x37387652c41c53f8U)),.hi = ((u64)(0x010427ead4cfed65U)),}, (strconv__Uint128){.lo = ((u64)(0x850693e7752368f7U)),.hi = ((u64)(0x014531e58a03e8beU)),}, (strconv__Uint128){.lo = ((u64)(0x264838e1526c4334U)),.hi = ((u64)(0x01967e5eec84e2eeU)),}, (strconv__Uint128){.lo = ((u64)(0xafda4719a7075402U)),.hi = ((u64)(0x01fc1df6a7a61ba9U)),}, (strconv__Uint128){.lo = ((u64)(0x0de86c7008649481U)),.hi = ((u64)(0x013d92ba28c7d14aU)),}, (strconv__Uint128){.lo = ((u64)(0x9162878c0a7db9a1U)),.hi = ((u64)(0x018cf768b2f9c59cU)),}, (strconv__Uint128){.lo = ((u64)(0xb5bb296f0d1d280aU)),.hi = ((u64)(0x01f03542dfb83703U)),}, (strconv__Uint128){.lo = ((u64)(0x5194f9e568323906U)),.hi = ((u64)(0x01362149cbd32262U)),}, (strconv__Uint128){.lo = ((u64)(0xe5fa385ec23ec747U)),.hi = ((u64)(0x0183a99c3ec7eafaU)),}, (strconv__Uint128){.lo = ((u64)(0x9f78c67672ce7919U)),.hi = ((u64)(0x01e494034e79e5b9U)),}, (strconv__Uint128){.lo = ((u64)(0x03ab7c0a07c10bb0U)),.hi = ((u64)(0x012edc82110c2f94U)),}, (strconv__Uint128){.lo = ((u64)(0x04965b0c89b14e9cU)),.hi = ((u64)(0x017a93a2954f3b79U)),}, (strconv__Uint128){.lo = ((u64)(0x45bbf1cfac1da243U)),.hi = ((u64)(0x01d9388b3aa30a57U)),}, (strconv__Uint128){.lo = ((u64)(0x8b957721cb92856aU)),.hi = ((u64)(0x0127c35704a5e676U)),}, (strconv__Uint128){.lo = ((u64)(0x2e7ad4ea3e7726c4U)),.hi = ((u64)(0x0171b42cc5cf6014U)),}, (strconv__Uint128){.lo = ((u64)(0x3a198a24ce14f075U)),.hi = ((u64)(0x01ce2137f7433819U)),}, (strconv__Uint128){.lo = ((u64)(0xc44ff65700cd1649U)),.hi = ((u64)(0x0120d4c2fa8a030fU)),}, (strconv__Uint128){.lo = ((u64)(0xb563f3ecc1005bdbU)),.hi = ((u64)(0x016909f3b92c83d3U)),}, (strconv__Uint128){.lo = ((u64)(0xa2bcf0e7f14072d2U)),.hi = ((u64)(0x01c34c70a777a4c8U)),}, (strconv__Uint128){.lo = ((u64)(0x65b61690f6c847c3U)),.hi = ((u64)(0x011a0fc668aac6fdU)),}, (strconv__Uint128){.lo = ((u64)(0xbf239c35347a59b4U)),.hi = ((u64)(0x016093b802d578bcU)),}, (strconv__Uint128){.lo = ((u64)(0xeeec83428198f021U)),.hi = ((u64)(0x01b8b8a6038ad6ebU)),}, (strconv__Uint128){.lo = ((u64)(0x7553d20990ff9615U)),.hi = ((u64)(0x01137367c236c653U)),}, (strconv__Uint128){.lo = ((u64)(0x52a8c68bf53f7b9aU)),.hi = ((u64)(0x01585041b2c477e8U)),}, (strconv__Uint128){.lo = ((u64)(0x6752f82ef28f5a81U)),.hi = ((u64)(0x01ae64521f7595e2U)),}, (strconv__Uint128){.lo = ((u64)(0x8093db1d57999890U)),.hi = ((u64)(0x010cfeb353a97dadU)),}, (strconv__Uint128){.lo = ((u64)(0xe0b8d1e4ad7ffeb4U)),.hi = ((u64)(0x01503e602893dd18U)),}, (strconv__Uint128){.lo = ((u64)(0x18e7065dd8dffe62U)),.hi = ((u64)(0x01a44df832b8d45fU)),}, (strconv__Uint128){.lo = ((u64)(0x6f9063faa78bfefdU)),.hi = ((u64)(0x0106b0bb1fb384bbU)),}, (strconv__Uint128){.lo = ((u64)(0x4b747cf9516efebcU)),.hi = ((u64)(0x01485ce9e7a065eaU)),}, (strconv__Uint128){.lo = ((u64)(0xde519c37a5cabe6bU)),.hi = ((u64)(0x019a742461887f64U)),}, (strconv__Uint128){.lo = ((u64)(0x0af301a2c79eb703U)),.hi = ((u64)(0x01008896bcf54f9fU)),}, (strconv__Uint128){.lo = ((u64)(0xcdafc20b798664c4U)),.hi = ((u64)(0x0140aabc6c32a386U)),}, (strconv__Uint128){.lo = ((u64)(0x811bb28e57e7fdf5U)),.hi = ((u64)(0x0190d56b873f4c68U)),}, (strconv__Uint128){.lo = ((u64)(0xa1629f31ede1fd72U)),.hi = ((u64)(0x01f50ac6690f1f82U)),}, (strconv__Uint128){.lo = ((u64)(0xa4dda37f34ad3e67U)),.hi = ((u64)(0x013926bc01a973b1U)),}, (strconv__Uint128){.lo = ((u64)(0x0e150c5f01d88e01U)),.hi = ((u64)(0x0187706b0213d09eU)),}, (strconv__Uint128){.lo = ((u64)(0x919a4f76c24eb181U)),.hi = ((u64)(0x01e94c85c298c4c5U)),}, (strconv__Uint128){.lo = ((u64)(0x7b0071aa39712ef1U)),.hi = ((u64)(0x0131cfd3999f7afbU)),}, (strconv__Uint128){.lo = ((u64)(0x59c08e14c7cd7aadU)),.hi = ((u64)(0x017e43c8800759baU)),}, (strconv__Uint128){.lo = ((u64)(0xf030b199f9c0d958U)),.hi = ((u64)(0x01ddd4baa0093028U)),}, (strconv__Uint128){.lo = ((u64)(0x961e6f003c1887d7U)),.hi = ((u64)(0x012aa4f4a405be19U)),}, (strconv__Uint128){.lo = ((u64)(0xfba60ac04b1ea9cdU)),.hi = ((u64)(0x01754e31cd072d9fU)),}, (strconv__Uint128){.lo = ((u64)(0xfa8f8d705de65440U)),.hi = ((u64)(0x01d2a1be4048f907U)),}, (strconv__Uint128){.lo = ((u64)(0xfc99b8663aaff4a8U)),.hi = ((u64)(0x0123a516e82d9ba4U)),}, (strconv__Uint128){.lo = ((u64)(0x3bc0267fc95bf1d2U)),.hi = ((u64)(0x016c8e5ca239028eU)),}, (strconv__Uint128){.lo = ((u64)(0xcab0301fbbb2ee47U)),.hi = ((u64)(0x01c7b1f3cac74331U)),}, (strconv__Uint128){.lo = ((u64)(0x1eae1e13d54fd4ecU)),.hi = ((u64)(0x011ccf385ebc89ffU)),}, (strconv__Uint128){.lo = ((u64)(0xe659a598caa3ca27U)),.hi = ((u64)(0x01640306766bac7eU)),}, (strconv__Uint128){.lo = ((u64)(0x9ff00efefd4cbcb1U)),.hi = ((u64)(0x01bd03c81406979eU)),}, (strconv__Uint128){.lo = ((u64)(0x23f6095f5e4ff5efU)),.hi = ((u64)(0x0116225d0c841ec3U)),}, (strconv__Uint128){.lo = ((u64)(0xecf38bb735e3f36aU)),.hi = ((u64)(0x015baaf44fa52673U)),}, (strconv__Uint128){.lo = ((u64)(0xe8306ea5035cf045U)),.hi = ((u64)(0x01b295b1638e7010U)),}, (strconv__Uint128){.lo = ((u64)(0x911e4527221a162bU)),.hi = ((u64)(0x010f9d8ede39060aU)),}, (strconv__Uint128){.lo = ((u64)(0x3565d670eaa09bb6U)),.hi = ((u64)(0x015384f295c7478dU)),}, (strconv__Uint128){.lo = ((u64)(0x82bf4c0d2548c2a3U)),.hi = ((u64)(0x01a8662f3b391970U)),}, (strconv__Uint128){.lo = ((u64)(0x51b78f88374d79a6U)),.hi = ((u64)(0x01093fdd8503afe6U)),}, (strconv__Uint128){.lo = ((u64)(0xe625736a4520d810U)),.hi = ((u64)(0x014b8fd4e6449bdfU)),}, (strconv__Uint128){.lo = ((u64)(0xdfaed044d6690e14U)),.hi = ((u64)(0x019e73ca1fd5c2d7U)),}, (strconv__Uint128){.lo = ((u64)(0xebcd422b0601a8ccU)),.hi = ((u64)(0x0103085e53e599c6U)),}, (strconv__Uint128){.lo = ((u64)(0xa6c092b5c78212ffU)),.hi = ((u64)(0x0143ca75e8df0038U)),}, (strconv__Uint128){.lo = ((u64)(0xd070b763396297bfU)),.hi = ((u64)(0x0194bd136316c046U)),}, (strconv__Uint128){.lo = ((u64)(0x848ce53c07bb3dafU)),.hi = ((u64)(0x01f9ec583bdc7058U)),}, (strconv__Uint128){.lo = ((u64)(0x52d80f4584d5068dU)),.hi = ((u64)(0x013c33b72569c637U)),}, (strconv__Uint128){.lo = ((u64)(0x278e1316e60a4831U)),.hi = ((u64)(0x018b40a4eec437c5U)),}}));
	_const_strconv__pow5_inv_split_64 = new_array_from_c_array(292, 292, sizeof(strconv__Uint128), _MOV((strconv__Uint128[292]){
		(strconv__Uint128){.lo = ((u64)(0x0000000000000001U)),.hi = ((u64)(0x0400000000000000U)),}, (strconv__Uint128){.lo = ((u64)(0x3333333333333334U)),.hi = ((u64)(0x0333333333333333U)),}, (strconv__Uint128){.lo = ((u64)(0x28f5c28f5c28f5c3U)),.hi = ((u64)(0x028f5c28f5c28f5cU)),}, (strconv__Uint128){.lo = ((u64)(0xed916872b020c49cU)),.hi = ((u64)(0x020c49ba5e353f7cU)),}, (strconv__Uint128){.lo = ((u64)(0xaf4f0d844d013a93U)),.hi = ((u64)(0x0346dc5d63886594U)),}, (strconv__Uint128){.lo = ((u64)(0x8c3f3e0370cdc876U)),.hi = ((u64)(0x029f16b11c6d1e10U)),}, (strconv__Uint128){.lo = ((u64)(0xd698fe69270b06c5U)),.hi = ((u64)(0x0218def416bdb1a6U)),}, (strconv__Uint128){.lo = ((u64)(0xf0f4ca41d811a46eU)),.hi = ((u64)(0x035afe535795e90aU)),}, (strconv__Uint128){.lo = ((u64)(0xf3f70834acdae9f1U)),.hi = ((u64)(0x02af31dc4611873bU)),}, (strconv__Uint128){.lo = ((u64)(0x5cc5a02a23e254c1U)),.hi = ((u64)(0x0225c17d04dad296U)),}, (strconv__Uint128){.lo = ((u64)(0xfad5cd10396a2135U)),.hi = ((u64)(0x036f9bfb3af7b756U)),}, (strconv__Uint128){.lo = ((u64)(0xfbde3da69454e75eU)),.hi = ((u64)(0x02bfaffc2f2c92abU)),}, (strconv__Uint128){.lo = ((u64)(0x2fe4fe1edd10b918U)),.hi = ((u64)(0x0232f33025bd4223U)),}, (strconv__Uint128){.lo = ((u64)(0x4ca19697c81ac1bfU)),.hi = ((u64)(0x0384b84d092ed038U)),}, (strconv__Uint128){.lo = ((u64)(0x3d4e1213067bce33U)),.hi = ((u64)(0x02d09370d4257360U)),}, (strconv__Uint128){.lo = ((u64)(0x643e74dc052fd829U)),.hi = ((u64)(0x024075f3dceac2b3U)),}, (strconv__Uint128){.lo = ((u64)(0x6d30baf9a1e626a7U)),.hi = ((u64)(0x039a5652fb113785U)),}, (strconv__Uint128){.lo = ((u64)(0x2426fbfae7eb5220U)),.hi = ((u64)(0x02e1dea8c8da92d1U)),}, (strconv__Uint128){.lo = ((u64)(0x1cebfcc8b9890e80U)),.hi = ((u64)(0x024e4bba3a487574U)),}, (strconv__Uint128){.lo = ((u64)(0x94acc7a78f41b0ccU)),.hi = ((u64)(0x03b07929f6da5586U)),}, (strconv__Uint128){.lo = ((u64)(0xaa23d2ec729af3d7U)),.hi = ((u64)(0x02f394219248446bU)),}, (strconv__Uint128){.lo = ((u64)(0xbb4fdbf05baf2979U)),.hi = ((u64)(0x025c768141d369efU)),}, (strconv__Uint128){.lo = ((u64)(0xc54c931a2c4b758dU)),.hi = ((u64)(0x03c7240202ebdcb2U)),}, (strconv__Uint128){.lo = ((u64)(0x9dd6dc14f03c5e0bU)),.hi = ((u64)(0x0305b66802564a28U)),}, (strconv__Uint128){.lo = ((u64)(0x4b1249aa59c9e4d6U)),.hi = ((u64)(0x026af8533511d4edU)),}, (strconv__Uint128){.lo = ((u64)(0x44ea0f76f60fd489U)),.hi = ((u64)(0x03de5a1ebb4fbb15U)),}, (strconv__Uint128){.lo = ((u64)(0x6a54d92bf80caa07U)),.hi = ((u64)(0x0318481895d96277U)),}, (strconv__Uint128){.lo = ((u64)(0x21dd7a89933d54d2U)),.hi = ((u64)(0x0279d346de4781f9U)),}, (strconv__Uint128){.lo = ((u64)(0x362f2a75b8622150U)),.hi = ((u64)(0x03f61ed7ca0c0328U)),}, (strconv__Uint128){.lo = ((u64)(0xf825bb91604e810dU)),.hi = ((u64)(0x032b4bdfd4d668ecU)),}, (strconv__Uint128){.lo = ((u64)(0xc684960de6a5340bU)),.hi = ((u64)(0x0289097fdd7853f0U)),}, (strconv__Uint128){.lo = ((u64)(0xd203ab3e521dc33cU)),.hi = ((u64)(0x02073accb12d0ff3U)),}, (strconv__Uint128){.lo = ((u64)(0xe99f7863b696052cU)),.hi = ((u64)(0x033ec47ab514e652U)),}, (strconv__Uint128){.lo = ((u64)(0x87b2c6b62bab3757U)),.hi = ((u64)(0x02989d2ef743eb75U)),}, (strconv__Uint128){.lo = ((u64)(0xd2f56bc4efbc2c45U)),.hi = ((u64)(0x0213b0f25f69892aU)),}, (strconv__Uint128){.lo = ((u64)(0x1e55793b192d13a2U)),.hi = ((u64)(0x0352b4b6ff0f41deU)),}, (strconv__Uint128){.lo = ((u64)(0x4b77942f475742e8U)),.hi = ((u64)(0x02a8909265a5ce4bU)),}, (strconv__Uint128){.lo = ((u64)(0xd5f9435905df68baU)),.hi = ((u64)(0x022073a8515171d5U)),}, (strconv__Uint128){.lo = ((u64)(0x565b9ef4d6324129U)),.hi = ((u64)(0x03671f73b54f1c89U)),}, (strconv__Uint128){.lo = ((u64)(0xdeafb25d78283421U)),.hi = ((u64)(0x02b8e5f62aa5b06dU)),}, (strconv__Uint128){.lo = ((u64)(0x188c8eb12cecf681U)),.hi = ((u64)(0x022d84c4eeeaf38bU)),}, (strconv__Uint128){.lo = ((u64)(0x8dadb11b7b14bd9bU)),.hi = ((u64)(0x037c07a17e44b8deU)),}, (strconv__Uint128){.lo = ((u64)(0x7157c0e2c8dd647cU)),.hi = ((u64)(0x02c99fb46503c718U)),}, (strconv__Uint128){.lo = ((u64)(0x8ddfcd823a4ab6caU)),.hi = ((u64)(0x023ae629ea696c13U)),}, (strconv__Uint128){.lo = ((u64)(0x1632e269f6ddf142U)),.hi = ((u64)(0x0391704310a8acecU)),}, (strconv__Uint128){.lo = ((u64)(0x44f581ee5f17f435U)),.hi = ((u64)(0x02dac035a6ed5723U)),}, (strconv__Uint128){.lo = ((u64)(0x372ace584c1329c4U)),.hi = ((u64)(0x024899c4858aac1cU)),}, (strconv__Uint128){.lo = ((u64)(0xbeaae3c079b842d3U)),.hi = ((u64)(0x03a75c6da27779c6U)),}, (strconv__Uint128){.lo = ((u64)(0x6555830061603576U)),.hi = ((u64)(0x02ec49f14ec5fb05U)),}, (strconv__Uint128){.lo = ((u64)(0xb7779c004de6912bU)),.hi = ((u64)(0x0256a18dd89e626aU)),}, (strconv__Uint128){.lo = ((u64)(0xf258f99a163db512U)),.hi = ((u64)(0x03bdcf495a9703ddU)),}, (strconv__Uint128){.lo = ((u64)(0x5b7a614811caf741U)),.hi = ((u64)(0x02fe3f6de212697eU)),}, (strconv__Uint128){.lo = ((u64)(0xaf951aa00e3bf901U)),.hi = ((u64)(0x0264ff8b1b41edfeU)),}, (strconv__Uint128){.lo = ((u64)(0x7f54f7667d2cc19bU)),.hi = ((u64)(0x03d4cc11c5364997U)),}, (strconv__Uint128){.lo = ((u64)(0x32aa5f8530f09ae3U)),.hi = ((u64)(0x0310a3416a91d479U)),}, (strconv__Uint128){.lo = ((u64)(0xf55519375a5a1582U)),.hi = ((u64)(0x0273b5cdeedb1060U)),}, (strconv__Uint128){.lo = ((u64)(0xbbbb5b8bc3c3559dU)),.hi = ((u64)(0x03ec56164af81a34U)),}, (strconv__Uint128){.lo = ((u64)(0x2fc916096969114aU)),.hi = ((u64)(0x03237811d593482aU)),}, (strconv__Uint128){.lo = ((u64)(0x596dab3ababa743cU)),.hi = ((u64)(0x0282c674aadc39bbU)),}, (strconv__Uint128){.lo = ((u64)(0x478aef622efb9030U)),.hi = ((u64)(0x0202385d557cfafcU)),}, (strconv__Uint128){.lo = ((u64)(0xd8de4bd04b2c19e6U)),.hi = ((u64)(0x0336c0955594c4c6U)),}, (strconv__Uint128){.lo = ((u64)(0xad7ea30d08f014b8U)),.hi = ((u64)(0x029233aaaadd6a38U)),}, (strconv__Uint128){.lo = ((u64)(0x24654f3da0c01093U)),.hi = ((u64)(0x020e8fbbbbe454faU)),}, (strconv__Uint128){.lo = ((u64)(0x3a3bb1fc346680ebU)),.hi = ((u64)(0x034a7f92c63a2190U)),}, (strconv__Uint128){.lo = ((u64)(0x94fc8e635d1ecd89U)),.hi = ((u64)(0x02a1ffa89e94e7a6U)),}, (strconv__Uint128){.lo = ((u64)(0xaa63a51c4a7f0ad4U)),.hi = ((u64)(0x021b32ed4baa52ebU)),}, (strconv__Uint128){.lo = ((u64)(0xdd6c3b607731aaedU)),.hi = ((u64)(0x035eb7e212aa1e45U)),}, (strconv__Uint128){.lo = ((u64)(0x1789c919f8f488bdU)),.hi = ((u64)(0x02b22cb4dbbb4b6bU)),}, (strconv__Uint128){.lo = ((u64)(0xac6e3a7b2d906d64U)),.hi = ((u64)(0x022823c3e2fc3c55U)),}, (strconv__Uint128){.lo = ((u64)(0x13e390c515b3e23aU)),.hi = ((u64)(0x03736c6c9e606089U)),}, (strconv__Uint128){.lo = ((u64)(0xdcb60d6a77c31b62U)),.hi = ((u64)(0x02c2bd23b1e6b3a0U)),}, (strconv__Uint128){.lo = ((u64)(0x7d5e7121f968e2b5U)),.hi = ((u64)(0x0235641c8e52294dU)),}, (strconv__Uint128){.lo = ((u64)(0xc8971b698f0e3787U)),.hi = ((u64)(0x0388a02db0837548U)),}, (strconv__Uint128){.lo = ((u64)(0xa078e2bad8d82c6cU)),.hi = ((u64)(0x02d3b357c0692aa0U)),}, (strconv__Uint128){.lo = ((u64)(0xe6c71bc8ad79bd24U)),.hi = ((u64)(0x0242f5dfcd20eee6U)),}, (strconv__Uint128){.lo = ((u64)(0x0ad82c7448c2c839U)),.hi = ((u64)(0x039e5632e1ce4b0bU)),}, (strconv__Uint128){.lo = ((u64)(0x3be023903a356cfaU)),.hi = ((u64)(0x02e511c24e3ea26fU)),}, (strconv__Uint128){.lo = ((u64)(0x2fe682d9c82abd95U)),.hi = ((u64)(0x0250db01d8321b8cU)),}, (strconv__Uint128){.lo = ((u64)(0x4ca4048fa6aac8eeU)),.hi = ((u64)(0x03b4919c8d1cf8e0U)),}, (strconv__Uint128){.lo = ((u64)(0x3d5003a61eef0725U)),.hi = ((u64)(0x02f6dae3a4172d80U)),}, (strconv__Uint128){.lo = ((u64)(0x9773361e7f259f51U)),.hi = ((u64)(0x025f1582e9ac2466U)),}, (strconv__Uint128){.lo = ((u64)(0x8beb89ca6508fee8U)),.hi = ((u64)(0x03cb559e42ad070aU)),}, (strconv__Uint128){.lo = ((u64)(0x6fefa16eb73a6586U)),.hi = ((u64)(0x0309114b688a6c08U)),}, (strconv__Uint128){.lo = ((u64)(0xf3261abef8fb846bU)),.hi = ((u64)(0x026da76f86d52339U)),}, (strconv__Uint128){.lo = ((u64)(0x51d691318e5f3a45U)),.hi = ((u64)(0x03e2a57f3e21d1f6U)),}, (strconv__Uint128){.lo = ((u64)(0x0e4540f471e5c837U)),.hi = ((u64)(0x031bb798fe8174c5U)),}, (strconv__Uint128){.lo = ((u64)(0xd8376729f4b7d360U)),.hi = ((u64)(0x027c92e0cb9ac3d0U)),}, (strconv__Uint128){.lo = ((u64)(0xf38bd84321261effU)),.hi = ((u64)(0x03fa849adf5e061aU)),}, (strconv__Uint128){.lo = ((u64)(0x293cad0280eb4bffU)),.hi = ((u64)(0x032ed07be5e4d1afU)),}, (strconv__Uint128){.lo = ((u64)(0xedca240200bc3cccU)),.hi = ((u64)(0x028bd9fcb7ea4158U)),}, (strconv__Uint128){.lo = ((u64)(0xbe3b50019a3030a4U)),.hi = ((u64)(0x02097b309321cde0U)),}, (strconv__Uint128){.lo = ((u64)(0xc9f88002904d1a9fU)),.hi = ((u64)(0x03425eb41e9c7c9aU)),}, (strconv__Uint128){.lo = ((u64)(0x3b2d3335403daee6U)),.hi = ((u64)(0x029b7ef67ee396e2U)),}, (strconv__Uint128){.lo = ((u64)(0x95bdc291003158b8U)),.hi = ((u64)(0x0215ff2b98b6124eU)),}, (strconv__Uint128){.lo = ((u64)(0x892f9db4cd1bc126U)),.hi = ((u64)(0x035665128df01d4aU)),}, (strconv__Uint128){.lo = ((u64)(0x07594af70a7c9a85U)),.hi = ((u64)(0x02ab840ed7f34aa2U)),}, (strconv__Uint128){.lo = ((u64)(0x6c476f2c0863aed1U)),.hi = ((u64)(0x0222d00bdff5d54eU)),}, (strconv__Uint128){.lo = ((u64)(0x13a57eacda3917b4U)),.hi = ((u64)(0x036ae67966562217U)),}, (strconv__Uint128){.lo = ((u64)(0x0fb7988a482dac90U)),.hi = ((u64)(0x02bbeb9451de81acU)),}, (strconv__Uint128){.lo = ((u64)(0xd95fad3b6cf156daU)),.hi = ((u64)(0x022fefa9db1867bcU)),}, (strconv__Uint128){.lo = ((u64)(0xf565e1f8ae4ef15cU)),.hi = ((u64)(0x037fe5dc91c0a5faU)),}, (strconv__Uint128){.lo = ((u64)(0x911e4e608b725ab0U)),.hi = ((u64)(0x02ccb7e3a7cd5195U)),}, (strconv__Uint128){.lo = ((u64)(0xda7ea51a0928488dU)),.hi = ((u64)(0x023d5fe9530aa7aaU)),}, (strconv__Uint128){.lo = ((u64)(0xf7310829a8407415U)),.hi = ((u64)(0x039566421e7772aaU)),}, (strconv__Uint128){.lo = ((u64)(0x2c2739baed005cdeU)),.hi = ((u64)(0x02ddeb68185f8eefU)),}, (strconv__Uint128){.lo = ((u64)(0xbcec2e2f24004a4bU)),.hi = ((u64)(0x024b22b9ad193f25U)),}, (strconv__Uint128){.lo = ((u64)(0x94ad16b1d333aa11U)),.hi = ((u64)(0x03ab6ac2ae8ecb6fU)),}, (strconv__Uint128){.lo = ((u64)(0xaa241227dc2954dbU)),.hi = ((u64)(0x02ef889bbed8a2bfU)),}, (strconv__Uint128){.lo = ((u64)(0x54e9a81fe35443e2U)),.hi = ((u64)(0x02593a163246e899U)),}, (strconv__Uint128){.lo = ((u64)(0x2175d9cc9eed396aU)),.hi = ((u64)(0x03c1f689ea0b0dc2U)),}, (strconv__Uint128){.lo = ((u64)(0xe7917b0a18bdc788U)),.hi = ((u64)(0x03019207ee6f3e34U)),}, (strconv__Uint128){.lo = ((u64)(0xb9412f3b46fe393aU)),.hi = ((u64)(0x0267a8065858fe90U)),}, (strconv__Uint128){.lo = ((u64)(0xf535185ed7fd285cU)),.hi = ((u64)(0x03d90cd6f3c1974dU)),}, (strconv__Uint128){.lo = ((u64)(0xc42a79e57997537dU)),.hi = ((u64)(0x03140a458fce12a4U)),}, (strconv__Uint128){.lo = ((u64)(0x03552e512e12a931U)),.hi = ((u64)(0x02766e9e0ca4dbb7U)),}, (strconv__Uint128){.lo = ((u64)(0x9eeeb081e3510eb4U)),.hi = ((u64)(0x03f0b0fce107c5f1U)),}, (strconv__Uint128){.lo = ((u64)(0x4bf226ce4f740bc3U)),.hi = ((u64)(0x0326f3fd80d304c1U)),}, (strconv__Uint128){.lo = ((u64)(0xa3281f0b72c33c9cU)),.hi = ((u64)(0x02858ffe00a8d09aU)),}, (strconv__Uint128){.lo = ((u64)(0x1c2018d5f568fd4aU)),.hi = ((u64)(0x020473319a20a6e2U)),}, (strconv__Uint128){.lo = ((u64)(0xf9ccf48988a7fba9U)),.hi = ((u64)(0x033a51e8f69aa49cU)),}, (strconv__Uint128){.lo = ((u64)(0xfb0a5d3ad3b99621U)),.hi = ((u64)(0x02950e53f87bb6e3U)),}, (strconv__Uint128){.lo = ((u64)(0x2f3b7dc8a96144e7U)),.hi = ((u64)(0x0210d8432d2fc583U)),}, (strconv__Uint128){.lo = ((u64)(0xe52bfc7442353b0cU)),.hi = ((u64)(0x034e26d1e1e608d1U)),}, (strconv__Uint128){.lo = ((u64)(0xb756639034f76270U)),.hi = ((u64)(0x02a4ebdb1b1e6d74U)),}, (strconv__Uint128){.lo = ((u64)(0x2c451c735d92b526U)),.hi = ((u64)(0x021d897c15b1f12aU)),}, (strconv__Uint128){.lo = ((u64)(0x13a1c71efc1deea3U)),.hi = ((u64)(0x0362759355e981ddU)),}, (strconv__Uint128){.lo = ((u64)(0x761b05b2634b2550U)),.hi = ((u64)(0x02b52adc44bace4aU)),}, (strconv__Uint128){.lo = ((u64)(0x91af37c1e908eaa6U)),.hi = ((u64)(0x022a88b036fbd83bU)),}, (strconv__Uint128){.lo = ((u64)(0x82b1f2cfdb417770U)),.hi = ((u64)(0x03774119f192f392U)),}, (strconv__Uint128){.lo = ((u64)(0xcef4c23fe29ac5f3U)),.hi = ((u64)(0x02c5cdae5adbf60eU)),}, (strconv__Uint128){.lo = ((u64)(0x3f2a34ffe87bd190U)),.hi = ((u64)(0x0237d7beaf165e72U)),}, (strconv__Uint128){.lo = ((u64)(0x984387ffda5fb5b2U)),.hi = ((u64)(0x038c8c644b56fd83U)),}, (strconv__Uint128){.lo = ((u64)(0xe0360666484c915bU)),.hi = ((u64)(0x02d6d6b6a2abfe02U)),}, (strconv__Uint128){.lo = ((u64)(0x802b3851d3707449U)),.hi = ((u64)(0x024578921bbccb35U)),}, (strconv__Uint128){.lo = ((u64)(0x99dec082ebe72075U)),.hi = ((u64)(0x03a25a835f947855U)),}, (strconv__Uint128){.lo = ((u64)(0xae4bcd358985b391U)),.hi = ((u64)(0x02e8486919439377U)),}, (strconv__Uint128){.lo = ((u64)(0xbea30a913ad15c74U)),.hi = ((u64)(0x02536d20e102dc5fU)),}, (strconv__Uint128){.lo = ((u64)(0xfdd1aa81f7b560b9U)),.hi = ((u64)(0x03b8ae9b019e2d65U)),}, (strconv__Uint128){.lo = ((u64)(0x97daeece5fc44d61U)),.hi = ((u64)(0x02fa2548ce182451U)),}, (strconv__Uint128){.lo = ((u64)(0xdfe258a51969d781U)),.hi = ((u64)(0x0261b76d71ace9daU)),}, (strconv__Uint128){.lo = ((u64)(0x996a276e8f0fbf34U)),.hi = ((u64)(0x03cf8be24f7b0fc4U)),}, (strconv__Uint128){.lo = ((u64)(0xe121b9253f3fcc2aU)),.hi = ((u64)(0x030c6fe83f95a636U)),}, (strconv__Uint128){.lo = ((u64)(0xb41afa8432997022U)),.hi = ((u64)(0x02705986994484f8U)),}, (strconv__Uint128){.lo = ((u64)(0xecf7f739ea8f19cfU)),.hi = ((u64)(0x03e6f5a4286da18dU)),}, (strconv__Uint128){.lo = ((u64)(0x23f99294bba5ae40U)),.hi = ((u64)(0x031f2ae9b9f14e0bU)),}, (strconv__Uint128){.lo = ((u64)(0x4ffadbaa2fb7be99U)),.hi = ((u64)(0x027f5587c7f43e6fU)),}, (strconv__Uint128){.lo = ((u64)(0x7ff7c5dd1925fdc2U)),.hi = ((u64)(0x03feef3fa6539718U)),}, (strconv__Uint128){.lo = ((u64)(0xccc637e4141e649bU)),.hi = ((u64)(0x033258ffb842df46U)),}, (strconv__Uint128){.lo = ((u64)(0xd704f983434b83afU)),.hi = ((u64)(0x028ead9960357f6bU)),}, (strconv__Uint128){.lo = ((u64)(0x126a6135cf6f9c8cU)),.hi = ((u64)(0x020bbe144cf79923U)),}, (strconv__Uint128){.lo = ((u64)(0x83dd685618b29414U)),.hi = ((u64)(0x0345fced47f28e9eU)),}, (strconv__Uint128){.lo = ((u64)(0x9cb12044e08edcddU)),.hi = ((u64)(0x029e63f1065ba54bU)),}, (strconv__Uint128){.lo = ((u64)(0x16f419d0b3a57d7dU)),.hi = ((u64)(0x02184ff405161dd6U)),}, (strconv__Uint128){.lo = ((u64)(0x8b20294dec3bfbfbU)),.hi = ((u64)(0x035a19866e89c956U)),}, (strconv__Uint128){.lo = ((u64)(0x3c19baa4bcfcc996U)),.hi = ((u64)(0x02ae7ad1f207d445U)),}, (strconv__Uint128){.lo = ((u64)(0xc9ae2eea30ca3adfU)),.hi = ((u64)(0x02252f0e5b39769dU)),}, (strconv__Uint128){.lo = ((u64)(0x0f7d17dd1add2afdU)),.hi = ((u64)(0x036eb1b091f58a96U)),}, (strconv__Uint128){.lo = ((u64)(0x3f97464a7be42264U)),.hi = ((u64)(0x02bef48d41913babU)),}, (strconv__Uint128){.lo = ((u64)(0xcc790508631ce850U)),.hi = ((u64)(0x02325d3dce0dc955U)),}, (strconv__Uint128){.lo = ((u64)(0xe0c1a1a704fb0d4dU)),.hi = ((u64)(0x0383c862e3494222U)),}, (strconv__Uint128){.lo = ((u64)(0x4d67b4859d95a43eU)),.hi = ((u64)(0x02cfd3824f6dce82U)),}, (strconv__Uint128){.lo = ((u64)(0x711fc39e17aae9cbU)),.hi = ((u64)(0x023fdc683f8b0b9bU)),}, (strconv__Uint128){.lo = ((u64)(0xe832d2968c44a945U)),.hi = ((u64)(0x039960a6cc11ac2bU)),}, (strconv__Uint128){.lo = ((u64)(0xecf575453d03ba9eU)),.hi = ((u64)(0x02e11a1f09a7bcefU)),}, (strconv__Uint128){.lo = ((u64)(0x572ac4376402fbb1U)),.hi = ((u64)(0x024dae7f3aec9726U)),}, (strconv__Uint128){.lo = ((u64)(0x58446d256cd192b5U)),.hi = ((u64)(0x03af7d985e47583dU)),}, (strconv__Uint128){.lo = ((u64)(0x79d0575123dadbc4U)),.hi = ((u64)(0x02f2cae04b6c4697U)),}, (strconv__Uint128){.lo = ((u64)(0x94a6ac40e97be303U)),.hi = ((u64)(0x025bd5803c569edfU)),}, (strconv__Uint128){.lo = ((u64)(0x8771139b0f2c9e6cU)),.hi = ((u64)(0x03c62266c6f0fe32U)),}, (strconv__Uint128){.lo = ((u64)(0x9f8da948d8f07ebdU)),.hi = ((u64)(0x0304e85238c0cb5bU)),}, (strconv__Uint128){.lo = ((u64)(0xe60aedd3e0c06564U)),.hi = ((u64)(0x026a5374fa33d5e2U)),}, (strconv__Uint128){.lo = ((u64)(0xa344afb9679a3bd2U)),.hi = ((u64)(0x03dd5254c3862304U)),}, (strconv__Uint128){.lo = ((u64)(0xe903bfc78614fca8U)),.hi = ((u64)(0x031775109c6b4f36U)),}, (strconv__Uint128){.lo = ((u64)(0xba6966393810ca20U)),.hi = ((u64)(0x02792a73b055d8f8U)),}, (strconv__Uint128){.lo = ((u64)(0x2a423d2859b4769aU)),.hi = ((u64)(0x03f510b91a22f4c1U)),}, (strconv__Uint128){.lo = ((u64)(0xee9b642047c39215U)),.hi = ((u64)(0x032a73c7481bf700U)),}, (strconv__Uint128){.lo = ((u64)(0xbee2b680396941aaU)),.hi = ((u64)(0x02885c9f6ce32c00U)),}, (strconv__Uint128){.lo = ((u64)(0xff1bc53361210155U)),.hi = ((u64)(0x0206b07f8a4f5666U)),}, (strconv__Uint128){.lo = ((u64)(0x31c6085235019bbbU)),.hi = ((u64)(0x033de73276e5570bU)),}, (strconv__Uint128){.lo = ((u64)(0x27d1a041c4014963U)),.hi = ((u64)(0x0297ec285f1ddf3cU)),}, (strconv__Uint128){.lo = ((u64)(0xeca7b367d0010782U)),.hi = ((u64)(0x021323537f4b18fcU)),}, (strconv__Uint128){.lo = ((u64)(0xadd91f0c8001a59dU)),.hi = ((u64)(0x0351d21f3211c194U)),}, (strconv__Uint128){.lo = ((u64)(0xf17a7f3d3334847eU)),.hi = ((u64)(0x02a7db4c280e3476U)),}, (strconv__Uint128){.lo = ((u64)(0x279532975c2a0398U)),.hi = ((u64)(0x021fe2a3533e905fU)),}, (strconv__Uint128){.lo = ((u64)(0xd8eeb75893766c26U)),.hi = ((u64)(0x0366376bb8641a31U)),}, (strconv__Uint128){.lo = ((u64)(0x7a5892ad42c52352U)),.hi = ((u64)(0x02b82c562d1ce1c1U)),}, (strconv__Uint128){.lo = ((u64)(0xfb7a0ef102374f75U)),.hi = ((u64)(0x022cf044f0e3e7cdU)),}, (strconv__Uint128){.lo = ((u64)(0xc59017e8038bb254U)),.hi = ((u64)(0x037b1a07e7d30c7cU)),}, (strconv__Uint128){.lo = ((u64)(0x37a67986693c8eaaU)),.hi = ((u64)(0x02c8e19feca8d6caU)),}, (strconv__Uint128){.lo = ((u64)(0xf951fad1edca0bbbU)),.hi = ((u64)(0x023a4e198a20abd4U)),}, (strconv__Uint128){.lo = ((u64)(0x28832ae97c76792bU)),.hi = ((u64)(0x03907cf5a9cddfbbU)),}, (strconv__Uint128){.lo = ((u64)(0x2068ef21305ec756U)),.hi = ((u64)(0x02d9fd9154a4b2fcU)),}, (strconv__Uint128){.lo = ((u64)(0x19ed8c1a8d189f78U)),.hi = ((u64)(0x0247fe0ddd508f30U)),}, (strconv__Uint128){.lo = ((u64)(0x5caf4690e1c0ff26U)),.hi = ((u64)(0x03a66349621a7eb3U)),}, (strconv__Uint128){.lo = ((u64)(0x4a25d20d81673285U)),.hi = ((u64)(0x02eb82a11b48655cU)),}, (strconv__Uint128){.lo = ((u64)(0x3b5174d79ab8f537U)),.hi = ((u64)(0x0256021a7c39eab0U)),}, (strconv__Uint128){.lo = ((u64)(0x921bee25c45b21f1U)),.hi = ((u64)(0x03bcd02a605caab3U)),}, (strconv__Uint128){.lo = ((u64)(0xdb498b5169e2818eU)),.hi = ((u64)(0x02fd735519e3bbc2U)),}, (strconv__Uint128){.lo = ((u64)(0x15d46f7454b53472U)),.hi = ((u64)(0x02645c4414b62fcfU)),}, (strconv__Uint128){.lo = ((u64)(0xefba4bed545520b6U)),.hi = ((u64)(0x03d3c6d35456b2e4U)),}, (strconv__Uint128){.lo = ((u64)(0xf2fb6ff110441a2bU)),.hi = ((u64)(0x030fd242a9def583U)),}, (strconv__Uint128){.lo = ((u64)(0x8f2f8cc0d9d014efU)),.hi = ((u64)(0x02730e9bbb18c469U)),}, (strconv__Uint128){.lo = ((u64)(0xb1e5ae015c80217fU)),.hi = ((u64)(0x03eb4a92c4f46d75U)),}, (strconv__Uint128){.lo = ((u64)(0xc1848b344a001accU)),.hi = ((u64)(0x0322a20f03f6bdf7U)),}, (strconv__Uint128){.lo = ((u64)(0xce03a2903b3348a3U)),.hi = ((u64)(0x02821b3f365efe5fU)),}, (strconv__Uint128){.lo = ((u64)(0xd802e873628f6d4fU)),.hi = ((u64)(0x0201af65c518cb7fU)),}, (strconv__Uint128){.lo = ((u64)(0x599e40b89db2487fU)),.hi = ((u64)(0x0335e56fa1c14599U)),}, (strconv__Uint128){.lo = ((u64)(0xe14b66fa17c1d399U)),.hi = ((u64)(0x029184594e3437adU)),}, (strconv__Uint128){.lo = ((u64)(0x81091f2e7967dc7aU)),.hi = ((u64)(0x020e037aa4f692f1U)),}, (strconv__Uint128){.lo = ((u64)(0x9b41cb7d8f0c93f6U)),.hi = ((u64)(0x03499f2aa18a84b5U)),}, (strconv__Uint128){.lo = ((u64)(0xaf67d5fe0c0a0ff8U)),.hi = ((u64)(0x02a14c221ad536f7U)),}, (strconv__Uint128){.lo = ((u64)(0xf2b977fe70080cc7U)),.hi = ((u64)(0x021aa34e7bddc592U)),}, (strconv__Uint128){.lo = ((u64)(0x1df58cca4cd9ae0bU)),.hi = ((u64)(0x035dd2172c9608ebU)),}, (strconv__Uint128){.lo = ((u64)(0xe4c470a1d7148b3cU)),.hi = ((u64)(0x02b174df56de6d88U)),}, (strconv__Uint128){.lo = ((u64)(0x83d05a1b1276d5caU)),.hi = ((u64)(0x022790b2abe5246dU)),}, (strconv__Uint128){.lo = ((u64)(0x9fb3c35e83f1560fU)),.hi = ((u64)(0x0372811ddfd50715U)),}, (strconv__Uint128){.lo = ((u64)(0xb2f635e5365aab3fU)),.hi = ((u64)(0x02c200e4b310d277U)),}, (strconv__Uint128){.lo = ((u64)(0xf591c4b75eaeef66U)),.hi = ((u64)(0x0234cd83c273db92U)),}, (strconv__Uint128){.lo = ((u64)(0xef4fa125644b18a3U)),.hi = ((u64)(0x0387af39371fc5b7U)),}, (strconv__Uint128){.lo = ((u64)(0x8c3fb41de9d5ad4fU)),.hi = ((u64)(0x02d2f2942c196af9U)),}, (strconv__Uint128){.lo = ((u64)(0x3cffc34b2177bdd9U)),.hi = ((u64)(0x02425ba9bce12261U)),}, (strconv__Uint128){.lo = ((u64)(0x94cc6bab68bf9628U)),.hi = ((u64)(0x039d5f75fb01d09bU)),}, (strconv__Uint128){.lo = ((u64)(0x10a38955ed6611b9U)),.hi = ((u64)(0x02e44c5e6267da16U)),}, (strconv__Uint128){.lo = ((u64)(0xda1c6dde5784dafbU)),.hi = ((u64)(0x02503d184eb97b44U)),}, (strconv__Uint128){.lo = ((u64)(0xf693e2fd58d49191U)),.hi = ((u64)(0x03b394f3b128c53aU)),}, (strconv__Uint128){.lo = ((u64)(0xc5431bfde0aa0e0eU)),.hi = ((u64)(0x02f610c2f4209dc8U)),}, (strconv__Uint128){.lo = ((u64)(0x6a9c1664b3bb3e72U)),.hi = ((u64)(0x025e73cf29b3b16dU)),}, (strconv__Uint128){.lo = ((u64)(0x10f9bd6dec5eca4fU)),.hi = ((u64)(0x03ca52e50f85e8afU)),}, (strconv__Uint128){.lo = ((u64)(0xda616457f04bd50cU)),.hi = ((u64)(0x03084250d937ed58U)),}, (strconv__Uint128){.lo = ((u64)(0xe1e783798d09773dU)),.hi = ((u64)(0x026d01da475ff113U)),}, (strconv__Uint128){.lo = ((u64)(0x030c058f480f252eU)),.hi = ((u64)(0x03e19c9072331b53U)),}, (strconv__Uint128){.lo = ((u64)(0x68d66ad906728425U)),.hi = ((u64)(0x031ae3a6c1c27c42U)),}, (strconv__Uint128){.lo = ((u64)(0x8711ef14052869b7U)),.hi = ((u64)(0x027be952349b969bU)),}, (strconv__Uint128){.lo = ((u64)(0x0b4fe4ecd50d75f2U)),.hi = ((u64)(0x03f97550542c242cU)),}, (strconv__Uint128){.lo = ((u64)(0xa2a650bd773df7f5U)),.hi = ((u64)(0x032df7737689b689U)),}, (strconv__Uint128){.lo = ((u64)(0xb551da312c31932aU)),.hi = ((u64)(0x028b2c5c5ed49207U)),}, (strconv__Uint128){.lo = ((u64)(0x5ddb14f4235adc22U)),.hi = ((u64)(0x0208f049e576db39U)),}, (strconv__Uint128){.lo = ((u64)(0x2fc4ee536bc49369U)),.hi = ((u64)(0x034180763bf15ec2U)),}, (strconv__Uint128){.lo = ((u64)(0xbfd0bea92303a921U)),.hi = ((u64)(0x029acd2b63277f01U)),}, (strconv__Uint128){.lo = ((u64)(0x9973cbba8269541aU)),.hi = ((u64)(0x021570ef8285ff34U)),}, (strconv__Uint128){.lo = ((u64)(0x5bec792a6a42202aU)),.hi = ((u64)(0x0355817f373ccb87U)),}, (strconv__Uint128){.lo = ((u64)(0xe3239421ee9b4cefU)),.hi = ((u64)(0x02aacdff5f63d605U)),}, (strconv__Uint128){.lo = ((u64)(0xb5b6101b25490a59U)),.hi = ((u64)(0x02223e65e5e97804U)),}, (strconv__Uint128){.lo = ((u64)(0x22bce691d541aa27U)),.hi = ((u64)(0x0369fd6fd64259a1U)),}, (strconv__Uint128){.lo = ((u64)(0xb563eba7ddce21b9U)),.hi = ((u64)(0x02bb31264501e14dU)),}, (strconv__Uint128){.lo = ((u64)(0xf78322ecb171b494U)),.hi = ((u64)(0x022f5a850401810aU)),}, (strconv__Uint128){.lo = ((u64)(0x259e9e47824f8753U)),.hi = ((u64)(0x037ef73b399c01abU)),}, (strconv__Uint128){.lo = ((u64)(0x1e187e9f9b72d2a9U)),.hi = ((u64)(0x02cbf8fc2e1667bcU)),}, (strconv__Uint128){.lo = ((u64)(0x4b46cbb2e2c24221U)),.hi = ((u64)(0x023cc73024deb963U)),}, (strconv__Uint128){.lo = ((u64)(0x120adf849e039d01U)),.hi = ((u64)(0x039471e6a1645bd2U)),}, (strconv__Uint128){.lo = ((u64)(0xdb3be603b19c7d9aU)),.hi = ((u64)(0x02dd27ebb4504974U)),}, (strconv__Uint128){.lo = ((u64)(0x7c2feb3627b0647cU)),.hi = ((u64)(0x024a865629d9d45dU)),}, (strconv__Uint128){.lo = ((u64)(0x2d197856a5e7072cU)),.hi = ((u64)(0x03aa7089dc8fba2fU)),}, (strconv__Uint128){.lo = ((u64)(0x8a7ac6abb7ec05bdU)),.hi = ((u64)(0x02eec06e4a0c94f2U)),}, (strconv__Uint128){.lo = ((u64)(0xd52f05562cbcd164U)),.hi = ((u64)(0x025899f1d4d6dd8eU)),}, (strconv__Uint128){.lo = ((u64)(0x21e4d556adfae8a0U)),.hi = ((u64)(0x03c0f64fbaf1627eU)),}, (strconv__Uint128){.lo = ((u64)(0xe7ea444557fbed4dU)),.hi = ((u64)(0x0300c50c958de864U)),}, (strconv__Uint128){.lo = ((u64)(0xecbb69d1132ff10aU)),.hi = ((u64)(0x0267040a113e5383U)),}, (strconv__Uint128){.lo = ((u64)(0xadf8a94e851981aaU)),.hi = ((u64)(0x03d8067681fd526cU)),}, (strconv__Uint128){.lo = ((u64)(0x8b2d543ed0e13488U)),.hi = ((u64)(0x0313385ece6441f0U)),}, (strconv__Uint128){.lo = ((u64)(0xd5bddcff0d80f6d3U)),.hi = ((u64)(0x0275c6b23eb69b26U)),}, (strconv__Uint128){.lo = ((u64)(0x892fc7fe7c018aebU)),.hi = ((u64)(0x03efa45064575ea4U)),}, (strconv__Uint128){.lo = ((u64)(0x3a8c9ffec99ad589U)),.hi = ((u64)(0x03261d0d1d12b21dU)),}, (strconv__Uint128){.lo = ((u64)(0xc8707fff07af113bU)),.hi = ((u64)(0x0284e40a7da88e7dU)),}, (strconv__Uint128){.lo = ((u64)(0x39f39998d2f2742fU)),.hi = ((u64)(0x0203e9a1fe2071feU)),}, (strconv__Uint128){.lo = ((u64)(0x8fec28f484b7204bU)),.hi = ((u64)(0x033975cffd00b663U)),}, (strconv__Uint128){.lo = ((u64)(0xd989ba5d36f8e6a2U)),.hi = ((u64)(0x02945e3ffd9a2b82U)),}, (strconv__Uint128){.lo = ((u64)(0x47a161e42bfa521cU)),.hi = ((u64)(0x02104b66647b5602U)),}, (strconv__Uint128){.lo = ((u64)(0x0c35696d132a1cf9U)),.hi = ((u64)(0x034d4570a0c5566aU)),}, (strconv__Uint128){.lo = ((u64)(0x09c454574288172dU)),.hi = ((u64)(0x02a4378d4d6aab88U)),}, (strconv__Uint128){.lo = ((u64)(0xa169dd129ba0128bU)),.hi = ((u64)(0x021cf93dd7888939U)),}, (strconv__Uint128){.lo = ((u64)(0x0242fb50f9001dabU)),.hi = ((u64)(0x03618ec958da7529U)),}, (strconv__Uint128){.lo = ((u64)(0x9b68c90d940017bcU)),.hi = ((u64)(0x02b4723aad7b90edU)),}, (strconv__Uint128){.lo = ((u64)(0x4920a0d7a999ac96U)),.hi = ((u64)(0x0229f4fbbdfc73f1U)),}, (strconv__Uint128){.lo = ((u64)(0x750101590f5c4757U)),.hi = ((u64)(0x037654c5fcc71fe8U)),}, (strconv__Uint128){.lo = ((u64)(0x2a6734473f7d05dfU)),.hi = ((u64)(0x02c5109e63d27fedU)),}, (strconv__Uint128){.lo = ((u64)(0xeeb8f69f65fd9e4cU)),.hi = ((u64)(0x0237407eb641fff0U)),}, (strconv__Uint128){.lo = ((u64)(0xe45b24323cc8fd46U)),.hi = ((u64)(0x038b9a6456cfffe7U)),}, (strconv__Uint128){.lo = ((u64)(0xb6af502830a0ca9fU)),.hi = ((u64)(0x02d6151d123fffecU)),}, (strconv__Uint128){.lo = ((u64)(0xf88c402026e7087fU)),.hi = ((u64)(0x0244ddb0db666656U)),}, (strconv__Uint128){.lo = ((u64)(0x2746cd003e3e73feU)),.hi = ((u64)(0x03a162b4923d708bU)),}, (strconv__Uint128){.lo = ((u64)(0x1f6bd73364fec332U)),.hi = ((u64)(0x02e7822a0e978d3cU)),}, (strconv__Uint128){.lo = ((u64)(0xe5efdf5c50cbcf5bU)),.hi = ((u64)(0x0252ce880bac70fcU)),}, (strconv__Uint128){.lo = ((u64)(0x3cb2fefa1adfb22bU)),.hi = ((u64)(0x03b7b0d9ac471b2eU)),}, (strconv__Uint128){.lo = ((u64)(0x308f3261af195b56U)),.hi = ((u64)(0x02f95a47bd05af58U)),}, (strconv__Uint128){.lo = ((u64)(0x5a0c284e25ade2abU)),.hi = ((u64)(0x0261150630d15913U)),}, (strconv__Uint128){.lo = ((u64)(0x29ad0d49d5e30445U)),.hi = ((u64)(0x03ce8809e7b55b52U)),}, (strconv__Uint128){.lo = ((u64)(0x548a7107de4f369dU)),.hi = ((u64)(0x030ba007ec9115dbU)),}, (strconv__Uint128){.lo = ((u64)(0xdd3b8d9fe50c2bb1U)),.hi = ((u64)(0x026fb3398a0dab15U)),}, (strconv__Uint128){.lo = ((u64)(0x952c15cca1ad12b5U)),.hi = ((u64)(0x03e5eb8f434911bcU)),}, (strconv__Uint128){.lo = ((u64)(0x775677d6e7bda891U)),.hi = ((u64)(0x031e560c35d40e30U)),}, (strconv__Uint128){.lo = ((u64)(0xc5dec645863153a7U)),.hi = ((u64)(0x027eab3cf7dcd826U)),}}));
	// Initializations for module builtin :
	_const_init_capicity = 1 << _const_init_log_capicity;
	_const_init_cap = _const_init_capicity - 2;
	_const_hash_mask = ((u32)(0x00FFFFFFU));
	_const_probe_inc = ((u32)(0x01000000U));
	_const_mid_index = _const_degree - 1;
	_const_max_len = 2 * _const_degree - 1;
	_const_children_bytes = /*SizeOfType*/ sizeof(voidptr) * (_const_max_len + 1);
	// Initializations for module vsdl :
	vsdl__init();
	// Initializations for module vsdl.gfx :
	vsdl__gfx__init();
	// Initializations for module vsdl.audio :
	vsdl__audio__init();
	// Initializations for module time :
	_const_time__month_days = new_array_from_c_array(12, 12, sizeof(int), _MOV((int[12]){
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}));
	_const_time__absolute_zero_year = ((i64)(-292277022399));
	_const_time__seconds_per_hour = 60 * _const_time__seconds_per_minute;
	_const_time__seconds_per_day = 24 * _const_time__seconds_per_hour;
	_const_time__seconds_per_week = 7 * _const_time__seconds_per_day;
	_const_time__days_per_400_years = 365 * 400 + 97;
	_const_time__days_per_100_years = 365 * 100 + 24;
	_const_time__days_per_4_years = 365 * 4 + 1;
	_const_time__days_before = new_array_from_c_array(13, 13, sizeof(int), _MOV((int[13]){
		0, 31, 31 + 28, 31 + 28 + 31, 31 + 28 + 31 + 30, 31 + 28 + 31 + 30 + 31, 31 + 28 + 31 + 30 + 31 + 30, 31 + 28 + 31 + 30 + 31 + 30 + 31, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31}));
	_const_time__long_days = new_array_from_c_array(7, 7, sizeof(string), _MOV((string[7]){tos_lit("Monday"), tos_lit("Tuesday"), tos_lit("Wednesday"), tos_lit("Thusday"), tos_lit("Friday"), tos_lit("Saturday"), tos_lit("Sunday")}));
	_const_time__nanosecond = ((time__Duration)(1));
	_const_time__microsecond = ((time__Duration)(1000)) * _const_time__nanosecond;
	_const_time__millisecond = ((time__Duration)(1000)) * _const_time__microsecond;
	_const_time__second = ((time__Duration)(1000)) * _const_time__millisecond;
	_const_time__minute = ((time__Duration)(60)) * _const_time__second;
	_const_time__hour = ((time__Duration)(60)) * _const_time__minute;
	_const_time__infinite = ((time__Duration)(-1));
	_const_time__start_time = time__init_win_time_start();
	_const_time__freq_time = time__init_win_time_freq();
	_const_time__start_local_time = time__local_as_unix_time();
	// Initializations for module os :
	_const_os__std_input_handle = -10;
	_const_os__std_output_handle = -11;
	_const_os__std_error_handle = -12;
	_const_os__file_invalid_file_id = (-1);
	_const_os__invalid_handle_value = ((voidptr)(-1));
	_const_os__hkey_local_machine = ((voidptr)(0x80000002));
	_const_os__hkey_current_user = ((voidptr)(0x80000001));
	_const_os__hwnd_broadcast = ((voidptr)(0xFFFF));
	_const_os__args = __new_array_with_default(0, 0, sizeof(string), 0);
	_const_os__wd_at_startup = os__getwd();
	_const_os__lang_neutral = (_const_os__sublang_neutral);
	// Initializations for module vsdl.mixer :
	// Initializations for module runtime :
	// Initializations for module rand.util :
	_const_rand__util__lower_mask = ((u64)(0x00000000FFFFFFFFU));
	_const_rand__util__max_u32_as_f32 = ((f32)(_const_rand__util__max_u32)) + 1;
	_const_rand__util__max_u64_as_f64 = ((f64)(_const_rand__util__max_u64)) + 1;
	_const_rand__util__u31_mask = ((u32)(0x7FFFFFFFU));
	_const_rand__util__u63_mask = ((u64)(0x7FFFFFFFFFFFFFFFU));
	// Initializations for module rand.wyrand :
	_const_rand__wyrand__wyp0 = ((u64)(0xa0761d6478bd642fU));
	_const_rand__wyrand__wyp1 = ((u64)(0xe7037ed1a0b428dbU));
	// Initializations for module rand :
	rand__init();
	// Initializations for module sync :
	_const_sync__no_result = ((voidptr)(0));
	// Initializations for module vsdl.events :
	_const_vsdl__events__system = (vsdl__events__EventSystem*)memdup(&(vsdl__events__EventSystem){.channels = new_map_1(sizeof(array_chan_vsdl__events__Event)),.delay = 16,.running = true,.test = true,}, sizeof(vsdl__events__EventSystem));
	vsdl__events__init();
	// Initializations for module main :
}

int wmain(int ___argc, wchar_t* ___argv[], wchar_t* ___envp[]){
	_vinit();
	_const_os__args = os__init_os_args_wide(___argc, ___argv);
	main__main();
	return 0;
}

// THE END.

