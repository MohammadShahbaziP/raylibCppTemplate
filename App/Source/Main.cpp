#include "Core.h"
#include "Window.h"
#include "App.h"

int main() {
    Core::Init();
    App::Init();

    while (!Window::ShouldClose()) {
        Core::BeginFrame();
        App::Update();
        App::Render();
        Core::EndFrame();
    }

    App::Shutdown();
    Core::Shutdown();
}
