//
// Created by fab on 12/10/18.
//

#include "Url.h"

Url::Url() {
    this -> ex = boost::regex(url_regex);
}

Url::Url(string &rawUrl) : Url() {
    this->rawUrl = rawUrl;
    this->update(this->rawUrl);
}

Url::Url(char rawUrl[]) : Url() {
    string rawUrlStr = string(rawUrl);
    this->update(rawUrlStr);
}

Url &Url::update(string &rawUrl) {
    this->rawUrl = rawUrl;
    boost::cmatch what;
    if (regex_match(rawUrl.c_str(), what, this -> ex)) {
        this -> protocol = string(what[1].first, what[1].second);
        this -> username = string(what[2].first, what[2].second);
        this -> domain = string(what[3].first, what[3].second);
        this -> port = string(what[4].first, what[4].second);
        this -> path = string(what[5].first, what[5].second);
        this -> query = string(what[6].first, what[6].second);
        this -> fragment = string(what[7].first, what[7].second);
    } else {
        throw invalid_argument("Malformed URI, "+rawUrl);
    }
    return *this;
}

Url &Url::update(char rawUrl[]){
    string rawUrlStr = string(rawUrl);
    return this->update(rawUrlStr);
}