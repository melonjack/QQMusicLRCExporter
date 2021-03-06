//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDAudioService, MCAudioManager;

@protocol MCAudioManagerDelegate <NSObject>
- (void)audioManager:(MCAudioManager *)arg1 setPlaybackVolume:(float)arg2;
- (void)audioManager:(MCAudioManager *)arg1 multimediaButtonEvent:(int)arg2;
- (void)audioManager:(MCAudioManager *)arg1 channelStateChanged:(int)arg2;
- (IDAudioService *)audioService;

@optional
- (void)audioManager:(MCAudioManager *)arg1 audioRouteDidChange:(int)arg2 newAudioRoute:(int)arg3 changeReason:(int)arg4;
@end

