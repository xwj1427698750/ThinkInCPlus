//: require.h
// Created by XPL on 2019/11/27.
#ifndef REQUIRE_H
#define REQUIRE_H
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <cstring>

inline void require(bool requirement,
        const std::string& msg = "Requirement failed") {
    using namespace std;

    if (!requirement) {
        fputs(msg.c_str(), stderr);
        fputs("n", stderr);
        exit(1);
    }
}

inline void requireArgs(int argc, int args,
    const std::string& msg =
            "Must use %d arguments") {
    using namespace std;

    if (argc != args + 1) {
        fprintf(stderr, msg.c_str(), args);
        fputs("n", stderr);
        exit(1);
    }
}

inline void assure(std::ifstream& in,
        const std::string& filename = "") {
    using namespace std;

    if (!in) {
        fprintf(stderr, "Could not open file %sn", filename.c_str());
        exit(1);
    }
}

#endif // REQUIRE_H ///:~
