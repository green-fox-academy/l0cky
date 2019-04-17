//
// Created by l0cky on 2019-04-17.
//

#ifndef POST_IT_POSTIT_H
#define POST_IT_POSTIT_H


#include <string>

class PostIt {

public:
    PostIt(std::string backgroundColor, std::string text, std::string textColor);
    PostIt();

    void setBackgroundColor(std::string backgroundColor);
    void setText(std::string text);
    void setTextColor(std::string textColor);

    std::string getBackgroundColor();
    std::string getText();
    std::string getTextColor();

private:
    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;

};


#endif //POST_IT_POSTIT_H
