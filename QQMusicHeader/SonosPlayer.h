//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QPlaySpeaker.h"

@class NSObject<OS_dispatch_queue>, NSString, SonosDeviceInfo, SonosPlayerGroup;

__attribute__((visibility("hidden")))
@interface SonosPlayer : QPlaySpeaker
{
    BOOL _loudness;
    SonosPlayerGroup *_group;
    float _treble;
    float _bass;
    float _balance;
    SonosDeviceInfo *_deviceInfo;
    int _queueUpdateID;
    int _queueID;
    int _eqObserverCount;
    NSObject<OS_dispatch_queue> *_renderingControlQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *renderingControlQueue; // @synthesize renderingControlQueue=_renderingControlQueue;
@property(nonatomic) int eqObserverCount; // @synthesize eqObserverCount=_eqObserverCount;
@property(nonatomic) int queueID; // @synthesize queueID=_queueID;
@property(readonly, nonatomic) int queueUpdateID; // @synthesize queueUpdateID=_queueUpdateID;
@property(retain, nonatomic) SonosDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(nonatomic) BOOL loudness; // @synthesize loudness=_loudness;
@property(nonatomic) float balance; // @synthesize balance=_balance;
@property(nonatomic) float bass; // @synthesize bass=_bass;
@property(nonatomic) float treble; // @synthesize treble=_treble;
@property(readonly, nonatomic) __weak SonosPlayerGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (BOOL)supportsPlayToSonos;
- (id)getAllNeededServices;
- (BOOL)supportQPlay;
- (BOOL)moveTracksInRangeInQueue:(struct _NSRange)arg1 to:(unsigned int)arg2;
- (BOOL)removeTrackFromQueueAtIndex:(unsigned int)arg1;
- (BOOL)insertTrack:(id)arg1 inQueueAtIndex:(unsigned int)arg2;
- (void)releaseQueue;
- (BOOL)createQueue;
- (id)uriOfOwnQueue;
- (id)description;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void *)arg4;
- (BOOL)isEQKeyPath:(id)arg1;
- (void)didReceiveRCChange:(id)arg1;
- (id)getMuteKey;
- (id)getVolumeKey;
- (BOOL)performZGTAction:(id)arg1 arguments:(id)arg2 result:(id *)arg3;
- (BOOL)performGRCAction:(id)arg1 arguments:(id)arg2 result:(id *)arg3;
- (BOOL)performRCAction:(id)arg1 arguments:(id)arg2 result:(id *)arg3;
- (BOOL)performAVTAction:(id)arg1 arguments:(id)arg2 result:(id *)arg3;
- (BOOL)performQAction:(id)arg1 arguments:(id)arg2 result:(id *)arg3;
@property(readonly, nonatomic) __weak NSString *topologyXML;
- (void)reportUnresponsiveSonosDevice:(id)arg1;
- (void)heartbeatWithCallback:(CDUnknownBlockType)arg1;
- (void)resetEqualizer;
- (void)setVolume:(float)arg1 filter:(BOOL)arg2;
- (void)setGroup:(id)arg1;
- (void)dealloc;
- (void)setNameWithControlPoint:(id)arg1 controlPoint:(id)arg2;
- (id)initWithIdentifer:(id)arg1 controlPoint:(id)arg2;

@end

