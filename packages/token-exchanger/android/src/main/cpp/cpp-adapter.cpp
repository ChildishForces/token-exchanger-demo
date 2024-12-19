#include <jni.h>
#include "NitroTokenExchangerOnLoad.hpp"

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
  return margelo::nitro::tokenexchanger::initialize(vm);
}
