#pragma once; 

#define DLL_IMPLEMENT 

#ifdef DLL_IMPLEMENT
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif


DLL_API int open(void) ;
DLL_API void  close(void);
DLL_API int getsignal(void);
DLL_API int getcount(void) ;



#ifdef __cplusplus
}
#endif