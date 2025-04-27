#include "cherry_pink.hpp"
#include <iostream>

int main() {
    cherrypink::InitializationError error =
        cherrypink::Init({
            .title = "CherryPink App",
            .width = 800,
            .height = 600,
            .resizable = true
        });

    if (error != cherrypink::InitializationError::NONE) {
        std::cerr << "Initializing the runtime failed with code " << error << '\n';
        exit(EXIT_FAILURE);
    }

    cherrypink::SetTargetFPS(60);
    cherrypink::SetUpdateRate(20);

    cherrypink::Run();
}
