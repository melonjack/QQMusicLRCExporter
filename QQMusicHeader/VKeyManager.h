//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface VKeyManager : NSObject
{
    BOOL _vKeyFromCDNServer;
    NSString *_weakVkeyForLocalDevice;
    NSString *_hqVkeyForLocalDevice;
    NSString *_weakVkeyForQPlay;
    NSString *_weakVkeyForShareWx;
    NSDate *_vkeyUpdatedate;
    unsigned int _vkeyFailedCount;
    NSString *_serverCheck;
}

@property(nonatomic) BOOL vKeyFromCDNServer; // @synthesize vKeyFromCDNServer=_vKeyFromCDNServer;
@property(copy, nonatomic) NSString *serverCheck; // @synthesize serverCheck=_serverCheck;
@property(nonatomic) unsigned int vkeyFailedCount; // @synthesize vkeyFailedCount=_vkeyFailedCount;
@property(copy, nonatomic) NSDate *vkeyUpdatedate; // @synthesize vkeyUpdatedate=_vkeyUpdatedate;
@property(copy, nonatomic) NSString *weakVkeyForShareWx; // @synthesize weakVkeyForShareWx=_weakVkeyForShareWx;
@property(copy, nonatomic) NSString *weakVkeyForQPlay; // @synthesize weakVkeyForQPlay=_weakVkeyForQPlay;
@property(copy, nonatomic) NSString *hqVkeyForLocalDevice; // @synthesize hqVkeyForLocalDevice=_hqVkeyForLocalDevice;
@property(copy, nonatomic) NSString *weakVkeyForLocalDevice; // @synthesize weakVkeyForLocalDevice=_weakVkeyForLocalDevice;
- (void).cxx_destruct;
- (BOOL)_containVkeyParamInURL:(id)arg1;
- (id)qplayDeviceWeakVkey;
- (id)generateWeakVkeyByTime:(unsigned int)arg1 currentSecondsSince1970:(long)arg2;
- (void)startCheckVKey;
- (id)vkeyForLocalDevice:(BOOL)arg1;
- (id)addVkeyToURL:(id)arg1;
- (id)addVkeyToURL:(id)arg1 useSpecifiedVKey:(id)arg2;
- (void)onVkeyUpdated:(id)arg1 highQualityVkey:(id)arg2 fromCDNServer:(BOOL)arg3;
- (void)onVKeyVerifyFailed;
- (id)optimizerURL:(id)arg1 vkey:(id *)arg2 useSpecifiedVKey:(id)arg3;
- (BOOL)isVKeyValied;
- (BOOL)isVKeyShouldUpdate;
- (id)init;

@end

