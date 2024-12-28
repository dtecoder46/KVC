#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // input
    string color;
    cout << "Favorite color: ";
    cin >> color;

    // Vue SSR
    ofstream vue("/workspaces/codespaces-blank/xvc/src/App.vue");

    ifstream data("data.kvdb");
    string data2;
    string kv;

    while (getline(data, data2)) {
        kv += data2.replace(0,6,"") + "\n";
    }

    string vuestr1 = "<script setup></script>\n\n<template>\n\t<h1>";
    string vuestr2 = "</h1>\n\t<p>Previous inputs</p>\n\t<p>";
    string vuestr3 = "\t</p>\n</template>";

    vue << vuestr1 + color + vuestr2 + kv + vuestr3;

    // CSS SSR
    ofstream css("/workspaces/codespaces-blank/xvc/src/style.css");

    string cssstr1 = "body {\n\tbackground-color: ";
    string cssstr2 = ";\n}";

    css << cssstr1 + color + cssstr2;

    // KVDB

    ifstream kvdb2("data.kvdb");
    string kvdata;
    string kvd;

    while (getline (kvdb2, kvdata)) {
        kvd += kvdata;
    }

    ofstream kvdb("data.kvdb");

    kvdb << kvd + "\n" + "color:" + color;
}