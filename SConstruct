#!/usr/bin/scons

env = Environment(platform="win32", tools=["mingw"])

CFLAGS = ["-Iinclude"]

libhexdump_source = [
    "src/hexdump.c",
]

libhexdump = env.StaticLibrary(source=libhexdump_source, target="hexdump", CFLAGS=CFLAGS)

test = env.Program(source="demo/test.c", CFLAGS=CFLAGS, LIBS=[libhexdump])

Default([libhexdump, test])
