//
// Created by Fabiano on 12/10/18.
//

#ifndef PARSER_URL_H
#define PARSER_URL_H

#include <string>
#include <iostream>
#include <boost/regex.hpp>

using namespace std;

//This regex does not accept relative Url
const static string url_regex = //"(?:"
                   "(ssh|sftp|ftp|smb|http|https):\\/\\/" //protocol
                   "(?:([^@ ]*)@)?" //username
                   "([^:?#/ ]+)" //domain
                   "(?::(\\d+))?" //port
                   //")?"
                   "([^?# ]*)" //path
                   "(?:\\?([^# ]*))?" //query
                   "(?:#([^ ]*))?"; //fragment

class Url {
public:
    boost::regex ex;
    string rawUrl;

    string username;
    string protocol;
    string domain;
    string port;
    string path;
    string query;
    string fragment;

    Url();

    Url(string &rawUrl);

    Url(char rawUrl[]);

    Url &update(string &rawUrl);

    Url &update(char rawUrl[]);
};


#endif //PARSER_URL_H
