#include "Core.h"
#include "Window.h"
#include "raylib.h"

namespace Core {
    void Init() {
        Window::Init(1280, 720, "Raylib App");
        SetTargetFPS(60);
    }
    void Shutdown() { Window::Shutdown(); }
    void BeginFrame() {
        BeginDrawing();
        ClearBackground(RAYWHITE);
    }
    void EndFrame() { EndDrawing(); }
}
