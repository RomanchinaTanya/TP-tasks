#!/usr/bin/python

header_name = "index.h"

header_code = """#pragma once

std::string GetHelloWorldMessage() {
    return "Hello, world!\\n";
}
"""

header_file = open(header_name, "w")

header_file.write(header_code)

header_file.close()