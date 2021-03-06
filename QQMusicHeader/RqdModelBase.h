//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RqdModelBase : NSObject
{
    NSString *appId;
    NSString *appVersion;
    NSString *appVerbuild;
    NSString *reserved;
    NSString *bundleId;
    int platformId;
    NSString *hardwareModel;
    NSString *hardwareOs;
    NSString *osVer;
    float osVerFloat;
    NSString *userid;
    NSString *guid;
    NSString *qimei;
    NSString *openudid;
    NSString *gatewayIP;
    long long serverTimeDelta;
    long long lastRecordTime;
    NSString *verHash;
    NSString *localVer;
    BOOL isReet;
    NSString *apn;
    NSString *sdkId;
    NSString *sdkVersion;
    NSString *deviceName;
    long processId;
    NSString *processName;
    long parentProcId;
    NSString *parentProcName;
    NSString *cpuArch;
    long long diskSize;
    long long memSize;
    NSString *idfv;
    long long startTime;
    long long serverInitTime;
    long long backGroundTime;
    long long resumeTime;
}

+ (id)getDefualtAnaModel;
@property(nonatomic) long long resumeTime; // @synthesize resumeTime;
@property(nonatomic) long long backGroundTime; // @synthesize backGroundTime;
@property(nonatomic) long long serverInitTime; // @synthesize serverInitTime;
@property(nonatomic) long long startTime; // @synthesize startTime;
@property(nonatomic) long long memSize; // @synthesize memSize;
@property(nonatomic) long long diskSize; // @synthesize diskSize;
@property(retain, nonatomic) NSString *cpuArch; // @synthesize cpuArch;
@property(retain, nonatomic) NSString *parentProcName; // @synthesize parentProcName;
@property(nonatomic) long parentProcId; // @synthesize parentProcId;
@property(retain, nonatomic) NSString *processName; // @synthesize processName;
@property(nonatomic) long processId; // @synthesize processId;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion;
@property(retain, nonatomic) NSString *sdkId; // @synthesize sdkId;
@property(retain) NSString *apn; // @synthesize apn;
@property(nonatomic) BOOL isReet; // @synthesize isReet;
@property long long lastRecordTime; // @synthesize lastRecordTime;
@property(retain) NSString *openudid; // @synthesize openudid;
@property(retain, nonatomic) NSString *idfv; // @synthesize idfv;
@property(retain) NSString *qimei; // @synthesize qimei;
@property(retain, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel;
@property long long serverTimeDelta; // @synthesize serverTimeDelta;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId;
@property(nonatomic) float osVerFloat; // @synthesize osVerFloat;
@property(retain, nonatomic) NSString *osVer; // @synthesize osVer;
@property(retain, nonatomic) NSString *reserved; // @synthesize reserved;
@property(retain, nonatomic) NSString *guid; // @synthesize guid;
@property(retain, nonatomic) NSString *appVerbuild; // @synthesize appVerbuild;
@property(retain) NSString *gatewayIP; // @synthesize gatewayIP;
@property(retain, nonatomic) NSString *hardwareOs; // @synthesize hardwareOs;
@property(retain, nonatomic) NSString *userid; // @synthesize userid;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(nonatomic) int platformId; // @synthesize platformId;
- (void)saveVersionHash:(id)arg1;
- (id)getVersionHash;
- (id)getKey:(id)arg1;
- (void)persistAllKey;
- (void)unSetKey:(id)arg1;
- (void)setKey:(id)arg1 value:(id)arg2;
- (void)persistKey:(id)arg1 value:(id)arg2;
- (void)initBundleFile;
- (void)resetBundlePath:(id)arg1;
- (BOOL)isVersionChanged;
- (void)checkVer;
- (id)init;

@end

