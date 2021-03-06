/**
 * @file teobase/windows.h
 * @brief Correct way to include windows.h header file.
 */

#pragma once

#ifndef TEOBASE_WINDOWS_H
#define TEOBASE_WINDOWS_H

// Set minimum supported version to Windows 7.
#ifdef _WIN32_WINNT
#undef _WIN32_WINNT
#endif

#define _WIN32_WINNT 0x0601

#ifdef NTDDI_VERSION
#undef NTDDI_VERSION
#endif

#define NTDDI_VERSION 0x06010000

#include <SDKDDKVer.h>

// Exclude rarely-used stuff from Windows headers.
#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#endif
