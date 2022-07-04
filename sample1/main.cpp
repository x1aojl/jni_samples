// ²Î¿¼ https://docs.oracle.com/javase/7/docs/technotes/guides/jni/spec/invocation.html

#include <jni.h>

int main()
{
    JavaVM *jvm;       /* denotes a Java VM */
    JNIEnv *env;       /* pointer to native method interface */
    JavaVMInitArgs vm_args; /* JDK/JRE 6 VM initialization arguments */
    JavaVMOption* options = new JavaVMOption[1];
    options[0].optionString = "-Djava.class.path=.";
    vm_args.version = JNI_VERSION_1_8;
    vm_args.nOptions = 1;
    vm_args.options = options;
    vm_args.ignoreUnrecognized = false;
    /* load and initialize a Java VM, return a JNI interface
    * pointer in env */
    JNI_CreateJavaVM(&jvm, (void**)&env, &vm_args);
    delete options;
    /* We are done. */
    jvm->DestroyJavaVM();
}
