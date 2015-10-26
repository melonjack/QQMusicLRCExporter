//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QReachability;

@interface QAppKeyMgr : NSObject
{
    NSString *_appName;
    NSString *_appKey;
    BOOL _isAppKeyOK;
    QReachability *_hostReachability;
    int _networkStatus;
    NSString *_uuid;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedAppKeyMgr;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) int networkStatus; // @synthesize networkStatus=_networkStatus;
@property(nonatomic) BOOL isAppKeyOK; // @synthesize isAppKeyOK=_isAppKeyOK;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (id)channelIdentifier;
- (void)synchronizeDeviceID;
- (BOOL)netWorkIsWifiNet;
- (BOOL)netWorkIsNotReachable;
- (void)updateReachabilityStatus:(id)arg1;
- (void)reachabilityStatusChanged:(id)arg1;
- (void)stopNetworkMonitor;
- (void)startNetworkMonitor;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
