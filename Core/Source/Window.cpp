#include "raylib.h"
#include "Window.h"

namespace Window {
    void Init(int width, int height, const char* title) { InitWindow(width, height, title); }
    void Shutdown() { CloseWindow(); }
    bool ShouldClose() { return WindowShouldClose(); }
}