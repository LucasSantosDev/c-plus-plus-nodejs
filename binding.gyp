{
    "targets": [
        {
            "target_name": "hello",
            "cflags!": ["-fno-exceptions"],
            "cflags_cc!": ["-fno-exceptions"],
            "sources": [
                "./src/hello.cpp",
                "./src/index.cpp"
            ],
            "include_dirs": [
                "./node_modules/node-addon-api"
            ],
            'defines': ['NAPI_DISABLE_CPP_EXCEPTIONS'],
        }
    ]
}
