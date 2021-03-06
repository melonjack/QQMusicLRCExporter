//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtocolHostDelegate.h"

@class AppRecMarketingProtocol, NSTimer;

__attribute__((visibility("hidden")))
@interface QMMoreDataManager : NSObject <ProtocolHostDelegate>
{
    int _autoPauseBeginTime;
    int _autoPauseAll;
    BOOL _isTimered;
    BOOL _isTimerOn;
    AppRecMarketingProtocol *_marketingProtocol;
    NSTimer *_autoPauseTimer;
    NSTimer *_backgroundPauseTimer;
    id _timerTarget;
    SEL _timerAction;
}

+ (id)shareMoreDataManager;
@property(nonatomic) SEL timerAction; // @synthesize timerAction=_timerAction;
@property(nonatomic) __weak id timerTarget; // @synthesize timerTarget=_timerTarget;
@property(retain, nonatomic) NSTimer *backgroundPauseTimer; // @synthesize backgroundPauseTimer=_backgroundPauseTimer;
@property(nonatomic) BOOL isTimerOn; // @synthesize isTimerOn=_isTimerOn;
@property(retain, nonatomic) NSTimer *autoPauseTimer; // @synthesize autoPauseTimer=_autoPauseTimer;
@property(retain, nonatomic) AppRecMarketingProtocol *marketingProtocol; // @synthesize marketingProtocol=_marketingProtocol;
- (void).cxx_destruct;
- (void)fadeVolumeAfterDelay:(id)arg1;
- (BOOL)checkLastSongBeforeAutoPause:(double)arg1;
- (void)stopTime;
- (void)stopRealTimer;
- (void)setAutoPauseLeftTime:(unsigned int)arg1;
- (void)stopBackgroundPauseTimer;
- (void)fireTimeReEnterMoreVC;
- (void)cancelPauseAudioPlayImmediatelyMethodInvoke;
- (void)pauseAudioPlayImmediately;
- (void)pauseAudioPlay:(id)arg1;
- (void)fireTime;
- (void)setAutoPauseTimerTarget:(id)arg1 forAction:(SEL)arg2;
- (void)setAutoPauseTimeReEnterMoreVC;
- (void)setAutoPauseTime:(int)arg1;
- (int)getAutoPauseLeftTime;
- (void)initAutoPauseTime;
- (void)hostCallBackWithWorkProtocol:(id)arg1 Result:(int)arg2;
- (void)fetchMarkingData;
- (void)dealloc;
- (id)init;

@end

