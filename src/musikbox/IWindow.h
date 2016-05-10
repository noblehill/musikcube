#pragma once

#include "curses_config.h"

class IWindow {
    public:
        virtual void Repaint() = 0;

        virtual void SetContentColor(int color) = 0;
        virtual void SetFrameColor(int color) = 0;

        virtual void SetSize(int width, int height) = 0;
        virtual void SetPosition(int x, int y) = 0;

        virtual int GetWidth() const = 0;
        virtual int GetHeight() const = 0;

        virtual int GetContentHeight() const = 0;
        virtual int GetContentWidth() const = 0;

        virtual int GetX() const = 0;
        virtual int GetY() const = 0;

        virtual WINDOW* GetFrame() const = 0;
        virtual WINDOW* GetContent() const = 0;
};