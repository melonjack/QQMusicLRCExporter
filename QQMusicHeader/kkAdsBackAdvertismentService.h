//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KKMediaPlayerEventProtocol.h"

@class NSString;

@interface kkAdsBackAdvertismentService : NSObject <KKMediaPlayerEventProtocol>
{
    BOOL _isRequestBackAdvertisement;
    BOOL _didFinishedRequestBackAdvertisement;
    BOOL _currentPlaybackDidFinished;
    double _currentTime;
    double _jumpEndTime;
    double _duration;
    double _backAdvertisementRequestDuration;
    BOOL _isPlayingBackAdvertisement;
    unsigned int _playFinishedRoute;
    id <KKbackAdvertismentAddedProtocol> _delegate;
}

@property id <KKbackAdvertismentAddedProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL isPlayingBackAdvertisement; // @synthesize isPlayingBackAdvertisement=_isPlayingBackAdvertisement;
@property(readonly, nonatomic) unsigned int playFinishedRoute; // @synthesize playFinishedRoute=_playFinishedRoute;
- (void)didMediaPlayerScreenChanged:(BOOL)arg1;
- (void)didMediaPlayerProgressUpdated:(double)arg1 duration:(double)arg2;
- (void)didMediaPlayerStateChanged:(int)arg1 error:(id)arg2;
- (void)backAdsRequestWithPlayerProgressUpdated:(double)arg1 jumpEndTime:(double)arg2 duration:(double)arg3;
- (BOOL)isPlayBackAdvertisement:(unsigned int)arg1;
- (void)setJumpEndTimeLength:(double)arg1;
- (void)setCurrentTimeLength:(double)arg1;
- (BOOL)isBackAdsReady;
- (void)playingBackAdvertisement:(BOOL)arg1;
- (void)setBackAdsReady:(BOOL)arg1;
- (BOOL)isPlaybackFinished;
- (void)resetValue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

