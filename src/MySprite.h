#pragma once

#include <Godot.hpp>
#include <Sprite.hpp>

class MySprite : public godot::Sprite
{
    GODOT_CLASS(MySprite, godot::Sprite)

private:
    float time_passed;

public:
    static void _register_methods();

    MySprite();
    ~MySprite();

    void _init();

    void _process(float delta);
};
