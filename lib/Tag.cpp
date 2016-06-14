#include "Tag.h"
#include <string>

using std::string;

Tag::Tag(){
}

Tag::Tag(string tname):tag_name(tname){
}

Tag::Tag(const Tag &src):tag_id(src.tag_id), tag_name(src.tag_name), tag_description(src.tag_description){

}

Tag& Tag::operator =(const Tag& rhs){
    tag_id=rhs.tag_id;
    tag_name=rhs.tag_name;
    tag_description=rhs.tag_description;

    return *this;
}

void Tag::setTagID(long tid){
    tag_id=tid;
}

void Tag::setTagName(string tname){
    tag_name=tname;
}

void Tag::setTagDescription(string tdec){
    tag_description=tdec;
}


long Tag::getTagID() const{
    return tag_id;
}

string Tag::getTagName() const{
    return tag_name;
}

string Tag::getTagDescription() const{
    return tag_description;
}



