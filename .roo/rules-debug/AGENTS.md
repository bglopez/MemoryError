# Debug Mode Rules (Non-Obvious Only)

- No logging framework exists. Debug output uses raw Windows API or stdout.
- Debug builds use precompiled headers (`stdafx.h`); Release|x64 does not. PCH-related build errors only appear in Debug.
- BlackBone's `Process` object (`proc` global) must have an attached process handle (`HProc`) before any memory read -- null handle causes silent failures.
- `ScanBack`/`ScanFoward` [sic] globals in [`MemoryError.cpp`](MemoryError/MemoryError.cpp:5-6) control memory scan range -- adjust these if target process memory layout differs.
- Interception driver must be installed on the system for mouse/keyboard functions to work. Missing driver causes silent no-ops.
