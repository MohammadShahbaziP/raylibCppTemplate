#include "App.h"
#include "raylib.h"

namespace App {
    void Init() {}
    void Update() {}
    void Render() {
        DrawText("Hello from App!", 100, 100, 30, DARKGRAY);
    }
    void Shutdown() {}
}