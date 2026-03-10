# Ask Mode Rules (Non-Obvious Only)

- This is a Simba plugin, not a standalone application. The DLL is loaded by Simba (Pascal automation tool) via the exports in [`dllmain.cpp`](MemoryError/dllmain.cpp).
- [`MemoryError.cpp`](MemoryError/MemoryError.cpp) at ~14,700 lines contains virtually all logic -- searching for functionality requires scanning this file.
- The `Blackbone/` directory is a separate open-source library (Windows memory hacking library), not part of this project's core logic.
- ImGui files in `MemoryError/` are vendored copies -- not the latest version. The `.travis.yml` belongs to ImGui, not this project.
- [`OffSets.h`](MemoryError/OffSets.h) values are reverse-engineered memory offsets that change between game client versions.
