//
// Created by aslaf on 2/5/2026.
//

#pragma once


#ifdef BUILD_DLL
#define ENGINE_API __declspec(dllexport)
#else
#define ENGINE_API __declspec(dllimport)
#endif


