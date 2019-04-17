//
// Created by l0cky on 2019-04-17.
//
#include <iostream>
#include "PostIt.h"

PostIt::PostIt(std::string backgroundColor, std::string text, std::string textColor)
{
    setBackgroundColor(backgroundColor);
    setText(text);
    setTextColor(textColor);
}

PostIt::PostIt()
{
    _backgroundColor = "white";
    _text = "Lorem ipsum";
    _textColor = "black";
}

void PostIt::setBackgroundColor(std::string backgroundColor)
{
    PostIt::_backgroundColor = backgroundColor;
}

void PostIt::setText(std::string text)
{
    PostIt::_text = text;
}

void PostIt::setTextColor(std::string textColor)
{
    PostIt::_textColor = textColor;
}

std::string PostIt::getBackgroundColor()
{
    return _backgroundColor;
}

std::string PostIt::getText()
{
    return _text;
}

std::string PostIt::getTextColor()
{
    return _textColor;
}
