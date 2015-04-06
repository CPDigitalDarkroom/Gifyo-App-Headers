//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    float m11;
    float m12;
    float m13;
    float m14;
    float m21;
    float m22;
    float m23;
    float m24;
    float m31;
    float m32;
    float m33;
    float m34;
    float m41;
    float m42;
    float m43;
    float m44;
};

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct FBLikeControlLayout {
    struct CGSize _field1;
    struct CGRect _field2;
    struct CGRect _field3;
};

struct GPUByteColorVector {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
};

struct GPUMatrix3x3 {
    struct GPUVector3 one;
    struct GPUVector3 two;
    struct GPUVector3 three;
};

struct GPUMatrix4x4 {
    struct GPUVector4 one;
    struct GPUVector4 two;
    struct GPUVector4 three;
    struct GPUVector4 four;
};

struct GPUTextureOptions {
    unsigned int minFilter;
    unsigned int magFilter;
    unsigned int wrapS;
    unsigned int wrapT;
    unsigned int internalFormat;
    unsigned int format;
    unsigned int type;
};

struct GPUVector3 {
    float one;
    float two;
    float three;
};

struct GPUVector4 {
    float one;
    float two;
    float three;
    float four;
};

struct PLCrashHostInfoVersion {
    unsigned int major;
    unsigned int minor;
    unsigned int revision;
};

struct PLCrashReporterCallbacks {
    unsigned short _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _Crashlytics__CustomAttribute;

struct _Crashlytics__InternalData;

struct _Crashlytics__Session {
    struct _ProtobufCMessage _field1;
    char *_field2;
    struct _ProtobufCBinaryData _field3;
    unsigned long long _field4;
    int _field5;
    unsigned long long _field6;
    int _field7;
    int _field8;
    int _field9;
    unsigned int _field10;
    int _field11;
    int _field12;
    int _field13;
    int _field14;
    struct _Crashlytics__InternalData *_field15;
    struct _Crashlytics__Session__User *_field16;
    struct _Crashlytics__Session__Application *_field17;
    struct _Crashlytics__Session__OperatingSystem *_field18;
    struct _Crashlytics__Session__Device *_field19;
    unsigned int _field20;
    struct _Crashlytics__Session__Event **_field21;
};

struct _Crashlytics__Session__Application {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    char *_field5;
    char *_field6;
    char *_field7;
    char *_field8;
    int _field9;
    int _field10;
    struct _Crashlytics__Session__Application__Process *_field11;
    struct _Crashlytics__Session__Application__Organization *_field12;
};

struct _Crashlytics__Session__Application__Organization;

struct _Crashlytics__Session__Application__Process;

struct _Crashlytics__Session__Device {
    struct _ProtobufCMessage _field1;
    int _field2;
    struct _ProtobufCBinaryData _field3;
    int _field4;
    struct _ProtobufCBinaryData _field5;
    int _field6;
    char *_field7;
    int _field8;
    unsigned int _field9;
    int _field10;
    unsigned long long _field11;
    int _field12;
    unsigned long long _field13;
    char *_field14;
    char *_field15;
    int _field16;
    int _field17;
    unsigned int _field18;
    struct _Crashlytics__Session__Device__Identifier **_field19;
    int _field20;
    unsigned int _field21;
    char *_field22;
    char *_field23;
};

struct _Crashlytics__Session__Device__Identifier;

struct _Crashlytics__Session__Event {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    char *_field3;
    char *_field4;
    struct _Crashlytics__Session__Event__Application *_field5;
    struct _Crashlytics__Session__Event__OperatingSystem *_field6;
    struct _Crashlytics__Session__Event__Device *_field7;
    struct _Crashlytics__Session__Event__Log *_field8;
};

struct _Crashlytics__Session__Event__Application;

struct _Crashlytics__Session__Event__Device;

struct _Crashlytics__Session__Event__Log;

struct _Crashlytics__Session__Event__OperatingSystem;

struct _Crashlytics__Session__OperatingSystem {
    struct _ProtobufCMessage _field1;
    int _field2;
    char *_field3;
    char *_field4;
    int _field5;
    int _field6;
};

struct _Crashlytics__Session__User {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    unsigned int _field5;
    struct _Crashlytics__CustomAttribute **_field6;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct _PLCrashReportDecoder {
    struct _Plcrash__CrashReport *_field1;
};

struct _Plcrash__CrashReport {
    struct _ProtobufCMessage _field1;
    struct _Plcrash__CrashReport__SystemInfo *_field2;
    struct _Plcrash__CrashReport__ApplicationInfo *_field3;
    unsigned int _field4;
    struct _Plcrash__CrashReport__Thread **_field5;
    unsigned int _field6;
    struct _Plcrash__CrashReport__BinaryImage **_field7;
    struct _Plcrash__CrashReport__Exception *_field8;
    struct _Plcrash__CrashReport__Signal *_field9;
    struct _Plcrash__CrashReport__ProcessInfo *_field10;
    struct _Plcrash__CrashReport__MachineInfo *_field11;
    struct _Plcrash__CrashReport__ReportInfo *_field12;
};

struct _Plcrash__CrashReport__ApplicationInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
};

struct _Plcrash__CrashReport__BinaryImage;

struct _Plcrash__CrashReport__Exception {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned int _field4;
    struct _Plcrash__CrashReport__Thread__StackFrame **_field5;
};

struct _Plcrash__CrashReport__MachineInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    struct _Plcrash__CrashReport__Processor *_field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct _Plcrash__CrashReport__ProcessInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned int _field3;
    char *_field4;
    char *_field5;
    unsigned int _field6;
    int _field7;
    int _field8;
    unsigned long long _field9;
};

struct _Plcrash__CrashReport__Processor {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__ReportInfo;

struct _Plcrash__CrashReport__Signal {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Signal__MachException *_field5;
};

struct _Plcrash__CrashReport__Signal__MachException {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned long long *_field4;
};

struct _Plcrash__CrashReport__Symbol {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned long long _field3;
    int _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__SystemInfo {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    char *_field4;
    int _field5;
    long long _field6;
    char *_field7;
};

struct _Plcrash__CrashReport__Thread;

struct _Plcrash__CrashReport__Thread__StackFrame {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    struct _Plcrash__CrashReport__Symbol *_field3;
};

struct _ProtobufCBinaryData {
    unsigned int _field1;
    char *_field2;
};

struct _ProtobufCMessage {
    struct _ProtobufCMessageDescriptor *_field1;
    unsigned int _field2;
    struct _ProtobufCMessageUnknownField *_field3;
};

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct in_addr {
    unsigned int _field1;
};

struct plcrash_exception_server_context {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    CDUnknownFunctionPointerType _field5;
    void *_field6;
    struct _opaque_pthread_mutex_t {
        long _field1;
        char _field2[40];
    } _field7;
    struct _opaque_pthread_cond_t {
        long _field1;
        char _field2[24];
    } _field8;
    unsigned int _field9;
    _Bool _field10;
};

struct plcrash_mach_exception_port_set {
    unsigned int count;
    unsigned int masks[13];
    unsigned int ports[13];
    int behaviors[13];
    int flavors[13];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct timeval {
    int tv_sec;
    int tv_usec;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long _field1;
    id *_field2;
    unsigned long *_field3;
    unsigned long _field4[5];
} CDStruct_11f37819;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    int _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_60d14f2d;

typedef struct {
    int _field1;
    int _field2;
    char *_field3;
    _Bool _field4;
    char *_field5;
    _Bool _field6;
} CDStruct_9c005df8;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct CDStruct_183601bc;

typedef struct {
    CDStruct_183601bc *_field1;
    CDStruct_183601bc *_field2;
    CDStruct_183601bc *_field3;
} CDStruct_a6175b54;

