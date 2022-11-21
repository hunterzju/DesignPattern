#include "DrawCanvas.hpp"
#include "DrawCommand.hpp"

int main() {
    MacroCommand macroCommand;
    DrawCanvas canvas(&macroCommand);
    macroCommand.AddCommand(new DrawCommand(1, 2, &canvas));
    canvas.Draw(20, 10);
    canvas.Paint();

    return 0;
}
