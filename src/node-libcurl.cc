#include <nan.h>
#include "Curl.h"

void Initialize( v8::Local<v8::Object> exports ) {

    Curl::Initialize( exports );
}

NODE_MODULE( node_libcurl, Initialize );