# Architect Mode Rules (Non-Obvious Only)

- The DLL exposes a flat C API to Simba via `PascalExports[]` in [`dllmain.cpp`](MemoryError/dllmain.cpp). Adding new features requires both the C implementation and a Pascal signature string.
- Single-file architecture: [`MemoryError.cpp`](MemoryError/MemoryError.cpp) (~14,700 lines) holds all game interaction logic with heavy use of global state vectors. Refactoring must preserve global state sharing.
- BlackBone dependency is tightly coupled -- `Process proc` global is used throughout for all memory read/write operations.
- ImGui overlay runs on a separate thread with its own DX9 device (`g_pd3dDevice`). Thread safety between overlay and memory reading is not enforced.
- The interception library provides low-level mouse/keyboard input that bypasses normal Windows input -- this is architectural, not optional.
- Memory offsets in [`OffSets.h`](MemoryError/OffSets.h) are version-dependent globals, not compile-time constants. Any offset management system must support runtime updates.
