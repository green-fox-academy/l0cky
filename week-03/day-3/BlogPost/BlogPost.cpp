//
// Created by l0cky on 2019-04-17.
//

#include "BlogPost.h"

BlogPost::BlogPost(const std::string &authorName, const std::string &title, const std::string &text,
                   const std::string &publicationDate) : _authorName(authorName), _title(title), _text(text),
                                                         _publicationDate(publicationDate)
{}

const std::string &BlogPost::getAuthorName() const
{
    return _authorName;
}

void BlogPost::setAuthorName(const std::string &authorName)
{
    _authorName = authorName;
}

const std::string &BlogPost::getTitle() const
{
    return _title;
}

void BlogPost::setTitle(const std::string &title)
{
    _title = title;
}

const std::string &BlogPost::getText() const
{
    return _text;
}

void BlogPost::setText(const std::string &text)
{
    _text = text;
}

const std::string &BlogPost::getPublicationDate() const
{
    return _publicationDate;
}

void BlogPost::setPublicationDate(const std::string &publicationDate)
{
    _publicationDate = publicationDate;
}


