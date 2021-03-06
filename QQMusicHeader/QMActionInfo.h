//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate, SongInfo;

__attribute__((visibility("hidden")))
@interface QMActionInfo : NSObject <NSCoding, NSCopying>
{
    SongInfo *_song;
    int _actionType;
    NSDate *_actionTime;
    int _songSource;
    int _playTime;
}

+ (id)actionInfoWithType:(int)arg1 song:(id)arg2 actionTime:(id)arg3 songSource:(int)arg4 playTime:(int)arg5;
+ (id)actionInfoWithType:(int)arg1 song:(id)arg2 playTime:(int)arg3;
+ (id)actionInfoWithType:(int)arg1 song:(id)arg2;
@property(nonatomic) int playTime; // @synthesize playTime=_playTime;
@property(nonatomic) int songSource; // @synthesize songSource=_songSource;
@property(retain, nonatomic) NSDate *actionTime; // @synthesize actionTime=_actionTime;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) SongInfo *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)formattedStrForCgi;

@end

