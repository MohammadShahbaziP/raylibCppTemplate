#pragma once
namespace Window {
    void Init(int width, int height, const char* title);
    void Shutdown();
    bool ShouldClose();
}