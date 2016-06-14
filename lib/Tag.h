#ifndef TAG
#define TAG

#include <string>
using std::string;

class Tag{
public:
    Tag();
    Tag(string);
    Tag(const Tag&);
    Tag& operator=(const Tag&);
    ~Tag();

    void setTagID(long);
    void setTagName(string);
    void setTagDescription(string);

    long getTagID() const;
    string getTagName() const;
    string getTagDescription() const;

private:
    long tag_id;
    string tag_name;
    string tag_description;
};

#endif // TAG

