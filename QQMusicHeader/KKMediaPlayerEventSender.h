//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface KKMediaPlayerEventSender : NSObject
{
    NSMutableArray *_delegates;
    BOOL _adPlaying;
    BOOL _playing;
    BOOL _seeking;
    int _mediaPlayerState;
    double _currentTime;
    double _duration;
}

@property(nonatomic) BOOL seeking; // @synthesize seeking=_seeking;
@property(nonatomic) BOOL playing; // @synthesize playing=_playing;
@property(nonatomic) BOOL adPlaying; // @synthesize adPlaying=_adPlaying;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) int mediaPlayerState; // @synthesize mediaPlayerState=_mediaPlayerState;
- (void)changeMediaPlayerState:(int)arg1 error:(id)arg2;
- (void)changeMediaPlayerState:(int)arg1;
- (id)findValueWithObserver:(id)arg1;
- (void)resetEventSender;
- (void)notifyMediaPlayerEventOccur:(int)arg1 userInfo:(id)arg2;
- (void)notifySeekingEnd;
- (void)notifySeekingBegin;
- (void)notifyMediaPlayerScreenChanged:(BOOL)arg1;
- (void)notifyMediaPlayerProgressUpdated:(double)arg1 duration:(double)arg2;
- (void)notifyMediaPlayerError:(id)arg1;
- (void)notifyMediaPlayerStateChanged:(int)arg1;
- (void)removeEventObserver:(id)arg1;
- (void)addEventObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end
