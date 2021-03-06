//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RqdLocalObject.h"

@class NSArray, NSString, RqdContactInfo, RqdMobileInfo, RqdRunInfo;

@interface RqdExpObj : RqdLocalObject
{
    NSString *exceptionType;
    NSString *excepitonAddress;
    NSString *hash;
    NSArray *attachmentList;
    long long cashTime;
    NSString *threadName;
    NSString *callStack;
    NSString *causedBy;
    RqdRunInfo *runInfo;
    RqdMobileInfo *mobileInfo;
    RqdContactInfo *contactInfo;
    NSArray *appInfoList;
    NSString *memo;
    NSString *appName;
    NSString *appArch;
    NSString *appUUID;
    NSString *appBaseAddr;
    NSString *crashType;
    NSString *attachBuildStr;
    NSString *expUid;
}

@property(retain, nonatomic) NSString *expUid; // @synthesize expUid;
@property(retain, nonatomic) NSString *attachBuildStr; // @synthesize attachBuildStr;
@property(retain, nonatomic) NSString *appBaseAddr; // @synthesize appBaseAddr;
@property(retain, nonatomic) RqdMobileInfo *mobileInfo; // @synthesize mobileInfo;
@property(retain, nonatomic) RqdContactInfo *contactInfo; // @synthesize contactInfo;
@property(retain, nonatomic) RqdRunInfo *runInfo; // @synthesize runInfo;
@property(nonatomic) long long cashTime; // @synthesize cashTime;
@property(retain, nonatomic) NSArray *appInfoList; // @synthesize appInfoList;
@property(retain, nonatomic) NSArray *attachmentList; // @synthesize attachmentList;
@property(retain, nonatomic) NSString *crashType; // @synthesize crashType;
@property(retain, nonatomic) NSString *appUUID; // @synthesize appUUID;
@property(retain, nonatomic) NSString *appArch; // @synthesize appArch;
@property(retain, nonatomic) NSString *appName; // @synthesize appName;
@property(retain, nonatomic) NSString *memo; // @synthesize memo;
@property(retain, nonatomic) NSString *causedBy; // @synthesize causedBy;
@property(retain, nonatomic) NSString *callStack; // @synthesize callStack;
@property(retain, nonatomic) NSString *threadName; // @synthesize threadName;
@property(retain, nonatomic) NSString *hash; // @synthesize hash;
@property(retain, nonatomic) NSString *excepitonAddress; // @synthesize excepitonAddress;
@property(retain, nonatomic) NSString *exceptionType; // @synthesize exceptionType;
- (void)dealloc;
- (void)createWUPModel:(struct ExceptionUpload *)arg1;

@end

