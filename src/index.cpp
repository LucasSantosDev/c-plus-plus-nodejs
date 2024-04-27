#include <napi.h>
#include <string>

#include "hello.h"

Napi::String sayHello(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    std::string result = Hello(info[0].ToString().Utf8Value());

    return Napi::String::New(env, result);
}

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
    exports.Set(
        Napi::String::New(env, "sayHello"),
        Napi::Function::New(env, sayHello));

    return exports;
}

NODE_API_MODULE(hello, Init);