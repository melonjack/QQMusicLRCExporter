//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtocolHostDelegate.h"

@class AntiHijack, PersistConnectionCDN, SpeedCompetitionManager, VKeyManager, VKeyProtocol;

__attribute__((visibility("hidden")))
@interface CDNOptimizer : NSObject <ProtocolHostDelegate>
{
    VKeyManager *_vkeyManager;
    SpeedCompetitionManager *_speedCompetionManager;
    AntiHijack *_antiHijack;
    PersistConnectionCDN *_persistConnectionCDN;
    int _SQLimitSongsNumber;
    VKeyProtocol *_vkeyProtocol;
    CDStruct_939ea9c7 _exclusiveSongLimit;
}

+ (id)sharedInstance;
@property(retain, nonatomic) VKeyProtocol *vkeyProtocol; // @synthesize vkeyProtocol=_vkeyProtocol;
@property(readonly) int SQLimitSongsNumber; // @synthesize SQLimitSongsNumber=_SQLimitSongsNumber;
@property(retain, nonatomic) PersistConnectionCDN *persistConnectionCDN; // @synthesize persistConnectionCDN=_persistConnectionCDN;
@property(retain, nonatomic) AntiHijack *antiHijack; // @synthesize antiHijack=_antiHijack;
@property(retain, nonatomic) SpeedCompetitionManager *speedCompetionManager; // @synthesize speedCompetionManager=_speedCompetionManager;
@property(retain, nonatomic) VKeyManager *vkeyManager; // @synthesize vkeyManager=_vkeyManager;
@property(nonatomic) CDStruct_939ea9c7 exclusiveSongLimit; // @synthesize exclusiveSongLimit=_exclusiveSongLimit;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reachabilityChanged:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 Result:(int)arg2;
- (BOOL)_highQuality:(int)arg1;
- (int)hasSqSongNumber;
- (void)bindHost:(id)arg1 forTime:(unsigned int)arg2;
- (BOOL)isHijacked:(id)arg1;
- (void)stopCheckPersistent;
- (void)startCheckPersistent;
- (id)getCurrentHost;
- (id)vkeyForLocalDeviceBySongRateType:(int)arg1;
- (id)vkeyForLocalDevice:(BOOL)arg1;
- (id)weakVkeyForShareWx;
- (id)qplayDeviceWeakVkey;
- (void)generateWeakVkeyByTime:(long)arg1;
- (id)addVkeyToURL:(id)arg1;
- (id)getCurrentNetworkStatusName;
- (void)refreshVkeyAndHosts;
- (void)onServerKeyUpdated:(id)arg1;
- (void)onVkeyUpdated:(id)arg1 highQualityVkey:(id)arg2;
- (BOOL)isVKeyValied;
- (void)onVKeyVerifyFailed;
- (id)addVkeyToURL:(id)arg1 useSpecifiedVKey:(id)arg2;
- (id)addVkeyToURL:(id)arg1 vkey:(id *)arg2;
- (id)optimizerURL:(id)arg1 vkey:(id *)arg2 host:(id *)arg3 bindedHost:(id)arg4 useSpecifiedVKey:(id)arg5 preferIpHost:(BOOL)arg6;
- (id)optimizerURL:(id)arg1 useSpecifiedVKey:(id)arg2 preferIpHost:(BOOL)arg3;
- (id)optimizerURL:(id)arg1;
- (void)dealloc;
- (id)init;

@end

