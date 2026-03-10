# AGENTS.md

This file provides guidance to agents when working with code in this repository.

## Project Overview

Windows C++ DLL that functions as a **Simba plugin** for game memory reading/overlay. Outputs a `.dll` loaded by Simba (a Pascal-based automation tool).

## Build

- **IDE**: Visual Studio 2015 (v140 toolset), Windows 10 SDK 10.0.14393.0
- **Solution**: `MemoryError.sln` (contains MemoryError DLL + BlackBone static lib)
- **Build command**: `msbuild MemoryError.sln /p:Configuration=Release /p:Platform=x64`
- **External dependency**: DirectX SDK (June 2010) -- required for include/lib paths in Release|x64
- **No test framework or linter** -- validation is manual

## Non-Obvious Architecture

- **Simba plugin interface**: [`dllmain.cpp`](MemoryError/dllmain.cpp) exports functions via `PascalExports[]` array using Pascal calling conventions. New exported functions must be added to this array with their Pascal signature.
- **BlackBone** is included as a VS project reference (not NuGet), built as a static library. Source lives in `Blackbone/src/BlackBone/`.
- **ImGui is vendored** directly in `MemoryError/` (not a submodule) with DX9 and DX11 backends.
- [`MemoryError.cpp`](MemoryError/MemoryError.cpp) is ~14,700 lines -- contains nearly all game-reading logic in a single file.
- [`OffSets.h`](MemoryError/OffSets.h) defines hardcoded memory offsets as global `WORD` variables (not constants/enums).
- [`MemoryManager.hxx`](MemoryError/MemoryManager.hxx) uses `DELPHI_CALLING_CONVENTION` (`__attribute__((regparm(3)))`) for Delphi/FPC memory manager compatibility.

## Critical Gotchas

- **Charset mismatch**: Release|x64 uses `MultiByte`, all other configs use `Unicode`. Code must handle both.
- **Release|x64 disables precompiled headers** (`NotUsing`), while Debug configs use `stdafx.h` PCH.
- **Release|x64 links**: `d3d11.lib`, `d3dcompiler.lib` plus `d3d9.lib`, `Dwmapi.lib`, `pdh.lib`, `interception.lib` via `#pragma comment`.
- **Release|x64 output hardcoded** to `D:\Simba64\Plugins` -- change `OutDir` in vcxproj for local dev.
- The `.travis.yml` is leftover from ImGui upstream -- it does NOT apply to this project.
- `using namespace std;` is used globally in [`MemoryError.h`](MemoryError/MemoryError.h:48).
