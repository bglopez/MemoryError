# Code Mode Rules (Non-Obvious Only)

- New Simba-callable functions must be added to `PascalExports[]` in [`dllmain.cpp`](MemoryError/dllmain.cpp) with both the C name and Pascal type signature string.
- All memory offsets go in [`OffSets.h`](MemoryError/OffSets.h) as `WORD` globals -- follow existing naming pattern (e.g., `npcoff11`, `poff22`).
- Include `"MemoryError.h"` as the primary header -- it pulls in stdafx.h, Windows headers, BlackBone, ImGui, and all dependencies.
- BlackBone `Process` type is used via `proc` global in [`MemoryError.cpp`](MemoryError/MemoryError.cpp:13). Do not create additional Process instances.
- Custom structs (`FFPOINT`, `intPOINT`, `WPOINT`, `QWPOINT`, `NPCFOCUS`, `InterfaceComp`, `MEMss`, `VB`) are defined in [`MemoryError.h`](MemoryError/MemoryError.h) -- reuse them.
- Static CRT linking (`/MT`) is used in Release|x64 -- do not add dependencies requiring `/MD`.
