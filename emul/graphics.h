#ifndef GRAPHICS_H
#define GRAPHICS_H

    void GraphicsInit();
    void GraphicsUpdate();
    void GraphicsWait();
    void GraphicsQuit();

    void GraphicsMode(int mode); // 0 = text, 1 = ega graphics
    void GraphicsClear();
    void GraphicsText(char *s, int n);
    void GraphicsCarriageReturn();
    void GraphicsSetCursor(int x, int y);
    void GraphicsChar(unsigned char s);
    void GraphicsLine(int x1, int y1, int x2, int y2, int color);
    void GraphicsPixel(int x, int y, int color);

#endif