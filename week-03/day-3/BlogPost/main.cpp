#include <iostream>
#include <vector>
#include "BlogPost.h"

int main()
{
    BlogPost post1(
            "John Doe",
            "Lorem Ipsum",
            "Lorem ipsum dolor sit amet.",
            "2000.05.04."
    );
    BlogPost post2(
            "Tim Urban",
            "Wait but why",
            "A popular long-form, stick-figure-illustrated blog about almost everything.",
            "2010.10.10."
    );
    BlogPost post3(
            "William Turton",
            "One Engineer Is Trying to Get IBM to Reckon With Trump",
            "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.",
            "2017.03.28."
    );

    std::vector<BlogPost> blogPosts;
    blogPosts.push_back(post1);
    blogPosts.push_back(post2);
    blogPosts.push_back(post3);

    for (int i = 0; i < blogPosts.size(); ++i) {
        std::cout << "Blogpost:" << i + 1 << std::endl;
        std::cout << "Autor:\t\t" << blogPosts.at(i).getAuthorName() << std::endl;
        std::cout << "Title:\t\t" << blogPosts.at(i).getTitle() << std::endl;
        std::cout << "Text:\t\t" << blogPosts.at(i).getText() << std::endl;
        std::cout << "Autor:\t\t" << blogPosts.at(i).getPublicationDate() << std::endl;
        std::cout << std::endl;
    }

    return 0;
}